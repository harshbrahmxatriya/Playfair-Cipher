#include<stdio.h>

int main(){
    int i,j, r1=0, c1=0, r2=0, c2=0, count=5;
    char pt[10];
    char matrix[5][5] = {"MONAR","CHYBD","EFGIK","LPQSI","UVWXZ"};

    printf("Matrix with key:MONARCHY\n");
    for ( i = 0; i < count; i++)
    {
    	printf("   ");
        for ( j = 0; j < count; j++)
        {
          	  printf("%c",matrix[i][j]);
            printf("   ");
        }
        printf("\n\n");
        
    }

    printf("Enter Plain text:");
    scanf("%s",pt);
    printf("Your Plain text = %s\n",pt );

    for ( i = 0; i < count; i++)
    {
        for ( j = 0; j < count; j++)
        {
            if ( matrix[i][j] == pt[0] )
            {
                r1 = i; c1 = j; 
            }

            if (matrix[i][j] == pt[1])
            {
                r2 = i; c2 = j;
            }
        
        }
        
    }

    if (r1 == r2)
    {   
        if(c2 == 4)
        {
            printf("Your Cipher text is : %c%c\n",matrix[r1][c1+1],matrix[r1][0] );
        }
        else{
            printf("Your Cipher text is : %c%c\n", matrix[r1][c1+1], matrix[r2][c2+1] );
        }

    }

    if (c1 == c2)
    {
        /* code */
        if (r2 == 4)
        {
            printf("Your Cipher text is : %c%c\n",matrix[r1+1][c1],matrix[0][c2] );
        }
        else{
            printf("Your Cipher text is : %c%c\n",matrix[r1+1][c1],matrix[r2+1][c2] );
        }
    }

    if (r1 != r2 && c1 != c2)
    {
        /* code */
        printf("Your Cipher text is : %c%c\n", matrix[r1][c2], matrix[r2][c1] );
    }
}