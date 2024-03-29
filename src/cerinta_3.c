#include "utils.h"

void inorder(BST *root, int *c, int max_value, int min_value)
{
    if (root)
    {
        inorder(root->left, c, max_value, min_value);
        if (root->data <= max_value && root->data >= min_value)
            (*c)++;
        inorder(root->right, c, max_value, min_value);
    }
}
void inorder2(BST *root, BST **arr, int *c, int max_value, int min_value)
{
    if (root)
    {
        inorder2(root->left, arr, c, max_value, min_value);
        if (root->data <= max_value && root->data >= min_value)
            arr[(*c)++] = root;
        inorder2(root->right, arr, c, max_value, min_value);
    }
}
/**
 * TODO: Returnati prin intermediul parametrului arr un vector ce contine toate
 * 	nodurile din arborele binar de cautare cu valori aflate in intervalul [min_value, max_value]  
 * @note   
 * @param  root: Radacina arborelui/subarborelui 
 * @param  arr: Vectorul cu valorile cerute
 * @param  *size: Pozitia pe care inseram la etapa curenta
 * @param  max_value: Pragul superior
 * @param  min_value: Pragul inferior
 * @retval None
 */
void bstToArray(BST *root, BST **arr, int *size, int max_value, int min_value)
{
    int i = 0;
    BST *cop = root;
    inorder2(root,arr,&i,max_value,min_value);

    // if (root)
    // {
    //     bstToArray(root->left, arr, size, max_value, min_value);
    //     if (root->data <= max_value && root->data >= min_value)
    //         arr[i++] = root;
    //     bstToArray(root->right, arr, size, max_value, min_value);
    // }
    *size = numberOfNodesInBetween(cop, max_value, min_value);
}

/**
 * TODO: Implementati o functie ce returneaza numarul de noduri ce stocheaza
 * 	valori din intervalul [min_value, max_value]
 * @note   
 * @param  root: Radacina arborelui/subarborelui 
 * @param  max_value: Pragul superior
 * @param  min_value: Pragul inferior
 * @retval Numarul de noduri cu valori in [min_value, max_value] 
 *  din arbore/subarbore
 */
int numberOfNodesInBetween(BST *root, int max_value, int min_value)
{
    int c = 0;
    inorder(root, &c, max_value, min_value);
    return c;
}