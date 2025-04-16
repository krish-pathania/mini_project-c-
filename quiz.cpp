#include<iostream>
#include<string>
using namespace std;
int guess;
int total;
class question{
    private:
    string question_text;
    string answer_1;
    string answer_2;
    string answer_3;
    string answer_4;
    int correct_answer;
    int question_score;

    public:
    void setValue(string,string,string,string,string,int,int);
    void askQuestion();
};
int main()
{
    cout<<"\n\n\t\t\tTHE QUIZ"<<endl;
    cout<<"\n Press Enter to start "<<"the quiz..."<<endl;
    cin.get();
    string Name;
    int Age;

    //input the details
    cout<<"What s your name ?"<<endl;
    cin>>Name;
    cout<<"How old you are ?"<<endl;
    cin>>Age;
    string Respond;
    cout<<"Are you ready to take the quiz "<<Name<<" ? yes/no"<<endl;
    cin>>Respond;

    if(Respond == "yes"){
        cout<<endl<<"GOOD LUCK "<<Name<<endl;
    }
    else{
        cout<<"Okay Good Bye "<<Name<<endl;
    }
    //creating the number of object as per the questions
    question q1;
    question q2;
    question q3;
    question q4;
    question q5;
    question q6;
    question q7;
    question q8;
    question q9;
    question q10;
    q1.setValue("Question 1 : C++ is developed by ","dennis ritche  ","robert frost ",": Guido van Rossum","Bjarne stroustrup",4,10);
    q2.setValue("Question 2 : The notation of ternary operator is","&","?:","*:","~",2,10);
    q3.setValue("Question 3 :  Which of the following is not a valid C variable name?"," int number;"," float rate;","int variable_count;","int $main;",4,10);
    q4.setValue("Question 4 : Which of the following is a feature of procedure-oriented programming?","Class based","polymorphism","Focus on function","Inheritance",3,10);
    q5.setValue("Question 5 : In OOP, what does encapsulation refer to?","Storing data in array","Combinig data and methods","Type of loop","Inheriting properties of parent class",2,10);
    q6.setValue("Question 6 : Which concept in OOP allows for the same function to be used in different ways based on the object it is associated with?","Polymorphism","Abstraction","Inheritance","Encapsulation",1,10);
    q7.setValue("Question 7 : What is the role of comments in a C++ program?","To optimize code execution","To define variable","To declare constant","To provide documentation and explanation",4,10);
    q8.setValue("Question 8 : Which of the following is not fundamental data type of C++","string","float","char","int",1,10);
    q9.setValue("Question 9 : Which control flow statement is used for executing a block of code repeatedly based on a condition?","if","for","switch","else",2,10);
    q10.setValue("Question 10 : How do you access the third element in an array named 'arr' in C++?","arr[3]","arr(3)","arr[2]","arr(2)",3,10);

    q1.askQuestion();
    q2.askQuestion();
    q3.askQuestion();
    q4.askQuestion();
    q5.askQuestion();
    q6.askQuestion();
    q7.askQuestion();
    q8.askQuestion();
    q9.askQuestion();
    q10.askQuestion();

    cout<<"Total score = "<<total<<" out of 100"<<endl;
    if(total>=70)
    {
        cout<<"Congratulation "<<Name<<" You passed the quiz ! "<<endl;
    }
    else{
        cout<<"Alas you failed the quiz"<<endl;
        cout<<"Better luck next time"<<endl;
    }
    return 0;
}
void question::setValue(string q,string a1 ,string a2 ,string a3 ,string a4 ,int ca , int pa)
{
    question_text=q;
    answer_1=a1;
    answer_2=a2;
    answer_3=a3;
    answer_4=a4;
    correct_answer=ca;
    question_score=pa;
}
void question::askQuestion()
{
    cout<<endl;
    cout<<question_text<<endl;
    cout<<"Answer 1. "<<answer_1<<endl;
    cout<<"Answer 2. "<<answer_2<<endl;
    cout<<"Answer 3. "<<answer_3<<endl;
    cout<<"Answer 4. "<<answer_4<<endl;
    cout<<endl;
    cout<<"What is your answer? (in number)"<<endl;
    cin>>guess;
    if(guess == correct_answer){
        cout<<endl<<"correct!"<<endl;
        total=total+question_score;
        cout<<"Score= "<<question_score<<" out of "<<question_score<<endl;
    }
    else{
        cout<<endl;
        cout<<"Wrong !"<<endl;
        cout<<"Score=0 "<<"out of "<<question_score<<endl;
        cout<<"Correct answer= "<<correct_answer<<endl;
        cout<<endl;
     }
}
