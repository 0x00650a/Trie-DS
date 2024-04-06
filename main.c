#include <stdio.h>
#include "words.h"
#include "trie.h"

node node_pool[NODE_CAP] = {0};


int main(int argc, char ** argv) {
	node *root = allocate();
	for(size_t i = 0; i < words2_count; ++i) {
		insert_string(root, words2[i]);
	}
	printf("digraph Trie {\n");
	printf("    Node_%zu [label=\"^\"]\n", root - node_pool);
	dump_grph(root);
	printf("}\n");
	return 0;
}
