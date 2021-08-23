#include <stdio.h>

void funcPrint(char *pstring);

int main(void){
    funcPrint("hola mundo Cruel");
    return 0;
}

void funcPrint(char *pstring){
    printf("%s\n",pstring);
}
