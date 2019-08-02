#include <stdio.h>
#include "linearList/dynamicSeqList.h"

int main(int argc, char const *argv[])
{
    // SSeqList ssl;
    // initList(&ssl);
    // insertList(&ssl, 1, 1);
    // insertList(&ssl, 2, 2);
    // insertList(&ssl, 3, 3);
    // printList(&ssl);

    // printf("%d\n", deleteList(&ssl, 2));
    // printList(&ssl);
    // printf("%d\n", searchList(ssl, 3));
    DSeqList dsl;
    initList(&dsl);
    insertList(&dsl, 1, 1);
    insertList(&dsl, 2, 2);
    insertList(&dsl, 3, 3);
    insertList(&dsl, 4, 4);
    insertList(&dsl, 5, 5);
    insertList(&dsl, 6, 6);// check more than initSize
    printList(dsl);
    printf("%d\n", deleteList(&dsl, 2));
    printList(dsl);
    printf("%d\n", searchList(dsl, 4));
    return 0;
}
