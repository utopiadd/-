 #include <iostream>
using namespace std;
int main ()
{
int a=0 ;
int b=0;
int c=0;
//输入各个猪的体重 
cout << "请输入a猪的重量"  << endl;
cin>>a;
    cout << "a猪体重为" << a << endl;
    
    cout << "请输入b猪的重量"  << endl;
    cin >>b;
    cout << "请输入c猪的重量"  << endl;
    cin >>c;
    
     cout << "a猪体重为" << a << endl;
     cout << "b猪体重为" << b << endl;
      cout << "c猪体重为" << c << endl;
    //接下来开始进行比较
    //a大于b且大于c 为最重
	 
if (a>b)
{ if (a>c)
   {cout << "a猪为最重" << endl;
	
   }
} //a< b  b>c时  b猪最重 
 else {
 	if (b>c){
	 
 	cout << "b猪为最重" << endl;
 	
//a<b 且 b<c时  c猪为最重 
 }
 else {
 	cout << "c猪最重" << endl;
 }
 }
 
	
 
   system ("pause");

   return 0;
}
