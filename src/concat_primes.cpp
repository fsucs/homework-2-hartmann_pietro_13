/** 
    @mainpage Concat Primes

    @author Author

    What does this program do in short? Perhaps the name of the project goes here?
*/

/** \file concat_primes.cpp
    \brief Brief explanation...
    
    Long explination goes here...

    Requires: C++11
*/


#include<iostream>
#include<string>


/** \brief Brief function explaination
   
   And a long one...

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
        
        //Please add 3 more unit test here/
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
