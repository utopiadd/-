#include<iostream>
using namespace std;
class Tree {
private:
	int ages;//树龄
public:
	//对树龄初始化为0，代表未生长时间的树龄
	Tree() {
		ages = 0;
	}
	//成员函数grow增加树龄
	void grow(int years) {
		ages += years;
	}
	//返回树龄的值
	int age() {
		return ages;
	}
};
int main() {
	Tree tree;
	cout << "树的初始树龄为" << tree.age() << endl;
	tree.grow(6);
	cout << "树木生长了6年后的树龄为" << tree.age() << endl;
}