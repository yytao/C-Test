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
	
	cout << "平方：" << pow(10, 2) << endl;
	cout << "自然对数：" << log(10) << endl;
	cout << "平方根：" << sqrt(10) << endl;
	cout << "绝对值：" << abs(10) << endl;
	cout << "向下取整：" << floor(10.9) << endl;
	
	
	//随机数
	srand(time(NULL));
	cout << "随机数：" << rand()%10 << endl;
	cout << "随机数：" << rand()%100 << endl;
	
	
	
	
}
