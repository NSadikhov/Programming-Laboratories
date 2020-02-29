#include <iostream>
#include <ctime>
using namespace std;

void vote(int candidate);

int main()
{

    int candidate;
    cout << "Enter a number for candidates: ";
    cin >> candidate;

    vote(candidate);

    return 0;
}

void vote(int candidate)
{
    double sum = 0;
    double* candArr = new double[candidate];
    for(int i = 0; i < candidate; ++i)
    {
        cout << "Candidate " << i+1 << " -> ";
        cin >> candArr[i];
        sum += candArr[i];
    }
    cout << "\n---Percentages of votes for each candidate---\n\n";
    for(int i = 0; i < candidate; ++i)
    {
        double percent = candArr[i] * 100 / sum;
        cout << "Candidate " << i+1 << " -> " << percent << "%\n";
    }

}

