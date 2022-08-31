#include <iostream>

int main()
{
    char op;
    double num1;
    double num2;
    double result;
    bool running = true;
    char answer;

    std::cout << "************ CALCULATOR ************" << '\n';

    std::cout << "Enter either (+ - * /): ";
    std::cin >> op;

    std::cout << "Enter number 1: ";
    std::cin >> num1;

    std::cout << "Enter number 2: ";
    std::cin >> num2;

    switch(op)
    {
        case '+':
            result = num1 + num2;
            std::cout << result << '\n';
        break;
        case '-':
            result = num1 - num2;
            std::cout << result << '\n';
        break;
        case '*':
            result = num1 * num2;
            std::cout << result << '\n';
        break;
        case '/':
            result = num1 / num2;
            std::cout << result << '\n';
        break;
        default:
            std::cout << "Hmm Something Went Wrong.\n";
        break;
        
    }

    std::cout << "************ ************ ************\n";

    std::cout << "\n\n";


    if(running == true)
    {
        main();
    }
    else if(running == false)
    {
        std::cout << "Goodbye!\n";
    }

    return 0;
}
