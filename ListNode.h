#ifndef LISTNODE_H
#define LISTNODE_H

#include <iostream>
#include <vector>
#include "mydb.h"
// // // // // // // // // // // // // // // // // // // // // // 

using namespace std;

// Node in a linked list
struct ListNode {
	int val;
	ListNode *next;
	ListNode( int x );
};

// Utility functions
ListNode* buildList( vector<int> a );
void reverse(ListNode*& t);
void print(ListNode* t);

#endif










































