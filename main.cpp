#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
void getSingal(char control[],int len){
    printf("Get Signal: %s\n",control);
}
// argc is the number of input string
// argv is the input string
int main(int argc,char **argv){
    printf("Your input is:%s\n",argv[1]);
    getSingal(argv[1],strlen(argv[1]));
    return 0;
}
