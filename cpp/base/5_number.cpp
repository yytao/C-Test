#include <iostream> 
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

float randf(float lo, float hi) { 
    float random = ((float) rand())/(float) RAND_MAX; 
    float diff = hi - lo; 
    float r = random * diff; 
    return lo + r; 
} 

int main(){
	short	s;
	int		i;
	long	l;
	float	f;
	double	d;
	
	s = 10;
	i = 1000;
	l = 10000000;
	f = 230.47f;
	d = 30949.374;
	
	cout << "ƽ����" << pow(10, 2) << endl;
	cout << "��Ȼ������" << log(10) << endl;
	cout << "ƽ������" << sqrt(10) << endl;
	cout << "����ֵ��" << abs(10) << endl;
	cout << "����ȡ����" << floor(10.9) << endl;
	
	
	//�����
	srand(time(NULL));
	cout << "�������" << rand()%10 << endl;
	cout << "�������" << rand()%100 << endl;
	
	
	
	
}
