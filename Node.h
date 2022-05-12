#pragma once
#include "Inventor.h"
struct Node {
Node(Inventor val);
Inventor data;
Node *next;
};