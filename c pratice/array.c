// Update the '_' in the code below to solve the problem

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int N;
        scanf("%d", &N);

        int A[N];
        for (int i = 0; i < N; i++)
        {
            A[i] = i + 1;
        }

        // print the array A
        for (int i = 0; i < N; i++)
        {
            printf("%d ",  A[i] );
        }
        printf("\n");

        // sort the array A in descending order
        for (int i = 0; i < N - 1; i++)
        {
            for (int j = i + 1; j < N; j++)
            {
                if (A[i] < A[j])
                {
                    int temp = A[i];
                    A[i] = A[j];
                    A[j] = temp;
                }
            }
        }

        // print the array A sorted in descending order
        for (int i = 0; i < N; i++)
        {
            printf("%d", A[i]);
        }
        printf("\n");
    }

    return 0;
}
