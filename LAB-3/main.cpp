#include <iostream>
using namespace std;
typedef struct 
{
    string title;
    string artist;
    int ratings[3];
    Song *next;
    Song *prev;   
}Song;
void display(Song *head);
void addend(Song *head);
void NextPrev(Song *head,Song *next,Song *prev);
void removeCurrent(Song *head);
int main()
{
    Song *s1;
    Song *s2;
    s1=new Song();
    s1->title="ab";
    s1->artist="cd";
    s2=new Song();
    s2->title="ef";
    s2->artist="gh";
    s1->prev=nullptr;
    s1->next=s2;
    s2->prev=s1;
    s2->next=s2;
    
    
   
    return 0;
}
void display(Song *head)
{
    
    while (head!=nullptr)
    {
        cout<<head->ratings;
        head=head->next;
    }
    
}
void addend(Song *head)
{
    while (head->next!=nullptr)
    {
        head=head->next;
    }
    Song *added;
    added=head;
    added=new Song(); 
}
void NextPrev(Song *head,Song *next,Song *prev)
{
    Song *current;
    current=head;
    int choice;
    cout<<"enter choice(1 for prev 2 for next): ";
    cin>>choice;
    if (choice==1)
    {
        current=current->prev;
    }
    else if (choice==2)
    {
        current=current->next;
    }
    else
    {
        cout<<"invalid choice";

    }
    
}
void removeCurrent(Song *head)
{
    Song *current;
    current=head;
    if (current!=nullptr)
    {
        delete current;
        current=nullptr;
    }
    
    
}
