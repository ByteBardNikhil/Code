#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

enum TokenType
{
    UNKNOWN,
    IDENTIFIER,
    NUMBER,
    OPERATOR,
    KEYWORD

};

bool isOperator(char c)
{
    return c == '+' || c == '-' || c == '*' || c == '/' || c == '%' || c == '<' || c == '>' || c == '=';
}
bool isKeyword(string t)
{
    return t == "if" || t == "else" || t == "while" || t == "for" || t == "int";
}
TokenType getTokenType(string t)
{
    if (isdigit(t[0]))
        return NUMBER;
    else if (isOperator(t[0]))
        return OPERATOR;
    else if (isKeyword(t))
        return KEYWORD;
    else if (isalpha(t[0]) || t[0] == '_')
        return IDENTIFIER;
    else
        return UNKNOWN;
}
void tokenize(string s)
{
    istringstream stream(s);
    string token;
    while (stream >> token)
    {
        TokenType type = getTokenType(token);

        cout << "\nToken : " << token << "\n Type : ";

        switch (type)
        {
        case NUMBER:
            cout << "Number";
            break;
        case OPERATOR:
            cout << "operator";
            break;
        case KEYWORD:
            cout << "keyord";
            break;
        case IDENTIFIER:
            cout << "identifier";
            break;

        default:
            cout << "UNKNOWN";
            break;
        }
    }
}

int main()
{
    string s = "int a = 2;";

    tokenize(s);

    return 0;
}