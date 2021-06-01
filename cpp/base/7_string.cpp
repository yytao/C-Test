#include <iostream>
#include <cstring>

using namespace std;

int main(){
	
	char str1[] = "WorldHello";
	char str2[] = "World";
	
	char *str3 = "Hello World";
	
	//连接字符串，将后面的字符串连接到前一个参数的后面 
	//strcat(str2, str1);
	
	//比较两个字符串，如果相同返回0，如果 s1<s2 则返回小于 0；如果 s1>s2 则返回大于 0。 
	int rtnCmp = strcmp(str1, str2);
	char *rtnChr = strchr(str1, 'd');
	
	
	const char str4[] = "http://www.baidu.com";
	const char str5[] = "www";
	
	char *ret;
	ret = strstr(str4, str5);
	
//	strcpy(str1, str2);
	str1[2] = 's';
	str1[0] = 0;	
	
	cout << ret;
	
}
