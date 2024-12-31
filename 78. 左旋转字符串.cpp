class Solution {
public:
    string leftRotateString(string str, int n) {
        string str1,str2;
        	str1=str.substr(0,n);
        	str2=str.substr(n);
		return str2+str1;
    }
};
