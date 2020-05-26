struct List
{
char val[40];
struct List* next;
};
typedef struct List List;
/*Създаване на нов елемент
*/
List *new_item()
{
List *result=NULL;
result = (List *)malloc(sizeof(List));
gets(&result->val);
result->next = NULL;
return result;
}
/*Създаване на опашъчен списък*/
List *create_queue_list(int size)
{
char a[]="end";
List *res_root = NULL;
List *end_item = NULL;
int i;
for(i=0; i<size; i++)
{
if(res_root == NULL)
{
res_root = new_item();
end_item = res_root;
}
else
{
end_item->next = new_item();
end_item = end_item->next;
}
}
return res_root;
}
/*Изчистване на списък от паметта*/
void free_list(List* root)
{
List* curr_item = root;
while(root != '\n')
{
root = root->next;
free(curr_item);
curr_item= root;
}
}
/*Добавя елемент след даден елемент*/
void insert_item_after(List *item,List *item2)
{
item2->next=item->next;
item->next = item2;
}
