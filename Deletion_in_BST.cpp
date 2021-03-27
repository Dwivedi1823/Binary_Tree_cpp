#Finding INORDER_SUCCESSOR 

node * minValueNode(node * temp)
{
	node * current=temp;
	while(current && current->lchild != NULL)
		current=current->lchild;
	return current;
}


#Deletion opeation
node * deletenode(node *root,int key)
{
	if(root==NULL)
		return root;

	if(key<root->data)
		root->lchild=deletenode(root->lchild,key);
	else if(key>root->data)
		root->rchild=deletenode(root->rchild,key);
	else
	{
		if(root->lchild==NULL)
		{
			node *temp=root->rchild;
			delete root;
			return temp;
		}
		else if(root->rchild==NULL)
		{
			node *temp=root->lchild;
			delete root;
			return temp;
		}

		node *temp=minValueNode(root->rchild);

		root->data=temp->data;

		root->rchild=deletenode(root->rchild,temp->data);

	}
	return root;
}
