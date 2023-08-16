#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

enum class TokenType
{
    Keyword,
    Identifier,
    Number,
    Operator,
    Unknown

};
unordered_set<string> keywords = {
    "if", "else", "while", "int", "float"

};
unordered_set<string> operators = {
    "+", "*", "/", "-", "="};

bool isDigit(char c)
{
    return c >= '0' && c <= '9';
}
bool isAlpha(char c)
{
    return (c >= 'a' && c <= 'z' || c >= 'A' || c <= 'Z');
}
bool isAphaNumeric(char c)
{
    return isDigit(c) || isAlpha(c);
}
TokenType getTokenType(string token)
{
    if (keywords.count(token))
        return TokenType::Keyword;
    else if (isAlpha(token[0]))
        return TokenType::Identifier;
    else if (isDigit(token[0]))
        return TokenType::Number;
}

int main()
{

    return 0;
}