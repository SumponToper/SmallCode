#include<iostream>
#include<ctime>
#include<stdlib.h>
#include<windows.h>

using namespace std;

int cz(int n,int jbc)
{
	cin >> n;
	if(n == 10)
	jbc += 1000;	
	if(n == 30)
	jbc += 3333;
	if(n == 50)
	jbc += 5555;
	if(n == 100)
	jbc += 12345; 
	return jbc;
}


int cho, nt, jbc, jifen;


int main()
{
	int z, y, sum = 0;
	int a = 0, c, d = 100, x = 1, jb = 100, n;
	long long tsy = 1, czzd = 1, fh = 1;
	int b;
	cout <<"  ����������(��ʼ������ 6)"<< endl;
	cin >> a;
	system("cls");
if(a==6)
{
	cout<<"_____________________________________________________________________________________________"<<endl;
	cout<<"|  ��Ϸ��:����ը��                                                                          |"<<endl;
	cout<<"|  ��Ϸ����:�����������ը����һ�����Դݻ����,���Ա�͸������쵽,�������ը��������ˣ�    |"<<endl;
	cout<<"|          һ�����Դݻٹ���,���ɱ�͸������쵽�����������ը�����Ӯ�ˣ��������������ʾ    |"<<endl;
	cout<<"|          ����Ҳ���Ի��10���$                                                            |"<<endl;
	cout<<"|          ÿӮһ�־ͻ��50���$�����$���������Ŷ                                         |"<<endl;
	cout<<"|  ��������:1.͸���ۣ����Բ鿴�������Ƿ���ը����                                            |"<<endl;
	cout<<"|           2.����ը������������ը����λ�á�                                                |"<<endl;
	cout<<"|           3.ʱ�ջ����������������һ����Χ�²�ը����                                      |"<<endl;
	cout<<"|  ��ܰ��ʾ:С������Ҫ����ʹ�õ��߲Ż�ʤ���ޣ������Խ�һ��Ҫע�����ʹ�õ�˳��            |"<<endl;
	cout<<"|  ע��:����Ϸû�д浵��¼���ر�֮��浵�ͻ������ޣ�                                        |"<<endl;
	cout<<"|___________________________________________________________________________________________|"<<endl<<endl<<endl;
	
	
	for(;;)
	{
		srand(time(0));
		c = rand()%100;

		cout<<"  ----------------------*����Ҫ��ʲô*-----------------------"<<endl;
		cout<<"  |����1������Ϸ������2�鿴�˺�,����3�����̵꣬����4�˳���Ϸ|"<<endl;
		cout<<"  -----------------------------------------------------------"<<endl;
		cin>>n;
		system("cls");
		
		
if(n == 1)
{
	cout<<"����ը����ʼ������"<<endl;b=1;
	for(;;)
	{
		cout<<x<<'~'<<d<<endl;
		cout<<"����1�������֣�����2ʹ�õ���"<<endl;
		cin>>n;
		system("cls");
		if(n==1)
		{
			cout<<"������"<<x<<'~'<<d<<"���� "<<endl;
 			cin>>b;
 			system("cls");
		}
		if(n==2)
		{
			cout<<"___________________________________________________________________"<<endl;
			cout<<"����͸����"<<tsy<<endl;
			cout<<"��������ը��"<<czzd<<endl;
			cout<<"����ʱ�ջ�"<<fh<<endl;
			cout<<"����1ʹ��͸����,����2ʹ������ը��,����0ʹ��ʱ�ջ�,����3�˳�"<<endl;
			cout<<"___________________________________________________________________"<<endl<<endl;
			cin>>n;
			if(n==1)
			{
				if(tsy>0)
				{
					cout<<"������Ҫ͸�ӵ���"<<endl;
					cin>>n;
					system("cls");
					if(n==c)
					{
						cout << n <<"��ը��"<< endl;tsy --;
					}
					else
						cout << n <<"����ը��"<< endl;tsy --;
				}
				else
				{	
					cout <<"��û��͸����"<< endl;
				}
			}
			if(n == 2)
			{
				if(czzd > 0)
				{
					srand(time(0));
					c =rand()%100;
					cout <<"ը��������"<< endl;
					czzd --;
					x = 1;d = 100;
				}
				else
				{
					cout <<"��û������ը��"<< endl;
				}
			}
			if(n == 0)
			{
					if(fh > 0)
				{
					srand(time(0));
					c = rand()%100;
					cout <<"ʱ�մ���"<< endl;
					fh --;
					srand(time(0));
					x = c - rand()%10;d = c + rand()%10;
					x --;d ++;
				}
				else
					cout <<"��û��ʱ�ջ�"<< endl;
			}
		}		
	if(n == 1)
		if(b == c)
		{
			int ac, bc;
			int h;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY |
			FOREGROUND_RED);
			cout <<"�����ˣ�������Ϸ����������10���"<< endl;
			jb += 10;
			cout << "����Ҫ���ܳͷ��ޣ�������������Ի��20����ޣ�" << endl;
			srand(time(0));   //�������㼸�أ��������ѭ����� 
			ac = rand()%100;
			bc = rand()%100;
			sum = ac + bc;
			cout << "�����" << ac << " + " << bc << " = ";
			cin >> h;
			if(h == sum)
			{
				cout<<"��ϲ��������������20��ң�"<<endl; 
				jb += 20;
			}
			else
				cout << "�ش����" << endl;
			break; 
		}
		if(b <= x || b >= d)
		{
			cout << "�������������ּ�����" << endl;
			cin >> b;
			system("cls");
		}
		if(b<d&&b>c)
		{
			d=b;
			cout<<"���������"<<endl;
		}
		if(b>x&&b<c)
		{
			x=b;
			cout<<"���������"<<endl;
		}
		if(x+1==c&&d-1==c)
		{
			cout<<"��Ӯ�ˣ�����������50��� "<<endl;
			jb+=50;
			break;
		}
	}
}

if(n==2)
{
	cout<<"__________________________________"<<endl;
	cout<<"��������"<<jb<<"���            "<<endl;	   //��ҿ��Զһ����� 
	cout<<"��������"<<jifen<<"����         "<<endl;    // ���ֿ����������ֹ���γ� 
	cout<<"��������"<<tsy<<"͸����         "<<endl;
	cout<<"��������"<<czzd<<"����ը��      "<<endl;
	cout<<"��������"<<fh<<"ʱ���          "<<endl;
	cout<<"_________________________________"<<endl<<endl;
}

if(n==3)
{
	cout<<"._______________________________________________________________________________________________."<<endl;
	cout<<"|                                             @�̵�@                                            |"<<endl;
	cout<<"         	                         ��������"<< jb <<"���                                     "<<endl;
	cout<<"                                      ��������"<< jifen <<"����                                  "<<endl;                                                          
	cout<<"|  ����1����͸���ۣ�100��ң�,����2��������ը��(150���)������0����ʱ�ջ���200��ң�������3�˳� |"<<endl;
	cout<<"|  ��Ҷһ���10000��� = 1���֣�                                                                |"<<endl;
	cout<<"|          ��30000��� = 3���֣�                                                                |"<<endl;
	cout<<"|           (50000��� = 5���֣��Դ�����                        ע�����ֿ��Թ���ò�Ʒ�Ľ�ѧ�γ�|"<<endl; 
	cout<<"|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~��ִ�˦��~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|"<<endl;
	cout<<"|_______________________________________________________________________________________________|"<<endl<<endl;	 
	
	cin>>n;
	
	if(n==1)
	{
		if(jb>=100)
		{
			tsy++;jb-=100;
			cout<<"��������1͸���ۣ���������"<<tsy<<"��͸����"<<endl<<endl;
		}
		
		else
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY |
			FOREGROUND_RED);
			cout<<"�����û���㹻�Ľ��"<<endl;
			cout<<"�Ƿ���Ҫ��ֵ��(��1���г�ֵ����2ȡ����ֵ)"<<endl;
			
			cin >> cho;
			system("cls");
			if(cho == 1)	
			{
				cout <<"��ѡ���ֵ���"<< endl;
				cout <<"10Ԫ�� �ɻ��  1000  ���"<<endl;
				cout <<"30Ԫ�� �ɻ��  3333  ���"<<endl;
				cout <<"50Ԫ�� �ɻ��  5555  ���"<<endl;
				cout <<"100Ԫ���ɻ��  12345 ���"<<endl;
				jbc = jb; 
				jb = cz(nt, jbc); 
				cout << "��ֵ�ɹ�" << endl; 
			} 
			else if(cho == 2)
			cout << "ȡ����ֵ" <<endl;	
			
			
			cout << "�Ƿ���н�Ҷһ���(��1���жһ�����2ȡ���һ�)" <<endl;
			int huan; 
			cin >> huan;
			system("cls");
			if(huan == 1)	
			{
				int jbd;
				cout <<"��ѡ��һ���10000�ı�����"<< endl;
				cout <<"10000��ң� �ɶһ�  1  ����"<<endl;
				cout <<"30000��ң� �ɶһ�  3  ����"<<endl;
				cout <<"50000��ң� �ɶһ�  5  ����"<<endl;
				cout <<"100000��ң��ɻ��  10 ����"<<endl;
				cin >> jbd; 
				if(jbd % 10000 == 0 && jb >= jbd)
				{
					if(jbd == 10000)
					{
						jb -= jbd;
						jifen += 1;
					}
					if(jbd == 30000)
					{
						jb -= jbd;
						jifen += 3;
					}
					if(jbd == 50000)
					{
						jb -= jbd;
						jifen += 5;
					}
					if(jbd == 100000)
					{
						jb -= jbd;
						jifen += 10;
					}
					cout << "�һ��ɹ�" << endl;
					cout << "��ǰ����Ϊ"<< jifen << endl;
				} 
				else
				cout << "�һ���������岻��" <<endl; 
				 
			} 
			else if(cho == 2)
			cout << "ȡ���һ�" <<endl;	 
	}
	
	
	if(n==2)
	{
		if(jb>=150) 
		{
			czzd++;jb-=150;
			cout<<"��������1����ը������������"<<czzd<<"������ը��";
		}
		else
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY |
			FOREGROUND_GREEN);
			cout<<"��û���㹻�Ľ��"<<endl;	
			cout<<"�Ƿ���Ҫ��ֵ��(��1���г�ֵ����2ȡ����ֵ)"<<endl;
			
			cin >> cho;
			system("cls");
			if(cho == 1)	
			{
				cout <<"��ѡ���ֵ���"<< endl;
				cout <<"10Ԫ�� �ɻ��  1000  ���"<<endl;
				cout <<"30Ԫ�� �ɻ��  3333  ���"<<endl;
				cout <<"50Ԫ�� �ɻ��  5555  ���"<<endl;
				cout <<"100Ԫ���ɻ��  12345 ���"<<endl;
				jbc = jb; 
				jb = cz(nt, jbc); 
				cout << "��ֵ�ɹ�" << endl;
			} 
			else if(cho == 2)
			cout << "ȡ����ֵ" <<endl;	
	}
	
	if(n==0)
	{
		if(jb>=200)
		{
			fh++;jb-=200;
			cout<<"��������1ʱ�������������"<<fh<<"��ʱ���";
		}
		else
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY |
			FOREGROUND_GREEN);
			cout<<"��û���㹻�Ľ��"<<endl;
			cout<<"��û���㹻�Ľ��"<<endl;
			cout<<"�Ƿ���Ҫ��ֵ��(��1���г�ֵ����2ȡ����ֵ)"<<endl;
			
			cin >> cho;
			system("cls");
			if(cho == 1)	
			{
				cout <<"��ѡ���ֵ���"<< endl;
				cout <<"10Ԫ�� �ɻ��  1000  ���"<<endl;
				cout <<"30Ԫ�� �ɻ��  3333  ���"<<endl;
				cout <<"50Ԫ�� �ɻ��  5555  ���"<<endl;
				cout <<"100Ԫ���ɻ��  12345 ���"<<endl;
				jbc = jb; 
				jb = cz(nt, jbc); 
				cout << "��ֵ�ɹ�" << endl;
			} 
			else if(cho == 2)
			cout << "ȡ����ֵ" <<endl;
		}
	}
	
	if(n==4)
	{
		cout<<"�����˳�"<<endl;
		break;
	}
	cout<<"���ʼ����𣿣�����1����������0�˳���"<<endl;
	cin>>b;
	system("cls");
	
	if(b==0)
	{
		cout<<"�����˳�"<<endl;
		break;
	}
		d=100;
		x=1;
	}
}

	else
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY |
		FOREGROUND_RED);
		cout <<"�������"<< endl;
		cout<<"�����˳�"<<endl;
	} 
	
	cout<<"3"<<endl; Sleep(1000);
	cout<<"2"<<endl; Sleep(1000);
	cout<<"1"<<endl; Sleep(1000);
	system("pause");
	
	system("cls");
	
	return 0;
}

