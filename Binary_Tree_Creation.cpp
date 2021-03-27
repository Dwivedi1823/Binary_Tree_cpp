node* create()
{
	node *newnode=new node();
	int  val;
	cin>>val;
	newnode->lchild=newnode->rchild=NULL;

	if(val==-1)
		return 0;
	newnode->data=val;

	cout<<"Enter the left child of "<<newnode->data<<" : ";
	newnode->lchild=create();
	cout<<"Enter the right child of "<<newnode->data<<" : ";
	newnode->rchild=create(); 

	return newnode;

}
