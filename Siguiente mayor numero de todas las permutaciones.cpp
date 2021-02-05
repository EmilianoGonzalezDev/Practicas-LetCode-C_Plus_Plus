//Siguiente mayor número de todas las permutaciones
//Given a number, what is the next bigger number
//among all permutations of that number.

  int n = (sizeof(a) / sizeof(int));
  int i = n-1; aux;
  bool flag = false;
   
  while((i >= 0) && (flag == false))
  { if(a[i] > a[i-1])
    { aux = a[i];
      a[i] = a[i-1];
      a[i-1] = aux;
      flag = true;
    }
    i--;
  }