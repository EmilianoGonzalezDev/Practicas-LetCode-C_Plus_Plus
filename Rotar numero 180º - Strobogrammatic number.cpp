   // Rotar numero 180 grados - Strobogrammatic num
   //0 1 2 3 4 5 6 7 8 9
   //1 1 2 0 0 2 2 0 1 2
   
    int rotatedDigits(int N)
    {   int valid[] = {1,1,2,0,0,2,2,0,1,2};
        int total = 0;
        for(int i = 1; i <= N; i++)
        {   int number = i;              
            int multip = 1;                
            while(number)                 
            {   multip *= valid[number%10];
                number /= 10;            
            }
            if(multip >= 2) { total+=1; }
        }
        return total;
    }
