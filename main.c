#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>
#include "words.h"
#include "trie.h"

node node_pool[NODE_CAP] = {0};


int main(int argc, char ** argv) {
	node *root = allocate();
	for(size_t i = 0; i < words2_count; ++i) {
		insert_string(root, words2[i]);
	}
	char *outfile = "trie.dot";
	FILE * sink = fopen(outfile, "w");
	if (sink == NULL) {
		fprintf(stderr, "[ERROR] Unable to open `%s` : %s\n", outfile, strerror(errno));
		exit(-1);
	}

	char *args[] = {
		"dot",
		outfile,
		"-Tsvg",
		"-O",
		NULL,
	};

	printf("[INFO] Started generating the `%s` file.\n", outfile);
	fprintf(sink, "digraph Trie {\n");
	fprintf(sink, "    Node_%zu [label=\"^\"]\n", root - node_pool);
	dump_grph(sink, root);
	fprintf(sink, "}\n");
	fclose(sink);
	svg_builder(args);
	printf("[INFO] Finished.\n");
	return 0;
}
