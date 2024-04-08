#ifndef TRIE_H
#define TRIE_H

#define NODE_CAP 1024
#define ARRAY_LEN(arr) (sizeof(arr) / sizeof(arr[0]))


typedef struct node node;

struct node {
	node * childs[256];
};

node * allocate(void);
void insert_string(node *, const char*);
void dump_grph(FILE *,node *);
void svg_builder(char **);

#endif
