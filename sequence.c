int main()
{
    int sum=0, i, k, s=0;
    printf("input value!\n");
    scanf("%d", &k);
    for(i=1;i<=k;i++)
    {
        sum=sum+i;
        s=sum+s;
    }
    printf("S = %d\n", s);
    return 0;
}
