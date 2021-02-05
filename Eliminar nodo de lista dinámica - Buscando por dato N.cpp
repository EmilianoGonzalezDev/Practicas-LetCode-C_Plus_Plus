//ELIMINAR NODO DE LISTA DINAMICA - BUSCANDO POR DATO N

void deleteNode(Node* &list, int n) 
{ 
  if(list == NULL) return; //Si no hay nodos, salir
  
  Node *prev = NULL;
  Node *aux_delete = list;
  
  /* Buscar elemento */
  while((aux_delete != NULL) && (aux_delete->data != n))
  {
    prev = aux_delete;
    aux_delete = aux_delete->next;
  }
  
  if(aux_delete == NULL) //si Elemento no existe, salir
  { return; }
  
  else if(prev == NULL) //Eliminar primer elemento
  { list = list->next;
    delete aux_delete; }
  
  else               //eliminar elemento intermedio
  { prev->next = aux_delete->next;
    delete aux_delete; }
}