#include <stdio.h>

void main()
{
  int arr1[] = {55, 62, 7, 11, 173};
  int i, index = -1, ele = 0; //Declaration
  printf("\t\t\tLSEARCH\n");
  // printf("\nEnter Any 5 numbers\n");
  // for(i=0;i<5;i+=1)   //Data Entry
  // { printf("%d . ",i+1);
  //   scanf("%d",&arr1[i]);
  // }
  int n = sizeof(arr1) / sizeof(int);
  printf("Enter the value of the element to be searched : ");
  scanf("%d", &ele);
  for (i = 0; i < n; i++)
    if (arr1[i] == ele)
    {
      index = i + 1;
      break;
    }
  /*
while (n--) {
 if(arr1[i]==ele)
   { index=i+1;
     break;
   }
}

*/
  if (index != -1)  
    printf("\nElement is present at %d position\n", index);
  else
    printf("\nNo Element with value = %d is present in the array\n", ele);
}
