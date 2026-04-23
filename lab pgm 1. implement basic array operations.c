#include<stdio.h>
int main(){
int arr[100],n,i,pos,value,choice,found;
printf("enter number of elements:");
scanf("%d",&n);
printf("enter elements:\n");
for(i=0;i<n;i++){
    scanf("%d",&choice);
    switch(choice){
    case1://traversal
        printf("array elements are:");
        for(i=0;i<n;i++){
            printf("%d",arr[i]);
        }
        break;
        case2://insertion
            printf("enter position and value:");
            scanf("5d%d",&pos,&value);
            for(i=n;i>=pos;i--){
                arr[i]=arr[i-1];
            }
            arr[pos-1]=value;
            n++;
            break;
            case3://deletion
                printf("enter position to delete:");
                scanf("%d",&pos);
                for(i=pos - 1;i<n-1;i++){
                    arr[i]=arr[i+1];
                }
                n--;
                case4://searching
                    printf("enter element to search:");
                    scanf("%d",&value);
                    found=0;
                    for(i=0;i<n;i++){
                        if(arr[i]==value){
                            printf("element found at position%d\n",i+1);
                            found=1;
                            break;
                            }
                            }
                            if(found==0)
                                printf("element not found\n");
                            break;
                            case5:
                                printf("exiting...\n");
                                break;default:
                                    printf("invalid choice!\n");
    }
    }while(choice !=5);
    return 0;
}







