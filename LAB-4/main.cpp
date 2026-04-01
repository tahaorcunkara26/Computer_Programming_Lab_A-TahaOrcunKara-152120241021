#include <iostream>
using namespace std;
struct Package
{
    string packageID;
    string destinationCity;
    int dimensions[3];
    Package *next;
};
struct Courier
{
    string courierName;
    string vehicleType;
    Courier *front;
    Courier *rear;
    Courier *next;
};
void Push(Package **head,string ID,string city,int boyut[3]);
void show(Package ** head,Courier **head1);
void Enqueue(Courier **head1);
void dispatch(Package ** head,Courier **head1);
int main()
{
    Package *stack=nullptr;
    Courier *Q=nullptr;
    int a[3]={100,25,15};
    int b[3]={15,20,25};
    Push(&stack,"A","Ankara",a);
    Push(&stack,"B","Eskisehir",b);
    
    Enqueue(&Q,"Taha","Car");
    Enqueue(&Q,"Ahmet","Bicycle");
    
    show(&stack,&Q);

    return 0;
}
void show(Package * head,Courier * head1)
{
    cout<<"packages: "<<"\n";
    while (head!=nullptr)
    {
        cout<<head->packageID;
        head=head->next;
    }
    cout<<"courier Name: "<<"\n";
    
    Courier *front;
    head1=front;
    while (front!=nullptr)
    {
        cout<<front->courierName;
        front=front->next;
    }
    
}
void Push(Package **head,string ID,string city,int boyut[3])
{
    Package *newPackage=new Package();
    newPackage->packageID=ID;
    newPackage->destinationCity=city;
    for (int i = 0; i < 3; i++)
    {
        newPackage->dimensions[i]=boyut[i];
    }
    
    newPackage->next=*head;
    *head=newPackage;
}
void Enqueue(Courier **head1,string name,string type)
{
    Courier *temp=(*head1);
    while (temp!=nullptr)
    {
        temp=(temp)->next;
    }
    Courier *last=new Courier();
    last->courierName=name;
    last->vehicleType=type;
    last->next=nullptr;
    last=temp->next;

    
}
void dispatch(Package ** head,Courier **head1)
{
    Package *temp=*head;
    *head=(*head)->next;
    delete temp;
    cout<<"Paket kuryeye teslim edildi "<<"\n";
    Courier *temp1=*head1;
    *head1=(*head1)->next;
    delete temp1;
    cout<<"Kurye yola cikti"<<"\n";
}
