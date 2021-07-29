#include <iostream>
using namespace std;

int main()
{

    const char key[] = {'a', 'b', 'c', 'd', 'e'};
    const int NUM_QUES = 5;
    char c;
    int ques = 0, numCorrect = 0;
    cout << "Enter The " << NUM_QUES << "question:" << endl;

    while(cin.get(c))
    {
        if(c != '\n')
        {
            if(c == key[ques]){
                numCorrect++;
                cout << " ";

            }else{
                cout << '*';
            }

            ques++;
        }else{
            
            cout << "Score:" << static_cast<float>(numCorrect)/NUM_QUES*100 << "%";
            numCorrect = 0;
            ques = 0;
            cout << endl;
        }
    }
    





}