# include <stdio.h>
# include <malloc.h>
# include <stdlib.h>
// 定义节点
struct Node
{
    int data;
    struct Node * pNext;

};
// 函数申明
struct Node * CreatList(void); 
void traverse_list(struct Node *);

int  main (void)
{   
    struct Node * pHead;
    pHead=CreatList(); // 创建一个链表
    traverse_list(pHead); // 将链表输出
    return 0;
}
// 创建一个单链表
struct Node *   CreatList(void)
{
    int len;
    int i;
    int val;
    struct Node * pHead; // 定义了一个struct Node * 类型的指针变量 
    pHead= (struct Node *)malloc(sizeof(struct Node)); // 生成一个struct Node 类型节点，并用pHead指向它
    if (NULL == pHead)
    {
        printf("分配失败，程序终止！\n");
        exit(-1);
    }
    struct Node * pTail = pHead;
    pTail->pNext=NULL;
    printf("请输入您需要生成的链表节点的个数：len = ");
    scanf("%d",&len);
    for (i=0;i<len;i++)
    {
        printf("请输入第%d个节点的值：",i+1);
        scanf("%d",&val);
        struct Node * pNew = (struct Node *)malloc(sizeof(struct Node));
        if (NULL == pNew)
        {
            printf("分配失败，程序终止！\n");
            exit(-1);

        }
        pNew->data=val;
        pTail->pNext=pNew;
        pNew->pNext=NULL;
        pTail=pNew;
    }
    return pHead; // 返回所造的头结点地址
}
// 将链表输出
void traverse_list(struct Node * pHead)
{
    struct Node * p;
    p=pHead->pNext; // pHead->pNext也是struct Node *类型 ,pHead->pNext 等价于 *(pHead).pNext
                                        // pHead->pNext保存的是首节点的地址,所以p也指向首节点
    while (p != NULL)
    {
        printf("%d\n",p->data);
        p=p->pNext; // p->Next保存下一个节点的地址，所以p指向下一个节点
    }
    return;
}