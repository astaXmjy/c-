#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node* left;
    node* right;
    node()=default;
    node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    };
 
};
   node* buildtree(node* root)
    {  cout<<"enter the data :";
    int data;
    cin>>data;
        root=new node(data);
        if (data==-1)
        {
            return NULL;
        }
        cout<<"Enter the data for inserting in left ";
        root->left=buildtree(root->left);
        cout<<"Enter the data for inserting in right";
        root->right=buildtree(root->right);
        return root;
    }
    int depth(node* root,int x)
    {
        if (root==NULL)
        {
            return -1;
        }
        int dist{-1};
        if (root->data==x || (dist=depth(root->left,x))>=0 || (dist=depth(root->right,x))>=0)
        {
            return dist+1;
        }
        return dist;
        
    }
    int height(node* root)
    {
        if (root==NULL)
        {
            return 0;
        }
        return max(height(root->left),height(root->right))+1;
    }

  void preorder(node* root)
  {
    if(root==NULL)
    {
        return ;
    }
    
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    
    
  }
  void current_lvl(node*root,int lvl)
  {
    if (root==NULL)
    {
        return ;
    }
    if (lvl==1)
    {
        cout<<root->data<<" ";
    }
    else if (lvl>1)
    {
        current_lvl(root->left,lvl-1);
        current_lvl(root->right,lvl-1);
    }
    
    
    
  }
  int size_of_tree(node* root)
  {
    if (root==NULL)
    {
        return 0;
    }
    return size_of_tree(root->left)+size_of_tree(root->right)+1;
    
  }

void lvl_order_rec1(node* root)
{
    queue<node*>q;
    q.push(root);
    while (q.empty()==false)
    {
        node* p=q.front();
        cout<<p->data<<" ";
        q.pop();
        if (p->left!=NULL)
        {
            lvl_order_rec1(p->left);
        }
        if (p->right!=NULL)
        {
            lvl_order_rec1(p->right);
        }
        

    }
    

}

int max_elem(node*root)
{
    int root_val,right,left,max=INT_MIN;
    if (root!=NULL)
    {
        root_val=root->data;
        left=max_elem(root->left);
        right=max_elem(root->right);
        if (left>right)
        {
            max=left;
        }
        else max=right;
        if (root_val>max)
        {
            max=root_val;
        }
        
        
    }
      return max;
    
}
int max_elem_using_lvl_order(node*root)
{
    int max =INT_MIN;
     queue<node*>q;
    q.push(root);
    while (q.empty()==false)
    {
        node* p=q.front();
        q.pop();
        if (max<p->data)
        {
            max=p->data;
        }
        
        if (p->left!=NULL)
        {
            q.push(p->left);
        }
        if (p->right!=NULL)
        {
            q.push(p->right);
        }
        

    }
    return max;

}node* CreateNode(int data)
{
    
    node* newNode = new node();
    if (!newNode) {
        cout << "Memory error\n";
        return NULL;
    }
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

node* insert_in_binary(node* root,int x)
{
    if (root==NULL)
    {
       root=buildtree(root);
       return root;
    
    }
    queue<node*>q;
    q.push(root);
    while (!q.empty())
    {
        node*temp=q.front();
        q.pop();
        if (temp->left!=NULL)
        {
             q.push(temp->left);
        }
        else
        {
            temp->left=CreateNode(x);
            return root;
        }
        if (temp->right!=NULL)
        {
            q.push(temp->right);
        }
        else
        {
            temp->right=CreateNode(x);
            return root;
        }
        
        

    }
    
    
}
int  size_of_binary_using_lvl_order(node* root)
{    int count;
    queue<node*>q;
    q.push(root);
    while (!q.empty())
    {
        node* temp=q.front();
        q.pop();
        count++;
        if (temp->left!=NULL)
        {
            q.push(temp->left);
        }
        if (temp->right!=NULL)
        {
            q.push(temp->right);
        }
        
    }

    return count;
    
}
void lvl_order_reverse(node* root)
{
    queue<node*>q;
    stack<node*>s;
    q.push(root);
    while (!q.empty())
    {
        node* temp=q.front();
        q.pop();
        if (temp->left!=NULL)
        {
            q.push(temp->left);
        }
        if (temp->right!=NULL)
        {
            q.push(temp->right);
        }
        s.push(temp);
        
    }
    while (!s.empty())
    {
        node* x=s.top();
        cout<<"\n"<<x->data<<" ";
        s.pop();

    }
    
}
void Delete_binary_tree(node*root)
{
    if (root==NULL)
    {
        return;
    }
    Delete_binary_tree(root->left);
    Delete_binary_tree(root->right);
    free(root);
}
int findheight(node* root)
{   int height;
 if (root==NULL)
 {
    return NULL;
 }
 
     queue<node*>q;
q.push(root),q.push(NULL);
while (!q.empty())
{
    node*p=q.front();
    q.pop();
    if (p==NULL)
    {
        height++;
    }
    if (p!=NULL)
    {
        if (p->left!=NULL)
        {
            q.push(p->left);
        }
        if (p->right!=NULL)
        {
            q.push(p->right);
        }
        
    }
   else if (!q.empty())
   {
     q.push(NULL);
   }
   
}

  return height;
}
int main()
{  
    node* root=NULL;
    root=buildtree(root);
          
             
   /*       2
          /   \
         4      5454
        /      /  \
       6      8    44
              
               
             
             
             */
 /*  cout<<height(root->left->left)<<"\n";         

int dep=depth(root,99);
cout<<dep; */
/*preorder(root);
cout<<"\n";
cout<<size_of_tree(root);
cout<<"\n";
for (int i = 1; i <=height(root); i++)
{
    current_lvl(root,i);
}
cout<<"\n";
lvl_order_rec1(root);
cout<<"\n";
cout<<max_elem_using_lvl_order(root);
insert_in_binary(root,7);
insert_in_binary(root,999);
preorder(root);
lvl_order_reverse(root);
Delete_binary_tree(root);*/
cout<<findheight(root);
    return 0;
}
