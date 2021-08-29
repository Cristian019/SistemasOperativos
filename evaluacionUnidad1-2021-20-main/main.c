#include <stdio.h>
#include <stdlib.h>
#include "student.h"

int main(int argc, char *argv[]){
    FILE *fin;
    FILE *fout;
    fin = fopen("fin","r");
    fout = fopen("fout","w");

    feature1(fin,fout);

    return EXIT_SUCCESS;
}
