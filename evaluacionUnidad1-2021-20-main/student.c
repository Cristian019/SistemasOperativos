#include <stdlib.h>
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
            fgets(caracteres,100,fin);
            fprintf(fout,caracteres);
        }
    }
    fclose(fin);
    fclose(fout);
}

void feature2(FILE *fin, FILE *fout){
 	char caracteres[100];
 	 	
 	if (fin == NULL)
        printf("\nError de apertura del archivo. \n\n");
 	else
    {
 	    printf("\nEl contenido del archivo de prueba es \n\n");
        for(int i = 0;(feof(fin) == 0)&& i <2; i++){
            fgets(caracteres,100,fin);
        }
    }
    
    fclose(fin);
}
/*void feature3(FILE *fin, FILE *fout){

}
void feature4(FILE *fin, int **parr, int *length, char **op){

}
void feature5(FILE *fout, int *parr, int length, char *op){

}
void feature6(FILE *fin, struct Obj_t *pobj){

}
void feature7(FILE *fout, struct Obj_t *pobj){

}
void feature8(FILE *fin, struct _courseInfo_t **pobj,int *length){

}
void feature9(FILE *fout, struct _courseInfo_t *pobj,int length){

}*/