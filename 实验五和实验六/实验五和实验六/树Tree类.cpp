#include<iostream>
using namespace std;
class Tree {
private:
	int ages;//����
public:
	//�������ʼ��Ϊ0������δ����ʱ�������
	Tree() {
		ages = 0;
	}
	//��Ա����grow��������
	void grow(int years) {
		ages += years;
	}
	//���������ֵ
	int age() {
		return ages;
	}
};
int main() {
	Tree tree;
	cout << "���ĳ�ʼ����Ϊ" << tree.age() << endl;
	tree.grow(6);
	cout << "��ľ������6��������Ϊ" << tree.age() << endl;
}