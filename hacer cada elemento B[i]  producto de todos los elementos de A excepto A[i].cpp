// Dado una coleccion de enteros A, retornar otra coleccion B,
// donde cada elemento B[i] sea el producto de todos los
// elementos de A, excepto A[i].

void multip(int A[],int B[], int n)
{
  /* Multiplicar todos y guardar el total*/
  int result = 1; 
  for(int i=0; i<n; i++)
  { result = result * A[i]; }
  
  for(int i=0; i<n; i++) //quitamos lo de A[i]
  { B[i] = result / A[i];} //y guardamos
}