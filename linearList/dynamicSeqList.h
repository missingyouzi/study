#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
    memset(pdsl->data, 0, sizeof(pdsl->data));
}
void destroyList(PDSeqList pdsl){
    free(pdsl->data);
    pdsl->length = 0;
    pdsl->data = NULL;
    pdsl->listSize = 0;
}
void printList(DSeqList dsl){
    for (int i = 0;i < dsl.length;i ++)
        printf("%d ", dsl.data[i]);
    printf("\n");
}
void insertList(PDSeqList pdsl, int pos, int ele){
    if (pos < 1 || pos > pdsl->listSize+1)
        exit(0);
    if (pdsl->length >= pdsl->listSize){
        pdsl->listSize += increaseSize;
        pdsl->data = (int*)realloc(pdsl->data, sizeof(int)*pdsl->listSize);
    }
    for (int i = pdsl->length-1;i >= pos-1;i --)
        pdsl->data[i+1] = pdsl->data[i];
    pdsl->data[pos-1] = ele;
    pdsl->length ++;
}
int deleteList(PDSeqList pdsl, int pos){
    if (pos < 1 || pos > pdsl->length)
        exit(0);
    int a = pdsl->data[pos-1];
    for (int i = pos;i < pdsl->length;i ++) // 1 2 3, 1
        pdsl->data[i-1] = pdsl->data[i];
    pdsl->length --;
    return a;
}
int searchList(DSeqList dsl, int ele){
    for (int i = 0;i < dsl.length;i ++){ // 1 2 3 4, 2
        if (dsl.data[i] == ele)
            return i+1;
    }
    return -1;
}
