// COMPROBAR SI UN NÚMERO ES PRIMO

#include<cmath>
 bool prime = true;
 if (num == 0 || num == 1 || num == 4)
 { prime = false;}
 for (int x = 2; x < sqrt(num); x++)
 {	if (num % x == 0)
	{ prime = false;
	  break;}
 }