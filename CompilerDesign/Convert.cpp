#include <iostream>
using namespace std;

int main()
{
    char q = 34;
    string program[] = {
        "#include <iostream>",
        "using namespace std;",
        "",
        "int main() {",
        "    char q = 34;",
        "    string program[] = {",
        "        ",
        "    };",
        "    for (int i = 0; i < 6; i++) {",
        "        cout << program[i] << endl;",
        "    }",
        "    for (int i = 0; i < 12; i++) {",
        "        cout << program[6] << q + program[i] + q + ',' << endl;",
        "    }",
        "    for (int i = 7; i < 12; i++) {",
        "        cout << program[i] << endl;",
        "    }",
        "    return 0;",
        "}"};
    for (int i = 0; i < 6; i++)
    {
        cout << program[i] << endl;
    }
    for (int i = 0; i < 19; i++)
    {
        cout << program[6] << q + program[i] + q + ',' << endl;
    }
    for (int i = 7; i < 19; i++)
    {
        cout << program[i] << endl;
    }
    return 0;
}
