#include<stdio.h>
#define MAX 100 

int arr[MAX];
int n;

void create()
{
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: \n");
    for(int i=0; i<n; i++)
    {
        printf("Element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
}

void display()
{
    printf("The elements of the array are: \n");
    for(int i=0; i<n; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

void insert()
{
    int pos, ele;
    printf("Enter the position where the element needs to be inserted: ");
    scanf("%d", &pos);
    printf("Enter the element to be inserted: ");
    scanf("%d", &ele);
    for(int i=n-1; i>=pos-1; i--)
    {
        arr[i+1]=arr[i];
    }
    arr[pos-1]=ele;
    n++;
}

void delete()
{
    int pos;
    printf("Enter the position of the element to be deleted: ");
    scanf("%d", &pos);
    for(int i=pos-1; i<n-1; i++)
    {
        arr[i]=arr[i+1];
    }
    n--;
}

int main()
{
    int choice;
    while(1)
    {
        printf("Menu\n");
        printf("1. Create\n");
        printf("2. Display\n");
        printf("3. Insert\n");
        printf("4. Delete\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                create();
                break;
            case 2:
                display();
                break;
            case 3:
                insert();
                break;
            case 4:
                delete();
                break;
            case 5:
                return 0;
            default:
                printf("Invalid choice.\n");
        }
    }
    return 0;
}
