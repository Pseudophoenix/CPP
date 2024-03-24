#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <stdbool.h>
#include <math.h> // for abs function

// Define the process structure
struct Process {
    char *name;
    int id;
    int burst_time;
    int arrival_time;
    int waiting_time;
    int priority;
    int completion_time;
    int priority_increment; // Penalty mechanism
};

// Function to generate a random uppercase letter
char generateRandomLetter() {
    return 'A' + rand() % 26;
}

// Function to generate a random process name
char *generateProcessName() {
    char *name = (char *)malloc(5 * sizeof(char)); // Allocate memory for a 4-character name + null terminator
    if (name == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        exit(1);
    }

    // Generate the first character (not a digit or punctuation)
    do {
        name[0] = generateRandomLetter();
    } while (name[0] >= '0' && name[0] <= '9'); // Repeat until it's not a digit

    // Generate the remaining three characters
    for (int i = 1; i < 4; i++) {
        name[i] = generateRandomLetter();
    }

    // Null-terminate the string
    name[4] = '\0';

    return name;
}

// Function to generate Fibonacci numbers
int generateFibonacci(int n) {
    if (n <= 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return generateFibonacci(n - 1) + generateFibonacci(n - 2);
    }
}

// Function to generate a unique process ID using Fibonacci numbers
int generateFibonacciID(int index) {
    if (index < 0) {
        fprintf(stderr, "Invalid index for generating Fibonacci ID\n");
        exit(1);
    }
    return generateFibonacci(index + 2); // Offset by 2 to avoid 0 and 1 as IDs
}

// Function to calculate the average waiting time
float calculateAverageWaitingTime(struct Process *processes, int num_processes) {
    float total_waiting_time = 0;
    for (int i = 0; i < num_processes; i++) {
        total_waiting_time += processes[i].waiting_time;
    }
    return total_waiting_time / num_processes;
}

// Function to calculate the average turnaround time
float calculateAverageTurnaroundTime(struct Process *processes, int num_processes) {
    float total_turnaround_time = 0;
    for (int i = 0; i < num_processes; i++) {
        total_turnaround_time += (processes[i].completion_time - processes[i].arrival_time);
    }
    return total_turnaround_time / num_processes;
}

// Function to find the process with the smallest priority in the ready queue
int findSmallestPriorityProcess(struct Process *processes, bool *process_in_queue, int num_processes) {
    int smallest_priority_index = -1;
    for (int i = 0; i < num_processes; i++) {
        if (process_in_queue[i] && (smallest_priority_index == -1 || processes[i].priority < processes[smallest_priority_index].priority)) {
            smallest_priority_index = i;
        }
    }
    return smallest_priority_index;
}

int main() {
    srand(time(NULL)); // Seed the random number generator

    // Define the number of processes
    const int num_processes = 5; // You can change this as needed

    // Create an array to store the processes
    struct Process processes[5];

    // Initialize processes
    for (int i = 0; i < num_processes; i++) {
        processes[i].name = generateProcessName();
        processes[i].id = generateFibonacciID(i);
        processes[i].arrival_time = i; // Example arrival times
        processes[i].burst_time = rand() % 10 + 1; // Random burst time between 1 and 10
        processes[i].waiting_time = 0;
        processes[i].priority = rand() % 9 + 1; // Random priority between 1 and 9
        processes[i].completion_time = 0;
        processes[i].priority_increment = 0;

        // Print initial process details
        printf("Process Name: %s | Arrival Time: %d | Priority: %d | Burst Time: %d\n",
               processes[i].name, processes[i].arrival_time, processes[i].priority, processes[i].burst_time);
    }

    // Create a CSV file for output
    FILE *csvFile = fopen("processes.csv", "w");
    if (csvFile == NULL) {
        fprintf(stderr, "Failed to open CSV file for writing\n");
        exit(1);
    }

    // Write header to the CSV file
    fprintf(csvFile, "Process Name, Arrival Time, Priority, Burst Time, Waiting Time, Turnaround Time, Priority Transition Value, Penalty Count\n");

    // Simulate execution of processes (preemptive version with penalty)
    int current_time = 0;
    int total_context_switches = 0;
    bool process_in_queue[5]; // Boolean array to track processes in the ready queue

    // Initialize the boolean array
    for (int i = 0; i < num_processes; i++) {
        process_in_queue[i] = true;
    }

    while (true) {
        // Find the process with the smallest priority in the ready queue
        int smallest_priority_index = findSmallestPriorityProcess(processes, process_in_queue, num_processes);

        // If no process is in the ready queue, break the loop
        if (smallest_priority_index == -1) {
            break;
        }

        // Simulate execution of the current process
        current_time += processes[smallest_priority_index].burst_time;

        // Update completion time and waiting time
        processes[smallest_priority_index].completion_time = current_time;
        processes[smallest_priority_index].waiting_time = current_time - processes[smallest_priority_index].arrival_time -
                                                          processes[smallest_priority_index].burst_time;

        // Implement the penalty mechanism by incrementing the priority of the process
        processes[smallest_priority_index].priority_increment++;

        // Calculate Priority Transition Value (PTV)
        int ptv = abs(processes[smallest_priority_index].priority - (processes[smallest_priority_index].priority + processes[smallest_priority_index].priority_increment));

        // Print process details after completion
        printf("Process %s completed at time %d | Priority Increment: %d | PTV: %d\n", processes[smallest_priority_index].name,
               current_time, processes[smallest_priority_index].priority_increment, ptv);

        // Write process details to the CSV file
        fprintf(csvFile, "%s, %d, %d, %d, %d, %d, %d, %d\n",
               processes[smallest_priority_index].name,
               processes[smallest_priority_index].arrival_time,
               processes[smallest_priority_index].priority,
               processes[smallest_priority_index].burst_time,
               processes[smallest_priority_index].waiting_time,
               processes[smallest_priority_index].completion_time - processes[smallest_priority_index].arrival_time,
               ptv, processes[smallest_priority_index].priority_increment);

        // Mark the completed process as not in the queue
        process_in_queue[smallest_priority_index] = false;

        // Check if there's a higher-priority process that can preempt the current one
        for (int i = 0; i < num_processes; i++) {
            if (processes[i].arrival_time <= current_time && process_in_queue[i] &&
                processes[i].priority < processes[smallest_priority_index].priority) {
                // Perform a context switch
                total_context_switches++;

                // Set the current time to the arrival time of the new process
                current_time = processes[i].arrival_time;

                // Continue with the higher-priority process
                smallest_priority_index = i;
            }
        }
    }

    // Display process details after completion of execution
    printf("\nProcess details after completion of execution:\n");
    printf("Process Name | Arrival Time | Priority | Burst Time | Waiting Time | Turnaround Time | Priority Transition Value | Penalty Count\n");
    for (int i = 0; i < num_processes; i++) {
        printf("%s | %d | %d | %d | %d | %d | %d | %d\n",
               processes[i].name, processes[i].arrival_time, processes[i].priority, processes[i].burst_time,
               processes[i].waiting_time, processes[i].completion_time - processes[i].arrival_time,
               processes[i].priority_increment, processes[i].priority_increment);
    }

    // Calculate and display average waiting time, turnaround time, and total context switchings
    float avg_waiting_time = calculateAverageWaitingTime(processes, num_processes);
    float avg_turnaround_time = calculateAverageTurnaroundTime(processes, num_processes);

    printf("Average Waiting Time: %.2f\n", avg_waiting_time);
    printf("Average Turnaround Time: %.2f\n", avg_turnaround_time);
    printf("Total Context Switchings: %d\n", total_context_switches);

    // Free memory for process names
    for (int i = 0; i < num_processes; i++) {
        free(processes[i].name);
    }

    // Close the CSV file
    fclose(csvFile);

    return 0;
}
