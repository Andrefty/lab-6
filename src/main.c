
#include "utils.h"

int main()
{
	BST *root=NULL;
	FILE *file = fopen("../data/test3-data1.txt", "r");
	int size,data;
	fscanf(file, "%d", &size);
//	root = createBalanced(size, file);
    for (int i = 0; i < size; i++)
    {
        fscanf(file, "%d", &data);
        root = insertInBST(root, data);
    }
    
	checkBST(root, INT_MAX, INT_MIN);
}
