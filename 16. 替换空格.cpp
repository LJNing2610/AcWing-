class Solution {
public:
    string replaceSpaces(string &str) {
		int a=str.size();
		string res;
		for(int i=0;i<a;i++){
			if(str[i]==' ')
			res+="%20";
			else
			res+=str[i];
		}    
		return res;
    }
};
