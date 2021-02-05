//Valores en común en 3 arreglos

void findCommonValues(int A1[], int A2[], int A3[],
					   int n1, int n2, int n3) {
   int i = 0, j = 0, k = 0;
   while (i < n1 && j < n2 && k < n3) {
      if (A1[i] == A2[j] && A2[j] == A3[k]) {
         cout << A1[i] << " "; i++; j++; k++;
      }
      else if (A1[i] < A2[j])
         i++;
      else if (A2[j] < A3[k])
         j++;
      else
         k++;
   }
}