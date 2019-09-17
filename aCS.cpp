
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
        #include <iostream>
        #include <cmath>
        #include <cstdio>

//NMSP  Declare namespaces
        using namespace std;

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

      //==  display result and final message
        //  result
            cout << "\n\t:|: The area of your circle is " << dA_r_ << endl;
        //  message
            printf("\nWhoa, I guess you'll have to use a real calculator to ");
            printf("\nfind out if that worked :P\n\n");


        //  end program
            return 0;
        }


     /*- --- ---    vGreeting
    ()  Print a standard greeting 
    ()
     \*- --- --- --- -*/

        void vGreeting () {
            cout << "\n\nWelcome to a simple program that does SOMETHING\n";
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

/*---------------------------------------------------------------------------------------------

    SO! What do you think so far? Based on the example above, if you don't already appreciate
        all the nuances of my style then I doubt you would enjoy going further.
    
    If you're still here, GREAT! What follows will be a piece by piece explanation
        of everything I'm trying to accomplish with my solution.

  /*- --- ---   programTitle
[?]  First things first, the header of the program
[?]     is easy to find not only because it resides at 
[?]     the top of the program, but also becase of the use
[?]     of an artistic deployment of the "multi-line comment"
[?]     where every new line begins with [?] to draw the eye 
[?]     easily into what it's looking for, which is a description
[?]     of the overall program
[?]
[?]         -lead programmer
[?]             date-started (and completed if same)
[?]             date-finished (if different from above)
[?]               --        (if any edit dates)
[?]             date-edited (if any)
[?]     
[?]     // lastly, always leave one balnk space at the end of a header comment
[?]         // so that it remains aesthetically pleasing (it just looks wrong otherwise)
[?]
  \*- --- --- --- -*\/   // make sure to end this header properly (without \ )
                            // i can't becuase of comment in comment rules

    Notice the particular use of whitespace for the opening plate /*- --- ---   Title
        it's done very much on purpose to reduce visual strain of repetition.
        I mean it's not like I did any studies... but it just feels right to me.
        Both plates are shifted inwards two spaces to accomodate the left wall.

    The bottom plate is also purposefully longer to give the eye a visual end
        to grasp onto, while also being fairly easy to type quickly

    The whole header is left open on the right side for maintainability; 
        trying to close the whole thing off, and then change the contents would
        be just too tiresome to do consistently. It does end up looking interesting
        though, as if the header were a mouth eating the contents


        ---------------------------------------

    Next are all the statements that are necessary for pogram function
        all program content is indented twice in order to facilitate the 
        actual style of commenting that this solution suggest. This solution
        would not work as well without this indentation.

//????  The typical header statement comment
    
    obviously the coment begins with // becuase it's a single line comment, 
        the ???? is there to express that a four character code is used to specify
        what kind of statements can be found in the block following
        e.g. #### is for preprocesser, 
             $$$$ for type definition (becase they all begin $, as in $typename), 
             ()() for functions, 
             ABCD is any letter combination that representsa concept that regular
                  symbols cannot convey;

        
        -----------------------------------------------

    Because the main() function is so important to identify in a program, not only should it
        come first, but it should be distinguished from other function definitions.

     /*- --- ---    main
    --
    --
     \*- --- --- --- -*\/

//----  --- ----
        int main () {
            //body
        }

    The header, if you can't tell immediately, like all other function headers is indented
        one level to differentiate it from the program header. It's top and bottom plates
        are also only shifted inwards one space instead of two, and the left wall is visually
        distinct becasuse of the -- used here and nowhere else.

    Above the actual words "int main" the comment dashes (-) hover over each letter to act
        as a sort of attention director to those words. This is done specifically because 
        comments for statements found in the body of main can immediately have max precedent,
        i.e. begin directly against the margin just as the comment above main does.
        Using max precedent so early is avoided as much as possible, but the program should
            always dictate the comments, rather than the programmer.

        
        -------------------------------------------------

    Inside the body of any function (such as main) every block of statements that 
        concern a single idea or purpose should have their own comment with a 
        specific level of precedence that conveys to the reader the importance
        of that particular block to the overall function of the program or to the
        overarching precedent comment.

        type tDoSomething (type var) {
        //  comments should be done "bullet style" like this
            printf("ExampleText");

            Bullet style means starting each comment at least one level back, and 
                leaving two spaces between the tag and the body.
            This is because the comment "tag" (above //) acts like a bullet from
                a bulleted list, drawing the eye in to new content.
            The comment "body" (the information presented) ends up perfectly 
                in line with the following statement, creating a visual connection
                between the two.

                ----------------

            Precedence can either be denoted by multiples of //, so each level
                is related to the number of / divided by 2.
            precedence that will include multiple lower precence can be denoted
                with //== (the minium level to contain others).

            when moving down from a higher precedence with multiple comments
                use two blank lines more than the number of lines between the 
                previous two blocks to create a visual separation.
                    This is only necessary when using precedence lower than the previous
                    super precedence.

                comments together under a high precedence should have not more than
                one blank line between them, and usually none (since the tags are
                what signify a new idea)


      //==  An increased level of precedence tells the reader to pay attention
        //  and any comments that follow should not exceed the outer precedence.
            cin >> x;

        //  or else the meaning of the statements might be misinterpreted.
            cin >> y;

    //////  ***it wouldn't make sense for this to be another input statement***
                since the precedence implies that it's a whole separate idea
                outside the previous super precedence.
            cin >> z;

            instead, make use of the comment body to specify when something important is
                about to happen within the scope of other comment precedence.
                or, move the super precedence up one level to accomodate the precedence needed.
                or, (with MUCH descretion) use the tag //=> to point it out directly, and 
                    where the # of > should not exceed the # of = unless an = is being replaced
                    at the end with a ! e.g. //=>>! (this is because too many > are an eyesore).

        //  e.g. "Z" is really important!!
            cin >> z;

    //==>!  Look at that! it's totally eyecatching!
            cin >> x;



        //  and now you can use this lower precedence for something new
                now that you have created the necessary visual space (here 3 blank lines).
            printf("example");

//++++  TODO: FIX THIS!!
        //  and you can even do a multi-line comment
        //--  by using -- for each thought attached
        //--  so this is still considered the first thought
        //  --  but this would be a sub thought to the first
        //--  --  which can continue
        //  --but to start a second sub thought
        //  and this is a second top level thought
            return type;
        }


            -------------------------------------------------------

        Function Headers should look very familiiar by now, since they are nearly identical
            to the main() header, with the plates being shifted in one space.
            The only main difference is that the left wall is made of () to 
            visually distinguish it as a function header.

     /*- --- ---    tSomeFunction
    ()
    ()
     \*- --- --- --- -*\/

        type tSomeFunction (type var) {

        }

        You should try to also notice that the function head is not preceded by a // comment
            instead, the Header is actually doing the work of drawing attention to the 
            function, because of it's proximity and position (one level up and one blank space
            in between). Any further and it would not be noticeable, and any closer it would
            not be appealing


            ------------------------------------------------------------

        There is always a time when we have things that need doing, but no time
            to do them, therefore, we need to have a way of reminding ourselves
            in a visually distinct way what and where that is. 
        To do this (no pun intended) we simply use a level two precedence tag
            ended with +'s, since the + symbolizes adding something


  //++  TODO: Thing that needs doing

        above is a perfect example of when something needs to be added that
            can be explained in one line (see below for more)

//++++  TODO  ++++
  //-1  Thing one
    //  still thing one
    //--  yet still thing one
  //-2  thing two
  //-3  thing three
  ////  fourth thing (non-specific order)
  ////  fifth thing (same as above)

        notice the use of -# to specify an order of importance, and regular 
            precedece when order is not important.
        also notice that when something must be indented further, moving into
            the "trough" with -- draws the eyes into what's happening        


//++++  TODO  ++++
        //Class header
            //member function header
        //struct header
        //enum header

\*--------------------------------------------------------------------------------------------*/