    int i;
    printf("Enter pattern:");
    scanf("%d",&i);
    for(int row=1;row<=i;row++){
        for(int col=i;col>=row;col--){
            printf("* ");
        }
    printf("\n");
    }
