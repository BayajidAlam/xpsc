#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<string> words[3];
        map<string, int> freq;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < n; j++) {
                string word;
                cin >> word;
                words[i].push_back(word);
                freq[word]++;
            }
        }
        for (int i = 0; i < 3; i++) {
            int points = 0;
            for (const string& word : words[i]) {
                if (freq[word] == 1) {
                    points += 3;
                } else if (freq[word] == 2) {
                    points += 1;
                }
            }
            cout << points << " ";
        }
        cout << "\n";
    }
    return 0;
}