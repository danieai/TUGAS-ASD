#include <stdio.h>
#include <stdlib.h>

int main()
{
   //-- selectionSort --

int arr [] = {23 , 67 , 89 , 5 , 45 , 20 , 15 , 27};
int n =8;

void swap  (int *a, int *b)
{
    int tmp;
        tmp = *a;
        *a = *b;
        *b = tmp;
}

void printData()
{
    for(int q=0; q<n; q++){
        printf("%d \t",arr[q]);
    }
    printf("\n");
}







void selectionSort (){

    int minIdx, currentIdx = 0;

    for (int q=0; q<n-1; q++){

        minIdx = q;

        for(int w=q; w<n; w++){

            if(arr[minIdx]>arr[w]){
             minIdx = w;
             }
      }
    swap(&arr[minIdx],&arr[currentIdx]);
    currentIdx++;

    }

}






int main(){

printf("before \n");
printData();

//bubbleSort();
 selectionSort();

printf("after \n");
printData();


return 0;




}
}
