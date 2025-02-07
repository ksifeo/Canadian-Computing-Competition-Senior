#include <iostream>
#include <vector>
using namespace std;

// �ж��ַ����е���ĸ�Ƿ�������غ���
bool isAlternate(string s) {
    int freq[26] = { 0 }; // ����洢ÿ����ĸ��Ƶ��

    // ����ÿ����ĸ��Ƶ��
    for (char c : s) {
        freq[c - 'a']++;
    }

    // �жϵ�һ����ĸ�Ƿ�Ϊ��
    bool prevHeavy = (freq[s[0] - 'a'] > 1);
    for (int i = 1; i < s.size(); i++) {
        // �жϵ�ǰ��ĸ�Ƿ�Ϊ��
        bool currentHeavy = (freq[s[i] - 'a'] > 1);
        if (currentHeavy == prevHeavy) {
            return false; // ������������ĸҪô�����صģ�Ҫô�������
        }
        prevHeavy = currentHeavy;
    }
    return true;
}

int main() {
    int T, N;
    cin >> T >> N;
    vector<string> strings(T);

    // ��ȡ�����ַ���
    for (int i = 0; i < T; i++) {
        cin >> strings[i];
    }

    // ���ÿ���ַ����Ƿ�������غ������ĸ
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
