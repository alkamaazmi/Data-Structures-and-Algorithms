/*
 * Sort a Stack
 */

 void insert(stack<int> &stack,int x){
	if(stack.empty() || stack.top()<x){
		stack.push(x);
		return;
	}
	int num=stack.top();
	stack.pop();
    insert(stack,x);
	stack.push(num);
	
}
void sortStack(stack<int> &stack)
{
	if(stack.empty()){
		return;
	}
	int n=stack.top();
	stack.pop();

	sortStack(stack);

	insert(stack,n);
}