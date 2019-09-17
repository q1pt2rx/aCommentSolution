
  /*- --- ---   aCS - a Comment Solution
[?]  This file is an example of a commenting style
[?]     developed to make reading code easier and
[?]     more efficient. 
[?]
[?]  This multi-line header comment is an example
[?]     of what an effective opening header would look like.
[?]
[?]  Detailed explanations of each component can be found 
[?]     following the initial overview program.
[?]
[?]         -qaptoR volArE
[?]             2019-09-17
[?]
  \*- --- --- --- -*/


//####  Preprocessor Directives
        #include <stdio>
        #include <cmath>
        #include <cstdio>

//$$$$  Type Definitions
        typedef const int $ci;
        typedef const double $cd;

//()()  Function Declarations
        void vGreeting();
        double dArea(int);

//GLBC  Global Constants
        $cd pi     = 3.1415;
        $ci square = 2;
        $ci cube   = 3;

//GLBV  Global Variables
        int    iRadius = 1;
        double dA_r_   = 0;

    
     /*- --- ---    main
    --  
    --
     \*- --- --- --- -*/

//----  --- ----
        int main () {

        //  print greeting
            vGreeting();

        //  get user input
            printf("Please enter the radius of a circle (int): ");
            cin >> iRadius;

    //////  find A(r); this step is important
            dA_r_ = dArea(iRadius);

        //  display result and final message
            cout << "\t:|: The area of your circle is " << dA_r_ << endl;

            printf("\nWhoa, I guess you'll have to use a real calculator to ");
            printf("\nfind out if that worked :P\n\n");


            return 0;
        }


     /*- --- ---    vGreeting
    ()  Print a standard greeting 
    ()
     \*- --- --- --- -*/

        void vGreeting () {
            cout << "Welcome to a simple program that does SOMETHING\n";
            printf("I guess I should tell you what that is!\n\n");
            cout << "I tried to make this program calculate the area of circle" << endl;
            printf("for any integer that you can think of (but only integers!)\n\n");
        }


     /*- --- ---    dArea
    ()  Calculate the area of a circle
    ()
     \*- --- --- --- -*/

        double dArea (int radius) {
            return pi*pow(radius, square);
        }