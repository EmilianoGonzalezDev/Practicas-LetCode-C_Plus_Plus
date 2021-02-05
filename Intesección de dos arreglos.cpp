//INTERSECCIÓN DE DOS ARREGLOS

int printIntersection(int arr1[], int arr2[], int m, int n) 
{ 
    int i = 0, j = 0; 
    while (i < m && j < n) { 
        if (arr1[i] < arr2[j]) i++; 
        else if (arr1[i] > arr2[j]) j++; 
        else /* si son iguales */
        { 
            cout << arr2[j] << " "; 
            i++; 
            j++; 
        } 
    } 
} 