//ORDENAMIENTO MAYOR A MENOR

   int max=0, pos, aux;
    for(int i=0; i<n; i++)
    { for(int j=i; j<n; j++)
      { if(max < a[j])
        { max = a[j];
          pos = j;
        }
      }
      aux = a[i];
      a[i] = a[pos];
      a[pos] = aux;
      max = 0;
    }