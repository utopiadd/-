//#include <iostream>
//using namespace std;
//class Rectangle {
//public:
//	//设置x1
//	void setx1(int x1) {
//		m_x1 =x1 ;
//	}
//	//获取x1
//	int getx1() {
//		return m_x1;
//	}
//	//设置x2
//	void setx2(int x2) {
//		m_x2 = x2;
//	}
//	//获取x2
//	int getx2() {
//		return m_x2;
//	}
//	//设置y1
//	void sety1(int y1) {
//		m_y1 = y1;
//	}
//	//获取y1
//	int gety1() {
//		return m_y1;
//	}
//	//设置y2
//	void sety2(int y2) {
//		m_y2 = y2;
//	}
//	//获取y2
//	int gety2() {
//		return m_y2;
//	}
//	//获取矩形的面积：
//	int calculateS() {
//		return (m_x2 - m_x1) * (m_y2 -m_y1);
//	}
//	//设置属性，各个点坐标
//private:
//	int m_x1;
//	int m_y1;
//	int m_x2;
//	int m_y2;
//};
//int main() {
//	Rectangle a1;
//		cout << "请输入矩形左下角点的坐标" << endl;
//		//设置左下角和右下角点的坐标
//		a1.setx1(0); a1.sety1(0);
//		a1.setx2(5); a1.sety2(7);
//		cout << "左下角的点坐标为(" << a1.getx1() << ',' << a1.gety1() << ')' << endl;
//		cout << "右上角的点坐标为(" << a1.getx2() << ',' << a1.gety2() << ')' << endl;
//		cout << "矩形的面积为" << a1.calculateS() << endl;
//
//
//
//}