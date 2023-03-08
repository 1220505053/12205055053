#include <stdio.h>

int main() {
   int dizi[] = {10, 2, 45, 7, 13};
   int uzunluk = sizeof(dizi) / sizeof(dizi[0]);
   int en_kucuk = dizi[0];
   int T = 0;
   int i;

   for (i = 1; i < uzunluk; i++) {
      T++;
      if (dizi[i] < en_kucuk) {
         en_kucuk = dizi[i];
      }
   }

   printf("Dizinin en kucuk elemani: %d\n", en_kucuk);
   printf("Kod %d kez calisti.", T);

   return 0;
}
