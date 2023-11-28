#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Candidate {
	int count;
	char* data;
};

struct Node {
	int index;
	struct Node* next;
};

int size;
struct Candidate candidates[100];
struct Node* hash_table[100];

void free_candidates() {
	for (int i = 0; i < size; i++) {
		free(candidates[i].data);
	}
}

void free_hash_table() {
	for (int i = 0; i < 100; i++) {
		if (hash_table[i] != NULL) {
			struct Node* node = hash_table[i];
			struct Node* temp;
			while (node != NULL) {
				temp = node->next;
				free(node);
				node = temp;
			}
		}
	}
}

int hash_function(char* str) {
	int i = 0, c;
	int sum = 0;

	while ((c = str[i++]) != '\0') {
		sum += c;
	}

	return sum % 100;
}

void insertHashtable(int hash, int index) {
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->index = index;
	newNode->next = NULL;

	if (hash_table[hash] == NULL) {
		hash_table[hash] = newNode;
		return;
	}

	struct Node* node = hash_table[hash];
	while (node->next != NULL) {
		node = node->next;
	}

	node->next = newNode;
}

void vote(char* name) {
	int hash = hash_function(name);
	struct Node* hashNode = hash_table[hash];

	while (hashNode != NULL) {
		if (strcmp(candidates[hashNode->index].data, name) == 0) {
			candidates[hashNode->index].count++;
			return;
		}
		hashNode = hashNode->next;
	}

	insertHashtable(hash, size);
	candidates[size].count = 1;
	candidates[size].data = (char*)malloc(sizeof(char) * (strlen(name) + 1));
	strcpy(candidates[size].data, name);
	size++;
}

int main() {
	int N;
	char input[11];

	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf("%s", input);

		vote(input);
	}

	int max_index = 0;
	int max = 0;
	for (int i = 0; i < size; i++) {
		if (candidates[i].count > max) {
			max = candidates[i].count;
			max_index = i;
		}
	}

	printf("%s\n", candidates[max_index].data);

	free_candidates();
	free_hash_table();

	return 0;
}