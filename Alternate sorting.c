/*Alternate sorting: Given an array of integers, rearrange the array in such a way that the
first element is first max and sec element is first min.
eg. i/p: {1,2,3,4,5,6,7}, o/p:{7,1,6,2,5,3,4} */
int main()
{
    int n,i,j,a[50];
    scanf("%d",&n);
    printf("Enter the array elements:");
    for(i=0;i<n;i++)
    {
    	scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(i%2==1)
			{
				if(a[i]>a[j])
				{
					a[i]=a[i]^a[j];
					a[j]=a[j]^a[i];
					a[i]=a[i]^a[j];
				}
			}
			else
			{
				if(a[i]<a[j])
				{
					a[i]=a[i]^a[j];
					a[j]=a[j]^a[i];
					a[i]=a[i]^a[j];
				}
			}
		}
	}
	for(i=0;i<n;i++)
	printf("%d",a[i]);
}
