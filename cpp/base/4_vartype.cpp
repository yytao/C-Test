#include <iostream>
using namespace std;

extern int e;
extern float f;

//������������ʵ����ǰ�����������߱���������ô��������ʵ�ʶ���������κεط�����
int sum();

int main()
{
	/**
	 * 1��C++��������
	 * ������������
	 * �������ͣ�ö�١�ָ�롢���顢���á����ݽṹ
	 */

	int a, b, c;
	int d = 3;

	cout << a << endl;	//û�и���ʼֵ�Ļ��������Ԥ�벻��������
	cout << d << endl;

	/**
	 * 2��C++�еı�������
	 * extern �ؼ���
	 * 
	 */
	int e = 1;
	float f = 2.2;

	cout << e << endl;
	cout << f << endl;

	e = sum();
	cout << e << endl;

	/**
	 * 3��C++�е���ֵ��Lvalues������ֵ��Rvalues��
	 * ��ֵ��ָ���ڴ��ַλ�õı���ʽ����Ϊ��ֵ����ʽ����ֵ���Գ����ڸ�ֵ�ŵ���߻��ұ�
	 * ��ֵ��������ֵָ���Ǵ洢���ڴ���ĳЩ��ַ��ֵ����ֵ�ǲ��ܶ�����и�ֵ�ı���ʽ����ֵ���Գ����ڸ�ֵ�ŵ��ұߣ������ܳ��������
	 * 
	 */
	int g = 20;
	

	




}

int sum()
{
	return 10;
}