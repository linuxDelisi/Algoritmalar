#include <stdlib.h>
#include <stdio.h>
#define DIZI_MAX_ALAN 100
int main()
{
   int dizi[DIZI_MAX_ALAN];
   int diziBoyutu;
   printf("\nBubble Sort (kabarcık) sıralama uygulaması\n");
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
   int i,temp;
   int repeat=1;
   for(i=0;i<diziBoyutu;i++)
   {
      printf("Dizinin %d. elemanını girin:\n",i+1);
      scanf("%d",&dizi[i]);
   }
do{
   repeat=0;
   for(i=0;i<diziBoyutu-1;i++)
   {
      if(dizi[i]<dizi[i+1])
      {
         repeat=1;
         temp=dizi[i];
         dizi[i]=dizi[i+1];
         dizi[i+1]=temp;
      }
   }
}while(repeat);
   printf("Dizinin sıralı hali:\n");
   for(i=0;i<diziBoyutu;i++)
   {
      printf("%d  ",dizi[i]);
   }
   printf("\n");
   return 0;
} 
