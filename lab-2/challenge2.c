    #include <stdio.h>

    int main()
    {
        int a1, a2, a3, min, max;
        float sum, avg;

        printf("Enter - Integer #1 : ");
        scanf("%d", &a1);
        printf("Enter - Integer #2 : ");
        scanf("%d", &a2);
        printf("Enter - Integer #3 : ");
        scanf("%d", &a3);

        if (a1 < a2 && a1 < a3)
        {
            min = a1;
        } 
        else if (a2 < a1 && a2 < a3)
        {
            min = a2;
        }
        else if (a3 < a1 && a3 < a2)
        {
            min = a3;
        }

        if (a1 > a2 && a1 > a3)
        {
            max = a1;
        } 
        else if (a2 > a1 && a2 > a3)
        {
            max = a2;
        }
        else if (a3 > a1 && a3 > a2)
        {
            max = a3;
        }

        sum = a1 + a2 + a3;

        avg = (a1 + a2 + a3)/3;

        printf("Result:$\n");
        printf("Minimum : %d\n", min);
        printf("Maximum : %d\n", max);
        printf("Sum : %f\n", sum);
        printf("Average : %.2f\n", avg);

        return 0;
    }