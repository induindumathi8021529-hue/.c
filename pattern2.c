int n=5;
for(int i=1; i<=n; i++){
    for(int j=1; j<=i; j++){
        printf("*");
    }
    printf("\n");
}

Problem 2
int n=5;
for(int i=1; i<=n; i++){
    for(int j=1; j<=n; j++){
        if(j>=i)
            printf("*");
        else
            printf(" ");
    }
    printf("\n");
}

