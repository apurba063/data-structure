#include<stdio.h>
#include<stdlib.h>

#define NULL_VALUE -99999
#define SUCCESS_VALUE 99999

struct listNode
{
    int item;
    struct listNode * next;
};

struct listNode * head;

void initializeList()
{
    head = 0;//initially set to NULL
}

int insertItem(int item) //insert at the beginning
{
	struct listNode * newNode ;
	newNode = (struct listNode*) malloc (sizeof(struct listNode)) ;
	newNode->item = item ;
	newNode->next = head; //point to previous first node
	head = newNode ; //set list to point to newnode as this is now the first node
	return SUCCESS_VALUE ;
}


int deleteItem(int item)
{
	struct listNode *temp, *prev ;
	temp = head ; //start at the beginning
	while (temp != 0)
	{
		if (temp->item == item) break ;
		prev = temp;
		temp = temp->next ; //move to next node
	}
	if (temp == 0) return NULL_VALUE ; //item not found to delete
	if (temp == head) //delete the first node
	{
		head= head->next ;
		free(temp) ;
	}
	else
	{
		prev->next = temp->next ;
		free(temp);
	}
	return SUCCESS_VALUE ;
}

struct listNode * searchItem(int item)
{
	struct listNode * temp ;
	temp = head; //start at the beginning
	while (temp != 0)
	{
		if (temp->item == item) return temp ;
		temp = temp->next ; //move to next node
	}
	return 0 ; //0 means invalid pointer in C, also called NULL value in C
}

void printList()
{
    struct listNode * temp;
    temp = head;
    while(temp!=0)
    {
        printf("%d->", temp->item);
        temp = temp->next;
    }
    printf("\n");
}

int insertLast(int item)
{
    //write your codes here
}

int insertAfter(int oldItem, int newItem) //Inserts newItem after oldItem, if oldItem is not present, returns NULL VALUE
{
    //write your codes here
}

int deleteLast()
{
    //Use deleteItem function to delete the last item of the list
}

int deleteFirst()
{
    //Use deleteItem function to delete the first item of the list
}

void prefixSum(int item)
{
    //Print the summation of the items that are in front of item in the list
    //If the list is 10->21->30->15->23. Then prefixSum(30) will return 31.
}

int main(void)
{
    initializeList();
    while(1)
    {
        printf("1. Insert new item. 2. Delete item. 3. Search item. \n");
        printf("4. Insert at last. 5. Insert After 6. delete Last 7. delete First \n");
        printf("8. Print. 9. exit. 10. prefix sum\n");

        int ch;
        scanf("%d",&ch);
        if(ch==1)
        {
            int item;
            scanf("%d", &item);
            insertItem(item);
        }
        else if(ch==2)
        {
            int item;
            scanf("%d", &item);
            deleteItem(item);
        }
        else if(ch==3)
        {
            int item;
            scanf("%d", &item);
            struct listNode * res = searchItem(item);
            if(res!=0) printf("Found.\n");
            else printf("Not found.\n");
        }
        else if(ch==4){
            int item;
            scanf("%d", &item);
            insertLast(item);
        }
        else if(ch==5){
            int oldItem, newItem;
            scanf("%d %d",&oldItem, &newItem);
            insertAfter(oldItem,newItem);
        }
        else if(ch==6){
            deleteLast();
        }
        else if(ch==7){
            deleteFirst();
        }
        else if(ch==8)
        {
            printList();
        }
        else if(ch==9)
        {
            break;
        }
        else if(ch==10)
        {
            int item;
            scanf("%d",&item);
            prefixSum(item);
        }
    }

}

