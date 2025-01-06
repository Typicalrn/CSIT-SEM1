for (int i=1; i<=5; i++)
    {
        for (int j=5; j>=i; j--)
        {
            printf("\t");
        }
        for (int k=1; k<=(2*i-1); k++)
        {
            printf("\t*");
        }
        printf("\n");
    }