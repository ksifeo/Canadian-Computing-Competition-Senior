#include <iostream>
#include <vector>
using namespace std;

// 判断字符串中的字母是否交替出现重和轻
bool isAlternate(string s) {
    int freq[26] = { 0 }; // 数组存储每个字母的频率

    // 计算每个字母的频率
    for (char c : s) {
        freq[c - 'a']++;
    }

    // 判断第一个字母是否为重
    bool prevHeavy = (freq[s[0] - 'a'] > 1);
    for (int i = 1; i < s.size(); i++) {
        // 判断当前字母是否为重
        bool currentHeavy = (freq[s[i] - 'a'] > 1);
        if (currentHeavy == prevHeavy) {
            return false; // 两个连续的字母要么都是重的，要么都是轻的
        }
        prevHeavy = currentHeavy;
    }
    return true;
}

int main() {
    int T, N;
    cin >> T >> N;
    vector<string> strings(T);

    // 读取所有字符串
    for (int i = 0; i < T; i++) {
        cin >> strings[i];
    }

    // 检查每个字符串是否交替出现重和轻的字母
    for (const string& s : strings) {
        if (isAlternate(s)) {
            cout << "T" << endl;
        }
        else {
            cout << "F" << endl;
        }
    }

    return 0;
}
