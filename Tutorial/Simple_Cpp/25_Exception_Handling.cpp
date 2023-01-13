/*
-> Exception is any abnormal beheviour, run time error.
-> Exceptions are off beat situaltion in your program where you program should be ready to handle it with appropriate response.
-> C++ provieds a built-in error handling mechanism that is called exception handling
-> Using exception handling, you can more easily manage and respond to runtime errors.
*/

/*
    -> KeyWord for handling: try,catch,throw
    -> Program statememts that you want to monitor for exceptions are contained ina try block.
    -> If any exception occure within the try block, in is thrown(using throw).
    -> the exception is caught, using cathc, and processed.

    -> Syntax:
        try{

        }
        catch(type1 arg){
            
        }
        catch(type2 arg){

        }
        catch(typeN arg){

        }
*/

#include <iostream>
using namespace std;

int main()
{
    int i = 4;
    cout << "Welcome" << endl;
    try
    {
        if (i == 1)
            throw 1;
        if (i == 2)
            throw "hello";
        if (i == 3)
            throw 4.5;
        if (i == 4)
            throw;
        // you can do this as well where you dont want to throw any type
        // by only using 'throw' keyword it will not go the catch block and program will terminate
        // bellow statement will now run if we us throw in upper side
        cout
            << "In Try" << endl;
    }
    catch (int e)
    {
        // now e will get the error which is thrown by the 'throw' keyword like 10
        // here throwing 'int' so catch also has to be 'int' type
        cout << "Exception no: " << e << endl;
    }
    catch (double e)
    {
        cout << "Exception no: " << e << endl;
    }
    catch (...)
    {
        // '...' this will catch any of the exception type;
        cout << "Another exception thrown" << endl;
    }
    cout << "Last line" << endl;
    return 0;
}

/*
    -> When an exception is caught, arg will receive its value
    -> if you don't need access to the esception itself, specify only type in the catch clause-arg in optional.
    -> Any type of data can by caught, inclucing classes that you create.

    Throw
    -> The general form of the throw statement is: throw exception;
    -> Throw must be executed either within the try block proper or form any function that the code within the block calls
*/