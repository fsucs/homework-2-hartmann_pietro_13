/** 
    @mainpage Concat Primes

    @author Dante D'Onofrio and Tessa Hartmann

    Homework 2 - Prime Number Generator
*/

/** \file concat_primes.cpp
    \brief Figures a number 'n' that is a starting position on a
    list of prime numbers and outputs 5 digits of that list.
    
    Main tests the program before output of initial prompt,then asks the user
    for integer 'n'. The program then runs function get_concatenated_primes,
    which calculates all prime numbers between 0 - 1000 and returns the 
    accumulated object of strings. Then the second program runs get_slice_of_5 
    which takes the index and a length of five digits and returns just the 
    subsection to main before the output of the final five digits.

    Requires: C++11
*/


#include<iostream>
#include<string>


/** \brief The first function uses a loops and a boolean expression to 
   create a list of prime numbers. The second function uses a substring 
   to print the wanted 5 digits. 
 
   The first function 
 
 
   The second function uses the concept and string function called substr, 
   ie. substring. "Get slice of 5" as it is named will aid in returning the 
   5 digits. These 5 digits begin at the user entered index ("Please enter n 
   = ") and will end after the 5th digit from that given index. This is done 
   using the parameters (index, 5) in "ret = primes.sub str(index, 5);". 
   'Ret' is then returned to print those 5 digits.

    @return std::string
*/
std::string get_concatenated_primes()
{
    std::string concat_primes = "";
    //Complete this function

    return concat_primes.substr(0, 1000);
}


std::string get_slice_of_5(const std::string & primes, const int index)
{
    std::string ret = "";
    //Complete this function
    return ret;
}

int main(int argc, char *argv[]){
    using namespace std;
    int n;
    string concat_primes;
    if (argc >= 2){
        concat_primes = get_concatenated_primes();
        assert(get_slice_of_5(concat_primes, 3) == "71113");
        cout<<"Unit Test 1 passed\n";
        assert(get_slice_of_5(concat_primes, 6) == "13171");
        cout<<"Unit Test 2 passed\n";
        
        assert(get_slice_of_5(concat_primes, 9) == "71923");
        cout<<"Unit Test 3 passed\n";
        assert(get_slice_of_5(concat_primes, 130) == "25125");
        cout<<"Unit Test 4 passed\n";
        assert(get_slice_of_5(concat_primes, 998) == "91");
        cout<<"Unit Test 5 passed\n";
        
    } else{
        cout<< "Please input n: ";
        while(std::cin >> n)
        {
            concat_primes = get_concatenated_primes();
            std::cout << get_slice_of_5(concat_primes, n) << std::endl;
            cout<< "Please input n: ";
        }
    }
    return 0;
}
