#include "utils.h"

/**
 * TODO: Implementati o functie de cautare a unui nod in
 * 	functie de valoarea din acesta
 * @note   
 * @param  root: Radacina arborelui
 * @param  data: Valoarea de cautat
 * @retval Nodul cautat, daca nu este gasit se returneaza NULL
 */
BST *findNode(BST *root, int data)
{
	if (root == NULL || root->data == data)
	{
		return root;
	}
	if (data < root->data)
		return findNode(root->left, data);
	if (data > root->data)
		return findNode(root->right, data);
}
/**
 * TODO: Implementati o functie ce returneaza nodul ce stocheaza
 * 	valoarea maxima din arborele/subarborele primit ca parametru
 * @note   
 * @param  root: - Radacina arborelui/subarborelui
 * @retval - Nodul cu valoarea maxima din arbore/subarbore
 */
BST *findMax(BST *root)
{
	if (root->right)
		findMax(root->right);
	else
		return root;
}

/**
 * TODO: Implementati o functie ce returneaza nodul ce stocheaza
 * 	valoarea minima din arborele/subarborele primit ca parametru
 * @note   
 * @param  root: - Radacina arborelui/subarborelui
 * @retval - Nodul cu valoarea minima din arbore/subarbore
 */
BST *findMin(BST *root)
{
	if (root->left)
		findMin(root->left);
	else
		return root;
}

/**
 * TODO: Implementati o functie ce returneaza succesorul in inordine al
 * 	nodului primit ca parametru
 * @note   
 * @param  root: Nodul al carui succesor trebuie gasit
 * @retval Succesorul nodului root
 */
BST *findSuccesor(BST *root)
{
	if(root->left && root->right)
	{
		BST *cop=root->right;
		while (cop)
		{	
			root=cop;
			if(cop->left)
			cop=cop->left;
			else cop=cop->right;
		}
		return root;
	}
	else
	{
		
	}
	
}

/**
 * TODO: Implementati o functie ce returneaza predecesorul in inordine al
 * 	nodului primit ca parametru
 * @note   
 * @param  root: Nodul al carui predecesor trebuie gasit
 * @retval Predecesorul nodului root
 */
BST *findPredecessor(BST *root)
{
}
