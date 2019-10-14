#include <stdio.h>
#include "fact.h"

/*
To call the function fib from Python we need to 
compile it into an object file gcc -c -fpic <filename> 
-c      -- compiles without linking 
-fpic   -- compiles position independent code, "relative memory locations"

Then create a shared library with gcc by calling 
gcc -shared -o fact.so fact.o

ENTIRE COMMAND ONELINER (with file fib.c)
gcc -shared -o fact.so -fpic fact.c
*/

void hello(){
  printf("Hello from C\n"); 
}

// NO ERROR HANDLING TEST WHAT HAPPENS
int fact(int n){
  if(n == 1){
    return 1; 
  }else{
    return n*fact(n-1);
  }
}