/*roll no: 51
name :Boaz Okwemba*/
#include <stdio.h>
#include <stdlib.h>

void read_matrix(int matrix[100][100], int *rows, int *cols)
{
    printf("Enter matrix elements:\n");
    for (int i = 0; i < *rows; i++)
    {
        for (int j = 0; j < *cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
}

int main()
{
    int k, u,v;
    int b[100][100], c[100][100], d[100][100];
    printf("Enter the dimension row\n");
    scanf("%d",&u);
    printf("Enter the dimension colomn\n");
    scanf("%d",&v);
    printf("Enter elements of the 1st Matrix \n");
    read_matrix(b, &u, &v);
    printf("The elements of the 1st matrix are:\n");
    for(int i=0; i<u; i++)
    {
        for(int j = 0; j<v; j++)
        {
            printf("%d\t", b[i][j]);
            if (j == v - 1)
            {
                printf("\n\n");
            }
        }
    }
    printf("Enter elements of the 2nd Matrix are:\n");
    read_matrix(c, &u, &v);
    for(int i=0; i<u; i++)
    {
        for(int j = 0; j<v; j++)
        {
            printf("%d\t", b[i][j]);
            if (j == v - 1)
            {
                printf("\n\n");
            }
        }
    }
    printf("Enter a number 1 or 2.\n");
    scanf("%d", &k);
    if(k==1)
    {
        for(int i=0; i<u; i++)
        {
            for(int j = 0; j<v; j++)
            {
                d[i][j] = b[i][j] + c[i][j];
            }
        }
        printf("The elements of the sum are:\n");
        for(int i=0; i<u; i++)
        {
            for(int j = 0; j<v; j++)
            {
                printf("%d\t", d[i][j]);
                if (j == v - 1)
                {
                    printf("\n\n");
                }
            }
        }
    }
    else
    {
        if(k==2)
        {
            for(int i=0; i<u; i++)
            {
                for(int j = 0; j<v; j++)
                {
                    d[i][j] = b[i][j] - c[i][j];
                }
            }
        printf("The elements are of the subtraction are:\n");
        for(int i=0; i<u; i++)
        {
            for(int j = 0; j<v; j++)
            {
                printf("%d",d[i][j]);
                if (j == v - 1)
                {
                    printf("\n\n");
                }
            }
        }
        }
    }
    return 0;
}
