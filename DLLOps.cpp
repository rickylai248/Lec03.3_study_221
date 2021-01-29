//
// Created by KyleR on 2021-01-28.
//

#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include "NodeLL.h"
#include "NodeDLL.h"
#include "DLLOps.h"
#include "LLOps.h"

using namespace std;

NodeDLL *DLLOps::buildDLList() {
    NodeDLL *zero = new NodeDLL(0);
    NodeDLL *one = new NodeDLL(1);
    NodeDLL *two = new NodeDLL(2);
    NodeDLL *three = new NodeDLL(3);
    NodeDLL *four = new NodeDLL(4);
    zero->prev = nullptr;
    zero->next = one;
    one->prev = zero;
    one->next = two;
    two->prev = one;
    two->next = three;
    three->prev = two;
    three->next = four;
    four->prev = three;
    four->next = nullptr;
    return zero;
}

void DLLOps::printNodeDLL(NodeDLL *node) {
    cout << "prev: ";
    if (node->prev != nullptr) {
        cout << node->prev->data;
    } else {
        cout << "N";
    }
    cout << " curr: ";
    cout << node->data;
    cout << " next: ";
    if (node->next != nullptr) {
        cout << node->next->data << endl;
    } else {
        cout << "N" << endl;
    }
}

void DLLOps::printListDLL(NodeDLL *head) {
    if (head == nullptr) {
        cout << "" << endl;
        return;
    }
    printNodeDLL(head);
    printListDLL(head->next);
}

void DLLOps::reverseDLList(NodeDLL *&head) {
    if (head == nullptr) return;
    NodeDLL *temp = head->next;
    head->next = head->prev;
    head->prev = temp;
    if (head->prev == nullptr) {
        return;
    } else {
        reverseDLList(head->prev);
    }

}

NodeDLL *DLLOps::getHead(NodeDLL *tail) {
    if (tail->prev == nullptr) return tail;
    getHead(tail->prev);
}

