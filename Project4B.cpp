// This test scoring program does not accept test scores
// that are less than 0 or greater than 100.
#include <iostream>
using namespace std;

int main()
{
    double testScore;

    cout << "Please enter your test score:" << endl;
    cin >> testScore;

    if (testScore < 60)
    {
        testScore = testScore + testScore * .1;
        cout << "Your curved test score is " << testScore << " and" << endl;
    }
    else if (testScore < 70 && testScore >= 60)
    {
        testScore = testScore + testScore * .08;
        cout << "Your curved test score is " << testScore << " and" << endl;
    }
    else if (testScore < 80 && testScore >= 70)
    {
        testScore = testScore + testScore * .06;
        cout << "Your curved test score is " << testScore << " and" << endl;
    }
    else if (testScore < 90 && testScore >= 80)
    {
        testScore = testScore + testScore * .04;
        cout << "Your curved test score is " << testScore << " and" << endl;
    }
    else if (testScore < 100 && testScore >= 90)
    {
        testScore = testScore + testScore * .02;
        cout << "Your curved test score is " << testScore << " and" << endl;
    }

    const int A_SCORE = 90;
    const int B_SCORE = 80;
    const int C_SCORE = 70;
    const int D_SCORE = 60;
    const int MIN_SCORE = 0;    // Minimum valid score
    const int MAX_SCORE = 100;  // Maximum valid score

    // Validate the input and determine the grade.
    if (testScore >= MIN_SCORE && testScore <= MAX_SCORE)
    {
        // Determine the letter grade.
        if (testScore >= A_SCORE)
            cout << "your final grade is an A.\n";
        else if (testScore >= B_SCORE)
            cout << "your final grade is a B.\n";
        else if (testScore >= C_SCORE)
            cout << "your final grade is a C.\n";
        else if (testScore >= D_SCORE)
            cout << "your final grade is a D.\n";
        else
            cout << "your final grade is an F.\n";
    }
    else
    {
        // An invalid score was entered.
        cout << "You entered an an invalid score." << endl
             << "Please run the program again and enter a value in the range of " << endl
             << MIN_SCORE << " through " << MAX_SCORE << "." << endl;
    }

    system("pause");
    return 0;
} 