#include <iostream>
#include <cstring>

using namespace std;

int main(){
	
	char str1[] = "WorldHello";
	char str2[] = "World";
	
	char *str3 = "Hello World";
	
	//�����ַ�������������ַ������ӵ�ǰһ�������ĺ��� 
	//strcat(str2, str1);
	
	//�Ƚ������ַ����������ͬ����0����� s1<s2 �򷵻�С�� 0����� s1>s2 �򷵻ش��� 0�� 
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
