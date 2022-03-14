#define FunctionSend() FuncParse( __FUNCTION__ );

#include <iostream>
#include <string>
#include <regex>

void FuncParse(std::string functionName)
{
    std::regex e("([a-z])([A-Z])");
    std::string spacedName = std::regex_replace(functionName, e, "$1 $2");  // spacing each word
    spacedName = spacedName.substr(spacedName.find_first_of(" \t") + 1);   // removing word: 'test'
    for (int i = 1; spacedName[i] != '\0'; i++)                            // changing upper case characters to lowercase except for first letter         
    {
        if (spacedName[i] >= 'A' && spacedName[i] <= 'Z')    //checking for uppercase characters
            spacedName[i] = spacedName[i] + 32;         //converting uppercase to lowercase
    }
    std::cout << spacedName << std::endl;
}

void testCowsCanBeMilked() {
    //Test things Here.....
    //Function to be used when reporting the test running
    FunctionSend();
};

void testSheepAreNotTheOnlyFruit() {
    //More test things here.....
    //Function to be used when reporting the test running
    FunctionSend();
};

int main(int argc, const char* argv[])
{
    if (argc > 1 && std::string(argv[1]) == "--test") {
        testCowsCanBeMilked();
        testSheepAreNotTheOnlyFruit();
    }
    return 0;
}