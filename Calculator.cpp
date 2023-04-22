#include <iostream>
#include <string>



int main() {
    std::string x;
    std::string y;
    bool input_valid = true;
    double xx;
    double yy;
    char z;

    std::cout<<"Hello!\nThis is a calculator for the basic mathematical operations on two numerical value (Remember to use '.' as a comma)\n";
    std::cout<<"Insert first value\n";
    do {
        getline(std::cin, x);
        for (auto &c: x) {
            if (c == ',')
                c = '.';
        }
        try {
            xx = std::stod(x);
            input_valid = true;
        } catch (const std::invalid_argument &) {
            std::cerr << "Invalid input: not a number,\ninsert valid value\n";
            input_valid = false;
        }
    } while (input_valid==false);
    std::cout<<"Insert mathematical operator\n";
        std::cin >> z;
        std::cin.ignore();
    while(!(z=='/'||z=='*'||z=='+'||z=='-')){
        std::cout<<"Invalid mathematical operator, insert valid value\n";
        std::cin>>z;
        std::cin.ignore();
    }
    std::cout<<"Insert second value\n";
    do {
        getline(std::cin, y);
        for (auto &c: y) {
            if (c == ',')
                c = '.';
        }
        try {
            yy = std::stod(y);
            input_valid = true;
        } catch (const std::invalid_argument &) {
            std::cerr << "Invalid input: not a number,\ninsert valid value\n";
            input_valid = false;
        }
    } while (input_valid==false);
    switch(z){
        case '+': std::cout<<"The sum is \n"<<xx+yy;
        break;
        case '-': std::cout<<"The difference is \n"<<xx-yy;
        break;
        case '/': std::cout<<"The quotient is \n"<<xx/yy;
        break;
        case '*': std::cout<<"The product is \n"<<xx*yy;
        break;
        default:std::cout<< "Inserted mathematical operator is incorrect";
    }

    return 0;
}
