#include <stdio.h>
#include <assert.h>
#include "trie.h"

extern node node_pool[NODE_CAP];
size_t node_pool_sz = 0;

node * allocate(void) {
	assert(node_pool_sz < NODE_CAP);
	return &node_pool[node_pool_sz++];
}

void insert_string(node * root, const char *str) {
	if (str == NULL || *str == '\0') {
		return;
	}
	assert(root != NULL);
	size_t index = (size_t) *str;
	if (root->childs[index] == NULL) {
		root->childs[index] = allocate();
	}
	insert_string(root->childs[index], str+1);
}

void dump_grph(node * root) {
	size_t index = root - node_pool;
	for(size_t i = 0; i < ARRAY_LEN(root->childs); ++i) {
		if(root->childs[i] != NULL) {
			size_t child_indx = root->childs[i] - node_pool;
			printf("    Node_%zu [label=\"%c\"]\n", child_indx, (char) i);
			printf("    Node_%zu -> Node_%zu [label=\"%c\"]\n",index, child_indx, (char) i);
			dump_grph(root->childs[i]);
		}
	}
}

