#include "utils.h"

/**
 * TODO: Implementati o functie ce creaza un arbore balansat din datele
 * 	din fisierul f. Arborele nu trebuie sa respecte alta proprietate decat
 *  cea mentionala anterior 
 * @note   
 * @param  N: Numarul de noduri ale arborelui
 * @param  *f: Fisierul din care sunt citite datele de intrare 
 * @retval	Nodul radacina al arborelui creat 
 */
BST *createBalanced(int N, FILE *f)
{
    int data;
    if (N > 0)
    {
        fscanf(f, "%d", &data);
        BST *rad = createBSTNode(data);
        rad->left = createBalanced(N / 2, f);
        // if (rad->left != NULL)
        //     rad->left->parent = rad;
        rad->right = createBalanced(N - 1 - N / 2, f);
        // if (rad->right != NULL)
        //     rad->right->parent = rad;
        return rad;
    }
    else
        return NULL;
}

/**
 * TODO:   Implementati o functie ce testeaza daca un arbore binar este
 * 	un arbore binar de cautare.
 * @note   
 * @param  root: Radacina arborelui
 * @param  max_value: Valoarea maxima intalnita pana la nodul curent
 * @param  min_value: Valoarea minima intalnita pana la nodul curent
 * @retval - true daca arborele este un BST, false in caz contrar
 */
bool checkBST(BST *root, int max_value, int min_value)
{
    // BST *lef = root;
    // BST *righ = root;
    // while (lef)
    //     lef=lef->left;
    // min_value=lef->data;
    // while (righ)
    //     righ=righ->left;
    // max_value=righ->data;
    if (root)
    {

        if (root->data < min_value || root->data > max_value)
            return false;
        return checkBST(root->left, root->data, min_value) && checkBST(root->right, max_value, root->data);
    }
    return true;
}

/**
 * TODO:  Implementati o functie ce aloca memorie pentru un nod 
 * 	si salveaza datele in acesta
 * @note   
 * @param  data: Datele ce trebuie stocate in nod
 * @retval Nodul creat
 */

BST *createBSTNode(int data)
{
    BST *rad = (BST *)malloc(sizeof(BST));
    (rad->data) = data;
    rad->left = NULL;
    rad->right = NULL;
    rad->parent = NULL;
    return rad;
}
/**
 * TODO: Implementati o functie ce insereaza un nod nou intr-un BST cu
 * 	pastrarea proprietatiilor acestui tip de arbore binar
 * @note   
 * @param  root: Nodul radacina
 * @param  data: Valoarea ce trebuie inserata in arbore
 * @retval Radacina arborelui modificat anterior
 */
BST *insertInBST(BST *root, int data)
{
    if (root == NULL)
        return createBSTNode(data);
    if (data < root->data)
    {
        root->left = insertInBST(root->left, data);
        root->left->parent = root;
    }
    else if (data > root->data)
    {
        root->right = insertInBST(root->right, data);
        root->right->parent = root;
    }

    return root;
}