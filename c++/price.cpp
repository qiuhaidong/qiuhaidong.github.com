#include <iostream>
using namespace std;
int main()
{
	//http://www.dooccn.com/cpp/
	float length,width,number;
	float boardcost,boardprice,sumboardprice;
	float papercost,paperprice,sumpaperprice;
	float multiple;
	//���
    cout << "    ��� " <<endl;
    
	cin >> length; //��
	cin >> width; //��
	cin >> boardcost; //��ĳɱ� 
	cin >> multiple;//����
	cin >> number; //����
	cout << "���볤�ȣ�cm����" << length << endl;
	cout << "�����ȣ�cm����" << width << endl;
	cout << "�����ĳɱ���Ԫ����" << boardcost << endl;
	cout << "���뱶����" << multiple << endl;
	cout << "����������" << number << endl << endl;
	boardprice = 0.00003472*length*width*boardcost*multiple;
	sumboardprice = boardprice*number;
	cout << "��ĵ��ۣ�Ԫ����" << boardprice << endl;
	cout << "����ܼۣ�Ԫ����" << sumboardprice << endl;
	
	// ���� 
	cout << endl << "    ����  " << endl;
	
	cin >> papercost;  //���뺣����UV�ɱ�
	cout << "���뺣����UV�ɱ���Ԫ����" << papercost << endl;
	cout << "������" << number << endl << endl;
    paperprice = 0.0001*length*width*papercost;
    cout << "����/UV��ӡ ���ۣ�Ԫ����" << paperprice << endl;
    sumpaperprice = paperprice*number;
    cout << "����/UV��ӡ �ܼۣ�Ԫ����" << sumpaperprice <<endl;
    
    //�ܼ�
    cout << endl <<"    �ܼ�" << endl;
    cout << "���+����/UV�ĵ��ۣ�Ԫ����" << boardprice + paperprice << endl;
    cout << "���+����/UV���ܼۣ�Ԫ����" << sumboardprice + sumpaperprice << endl;
    return 0;
}