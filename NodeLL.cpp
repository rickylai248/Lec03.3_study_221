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

NodeLL::NodeLL(int d, NodeLL *n) : data(d), next(n) {}
