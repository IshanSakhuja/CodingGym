//https://leetcode.com/problems/letter-combinations-of-a-phone-number/submissions/
vector<string> mainstring;
    map<char,string> map1;
    vector<string> letterCombinations(string str){
        if(str.size() == 0)
            return mainstring;
	    map1['2'] = "abc";
	    map1['3'] = "def";
        map1['4'] = "ghi";
        map1['5'] = "jkl";
        map1['6'] = "mno";
        map1['7'] = "pqrs";
        map1['8'] = "tuv";
        map1['9'] = "wxyz";
	    string tempstring;
	    ishan(str,0,tempstring);
	    return mainstring;
    }
    void ishan(string str,int index,string tempstring)
    {
	    if(index == str.size())
	    {
		    mainstring.push_back(tempstring);
		    return;
	    }
	    string str1 = map1[str[index]];
	    for(int i=0;i<str1.size();i++)
	    {
		    string kk = tempstring;
		    kk += str1[i];
		    ishan(str,index+1,kk);
	    }
    }