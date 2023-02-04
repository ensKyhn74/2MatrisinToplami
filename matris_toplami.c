#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// elemanları rastgele üretilen 5 x 5 boyutlu 2 matrisi topla

int main() 

{
    
 int ilkMatris[5][5];
 
 int ikinciMatris[5][5];
 
 int ToplamMatris[5][5];
 
 int i,j;
 
 srand(time(NULL)); 
 
 printf("1.Matris:\n");
 
  for(i = 0 ; i < 5 ; i++)
  {
   for(j = 0 ; j < 5 ; j++)  
   { 
    ilkMatris[i][j] = rand()%10 ;  
    
    printf("%d\t",ilkMatris[i][j]);  
   }  
   printf("\n"); 
  } 
  
  
 printf("\n2.Matris:\n");
  
 for(i = 0 ; i < 5 ; i++)
 {
   for(j = 0 ; j < 5 ; j++)  
   {  
    ikinciMatris[i][j] = rand()%10 ;  
    
    printf("%d\t",ikinciMatris[i][j]);  
   }  
   printf("\n");  
 }  
  
  printf("\nToplam Matrisi:\n");
  
 for(i = 0 ; i < 5 ; i++)
 {
   for(j = 0 ; j < 5 ; j++)  
   { 
   ToplamMatris[i][j] = ilkMatris[i][j] + ikinciMatris[i][j]; 
 
   printf("%d\t",ToplamMatris[i][j]);   
   }    
   printf("\n");      
 }   
  
 return 0;
 
}