//
// Created by KyleR on 2021-01-28.
//

#ifndef LEC03_2_NODELL_H
#define LEC03_2_NODELL_H


class NodeLL {
public:
    int data;
    NodeLL *next;

    explicit NodeLL(int d, NodeLL *n = nullptr);
};


#endif //LEC03_2_NODELL_H
