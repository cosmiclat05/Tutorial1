#include <iostream>

double sum(double a, double b){
    return a+b;
}

double subtract(double a, double b){
    return a-b;
}

double multiply(double a, double b)
{
    return a * b;
}

double divide(double a, double b)
{
    if (b != 0)
    {
        return a/b;
    }  
    else
    {
        std::cout << "Invalid Divisor 0!";
    }
}


int main(){
    //initializing the numbers and the operator
    double a = 0;
    double b = 0;
    std::string oper;
    std::cout << "Welcome to the Calculator!\n";
    std::cout << "--------------------------\n";
    std::cout << "Currently available operations are:\n";

    //Print out current operations here.
    std::cout << "1: Summation: +\n";
    std::cout << "2: Subtract: -\n";
    std::cout << "3: Multiplication: *\n";
    std::cout << "4: Division: /\n";
 

    std::cout << "Please enter the first numero\n";
    std::cin >> a;
    std::cout << "Enter the operation por favor\n";
    std::cin >> oper;
    std::cout << "Enter the second number SVP\n";
    std::cin >> b;

    double result = 0;

    //uncomment this to add your operation
    if (oper == "*")
    {
        result = multiply(a,b);
        std::cout << "Result to your operation:";
        std::cout << a << " " << oper << " " << b << " = " << result;
    }
    else if(oper == "/")
    {
        result = divide(a,b);
        if (b != 0)
        {
            std::cout << "Result to your operation:";
            std::cout << a << " " << oper << " " << b << " = " << result;
        }
    }
    else
    {
        std::cout << "Invalid Operation!";
    }


    if (oper == "+"){
        result = sum(a,b);
    }
    else if(oper == "-"){
        result = subtract(a,b);
    }

}