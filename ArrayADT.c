#include<stdio.h>
#include<stdlib.h>

struct myArray{
    int total_size;
    int used_size;
    int *ptr;
};

void createArray(struct myArray *a, int tSize, int uSize){
    // (*a).total_size = tSize;
    // (*a).used_size = uSize;
    // (*a).ptr =(int *) malloc(tSize*sizeof(int));

    a->total_size = tSize;
    a->used_size = uSize;
    a->ptr = (int *) malloc(tSize*sizeof(int));
}

int main(){
    printf("ARRAY ADT");
    struct myArray marks;
    createArray(&marks, 10, 5);
    return 0;
}