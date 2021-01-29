//
// Created by KyleR on 2021-01-28.
//

#ifndef LEC03_2_LLOPS_H
#define LEC03_2_LLOPS_H


#include "NodeLL.h"

class LLOps {
public:
    //must pass in 0 for starting data for this to work properly (each node data == index)
    static NodeLL *buildList(int data, int maxIndex);

    //must pass in 0 for starting data for this to work properly (each node data == index)
    static NodeLL *buildListWithSentinel(int data, int maxIndex);

    static void printList(NodeLL *head);

    static void reverseList(NodeLL *&head);

    // omega 1 (must be a list with Sentinel)
    static void removeNodeO1(NodeLL *&target);

    // for lists without sentinel
    static void removeNode(NodeLL *&currNode, NodeLL *target);

    static void printListReverseOdd(NodeLL *head);

    static void printListReverse(NodeLL *head);

    static void printNode(NodeLL *node);

    static NodeLL *getNodePtr(NodeLL *&currNode, int data);

    static NodeLL *getTail(NodeLL *head);
};


#endif //LEC03_2_LLOPS_H
