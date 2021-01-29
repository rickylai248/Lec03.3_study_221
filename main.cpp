#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include "NodeLL.h"
#include "NodeDLL.h"
#include "DLLOps.h"
#include "LLOps.h"

using namespace std;

int main() {
    //examples of functions

    // builds double linked list 5 elements long - each element data is index of element
    NodeDLL *headDLL = DLLOps::buildDLList();

    //prints out list to look at
    DLLOps::printListDLL(headDLL);

    //reverses list
    DLLOps::reverseDLList(headDLL);

    //gets new headDLL
    NodeDLL *newHeadDLL = DLLOps::getHead(headDLL);// headDLL is now tail, which is why I passed it into this fn

    //prints out list to look at
    DLLOps::printListDLL(newHeadDLL);


    // builds single linked list 10 elements long - each element data is index of element
    NodeLL* headLL = LLOps::buildList(0, 9);

    NodeLL *newHeadLL = LLOps::getTail(headLL);// to get the tail (which will be the new head after reverse)

    //prints out list to look at
    LLOps::printList(headLL);

    //reverses list
    LLOps::reverseList(headLL);

    //prints out list to look at
    LLOps::printList(newHeadLL);

    return 0;
}









