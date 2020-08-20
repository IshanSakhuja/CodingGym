//https://leetcode.com/problems/valid-parentheses/submissions/
struct Stack{
	char temp[100000];
	int index;
	Stack()
	{
		index = -1;
	}
	void push(char value)
	{
		index = index + 1;
		temp[index] = value;
	}
	char pop()
	{
        if(index < 0)
            return 'm';
		char ishan = temp[index];
		--index;
		return ishan;
	}
    bool Stacksize()
    {
        if(index >= 0)
            return true;
        else 
            return false;
    }
};
    bool isValid(string str) {
        Stack ishan;
        char kk;
	for(int i=0;i<str.size();i++)
	{
		if(str[i] == '(' || str[i] == '[' || str[i] == '{')
			ishan.push(str[i]);
		else{
			kk = ishan.pop();
            if(kk == 'm')
                return false;
			if(kk == '(' && str[i] != ')')
                return false;
			else if(kk == '{' && str[i] != '}')
                return false;
			else if(kk == '[' && str[i] != ']')
			    return false;
		}
	}
    if(ishan.Stacksize())
        return false;
	return true;
    }
