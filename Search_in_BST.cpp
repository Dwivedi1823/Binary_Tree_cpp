#Iterative_search

int search(node *t,int key)
{
	while(t!=NULL)
	{
		if(key==t->data)
		{
			cout<<"Key found: "<<key;
			return 0;
		}
		else if (key<t->data)
		{
			t=t->lchild;
		}
		else
		{
			t=t->rchild;
		}
	}
	cout<<"key Not found"<<endl;
	return 0;
}

#Recursive_search

int Rsearch(node *t,int key)
{
	if(t==NULL)
	{
		cout<<"Not found "<<endl;
		return 0;
	}
	if(t->data==key)
	{
		cout<<"Key found: "<<key<<endl;
		return 0;
	}
	else if(key<t->data)
		return Rsearch(t=t->lchild);
	else
		return Rsearch(t=t->rchild);
}
