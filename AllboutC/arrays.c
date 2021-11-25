#include <stdlib.h>
#include <stdio.h>

int main(void){
    int arr[10];
    for(int i=0; i<10; i++)
        arr[i] = i;    
    
    printf("&arr[0]=%p\n", &arr[0]);
    printf("arr = %p\n",&arr);

    arr[2]=70;
    printf("arr[2]=%d\n",arr[2]);
    *(arr+2)=90;
    printf("arr[2]=%d\n",arr[2]);

    int *p1 = (int*)calloc(7,sizeof(int));
    int *p2 = (int*)calloc(7,sizeof(int));

    *(p1+1)=80;
    for(int i = 0; i < 7; i++){
        p2[i] =i;
        *(p1+i) = i;
    }
    printf("*(p1+5=%d)=%d\n",*(p1+5));
    printf("*(p2+5)=%d\n",*(p2+5));


    return 0;
}