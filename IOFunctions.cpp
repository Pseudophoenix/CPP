#include<iostream>
#include<map>
#include<string>
#include<cstdio>
#include<cstdarg>
using namespace std;

void clearerr(FILE*stream);
int fclose(FILE*stream);
int feof(FILE*stream);
int ferror(FILE*stream);
int fflush(FILE*stream);
int fgetc(FILE*stream);
int fgetpos(FILE*stream,fpos_t * position);
char *fgets(char*str,int num,FILE*stream);
FILE*fopen(const char*fname,const char*mode);
int fprintf(FILE *stream,const char*format,....);
int fputc(int ch,FILE*stream);
int fputs(const char*str,FILE *stream);
size_t fread(void*buf,size_t size,size_t count,FILE*stream);
FILE*freopen(const char * fname, const char*mode,FILE*stream);
int fscanf(FILE*stream,const char*format,...);
int fseek(FILE*stream,long offset,int origin);
int fsetpos(FILE*stream,const fpos_t*position);
long ftell(FILE*stream);
size_t fwrite(const void * buf, size_t size,size_t count,FILE*stream);
int getc(FILE*stream);
int getchar(void);
char*gets(char*str);
void perror(const char*str);
int printf(const char*format,...);
int putc(int ch,FILE*stream);
int putchar(int ch);
int puts(const char *str);
int remove(const char*fname);
int rename(const char*oldname,const char*newfname);
void rewind(FILE*stream);
int scanf(const char*format,...);
void setbuf(FILE*stream,char*buf);
int setvbuf(FILE*stream,char*buf,int mode,size_t size);
int sprintf(char *buf,const char*format,...);
int sscanf(const char*buf,const char*format,...);
FILE *tmpfile(void);
char*tmpnam(char*name);
int ungetc(int ch,FILE*stream);
int vprintf(char*format,va_list arg_ptr);
int vfprintf(FILE*stream,const char*format,va_list arg_ptr);
int vsprintf(Char*buf,const char*format,va_list arg_ptr);
int main()
{
    FILE *fp;
    if((fp=fopen("test","w"))==NULL){
        printf("Cannot open file\n");
        exit(1);
    }
    
    map<string, string> directory;
    directory.insert(pair<string,string>("Tom","555-4533"));
    string s;
    cout<<"Enter name:";
    cin>>s;
    map<string,string>::iterator p;
    p=directory.find(s);
    if(p!=directory.end())
    {
        cout<<"Phone number: "<<p->second;
    }
    else
        cout<<"Name not in directory\n";
    return 0;
    
}