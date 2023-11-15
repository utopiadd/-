//#include <iostream>
//#include <string>
//#include <vector>
//#include <fstream>
//#include <sstream>
//#include<algorithm>
//
//// 成绩结构体
//struct Score {
//    std::string id; // 学号
//    std::string name; // 姓名
//    double score; // 成绩
//    std::string remark; // 备注
//};
//
//// 成绩容器
//Score scores[40];
//
//// 初始化成绩容器
//void initScores() {
//    // 添加成绩信息
//    scores[0] = { "001", "小邓", 100, "优秀" };
//    scores[1] = { "002", "张三", 92.3, "良好" };
//    scores[2] = { "003", "欧阳", 0, "不及格" };
//    scores[3] = { "004", "逍遥哥", 60.4, "及格" };
//    scores[4] = { "005", "李四", 25.7, "不及格" };
//}
//
//// 输出成绩信息
//void printScores() {
//    for (int i = 0; i < 5; i++) {
//        std::cout << scores[i].id << " " << scores[i].name << " " << scores[i].score << " " << scores[i].remark << std::endl;
//    }
//}
//
//// 查询成绩（给定分数以上或以下的学生信息）
//void queryScores(double targetScore) {
//    std::vector<Score> result;
//    for (int i = 0; i < 5; i++) {
//        if (scores[i].score >= targetScore) {
//            result.push_back(scores[i]);
//        }
//    }
//
//    std::cout << "查询结果：" << std::endl;
//    for (const Score& score : result) {
//        std::cout << score.id << " " << score.name << " " << score.score << " " << score.remark << std::endl;
//    }
//}
//
//// 按分数排序成绩
//void sortScores() {
//    std::sort(scores, scores + 5, [](const Score& a, const Score& b) { return a.score < b.score; });
//}
//
//int main() {
//    initScores();
//
//    // 输出成绩信息
//    printScores();
//
//    // 查询成绩（给定分数以上或以下的学生信息）
//    double targetScore;
//    std::cout << "请输入查询分数：";
//    std::cin >> targetScore;
//    queryScores(targetScore);
//
//    // 按分数排序成绩
//    sortScores();
//    std::cout <<"排序后";
//    // 输出排序后的成绩信息
//    printScores();
//
//    return 0;
//}