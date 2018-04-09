#include<iostream>
#include<string>
#include<vector>
#include<list>
#include<boost/shared_ptr.hpp>   //����shared_ptr���뵼���ͷ�ļ�
using namespace std;
int main()
{
	shared_ptr<string> p1;//shared_ptrָ��string
	shared_ptr<list<int>> p2; //shared_ptrָ��int���͵�list
	shared_ptr<int> p3=make_shared<int>(42);//ָ��һ��ֵΪ42��int��shared_ptr
	shared_ptr<string> p4=make_shared<string>(10,'9');//ָ��һ��ֵΪ'9999999999'��string
	shared_ptr<int> p5=make_shared<int>(0);
	cout<<p3<<endl;
	cout<<*p4<<endl;
	
	vector<string> v1;
	{//��������
		vector<string> v2={"a","an","the"};
		v1=v2; //��v2����Ԫ����v1
	}
	
	//new��̬����ͳ�ʼ������
	string *ps=new string;
	int *pi=new int;//piָ��δ��ʼ���Ķ���
	
	string *psv=new string(10,'9');
	int *piv=new int(1024);
	vector<int> *pv=new vector<int>{0,1,2,3,4,5,6,7,8,9};
	
	//auto�Զ��ƶ�����(����3�����ƶ�)
	auto po1=new auto(3);
	auto po2=new auto{'a','b','c'};
	
	//��̬����const
	const int *pci=new const int(1024);//�ù��������ڴ棬new���ʽ��ʧ��
	const string *pcs=new const string("hi");
	
	delete pi;// �ͷ��ڴ�
	delete piv;

	typedef int arrT[42];
	int *pa=new arrT;
	delete [] pa;//pa����ָ��һ����̬���������
	
	//����ָ��Ͷ�̬����
	unique_ptr<int[]> up(new int[10]);
	up.release(); //�Զ���delete []������ָ��
	

	cout << "hello" << endl;
}