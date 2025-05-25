#include <iostream>

// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
// int main() {
//     // TIP Press <shortcut actionId="RenameElement"/> when your caret is at the <b>lang</b> variable name to see how CLion can help you rename it.
//     auto lang = "C++";
//     std::cout << "Hello and welcome to " << lang << "!\n";
//
//     for (int i = 1; i <= 5; i++) {
//         // TIP Press <shortcut actionId="Debug"/> to start debugging your code. We have set one <icon src="AllIcons.Debugger.Db_set_breakpoint"/> breakpoint for you, but you can always add more by pressing <shortcut actionId="ToggleLineBreakpoint"/>.
//         std::cout << "i = " << i << std::endl;
//     }
//
//     return 0;
// }

#include <iostream>

int main() {
    double a, b;
    char op;

    std::cout << "Enter first number: ";
    std::cin >> a;

    std::cout << "Enter an operator (+, -, *, /): ";
    std::cin >> op;

    std::cout << "Enter second number: ";
    std::cin >> b;

    double result;

    switch (op) {
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            if (b == 0) {
                std::cout << "Error: division by zero!\n";
                return 1;
            }
            result = a / b;
            break;
        default:
            std::cout << "Invalid operator\n";
            return 1;
    }

    std::cout << "Result: " << result << "\n";
    return 0;
}