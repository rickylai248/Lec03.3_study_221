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

NodeLL *LLOps::buildList(int data, int maxIndex) {
    NodeLL *node;
    if (data < maxIndex) {
        node = new NodeLL(data, buildList(data + 1, maxIndex));
    } else {
        node = new NodeLL(maxIndex);
    }
    return node;
}

NodeLL *LLOps::buildListWithSentinel(int data, int maxIndex) {
    NodeLL *nextNode;
    if (data < maxIndex) {
        nextNode = new NodeLL(data, buildList(data + 1, maxIndex));

    } else {
        NodeLL *sentinel = new NodeLL(NULL);
        nextNode = new NodeLL(maxIndex, sentinel);
    }
    return nextNode;
}

void LLOps::printList(NodeLL *head) {
    if (head == nullptr) {
        cout << " " << endl;
        return;
    }
    printNode(head);
    printList(head->next);
}

void LLOps::printListReverse(NodeLL *head) {
    if (head == nullptr) {
        cout << " " << endl;
        return;
    }
    printListReverse(head->next);
    cout << head->data;
}

void LLOps::printNode(NodeLL *node) {
    cout << node->data;
}

NodeLL *LLOps::getNodePtr(NodeLL *&currNode, int data) {
    if (currNode == nullptr) return nullptr;
    if (currNode->data == data) {
        return currNode;
    } else {
        return getNodePtr(currNode->next, data);
    }
}

void LLOps::reverseList(NodeLL *&head) {
    if (head == nullptr || head->next == nullptr) return;
    reverseList(head->next);
    head->next->next = head;
    head->next = nullptr;
}

void LLOps::removeNode(NodeLL *&currNode, NodeLL *target) {
    if (currNode == nullptr) return;
    if (currNode == target) {
        currNode->next = nullptr;
    } else if (currNode->next == target) {
        currNode->next = currNode->next->next;
        currNode->next->next = nullptr;
    } else {
        removeNode(currNode->next, target);
    }

}

void LLOps::removeNodeO1(NodeLL *&target) {
    target->data = target->next->data;
    target->next = target->next->next;
}

void LLOps::printListReverseOdd(NodeLL *head) {
    if (head == nullptr || head->next == nullptr) return;
    printListReverseOdd(head->next->next);
    cout << head->next->data;
}

NodeLL *LLOps::getTail(NodeLL *head) {
    if (head->next == nullptr) return head;
    getTail(head->next);
}
