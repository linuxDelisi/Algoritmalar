#include <stdlib.h>
#include <stdio.h>

#define DIZI_MAX_ALAN 100

int main()
{
   int dizi[DIZI_MAX_ALAN];
   int diziBoyutu;

   printf("\Insertion Sort (Eklemeli) sıralama uygulaması\n");
   printf("Linuxdelisi.org\n");
   printf("yazar: Ayın Elemanı\n");

   printf("Kaç eleman siralamak istediğinizi girin (Max %d):\n",
           DIZI_MAX_ALAN);
   scanf("%d",&diziBoyutu);
   if(diziBoyutu>DIZI_MAX_ALAN)
   {
      printf("%d den fazla girdiniz\n",DIZI_MAX_ALAN);
      exit(1);
   }

   int i,temp,j;
   int repeat=1;

   for(i=0;i<diziBoyutu;i++)
   {
      printf("Dizinin %d. elemanını girin:\n",i+1);
      scanf("%d",&dizi[i]);
   }

   for(i=1;i<diziBoyutu;i++)
   {
      temp=dizi[i];
      j=i-1;
      while(j>=0 && dizi[j]>temp)
      {
         dizi[j+1]=dizi[j];
         j--;
      }
   dizi[j+1]=temp;
   }

   printf("Dizinin sıralı hali:\n");
   for(i=0;i<diziBoyutu;i++)
   {
      printf("%d  ",dizi[i]);
   }

   printf("\n");
   return 0;
} 
