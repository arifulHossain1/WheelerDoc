#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<conio.h>
struct node
{
    int data;

    struct node *next;
    struct node *prev;
}*head=NULL,*tail=NULL;

void create()
{
    struct node *new_node,*ccurrent;
    int i;
    for(i=1; i<=2; i++)
    {
        new_node=(struct node*)malloc(sizeof(struct node));
        if(i==1)
        {
            printf("\n      enter last trip reading:");
            scanf("%d",&new_node->data);
        }
        else if(i==2)
        {
            printf("\n      enter current trip reading:");
            scanf("%d",&new_node->data);
        }


        new_node->next=NULL;
        new_node->prev=NULL;
        if(head==NULL&&tail==NULL)
        {
            head=new_node;
            tail=new_node;
            ccurrent=new_node;
        }
        else
        {
            ccurrent->next=new_node;
            new_node->prev=ccurrent;
            ccurrent=new_node;
            tail=new_node;
        }
        //printf("\n%d num of node has been created successfully\n",i);
    }
}
int Minus()
{
    struct node *ccurrent;
    int temp1, temp2, minus;
    ccurrent=tail;
    temp2=ccurrent-> data;
    ccurrent=ccurrent->prev;
    temp1=ccurrent->data;
    minus=temp2-temp1;
    //printf("\nThe minus value is %d\n",minus);
    return minus;
}
typedef struct stringin
{
    char name[100];
    struct stringin *next,*prev;
} node;
node *start=NULL, *last=NULL;
void inputstring()
{
    node *newnode, *current;
    newnode = malloc(sizeof(node));
    char name[100];
    char temp;
   // printf("        ");
    scanf("%[^\n]", name);
    strcpy(newnode->name,name);
    scanf("%c", &temp);
    newnode->next = NULL;
    newnode->prev = NULL;
    if(start==NULL)
    {
        start=newnode;
        last=newnode;
        current=newnode;

    }
    printf("");
}
void display()
{
    node *current;
    current=start;
    while(current!=NULL)
    {
        printf("            User Name: %s\n",current->name);
        current=current->next;
        printf("\n");

    }
}
void del()
{
    node *current;
    current=start;
    start=NULL;
    last=NULL;
}

void oil()
{
    int a,b,dif;
    printf("            ---------------------------------------\n");
    printf("            #            ENGINE OIL                #\n");
    printf("            ---------------------------------------\n");
    /*dl_create();
    f_display();*/
    printf("\n      enter trip reading of last time you changed engine oil:");
    scanf("%d",&a);
    printf("\n      enter current trip reading:");
    scanf("%d",&b);
    dif=b-a;
    printf("\n      trip total : %d",dif);
    printf("\n      Engine oil condition : ");
    if(dif<500)
    {
        printf("very good(*_*)\n");
    }
    else if(dif>=500&&dif<=800)
    {
        printf("good\n");
    }
    else if(dif>800&&dif<=1000)
    {
        printf("change engine oil \n");
    }
    else if(dif>1000)
    {
        printf("engine in risk...change engine oil\n");
    }
}
void chain()
{
    int a,b,dif;
    printf("            ---------------------------------------\n");
    printf("            #            CHAIN SPROCKET            #\n");
    printf("            ---------------------------------------\n");
    printf("            if you haven't changed your chain sprocket, enter trip reading '0'\n");
    printf("\n      enter trip reading of last time you changed your tire:");
    scanf("%d",&a);
    printf("\n      enter current trip reading:");
    scanf("%d",&b);
    dif=b-a;
    printf("\n      trip total : %d",dif);
    printf("\n      Chain sprocket condition : ");
    if(dif<2000)
    {
        printf("very good(*_*)\n");
    }
    else if(dif>=2000&&dif<=5000)
    {
        printf("good\n      inspect if the chain needs to be tightened\n");
    }
    else if(dif>5000&&dif<=10000)
    {
        printf("must check it by a mechanic \n");
    }
    else if(dif>10000)
    {
        printf("critical ...Chain sprocket set needs to be replaced\n");
    }


}
void tire()
{
    int a,b,dif;
    printf("            ---------------------------------------\n");
    printf("            #               TIRE                  #\n");
    printf("            ---------------------------------------\n");
    printf("            if you haven't changed your tire, enter trip reading '0'\n");
    printf("\n      enter trip reading of last time you changed your tire:");
    scanf("%d",&a);
    printf("\n      enter current trip reading:");
    scanf("%d",&b);
    dif=b-a;
    printf("\n      trip total : %d",dif);
    printf("\n      Chain tire condition : ");
    if(dif<5000)
    {
        printf("very good(*_*)\n");
    }
    else if(dif>=5000&&dif<=10000)
    {
        printf("\n      inspect if the tire's grip is good!!! \n");
    }
    else if(dif>10000&&dif<=20000)
    {
        printf("tire may not grip....Be careful  \n");
    }
    else if(dif>20000)
    {
        printf("critical ...tire needs to be replaced\n");
    }


}
void advice()
{
    printf("            ---------------------------------------\n");
    printf("            #            ADVICE                   #\n");
    printf("            ---------------------------------------\n");
    printf("        1.Always wear helmet while riding bike.\n");
    printf("        2.Check fuel line before staring the bike.\n");
    printf("        3.Check tire pressure.\n");
    printf("        4.Always keep your chain lubed.\n");
    printf("        5.Always change your engine oil in time.\n");
    printf("        6.Take your bike in servicing every 5000km.\n");
}
void about()
{
    printf("            ---------------------------------------\n");
    printf("            #            THE TEAM                 #\n");
    printf("            ---------------------------------------\n");
    printf("        1.Name : Ariful Hossain Hridoy\n");
    printf("            ID : 191-15-12473\n");
    printf("        2.Name : Takimul Hasan Nihal\n");
    printf("            ID : 191-15-12127\n");
}
void expert()
{
    printf("            ---------------------------------------\n");
    printf("            #              EXPERT                 #\n");
    printf("            ---------------------------------------\n");
    printf("            Talk to our experts about your problems.\n\n");
    printf("            Call this number : 01830398077\n");
}
int main()
{
    int minus;
    int choice,x,y;


    printf("            ---------------------------------------\n");
    printf("            #        WELCOME TO WHEELERDOC        #\n");
    printf("            ---------------------------------------\n");
    printf("            Enter your name : ");
    inputstring();
    display();
    do
    {
    printf("\n            1.edit 2.save\n\n\n");
    printf("            enter your choice : ");
        scanf("%d",&y);
        if(y==1)
        {
    printf("\n            Edit User Name : ");
            inputstring();

            del();
            inputstring();
            display();
        }

    }
    while(y!=2);
    display();
    do
    {
        printf("            ---------------------------------------\n");
        printf("            #        WELCOME TO WHEELERDOC        #\n");
        printf("            ---------------------------------------\n");
        printf("\n            Choose your inspection : \n");
        printf("            1.Engine Oil\n");
        printf("            2.Chain sprocket\n");
        printf("            3.Tire\n");
        printf("            4.Advice\n");
        printf("            5.Talk to a expert\n");
        printf("            6.About us\n\n");
        printf("            Enter your choice:");
        scanf("%d",&choice);
        if(choice==1)
        {
            oil();
        }
        else if(choice==2)
        {
            chain();
        }
        else if(choice==3)
        {
            tire();
        }
        else if(choice==4)
        {
            advice();
        }
        else if(choice==5)
        {
            expert();
        }
        else if(choice==6)
        {
            about();
        }
        else
        {
            printf("\n        wrong input .... Enter your correct choice:\n\n");
        }
        printf("\n      press '1' to return to main menu or press any key to exit : ");
        scanf("%d",&x);
    }
    while(x==1);
    printf("            ---------------------------------------\n");
    printf("            #             THANK YOU               #\n");
    printf("            ---------------------------------------\n");

    return 0;
}
