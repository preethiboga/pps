void main()
{
	char str[1000],substr[1000];
	printf("enter string:");
	gets(str);
	puts(str);
	int m,n;
	printf("enter starting index:");
	scanf("%d",&m);
	printf("enter no.of characters:");
	scanf("%d",&n);
	int i=0;
	while(i<n)
	{
		substr[i]=str[m+i-1];
		i++;
    }

	printf("substring is:%s",substr);
	
}
