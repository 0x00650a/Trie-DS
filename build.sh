#!/bin/sh


set -xe

cc -Wall -Werror -std=c11 -pedantic -ggdb -o trie main.c trie.c

./trie

xdg-open trie.dot.svg
