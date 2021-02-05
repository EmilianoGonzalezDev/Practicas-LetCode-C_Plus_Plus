//NÚMERO A PALABRAS EN INGLÉS

const string EMPTY = "";
const string Ones[] = { EMPTY, "One ", "Two ", "Three ", "Four ", "Five ","Six ", "Seven ", "Eight ", "Nine ",  "Ten ", 
	"Eleven ", "Twelve ", "Thirteen ", "Fourteen ", "Fifteen ", "Sixteen ", "Seventeen ", "Eighteen ", "Nineteen " };
const string Tens[] = { EMPTY, EMPTY, "Twenty ", "Thirty ", "Forty ", "Fifty ",
						"Sixty ", "Seventy ", "Eighty ", "Ninety " };
string oneTwoDigits(int n, string suffix) //CONVERTIR NUMEROS DE 1 O 2 CIFRAS A PALABRAS
{ if (n == 0) {return EMPTY;}
  if (n > 19) {return Tens[n / 10] + Ones[n % 10] + suffix;}
  else {return Ones[n] + suffix;}
}

string toWords(int n)
{ string res; // GUARDA EL NUMERO EN PALABRAS
  res = oneTwoDigits((n % 100), "");
  if (n > 100 && n % 100) {res = "and " + res;}
  
  res = oneTwoDigits(((n / 100) % 10), "Hundred ") + res;
  res = oneTwoDigits(((n / 1000) % 100), "Thousand ") + res;
  return res;
}