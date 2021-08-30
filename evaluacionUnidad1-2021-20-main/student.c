#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "student.h"

void feature1(FILE *fin, FILE *fout){
    char caracteres[100];
    if (fin == NULL)
    {
        printf("\nError de apertura del archivo. \n\n");
    }
    else
    {
        if (feof(fin) == 0)
        {
            fgets(caracteres,sizeof(caracteres),fin);
            fputs(caracteres,fout);
        }
    }
    fclose(fin);
    fclose(fout);
}

void feature2(FILE *fin, FILE *fout){
 	char caracteres[100];
    int longitudCadena = strlen(caracteres);
    char cadenaInvertida[longitudCadena];
    int contador = 0;
 	if (fin == NULL)
        printf("\nError de apertura del archivo. \n\n");
 	else
    {
        for(int i = 0;(feof(fin) == 0)&& i <2; i++){
            fgets(caracteres,100,fin);
        }
    }
    fclose(fin);
    for (int i = longitudCadena-1; i >= 0; i--)
    {
        cadenaInvertida[contador++] = caracteres[i];
    }  
    fputs(cadenaInvertida,fout);
    fclose(fout);
}
void feature3(FILE *fin, FILE *fout){
    char caracteres[100];
 	if (fin == NULL)
        printf("\nError de apertura del archivo. \n\n");
 	else
    {
        for(int i = 0;(feof(fin) == 0)&& i <3; i++){
            fgets(caracteres,100,fin);
        }
    }
    int longitudCadena = strlen(caracteres);
    fclose(fin);
    int numeros[15];
    int j;
    int cont = 0;
    int sumaNumero = 0;
    char suma;
    for (int i = 0; i < longitudCadena-2; i+=2)
   {
        sscanf(caracteres+i, "%d", &j); 
        printf("%d\n",cont,i,j);
        sumaNumero +=j;
        if (cont++ == 2)
        {
            i++;
            cont = 0;
        }
        if(i==21){
            i+=2;
        }
    }
    suma = (char) sumaNumero;
    fprintf(fout,"\nel resultado de la suma es: %d",suma);
}
void feature4(FILE *fin, int **parr, int *length, char **op){

}
/*void feature5(FILE *fout, int *parr, int length, char *op){

}
void feature6(FILE *fin, struct Obj_t *pobj){

}
void feature7(FILE *fout, struct Obj_t *pobj){

}
void feature8(FILE *fin, struct _courseInfo_t **pobj,int *length){

}
void feature9(FILE *fout, struct _courseInfo_t *pobj,int length){

}*/