#include <iostream>
using namespace std;
int main()
{
	// ����Ҫ��ǽ
	//http://www.dooccn.com/cpp/
	//http://www.dooccn.com/cpp/#id/5edfeedb26a095bb3e774893e209a69e
	float length,width,number,wholeweight;
    cout << "    �������� " << endl;
    
	cin >> length; //��
	cin >> width; //��
	cin >> wholeweight;
	cin >> number; //����
	cout << "���볤�ȣ�cm����" << length << endl;
	cout << "������ȣ�cm����" << width << endl;
	cout << "�������Ű��������kg����" << wholeweight << endl;
	cout << "�������� ��" << number << endl;
	cout << "1��/1�Ű��������" << 0.000033594*length*width*wholeweight << endl;
	cout << number <<"��/�Ű�ģ���������" << 0.000033594*length*width*number*wholeweight << endl;
    return 0;
}