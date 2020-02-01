#include <iostream>
#include <algorithm>
using namespace std;

class Student {
public:
	string name;
	int score;
	Student(string name, int score) {
		this->name = name;
		this->score = score;
	}
	bool operator <(Student& student) {
		return this->score < student.score;
	}
};

bool compare(int a, int b) {
	return a > b;
}

int main(void) {
	Student students[] = {
		Student("ȫ�浿", 50),
		Student("�̱Կ�", 90),
		Student("�ƹ���", 60),
		Student("�Ƹ���", 70),
		Student("�׽�Ʈ", 30)
	};
	sort(students, students + 5);
	for (int i = 0; i < 5; i++)
		cout << students[i].name << ' ';
}