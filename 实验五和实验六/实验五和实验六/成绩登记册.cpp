//#include <iostream>
//#include <string>
//#include <vector>
//#include <fstream>
//#include <sstream>
//#include<algorithm>
//
//// �ɼ��ṹ��
//struct Score {
//    std::string id; // ѧ��
//    std::string name; // ����
//    double score; // �ɼ�
//    std::string remark; // ��ע
//};
//
//// �ɼ�����
//Score scores[40];
//
//// ��ʼ���ɼ�����
//void initScores() {
//    // ��ӳɼ���Ϣ
//    scores[0] = { "001", "С��", 100, "����" };
//    scores[1] = { "002", "����", 92.3, "����" };
//    scores[2] = { "003", "ŷ��", 0, "������" };
//    scores[3] = { "004", "��ң��", 60.4, "����" };
//    scores[4] = { "005", "����", 25.7, "������" };
//}
//
//// ����ɼ���Ϣ
//void printScores() {
//    for (int i = 0; i < 5; i++) {
//        std::cout << scores[i].id << " " << scores[i].name << " " << scores[i].score << " " << scores[i].remark << std::endl;
//    }
//}
//
//// ��ѯ�ɼ��������������ϻ����µ�ѧ����Ϣ��
//void queryScores(double targetScore) {
//    std::vector<Score> result;
//    for (int i = 0; i < 5; i++) {
//        if (scores[i].score >= targetScore) {
//            result.push_back(scores[i]);
//        }
//    }
//
//    std::cout << "��ѯ�����" << std::endl;
//    for (const Score& score : result) {
//        std::cout << score.id << " " << score.name << " " << score.score << " " << score.remark << std::endl;
//    }
//}
//
//// ����������ɼ�
//void sortScores() {
//    std::sort(scores, scores + 5, [](const Score& a, const Score& b) { return a.score < b.score; });
//}
//
//int main() {
//    initScores();
//
//    // ����ɼ���Ϣ
//    printScores();
//
//    // ��ѯ�ɼ��������������ϻ����µ�ѧ����Ϣ��
//    double targetScore;
//    std::cout << "�������ѯ������";
//    std::cin >> targetScore;
//    queryScores(targetScore);
//
//    // ����������ɼ�
//    sortScores();
//    std::cout <<"�����";
//    // ��������ĳɼ���Ϣ
//    printScores();
//
//    return 0;
//}