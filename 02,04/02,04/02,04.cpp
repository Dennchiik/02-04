//перше завдання
/*#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

bool compareLength(const string& s1, const string& s2) {
    return s1.length() < s2.length();
}

int main() {
    vector<string> strings = {"apple", "banana", "cherry", "date", "fig"};

    sort(strings.begin(), strings.end(), compareLength);

    cout << "Відсортований вектор строк:" << endl;
    for (const string& s : strings) {
        cout << s << endl;
    }

    return 0;
}
*/
//друге завдання
/*#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

class CompareLength {
public:
    bool operator()(const string& s1, const string& s2) {
        return s1.length() < s2.length();
    }
};

int main() {
    vector<string> strings = {"apple", "banana", "cherry", "date", "fig"};

    CompareLength compare;

    sort(strings.begin(), strings.end(), compare);

    cout << "Відсортований вектор строк:" << endl;
    for (const string& s : strings) {
        cout << s << endl;
    }

    return 0;
}
*/