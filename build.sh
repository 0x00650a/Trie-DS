#!/bin/sh


set -xe

cc -Wall -Werror -std=c11 -pedantic -ggdb -o trie main.c trie.c

./trie | dot -Tsvg > trie.svg
xdg-open trie.svg
