#include <stdlib.h>
#include <stdio.h>

int main(){
float sonuc,yukseklik,taban;
printf("Taban Alan Girin:\n");
scanf("%f",&taban);
printf("Yuksekligi Alan Girin:\n");
scanf("%f",&yukseklik);

sonuc=(taban*yukseklik)/2;
printf("Sonuc : %f\n",sonuc);

return 0 ;
}
