#include <stdio.h>
#include <stdlib.h>
#define initSize 5
#define increaseSize 1

typedef struct 
{
    int* data;
    int listSize, length;
}DSeqList, *PDSeqList;
void initList(PDSeqList pdsl){
    pdsl->data = (int*)malloc(sizeof(int) * initSize);
    pdsl->listSize = initSize;
    pdsl->length = 0;
}
void destroyList(PDSeqList pdsl){
    free(pdsl->data);
    pdsl->length = 0;
}
void printList(PDSeqList pdsl){
    for (int i = 0;i < pdsl->length;i ++)
        printf("%d ", pdsl->data[i]);
    printf("\n");
}
void insertList(PDSeqList pdsl, int pos, int ele){
    
}
int deleteList(PDSeqList pdsl, int pos){
    
}
int searchList(DSeqList dsl, int ele){
    for (int i = 0;i < dsl.length;i ++){ // 1 2 3 4, 2
        if (dsl.data[i] == ele)
            return i+1;
    }
    return -1;
}
