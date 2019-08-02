#include <stdio.h>
#include "linearList/staticSeqList.h"

int main(int argc, char const *argv[])
{
    SSeqList ssl;
    initList(&ssl);
    insertList(&ssl, 1, 1);
    insertList(&ssl, 2, 2);
    insertList(&ssl, 3, 3);
    printList(&ssl);

    printf("%d\n", deleteList(&ssl, 2));
    printList(&ssl);
    printf("%d\n", searchList(ssl, 3));
    return 0;
}
