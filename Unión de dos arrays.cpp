//Unión de dos arreglos (merge two array)

int printUnion(int arr1[], int arr2[], int m, int n) 
{   int i = 0, j = 0; 
    while (i < m && j < n) { 
    { if (arr1[i] < arr2[j]) cout << arr1[i++] << " "; 
      else if (arr1[i] > arr2[j]) cout << arr2[j++] << " "; 
      else { cout << arr2[j++] << " ";
             i++; 
           } 
    }         /* Print remaining elements */
    while (i < m) cout << arr1[i++] << " "; 
    while (j < n) cout << arr2[j++] << " ";     
} 