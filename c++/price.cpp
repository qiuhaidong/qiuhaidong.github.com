#include <iostream>
using namespace std;
int main()
{
	//http://www.dooccn.com/cpp/
	float length,width,number;
	float boardcost,boardprice,sumboardprice;
	float papercost,paperprice,sumpaperprice;
	float multiple;
	//板材
    cout << "    板材 " <<endl;
    
	cin >> length; //长
	cin >> width; //宽
	cin >> boardcost; //板材成本 
	cin >> multiple;//倍数
	cin >> number; //数量
	cout << "输入长度（cm）：" << length << endl;
	cout << "输入宽度（cm）：" << width << endl;
	cout << "输入板材成本（元）：" << boardcost << endl;
	cout << "输入倍数：" << multiple << endl;
	cout << "输入数量：" << number << endl << endl;
	boardprice = 0.00003472*length*width*boardcost*multiple;
	sumboardprice = boardprice*number;
	cout << "板材单价（元）：" << boardprice << endl;
	cout << "板材总价（元）：" << sumboardprice << endl;
	
	// 海报 
	cout << endl << "    海报  " << endl;
	
	cin >> papercost;  //输入海报或UV成本
	cout << "输入海报或UV成本（元）：" << papercost << endl;
	cout << "数量：" << number << endl << endl;
    paperprice = 0.0001*length*width*papercost;
    cout << "海报/UV打印 单价（元）：" << paperprice << endl;
    sumpaperprice = paperprice*number;
    cout << "海报/UV打印 总价（元）：" << sumpaperprice <<endl;
    
    //总价
    cout << endl <<"    总价" << endl;
    cout << "板材+海报/UV的单价（元）：" << boardprice + paperprice << endl;
    cout << "板材+海报/UV的总价（元）：" << sumboardprice + sumpaperprice << endl;
    return 0;
}