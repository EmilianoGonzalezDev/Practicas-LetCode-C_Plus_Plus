/* Eliminar último nodo de lista enlazada */

void deleteNode(Node* &list) 
{ 
  if(list == NULL) return; //Si no hay nodos, salir
  
  Node *prev = NULL;
  Node *aux_delete = list;
  
  /* Viajar hasta el último */
  while((aux_delete->next != NULL))
  { prev = aux_delete;
    aux_delete = aux_delete->next;
  }
    
  if(prev == NULL) //Si sólo hay 1 elemento
  { list = NULL;
    delete aux_delete;
  }
  else              //si hay más, elimino el último
  { prev->next = NULL;
    delete aux_delete;
  }
}