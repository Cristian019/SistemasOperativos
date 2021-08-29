#include <stdio.h>
#include <stdlib.h>
#include "student.h"

int main(int argc, char *argv[]){
    FILE *fin;
    FILE *fout;
    fin = fopen("fin","r");
    fout = fopen("fout","a");

    //feature1(fin,fout);
    //feature2(fin,fout);

    return EXIT_SUCCESS;
}
