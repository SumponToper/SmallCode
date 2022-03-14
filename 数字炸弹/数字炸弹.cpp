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
	cout <<"  请输入密码(初始密码是 6)"<< endl;
	cin >> a;
	system("cls");
if(a==6)
{
	cout<<"_____________________________________________________________________________________________"<<endl;
	cout<<"|  游戏名:数字炸弹                                                                          |"<<endl;
	cout<<"|  游戏规则:随机生成两个炸弹，一个可以摧毁玩家,可以被透视眼侦察到,中了这个炸弹你就输了，    |"<<endl;
	cout<<"|          一个可以摧毁怪兽,不可被透视眼侦察到，但中了这个炸弹你就赢了，具体操作会有显示    |"<<endl;
	cout<<"|          输了也可以获得10金币$                                                            |"<<endl;
	cout<<"|          每赢一局就获得50金币$，金币$可以买道具哦                                         |"<<endl;
	cout<<"|  道具作用:1.透视眼：可以查看该数字是否是炸弹。                                            |"<<endl;
	cout<<"|           2.重置炸弹：可以重置炸弹的位置。                                                |"<<endl;
	cout<<"|           3.时空机：可以随机换到另一个范围猜测炸弹。                                      |"<<endl;
	cout<<"|  温馨提示:小朋友需要合理使用道具才会胜利噢！动动脑筋一定要注意道具使用的顺序！            |"<<endl;
	cout<<"|  注意:此游戏没有存档记录，关闭之后存档就会重置噢！                                        |"<<endl;
	cout<<"|___________________________________________________________________________________________|"<<endl<<endl<<endl;
	
	
	for(;;)
	{
		srand(time(0));
		c = rand()%100;

		cout<<"  ----------------------*你需要做什么*-----------------------"<<endl;
		cout<<"  |输入1进入游戏，输入2查看账号,输入3进入商店，输入4退出游戏|"<<endl;
		cout<<"  -----------------------------------------------------------"<<endl;
		cin>>n;
		system("cls");
		
		
if(n == 1)
{
	cout<<"数字炸弹开始！！！"<<endl;b=1;
	for(;;)
	{
		cout<<x<<'~'<<d<<endl;
		cout<<"输入1输入数字，输入2使用道具"<<endl;
		cin>>n;
		system("cls");
		if(n==1)
		{
			cout<<"请输入"<<x<<'~'<<d<<"的数 "<<endl;
 			cin>>b;
 			system("cls");
		}
		if(n==2)
		{
			cout<<"___________________________________________________________________"<<endl;
			cout<<"您有透视眼"<<tsy<<endl;
			cout<<"您有重置炸弹"<<czzd<<endl;
			cout<<"您有时空机"<<fh<<endl;
			cout<<"输入1使用透视眼,输入2使用重置炸弹,输入0使用时空机,输入3退出"<<endl;
			cout<<"___________________________________________________________________"<<endl<<endl;
			cin>>n;
			if(n==1)
			{
				if(tsy>0)
				{
					cout<<"请输入要透视的数"<<endl;
					cin>>n;
					system("cls");
					if(n==c)
					{
						cout << n <<"是炸弹"<< endl;tsy --;
					}
					else
						cout << n <<"不是炸弹"<< endl;tsy --;
				}
				else
				{	
					cout <<"您没有透视眼"<< endl;
				}
			}
			if(n == 2)
			{
				if(czzd > 0)
				{
					srand(time(0));
					c =rand()%100;
					cout <<"炸弹已重置"<< endl;
					czzd --;
					x = 1;d = 100;
				}
				else
				{
					cout <<"您没有重置炸弹"<< endl;
				}
			}
			if(n == 0)
			{
					if(fh > 0)
				{
					srand(time(0));
					c = rand()%100;
					cout <<"时空穿梭！"<< endl;
					fh --;
					srand(time(0));
					x = c - rand()%10;d = c + rand()%10;
					x --;d ++;
				}
				else
					cout <<"您没有时空机"<< endl;
			}
		}		
	if(n == 1)
		if(b == c)
		{
			int ac, bc;
			int h;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY |
			FOREGROUND_RED);
			cout <<"你输了！！！游戏结束奖励你10金币"<< endl;
			jb += 10;
			cout << "你需要接受惩罚噢！如果做对啦可以获得20金币噢！" << endl;
			srand(time(0));   //如果想多算几回，可以添加循环语句 
			ac = rand()%100;
			bc = rand()%100;
			sum = ac + bc;
			cout << "请计算" << ac << " + " << bc << " = ";
			cin >> h;
			if(h == sum)
			{
				cout<<"恭喜你答对啦，奖励你20金币！"<<endl; 
				jb += 20;
			}
			else
				cout << "回答错误" << endl;
			break; 
		}
		if(b <= x || b >= d)
		{
			cout << "请输入任意数字继续。" << endl;
			cin >> b;
			system("cls");
		}
		if(b<d&&b>c)
		{
			d=b;
			cout<<"请继续输入"<<endl;
		}
		if(b>x&&b<c)
		{
			x=b;
			cout<<"请继续输入"<<endl;
		}
		if(x+1==c&&d-1==c)
		{
			cout<<"你赢了！！！奖励你50金币 "<<endl;
			jb+=50;
			break;
		}
	}
}

if(n==2)
{
	cout<<"__________________________________"<<endl;
	cout<<"您现在有"<<jb<<"金币            "<<endl;	   //金币可以兑换积分 
	cout<<"您现在有"<<jifen<<"积分         "<<endl;    // 积分可以用来抵现购买课程 
	cout<<"您现在有"<<tsy<<"透视眼         "<<endl;
	cout<<"您现在有"<<czzd<<"重置炸弹      "<<endl;
	cout<<"您现在有"<<fh<<"时光机          "<<endl;
	cout<<"_________________________________"<<endl<<endl;
}

if(n==3)
{
	cout<<"._______________________________________________________________________________________________."<<endl;
	cout<<"|                                             @商店@                                            |"<<endl;
	cout<<"         	                         您现在有"<< jb <<"金币                                     "<<endl;
	cout<<"                                      您现在有"<< jifen <<"积分                                  "<<endl;                                                          
	cout<<"|  输入1购买透视眼（100金币）,输入2购买重置炸弹(150金币)，输入0购买时空机（200金币），输入3退出 |"<<endl;
	cout<<"|  金币兑换（10000金币 = 1积分）                                                                |"<<endl;
	cout<<"|          （30000金币 = 3积分）                                                                |"<<endl;
	cout<<"|           (50000金币 = 5积分）以此类推                        注：积分可以购买该产品的教学课程|"<<endl; 
	cout<<"|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~清仓大甩卖~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|"<<endl;
	cout<<"|_______________________________________________________________________________________________|"<<endl<<endl;	 
	
	cin>>n;
	
	if(n==1)
	{
		if(jb>=100)
		{
			tsy++;jb-=100;
			cout<<"您购买了1透视眼，您现在有"<<tsy<<"个透视眼"<<endl<<endl;
		}
		
		else
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY |
			FOREGROUND_RED);
			cout<<"如果您没有足够的金币"<<endl;
			cout<<"是否需要充值？(按1进行充值，按2取消充值)"<<endl;
			
			cin >> cho;
			system("cls");
			if(cho == 1)	
			{
				cout <<"请选择充值面额"<< endl;
				cout <<"10元： 可获得  1000  金币"<<endl;
				cout <<"30元： 可获得  3333  金币"<<endl;
				cout <<"50元： 可获得  5555  金币"<<endl;
				cout <<"100元：可获得  12345 金币"<<endl;
				jbc = jb; 
				jb = cz(nt, jbc); 
				cout << "充值成功" << endl; 
			} 
			else if(cho == 2)
			cout << "取消充值" <<endl;	
			
			
			cout << "是否进行金币兑换？(按1进行兑换，按2取消兑换)" <<endl;
			int huan; 
			cin >> huan;
			system("cls");
			if(huan == 1)	
			{
				int jbd;
				cout <<"请选择兑换面额（10000的倍数）"<< endl;
				cout <<"10000金币： 可兑换  1  积分"<<endl;
				cout <<"30000金币： 可兑换  3  积分"<<endl;
				cout <<"50000金币： 可兑换  5  积分"<<endl;
				cout <<"100000金币：可获得  10 积分"<<endl;
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
					cout << "兑换成功" << endl;
					cout << "当前积分为"<< jifen << endl;
				} 
				else
				cout << "兑换数量与面板不符" <<endl; 
				 
			} 
			else if(cho == 2)
			cout << "取消兑换" <<endl;	 
	}
	
	
	if(n==2)
	{
		if(jb>=150) 
		{
			czzd++;jb-=150;
			cout<<"您购买了1重置炸弹，您现在有"<<czzd<<"个重置炸弹";
		}
		else
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY |
			FOREGROUND_GREEN);
			cout<<"您没有足够的金币"<<endl;	
			cout<<"是否需要充值？(按1进行充值，按2取消充值)"<<endl;
			
			cin >> cho;
			system("cls");
			if(cho == 1)	
			{
				cout <<"请选择充值面额"<< endl;
				cout <<"10元： 可获得  1000  金币"<<endl;
				cout <<"30元： 可获得  3333  金币"<<endl;
				cout <<"50元： 可获得  5555  金币"<<endl;
				cout <<"100元：可获得  12345 金币"<<endl;
				jbc = jb; 
				jb = cz(nt, jbc); 
				cout << "充值成功" << endl;
			} 
			else if(cho == 2)
			cout << "取消充值" <<endl;	
	}
	
	if(n==0)
	{
		if(jb>=200)
		{
			fh++;jb-=200;
			cout<<"您购买了1时光机，您现在有"<<fh<<"个时光机";
		}
		else
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY |
			FOREGROUND_GREEN);
			cout<<"您没有足够的金币"<<endl;
			cout<<"您没有足够的金币"<<endl;
			cout<<"是否需要充值？(按1进行充值，按2取消充值)"<<endl;
			
			cin >> cho;
			system("cls");
			if(cho == 1)	
			{
				cout <<"请选择充值面额"<< endl;
				cout <<"10元： 可获得  1000  金币"<<endl;
				cout <<"30元： 可获得  3333  金币"<<endl;
				cout <<"50元： 可获得  5555  金币"<<endl;
				cout <<"100元：可获得  12345 金币"<<endl;
				jbc = jb; 
				jb = cz(nt, jbc); 
				cout << "充值成功" << endl;
			} 
			else if(cho == 2)
			cout << "取消充值" <<endl;
		}
	}
	
	if(n==4)
	{
		cout<<"即将退出"<<endl;
		break;
	}
	cout<<"请问继续吗？（输入1继续，输入0退出）"<<endl;
	cin>>b;
	system("cls");
	
	if(b==0)
	{
		cout<<"即将退出"<<endl;
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
		cout <<"密码错误"<< endl;
		cout<<"即将退出"<<endl;
	} 
	
	cout<<"3"<<endl; Sleep(1000);
	cout<<"2"<<endl; Sleep(1000);
	cout<<"1"<<endl; Sleep(1000);
	system("pause");
	
	system("cls");
	
	return 0;
}

