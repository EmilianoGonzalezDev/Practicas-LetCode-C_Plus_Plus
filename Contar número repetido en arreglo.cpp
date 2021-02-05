// Contar cantidad de veces que aparece un número repetido en un arreglo  

  int low=0, top=n-1, mid, count=1;
  bool flag = false;
  int pos;
  
  while((low <= top) && (flag == false))
  { mid = (low+top)/2; //Medio del arreglo para búsqueda binaria
    if(a[mid] == target) /* si se encuentra el valor */
    { pos = mid;
      while((flag == false) && (pos > 0))//Buscar repetidos           
      { if(a[pos-1] == target)           // a la izquierda
        { count++;
          pos--;  }
        else{flag=true;} //no hay más repetidos a la izq
      }
      
      pos = mid;
      flag = false;
      while((flag == false) && (pos < n)) //Buscar repetidos 
      { if(a[pos+1] == target)           // a la derecha
        { count++;
          pos++;  }
        else{flag=true;} //no hay más repetidos a la der
      }
      flag = true;
    }
  /*Si target es más chico, ir a la mitad izquierda*/
    else if(a[mid] > target)
    { top = mid-1;} 
  /*Si target es más grande, ir a la mitad derecha*/
    else
    { low = mid+1;}
  }