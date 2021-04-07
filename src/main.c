#include "utils.h"

int main()
{
	BST *root;
	FILE *file = fopen("../data/test1-data3.txt", "r");
	int size;
	fscanf(file, "%d", &size);
	root = createBalanced(size, file);
	checkBST(root, INT_MAX, INT_MIN);
}
