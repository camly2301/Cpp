#include<iostream>
using namespace std;

class Question
{
	public:
	string question;
	string answer1;
	string answer2;
	string answer3;
	string answer4;
	int correctAnswer;
	Question(string question, string answer1, string answer2, string answer3, string answer4, int correctAnswer){
		this -> question = question;
		this -> answer1 = answer1;
		this -> answer2 = answer2;
		this -> answer3 = answer3;
		this -> answer4 = answer4;
		this -> correctAnswer = correctAnswer;
	}
	
	string getQuestion(){
		return question;
	}
	string getAnswer1(){
		return answer1;
	}
	string getAnswer2(){
		return answer2;
	}
	string getAnswer3(){
		return answer3;
	}
	string getAnswer4(){
		return answer4;
	}
	int getCorrectAnswer(){
		return correctAnswer;
	}
	
	void setQuestion(string ques){
		question = ques;
	}
	void setAnswer1(string ans1){
		answer1 = ans1;
	}
	void setAnswer2(string ans2){
		answer2 = ans2;
	}
	void setAnswer3(string ans3){
		answer3 = ans3;
	}
	void setAnswer4(string ans4){
		answer4 = ans4;
	}
	void setCorrectAnswer(int CorAns){
		correctAnswer = CorAns;
	}
};

int main(){
	Question question[10] = {
		Question("Ngay 8/3 la ngay gi?","Quoc te Phu Nu","Giai phong mien Nam","Quoc te thieu nhi","phu nu Viet Nam",1),
		Question("1+1 = ?", "1", "2", "3","4", 2),
		Question("Ngay 8/3 la ngay gi?","Quoc te Phu Nu","Giai phong mien Nam","Quoc te thieu nhi","phu nu Viet Nam",1),
		Question("1+1 = ?", "1", "2", "3","4", 2),
		Question("Ngay 8/3 la ngay gi?","Quoc te Phu Nu","Giai phong mien Nam","Quoc te thieu nhi","phu nu Viet Nam",1),
		Question("1+1 = ?", "1", "2", "3","4", 2),
		Question("Ngay 8/3 la ngay gi?","Quoc te Phu Nu","Giai phong mien Nam","Quoc te thieu nhi","phu nu Viet Nam",1),
		Question("1+1 = ?", "1", "2", "3","4", 2),
		Question("Ngay 8/3 la ngay gi?","Quoc te Phu Nu","Giai phong mien Nam","Quoc te thieu nhi","phu nu Viet Nam",1),
		Question("1+1 = ?", "1", "2", "3","4", 2)
	};
	int countCorrectP1 = 0;
	int countCorrectP2 = 0;
	
	for(int i = 0; i < 10; i++){
		cout << "\nQuestion "<<i+1<<": "<<question[i].getQuestion()<<endl;
		cout <<"1. "<<question[i].getAnswer1()<<"\t";
		cout <<"2. "<<question[i].getAnswer2()<<"\t";
		cout <<"3. "<<question[i].getAnswer3()<<"\t";
		cout <<"4. "<<question[i].getAnswer4()<<endl;
		if(i<5){
			int p1Ans;
			cout<<"Player 1, enter your answer(1-4): ";
			cin >> p1Ans;
		
			if(p1Ans == question[i].getCorrectAnswer()){
				cout<<"Correct!"<<endl;
				countCorrectP1 += 1;
			} else{
				cout<<"Incorrect!"<<endl;
			}
		} else {
			int p2Ans;
			cout<<"Player 2, enter your answer(1-4): ";
			cin >> p2Ans;
		
			if(p2Ans == question[i].getCorrectAnswer()){
				cout<<"Correct!"<<endl;
				countCorrectP2 += 1;
			} else{
				cout<<"Incorrect!"<<endl;
			}
		}
	}
	cout<<"Player 1's score: "<< countCorrectP1<<endl;
	cout<<"Player 2's score: "<< countCorrectP2<<endl;
	if(countCorrectP1 > countCorrectP2){
		cout<<"Player 1 wins !"<<endl;
	} else if(countCorrectP1 < countCorrectP2){
		cout<< "Player 2 wins !"<<endl;
	} else{
		cout<<"It's a tie!"<<endl;
	}
	
	return 0;
}
