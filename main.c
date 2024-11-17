#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// sayı  tahmin oyunu


int main(){
 int guesC,guesN,random,score=100;
 srand(time(NULL));
 random=(rand()%100)+1;
 printf("tahmin ettigim sayiyi bil bakalim\n");

 while(guesN != -1){
  printf("sayi gir:");scanf("%d",&guesN);
  if(guesN == 0) break;
  if(guesN<1 || guesN>100){
    printf("1 ile 100 arasinda bi sayi gir\n");
    continue;
  } guesC++;
  if(guesN == random){
    printf("tebrikler %d. tahmininde bildin\n",guesC);
    break;
  }
  else{
  if(guesN<random){
    printf("daha buyuk bi sayi gir\n");
  }
  else if(guesN>random){
    printf("daha kucuk bi sayi gir\n");
  }
  score-=10;}

 }

 printf("\n 100 puan uzerinden %d\n",score <0 ? 0: score);


return 0;}





















