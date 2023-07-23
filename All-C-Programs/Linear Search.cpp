#include<stdio.h>
int main (){
   int a[50], n, i, key, flag = 0;
   printf("enter the no: of elements");
   scanf ("%d",&n);
   printf("enter the elements:\n");
   for (i=0; i<n; i++)
      scanf( "%d", &a[i]);
   printf("enter a key element:\n");
   scanf ("%d", &key);
   for (i=0; i<n; i++){
      if (a[i] == key){
         flag = 1;
         break;
      }
   }
   if (flag == 1)
      printf("search is successful:");
   else
      printf("search is unsuccessfull:");
   return 0;
}
