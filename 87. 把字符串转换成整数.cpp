class Solution {
public:
    int strToInt(string str) {
        
        int sb=1;
        int i=0;
        while(i<str.size()&&str[i]==' '){
        	i++;
		}
		if (i<str.size()&&(str[i]=='+'||str[i]=='-')){
            sb=(str[i]=='-')?-1:1;
            i++;
        }
		
		long long res=0;
		
		while(i<str.size()&&str[i]>='0'&&str[i]<='9'){
		res=res*10+sb*(str[i]-'0');
		if (res< INT_MIN) 
		return INT_MIN;
        if (res> INT_MAX) 
		return INT_MAX;
		i++;
		}
		return res;
    }
};
