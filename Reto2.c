#include <stdlib.h>
#include <stdio.h>

float printArr(int *arr, int size);

int main(){
    float promerdio;
    int arr[] = {1,2,3,4,5,6,7,8,9};
    promerdio = printArr(arr, sizeof(arr)/sizeof(arr[0]));
    printf("el promedio de la suma es: %f\n",promerdio);
    return 0;
}

float printArr(int *arr, int size){
    float promedio = 0;

    for(int i = 0; i<size; i++){
        promedio = promedio + *(arr + i);
    }
    return promedio/size;
}