//#include <iostream>
//using namespace std;
//#include <string>
//void selectnum(int* a, int* b, int* c) {
//	//a>b��ǰ����
//	if (*a > *b) {
//		if (*a > *c) {
//			if (*b < *c) {
//			cout << *b << ',' << *c << ',' << *a << endl;
//			}
//			else cout << *c << ',' << *b << ',' << *a;
//		}
//		else cout << *b << ',' << *a << ',' << *c;
//	}
//	//a<b��ǰ����
//	else {
//		if(*b<*c)
//			cout << *a << ',' << *b << ',' << *c;
//		if(*c<*a&&*c<*b)
//			cout << *c << ',' << *a << ',' << *b;
//		if(*a<*c&&*c<*b)
//			cout << *a << ',' << *c << ',' << *b;
//	}
//}
//
//void select(string a1, string  b1, string  c1) {
//	//a>b��ǰ����
//	int a,  b,  c;
//	a=a1.length(); b = b1.length(); c = c1.length();
//	if (a > b) {
//		if (a > c) {
//			if (b <c) {
//				cout << b1 << ',' << c1 << ',' << a1<< endl;
//			}
//			else cout << c1 << ',' << b1 << ',' << a1;
//		}
//		else cout << b1 << ',' << a1 << ',' << c1;
//	}
//	//a<b��ǰ����
//	else {
//		if (b < c)
//			cout << a1 << ',' << b1 << ',' << c1;
//		if (c < a && c < b)
//			cout << c1 << ',' <<a1 << ',' << b1;
//		if (a < c && c < b)
//			cout << a1 << ',' << c1 << ',' << b1;
//	}
//}
//int main() {
//	int a, b, c, *p1, * p2, * p3;
//	cout << "��������������" << endl;
//	cin >> a >> b >>c;
//	p1 = &a; p2 = &b; p3 = &c;
//
//	selectnum(p1,p2 ,p3 );
//	string a1, b1, c1;
//	cout << "�������ַ���" << endl;
//	cin >> a1 >> b1 >> c1;
//	select(a1, b1, c1);
//
//}
