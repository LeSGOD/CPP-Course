#include <iostream>
#include <vector>

using namespace std;

int main() {
    
//    vector <char> vowels {'a','c','d','e','f'};
//    
//    cout << vowels[0] << endl;
//    cout << vowels[4] << endl;

    vector <int> test_scores(4,100);
    cout << test_scores.at(1)<< endl;
    cout << "\nThere are " << test_scores.size() << " scores in the vector"<<endl;
    return 0;
}