//#include <iostream>
//
//// ��������Ľڵ�ṹ
//struct ListNode {
//    int value;       // �ڵ��ֵ
//    ListNode* next;  // ָ����һ���ڵ��ָ��
//
//    // ���캯��
//    ListNode(int val) : value(val), next(nullptr) {}
//};
//
//// ����������
//class LinkedList {
//public:
//    ListNode* head;  // ָ������ͷ����ָ��
//
//    // ���캯��
//    LinkedList() : head(nullptr) {}
//
//    // ������β�����һ���½ڵ�
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
//    // ˳���ӡ�����е����нڵ�
//    void printList() const {
//        ListNode* temp = head;
//        while (temp) {
//            std::cout << temp->value << " ";
//            temp = temp->next;
//        }
//        std::cout << std::endl;
//    }
//
//    // �ͷ���������нڵ�
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
//    // ��������
//    ~LinkedList() {
//        freeList();
//    }
//
//private:
//    // �����������ݹ鷴���ӡ����
//    void printListReverseHelper(ListNode* node) const {
//        if (node == nullptr) return;
//
//        printListReverseHelper(node->next);
//        std::cout << node->value << " ";
//    }
//
//public:
//    // �����ӡ����
//    void printListReverse() const {
//        printListReverseHelper(head);
//        std::cout << std::endl;
//    }
//};
//
//int main() {
//    LinkedList list;
//
//    std::cout << "������������������������-1������" << std::endl;
//    int value;
//    while (true) {
//        std::cin >> value;
//        if (value == -1) break;
//        list.append(value);
//    }
//
//    std::cout << "����˳���ӡ��" << std::endl;
//    list.printList();
//
//    std::cout << "�������ӡ��" << std::endl;
//    list.printListReverse();
//
//    // ��main��������ʱ���Զ���������������������ͷ����нڵ�
//    return 0;
//}