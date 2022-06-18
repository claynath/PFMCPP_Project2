#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of the 6 major primitive types available in C++  here:
 
 int
 float
 double
 char
 bool
 unsigned int
 
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, call ignoreUnused once and pass all of your variables to it. see line 71 for an example
 
3) Declare 10 free functions
    each declaration should have a random number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.
    remember:
    Name functions what they do
        takeDogForWalk(int distanceInYards);
    Name variables what they are.
        int numStepsSinceStart;

4) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
5) pass each of your function parameters to the ignoreUnused function like you did in b)
6) if your function returns something other than void, add 'return { };' at the end of it.
7) provide default values for an arbitrary number of parameters in the function parameter list.

8) consult the coding style guide found in the Readme.MD and adjust the formatting of your 10 functions.  At this point, you might have something that looks like this:
    float someFunc2(bool yes, int bar=2) { ignoreUnused(yes, bar ); return { }; }
    This does not conform with the coding standard for this course (check the Readme.MD) and needs to be corrected
    
9) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
10) click the [run] button.  Clear up any errors or warnings as best you can.
 */

//2)
void variableDeclarations()
{
    int a = -1;
    int b = -3;
    int c = -5;
    float d = 1.1f;
    float e = 1.3f;
    float f = 1.5f;
    double g = 1.2;
    double h = 1.4;
    double i = 1.6;
    char grade = 'A';
    char carClass = 'C';
    char group = 'B';
    bool on = true;
    bool off = false;
    bool running = true;
    unsigned int j = 1;
    unsigned int k = 3;
    unsigned int l = 5;
    
    //example:
    int number = 2; //declaration of a variable named "number", that uses the primitive type 'int', and the variable's initial value is '2'

    ignoreUnused(a, b, c, d, e, f, g, h, i, grade, carClass, group, on, off, running, j, k, l);

    
    ignoreUnused(number); //passing each variable declared to the ignoreUnused() function
}

/*
 10 functions
 example:
 note: this example shows the result after completing steps 3-8
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */
void playBasketball(int howManyGames = 1, int howManyPlayers = 10)
{
    ignoreUnused(howManyGames, howManyPlayers);
}
/*
 2)
 */
bool goingForRun(int temp, double distance = 1.5)
{
    ignoreUnused(temp, distance);
    return {};
}
/*
 3)
 */
bool goingFishing(int temp, unsigned int weatherRating, bool gearReady = true)
{
    ignoreUnused(temp, weatherRating, gearReady);
    return {};
}
/*
 4)
 */
void practicePiano(char practicePiece, double time = 1)
{
    ignoreUnused(practicePiece, time);
}
/*
 5)
 */
void giveTime(char mode = 'A', char timeZone = 'E')
{
    ignoreUnused(mode, timeZone);
}
/*
 6)
 */
void cookDinner(unsigned int stoveTemp, int numberOfGuest = 2)
{
    ignoreUnused(stoveTemp, numberOfGuest);
}
/*
 7)
 */
void assignClass(int age, char grade, int gradYear = 2024)
{
    ignoreUnused(age, grade, gradYear);
}
/*
 8)
 */
void sendBirthdayCard(int birthDay, int birthMonth, int birthYear = 1980)
{
    ignoreUnused(birthDay, birthMonth, birthYear);
}
/*
 9)
 */
void countMonthDays(int currentMonth, int currentYear = 2022)
{
    ignoreUnused(currentMonth, currentYear);
}
/*
 10)
 */
void kickBallDistance(double legLength, double ballWeight = 1.5)
{
    ignoreUnused(legLength, ballWeight);
}
/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
    playBasketball();
    //2)
    auto goneForRun = goingForRun(85);
    //3)
    auto goneFishing = goingFishing(78, 7);
    //4)
    practicePiano('A');
    //5)
    giveTime();
    //6)
    cookDinner(450);
    //7)
    assignClass(10, 'B');
    //8)
    sendBirthdayCard(15, 5, 1995);
    //9)
    countMonthDays(2, 1998);
    //10)
    kickBallDistance(3);
    
    ignoreUnused(carRented, goneForRun, goneFishing);
    std::cout << "good to go!" << std::endl;
    return 0;    
}
