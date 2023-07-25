#include <iostream>

void func();

int main()
{
    int var = 5;
    std::cout << "In main(), var is: " << var << "\n\n";
    func();
    std::cout << "Back in main(), var is: " << var << "\n\n";
    {                                                                           //Curly braces being used to created a 'scope'. Variables in a scope are not visible outside the scope.
        std::cout<<"In main() in a new scope, var is: " << var << "\n\n";

        std::cout << "Creating new var in new scope. \n";
        int var = 10; //variable in new scope hides other variable named var.
        std::cout << "In main(), var is: " << var << "\n\n";
    }
    std::cout << "At the end of main() var created in new scope no longer exists.\n";
    std::cout << "At the end of main(), var is: " << var << "\n";

    system("pause");
    return 0;
}

void func() {
    int var = -5;
    std::cout << "In func(), var is: " << var << "\n\n";
}