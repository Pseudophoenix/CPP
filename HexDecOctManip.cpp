#include <iostream>  
#include <sstream>  
using namespace std;  
  
int main()  
{  
    cout << "The number 42 in octal:   " << oct << 42 << '\n'  
              << "The number 42 in decimal: " << dec << 42 << '\n'  
              << "The number 42 in hex:     " << hex << 42 << '\n';  
    int n;  
    istringstream("2A") >> hex >> n;  
    cout << dec << "Parsing \"2A\" as hex gives " << n << '\n';  
}