#include <stdio.h>
#include <limits.h>
#define MAX_SIZE 100
int main()
{
    int ara[MAX_SIZE],i,j,size, count=0,freq[MAX_SIZE];
    printf("Enter size of array(1-100): ");
    scanf("%d", &size);
    printf("Enter elemnets in the array: ");
    for(i=0;i<size;i++)
    {
        scanf("%d", &ara[i]);
    }
    
    for(i=0; i<size; i++){
        for(j=i+1;j<size; j++){
            if(ara[j]==ara[i]){
               freq[i]=i;
               freq[j]=j;
               count++;
               break;
            }
            else if(ara[j]!=ara[i] && count== i){
                freq[i]=-1;
            }
        }
    }
    printf("All unique elements in the array are:");
    for(int k=0; k<size; k++){
        if(freq[k]!=k){
            printf("%d,",ara[k]);
        }
    }
    return 0;
}