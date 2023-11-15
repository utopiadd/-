//#include <iostream>
//
//// 定义链表的节点结构
//struct ListNode {
//    int value;       // 节点的值
//    ListNode* next;  // 指向下一个节点的指针
//
//    // 构造函数
//    ListNode(int val) : value(val), next(nullptr) {}
//};
//
//// 定义链表类
//class LinkedList {
//public:
//    ListNode* head;  // 指向链表头部的指针
//
//    // 构造函数
//    LinkedList() : head(nullptr) {}
//
//    // 在链表尾部添加一个新节点
//    void append(int value) {
//        if (!head) {
//            head = new ListNode(value);
//        }
//        else {
//            ListNode* temp = head;
//            while (temp->next) {
//                temp = temp->next;
//            }
//            temp->next = new ListNode(value);
//        }
//    }
//
//    // 顺序打印链表中的所有节点
//    void printList() const {
//        ListNode* temp = head;
//        while (temp) {
//            std::cout << temp->value << " ";
//            temp = temp->next;
//        }
//        std::cout << std::endl;
//    }
//
//    // 释放链表的所有节点
//    void freeList() {
//        ListNode* temp = head;
//        while (temp) {
//            ListNode* next = temp->next;
//            delete temp;
//            temp = next;
//        }
//        head = nullptr;
//    }
//
//    // 析构函数
//    ~LinkedList() {
//        freeList();
//    }
//
//private:
//    // 辅助函数：递归反向打印链表
//    void printListReverseHelper(ListNode* node) const {
//        if (node == nullptr) return;
//
//        printListReverseHelper(node->next);
//        std::cout << node->value << " ";
//    }
//
//public:
//    // 反向打印链表
//    void printListReverse() const {
//        printListReverseHelper(head);
//        std::cout << std::endl;
//    }
//};
//
//int main() {
//    LinkedList list;
//
//    std::cout << "请输入整数来创建链表，输入-1结束：" << std::endl;
//    int value;
//    while (true) {
//        std::cin >> value;
//        if (value == -1) break;
//        list.append(value);
//    }
//
//    std::cout << "链表顺序打印：" << std::endl;
//    list.printList();
//
//    std::cout << "链表反向打印：" << std::endl;
//    list.printListReverse();
//
//    // 在main函数结束时会自动调用链表的析构函数，释放所有节点
//    return 0;
//}