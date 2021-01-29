//
// Created by KyleR on 2021-01-28.
//

#ifndef LEC03_2_DLLOPS_H
#define LEC03_2_DLLOPS_H


class DLLOps {
public:
    static void reverseDLList(NodeDLL *&head);

    static void printListDLL(NodeDLL *head);

    static void printNodeDLL(NodeDLL *node);

    // didnt want to figure out how to do this recursively
    // returns list length 5 - each item in list has data == index
    static NodeDLL *buildDLList();

    static NodeDLL *getHead(NodeDLL *tail);
};


#endif //LEC03_2_DLLOPS_H
