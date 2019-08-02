#include "dynamicSeqList.h"
typedef DSeqList List;
typedef PDSeqList PList;

// 合并两个线性表到其中一个表中
void c2T1(PList pa, List lb){
    for (int i = 0;i < lb.length;i ++){
        int ele = lb.data[i];
        if (searchList(*pa, ele) != -1)
            insertList(pa, ++(pa->length), ele);
    }
}
// 归并两个递减线性表为一个新表并仍递减
void c2T2(List la, List lb, PList pc){}
// 优化算法2.2
void c2T7(List la, List lb, PList pc){}
//
