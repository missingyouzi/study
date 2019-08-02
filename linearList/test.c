#include "C2algorithm.h"

int main(int argc, char const *argv[])
{
    List la;
    List lb;
    initList(&la);
    initList(&lb);
    insertList(&la, 1, 1);
    insertList(&lb, 1, 2);
    c2T1(&la, lb);
    printList(la);
    printList(lb);
    return 0;
}
