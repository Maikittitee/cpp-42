#include <iostream>

class custom_exception: public std::exception{
    virtual const char* what() const throw(){
        return ("custom catch");
    }
};

int main() {
    // Write C++ code here
    std::string a = "hello";
    
    try{
        // std::cout << a.at(9) << std::endl;
        throw custom_exception();
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    catch (int code)
    {
        std::cout << "Error number " << code << std::endl;
    }
    catch (double code)
    {
        std::cout << "Error double " << code << std::endl;
    }

    return 0;
}