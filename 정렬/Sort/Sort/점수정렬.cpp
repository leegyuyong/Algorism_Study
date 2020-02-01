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
		Student("홍길동", 50),
		Student("이규용", 90),
		Student("아무개", 60),
		Student("아마존", 70),
		Student("테스트", 30)
	};
	sort(students, students + 5);
	for (int i = 0; i < 5; i++)
		cout << students[i].name << ' ';
}