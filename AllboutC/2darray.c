#include <stdio.h>
#include <stdlib.h>

int main(void){
    int mat[3][4]={{1,3,4,8},{10,9,7,2},{5,6,11,12}};

    printf("mat[2][3] = %d\n", mat[2][3]);

    int *pm = &mat[0][0];
    
    printf("pm=%p mat=%p\n", pm,mat);
    printf("mat[1]=%p, &mat[1]=%p\n",mat[1],&mat[1]);

    printf("*(mat[2]+3) = %d\n", *(mat[2]+3));
    printf("*(*(mat+2)+3)=%d\n",*(*(mat+2)+3));
    printf("*((mat+2)+3)=%d\n",*((mat+2)+3));
    return 0;
}