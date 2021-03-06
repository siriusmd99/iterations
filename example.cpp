#include <iostream>
#include "iterations"

void sample()
{
   //Nothing, we need just the function call here...
}

int main()
{
    // Reseting counter to 0
    reset_ticks();

    //Using our code below
    for(int i = 0; i < 1000; i++)
    {
        sample(); // Function call is considered as an iteration as well
        1+5; //This basic math calculus isn't considered as an iteration
    }
   
    //Getting Number of Iterations after our code gets executed
    tick_int result = get_ticks();

    //Printing result
    cout << "Iterations : " << result << endl;

    return 0;
}


