#include<iostream>
#include<fstream>
#include<vector>
#include<stdexcept>
using namespace std;

/**
 * @struct studentTestDetails
 * @brief Stores details of a student's test performance
 */
struct studentTestDetails
{
    string ID;              ///< Student's ID
    string studentAnswer;   ///< Student's answers to the test
    int testScore;          ///< Student's test score
    char grade;             ///< Student's grade
};

/**
 * @brief Grades student tests based on a correct answer key
 * @param filePath Path to the file containing student test answers
 * @return Vector of studentTestDetails containing graded results
 * @throws runtime_error if file cannot be opened
 */
vector<studentTestDetails> gradeTest(string& filePath) {
    ifstream file(filePath);

    if (!file.is_open())
    {
        throw runtime_error("Failed to open file: " + filePath);
    }
    
    const string correctAnswer = "TFFTFFTTTTFFTFTFTFTT";
    string line;
    float percentageGrade;
    vector<studentTestDetails> students;

    while (getline(file, line))
    {
        int countT = 0;
        if (correctAnswer == line.substr(9))
            {
                studentTestDetails student;
                student.ID = line.substr(0,8);
                student.testScore = 20;
                student.studentAnswer = line.substr(9);
                student.grade = 'A';
                students.push_back(student);
            }

        else {
            for (int i = 0; i < correctAnswer.length(); i++)
            {
                if (correctAnswer[i] == line.substr(9)[i])
                {
                    countT++;
                }
            }

            percentageGrade = (static_cast<float>(countT) / correctAnswer.length()) * 100;

            studentTestDetails student;
            student.ID = line.substr(0,8);
            student.studentAnswer = line.substr(9);
            student.testScore = countT;

            // Assign grade based on percentage
            if (percentageGrade >= 90 && percentageGrade <= 100)
                student.grade = 'A';
            else if (percentageGrade >= 80 && percentageGrade < 90)
                student.grade = 'B';
            else if (percentageGrade >= 70 && percentageGrade < 80)
                student.grade = 'C';
            else if (percentageGrade >= 60 && percentageGrade < 70)
                student.grade = 'D';
            else
                student.grade = 'F';

            students.push_back(student);
        }
    }
    return students;
}

/**
 * @brief Prints details of all students in the vector
 * @param students Vector of studentTestDetails to be printed
 */
void printStudentDetails(vector<studentTestDetails> students) {
    for (const auto& student : students) {
        cout << "ID: " << student.ID << ", " << "Answer: " << student.studentAnswer << ", " << "Test Score: " << student.testScore
        << ", " << "Grade: " << student.grade <<endl; 
    }
}

/**
 * @brief Main function to run the program
 * @return 0 on successful execution, 1 on error
 */
int main() {
    string filePath = "C:\\Users\\User\\Downloads\\ICP\\testAnswers.txt";

    try {
        printStudentDetails(gradeTest(filePath));
    } catch (const runtime_error& e) {
        cerr << "Error: " << e.what() << endl;
        return 1;
    } catch (...) {
        cerr << "An unexpected error occurred." << endl;
        return 1;
    }

    return 0;
}