//
// Created by KyleR on 2021-01-28.
//

#ifndef LEC03_2_NODEDLL_H
#define LEC03_2_NODEDLL_H


class NodeDLL {
public:
    int data;
    NodeDLL *next;
    NodeDLL *prev;

    explicit NodeDLL(int d, NodeDLL *p = nullptr, NodeDLL *n = nullptr);


};


#endif //LEC03_2_NODEDLL_H
