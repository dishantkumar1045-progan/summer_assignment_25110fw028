#include <stdio.h>
#include <string.h>
#define ITEMS 5
#define MAXCHAR 50
int main() {
   char names[ITEMS][MAXCHAR], temp[MAXCHAR];
   int i, j;
   printf("Enter %d names:\n", ITEMS);
   for (i = 0; i < ITEMS; i++) {
       scanf("%s", names[i]);
   }
   for (i = 0; i < ITEMS - 1; i++) {
       for (j = i + 1; j < ITEMS; j++) {
           if (strcmp(names[i], names[j]) > 0) {
               strcpy(temp, names[i]);
               strcpy(names[i], names[j]);
               strcpy(names[j], temp);
           }
       }
   }
   printf("\nSorted Names:\n");
   for (i = 0; i < ITEMS; i++) {
       printf("%s\n", names[i]);
   }
   return 0;
}