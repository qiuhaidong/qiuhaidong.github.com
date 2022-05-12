#include <iostream>
using namespace std;
int main()
{
	//http://www.dooccn.com/cpp/
	float length,width,number,wholeweight;
    cout << "    重量计算 " << endl;
    
	cin >> length; //长
	cin >> width; //宽
	cin >> wholeweight;
	cin >> number; //数量
	cout << "输入长度（cm）：" << length << endl;
	cout << "输入宽度（cm）：" << width << endl;
	cout << "输入整张板材重量（kg）：" << wholeweight << endl;
	cout << "输入数量 ：" << number << endl;
	cout << "1套/1张板材重量：" << 0.000033594*length*width*wholeweight << endl;
	cout << number <<"套/张板材，总重量：" << 0.000033594*length*width*number*wholeweight << endl;
    return 0;
}