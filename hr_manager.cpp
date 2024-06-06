#include <iostream>
#include <string>

using namespace std;

int main()
{
    int age;
    string cnic, dept, time, exp;

    cout << "Please enter your CNIC in the format xxxxx-xxxxxxx-x: ";
    cin >> cnic;

    if (cnic.length() == 15 || (cnic[5] == '-' && cnic[13] == '-'))
    {
        cout << "We have positions open in Marketing, Operations and HR. Please enter the department you would like to apply in: ";
        cin >> dept;

        if ((dept == "Marketing") || (dept == "Operations") || (dept == "HR"))
        {
            cout << "Do you want to apply fulltime or parttime? Please enter: ";
            cin >> time;

            if ((dept == "Marketing" && time == "fulltime") || (dept == "HR" && time == "parttime") || (dept == "Operations" && time == "parttime" || time == "fulltime"))
            {
                cout << "What is your age? Please enter: ";
                cin >> age;

                if (age > 25 && age < 35)
                {
                    cout << "Do you have any prior experience in the department you are applying for? Please enter yes or no: ";
                    cin >> exp;

                    if ((dept == "Marketing" && exp == "yes") || (dept == "Operations" && exp == "yes"))
                    {
                        cout << "Congrats! You are eligible for this job!";
                    }

                    else
                    {
                        cout << "Experience required. You are not eligible for this job.";
                    }
                }

                else
                {
                    cout << "You are not eligible.";
                }
            }

            else
            {
                cout << "This job is not available.";
            }
        }

        else
        {
            cout << "There are no positions open for this department.";
        }
    }

    else
    {
        cout << "invalid cnic";
    }

    return 0;
}
