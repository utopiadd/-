//#include <iostream>
//using namespace std;
//class Rectangle {
//public:
//	//����x1
//	void setx1(int x1) {
//		m_x1 =x1 ;
//	}
//	//��ȡx1
//	int getx1() {
//		return m_x1;
//	}
//	//����x2
//	void setx2(int x2) {
//		m_x2 = x2;
//	}
//	//��ȡx2
//	int getx2() {
//		return m_x2;
//	}
//	//����y1
//	void sety1(int y1) {
//		m_y1 = y1;
//	}
//	//��ȡy1
//	int gety1() {
//		return m_y1;
//	}
//	//����y2
//	void sety2(int y2) {
//		m_y2 = y2;
//	}
//	//��ȡy2
//	int gety2() {
//		return m_y2;
//	}
//	//��ȡ���ε������
//	int calculateS() {
//		return (m_x2 - m_x1) * (m_y2 -m_y1);
//	}
//	//�������ԣ�����������
//private:
//	int m_x1;
//	int m_y1;
//	int m_x2;
//	int m_y2;
//};
//int main() {
//	Rectangle a1;
//		cout << "������������½ǵ������" << endl;
//		//�������½Ǻ����½ǵ������
//		a1.setx1(0); a1.sety1(0);
//		a1.setx2(5); a1.sety2(7);
//		cout << "���½ǵĵ�����Ϊ(" << a1.getx1() << ',' << a1.gety1() << ')' << endl;
//		cout << "���Ͻǵĵ�����Ϊ(" << a1.getx2() << ',' << a1.gety2() << ')' << endl;
//		cout << "���ε����Ϊ" << a1.calculateS() << endl;
//
//
//
//}