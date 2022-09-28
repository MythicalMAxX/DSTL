#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10],b[10],c[20];
    int i,j=0,k=0,n,n1,n2,n3,found=0;

    printf("Enter total number elements of a\n");
    scanf("%d",&n1);

    printf("Enter element of a\n");
    for(i=0; i<n1; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter total number elements of b\n");
    scanf("%d",&n2);

    printf("Enter element of b\n");
    for(i=0; i<n2; i++)
    {
        scanf("%d",&b[i]);
    }

    for(i=0;i<n1;i++){
        for(j=0;j<n2;j++){
            if(a[i]==b[j]){
                c[k]=a[i];
                k++;
            }
        }
    }


    printf("Union of Set A and Set B is:\n");
    for(i=0; i<n1; i++)
    {
        printf("%d",c[i]);
        printf("\n");
    }

    getch();
}
