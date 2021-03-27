#Inorder_Traversal
void Display(node *root)
{
	if(root)
	{
		Display(root->lchild);
		cout<<root->data<<" ";
		Display(root->rchild);
	}
}
