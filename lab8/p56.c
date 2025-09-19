#include <stdio.h>
struct Object 
{
    char name[50];
    int quantity;
};
void getdata(struct Object *obj) 
{
    printf("Enter object name: ");
    scanf("%s", obj->name);
    printf("Enter quantity: ");
    scanf("%d", &obj->quantity);
}
void add10(struct Object *obj) 
{
    obj->quantity += 10;
}
void sub10(struct Object *obj) 
{
    obj->quantity -= 10;
}
void showdata(struct Object obj) 
{
    printf("Object: %s\n", obj.name);
    printf("Quantity: %d\n", obj.quantity);
}
int main() 
{
    struct Object myObj;
    getdata(&myObj);   
    printf("\nInitial data:\n");
    showdata(myObj);

    add10(&myObj);     
    printf("\nAfter add10:\n");
    showdata(myObj);

    sub10(&myObj);     
    printf("\nAfter sub10:\n");
    showdata(myObj);

    return 0;
}