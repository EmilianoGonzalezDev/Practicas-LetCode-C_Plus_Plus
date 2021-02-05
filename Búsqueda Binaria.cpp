//BÚSQUEDA BINARIA

  while((low <= top) && (flag == false))
  { 
	mid = (low+top)/2;
    if(a[mid] == target)
    { flag = true;
    }
    if(a[mid] > target)
    { top = mid-1;
    }
    if(a[mid] < target)
    { low = mid+1;
    }
  }
