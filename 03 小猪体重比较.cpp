 #include <iostream>
using namespace std;
int main ()
{
int a=0 ;
int b=0;
int c=0;
//�������������� 
cout << "������a�������"  << endl;
cin>>a;
    cout << "a������Ϊ" << a << endl;
    
    cout << "������b�������"  << endl;
    cin >>b;
    cout << "������c�������"  << endl;
    cin >>c;
    
     cout << "a������Ϊ" << a << endl;
     cout << "b������Ϊ" << b << endl;
      cout << "c������Ϊ" << c << endl;
    //��������ʼ���бȽ�
    //a����b�Ҵ���c Ϊ����
	 
if (a>b)
{ if (a>c)
   {cout << "a��Ϊ����" << endl;
	
   }
} //a< b  b>cʱ  b������ 
 else {
 	if (b>c){
	 
 	cout << "b��Ϊ����" << endl;
 	
//a<b �� b<cʱ  c��Ϊ���� 
 }
 else {
 	cout << "c������" << endl;
 }
 }
 
	
 
   system ("pause");

   return 0;
}
