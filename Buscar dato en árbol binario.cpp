//BUSCAR SI EXISTE DATO EN ÁRBOL BINARIO - Retorna booleano true/false

bool search(node *root, int n)
{
  if(root == NULL) return false;
  else if(root->data == n) return true;
  else if(n < root->data) return busqueda(root->left,n);
  else return busqueda(root->right,n);
}


//BUSCAR SI EXISTE DATO EN ARBOL BINARIO (Devuelve puntero)
nodo* busqueda(nodo *raiz, int n)
{
  if(raiz == NULL) return NULL;
  else if(raiz->dato == n) return raiz;
  else if(n < raiz->dato) return busqueda(raiz->izq,n);
  else return busqueda(raiz->der,n);
}