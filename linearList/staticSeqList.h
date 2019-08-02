#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAXSIZE 20

typedef struct 
{
    int data[MAXSIZE];
    int length;
}SSeqList, *PSSeqList;

void initList(PSSeqList pssl){
    memset(pssl->data, 0, sizeof(pssl->data));
    pssl->length = 0;
}
void destroyList(PSSeqList pssl){
    pssl->length = 0;
}
void printList(PSSeqList pssl){
    for (int i = 0;i < pssl->length;i ++)
        printf("%d ", pssl->data[i]);
    printf("\n");
}
void insertList(PSSeqList pssl, int pos, int ele){
    if (pos < 1 || pos > pssl->length+1 || pssl->length == MAXSIZE)
        exit(0);
    for (int i = pssl->length-1;i >= pos-1;i --) // 1 2, 1
        pssl->data[i+1] = pssl->data[i];
    pssl->data[pos-1] = ele;
    pssl->length ++;
}
int deleteList(PSSeqList pssl, int pos){
    if (pos < 1 || pos > pssl->length)
        exit(0);
    int a = pssl->data[pos-1];
    for (int i = pos;i < pssl->length;i ++) // 1 2 3, 1
        pssl->data[i-1] = pssl->data[i];
    pssl->length --;
    return a;
}
int searchList(SSeqList ssl, int ele){
    for (int i = 0;i < ssl.length;i ++){ // 1 2 3 4, 2
        if (ssl.data[i] == ele)
            return i+1;
    }
    return -1;
}

