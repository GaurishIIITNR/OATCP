#include <bits/stdc++.h>
using namespace std;
#define ll long long 

void generateSubsequences(string word, vector<string>& subsequences) {
    for (int i = 0; i < word.length(); ++i) {
        for (int len = i+1; len <=i+ 4 && i + len <= word.length(); ++len) {
            subsequences.push_back(word.substr(i, len));
        }
    }
}

unordered_map<string, string> createShortForms(vector<string>& dictionary) {
    unordered_map<string, string> shortForms;
    for (string& word : dictionary) {
        if (word.length() <= 4) continue; 
        vector<string> subsequences;
        generateSubsequences(word, subsequences);
        for (string& subseq : subsequences) {
            if (shortForms.find(subseq) == shortForms.end()) {
                if(subseq.length() == 4){
                    shortForms[subseq] = word;
                    break;
                }
            }
        }
    }
    return shortForms;
}

int main() {
    int n;
    cin >> n;
    vector<string> dictionary(n);
    for (int i = 0; i < n; ++i) {
        cin >> dictionary[i];
    }
    unordered_map<string, string> shortForms = createShortForms(dictionary);

    for (auto& entry : shortForms) {
        cout << "Short form: " << entry.first << " -> Word: " << entry.second << endl;
    }

    return 0;
}
