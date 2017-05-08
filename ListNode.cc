
#include "ListNode.h"

using namespace std;

// ListNode constructor.
ListNode::ListNode( int x ): val(x), next(NULL) {};


// Create a linked list from a vector<int>.
ListNode* buildList( vector<int> a ) {
	if (a.size() == 0) return NULL;

	ListNode* root  = new ListNode( a[0] );

	for (int i = 1; i < a.size(); i++) {
		ListNode* t = new ListNode( a[i] );
		t->next = root;
		root = t;		
	}
	
	return root;
}

// Reverse a linked list
void reverse(ListNode*& t) {
	ListNode *prev, *cur, *next;

	// with method 2
	prev = NULL;
	cur = NULL;
	next = t;
	
	int iter = 0;

	// method 2
	while (next && ++iter < 20) {		
		prev = cur;
		cur = next;
		next = cur->next;
		cur->next = prev;
	}

	t = cur;	
}

// Print the contents of a linked list
void print(ListNode* t) {
	while (t) {
		cout << t->val << " ";
		t = t->next;
	}
	cout << endl;
}







































