/*Problem Description: Power Set of a String

You are given a string consisting of lowercase alphabets. Your task is to find the power set of the given string. The power set of a string is the set of all possible subsets of the string, including the empty string and the string itself.

*/
#include <iostream>
using namespace std;

void generate_subsequence(string s, string current, int index) {
    // Base case: If the size of string is equal to the index, print the current subset
    if (s.length() == index) {
        cout << current << " ";
        return;
    }

    // Exclude the current character from the subset and move to the next index
    generate_subsequence(s, current, index + 1);

    // Include the current character in the subset and move to the next index
    generate_subsequence(s, current + s[index], index + 1);
}

int main() {
    string input = "shrinjay";
    generate_subsequence(input, "", 0);
    return 0;
}
