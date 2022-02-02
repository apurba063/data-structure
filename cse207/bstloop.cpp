#include<stdio.h>
#include<stdlib.h>

#define FALSE_VALUE 0
#define TRUE_VALUE 1

struct treeNode
{
    int item;
    struct treeNode * left; //points to left child
    struct treeNode * right; //points to right child
};

struct treeNode * root;


void initializeTree()
{
    root = 0;
}

/****** Complete the following functions using Loop ******/
struct treeNode * searchItem(int item)
{
    // return the treeNode holding the item
};

int insertItem(int item)
{
    //If success return TRUE_VALUE, else return FALSE_VALUE
}

void deleteItem(int item)
{
    //If success return TRUE_VALUE, else return FALSE_VALUE
}

int calcLevel(int item)
{
    //return level/depth of an item in the tree
}

int getMinItem() // return the minimum item in the tree
{

}

int getMaxItem() // return the maximum item in the tree
{

}

int main(void)
{
    initializeTree();
    while(1)
    {
        printf("1. Insert item. 2. Delete item. 3. Search item. \n");
        printf("4. Print level of an item. \n");
        printf("5.Get Minimum  6.Get Maximum \n");
        printf("7.Exit\n");

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
            struct treeNode * res = searchItem(item);
            if(res!=0) printf("Found.\n");
            else printf("Not found.\n");
        }
        else if(ch==4)
        {
            int item;
            scanf("%d", &item);
            int level = calcLevel(item);
            printf("Level of %d = %d\n", item, level);
        }
        else if(ch==5)
        {
            printf("%d\n",getMinItem());
        }
        else if(ch==6)
        {
            printf("%d\n",getMaxItem());
        }
        else if(ch==7)
        {
            break;
        }
    }

}

