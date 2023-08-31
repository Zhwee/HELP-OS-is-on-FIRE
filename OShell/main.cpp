#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;


int processnum, timequantum, i=0,processtime;
string processname;



int main()
{
    //std::string str; //what's std:: = standard
    map<string,int> nametime;

    cout << "Please provide the number of processes\n";
    cin >> processnum;

   /* for (int i=0; i<processnum;i++)
    {
        cout << "Please provide process names\n";
        cin >> processname;
        str.append(processname);
    }*/

     std::vector<std::map<std::string, int>> nametimearr;
    //const list* nametimearr[processnum]; //store into dict, const ____, not char

    for (i=0;i<processnum;i++)
        // initialization = initialize variables =//empty for initialize random viariable but doesn't stop the loop
        //     ; condition to stop the lop
        //         ; what happens after each loop

        {
           /* if (i < processnum) { //set condition, less than process
              break;                //break/exit out of the loop
            }*/

            cout << "Please provide process names\n";
            cin >> processname;
            /*str.append(processname);
            str.append(" ");*/
            /* ++i; //post */


            cout << "Total time each process requires to finish running\n";
            cin >> processtime;
            /*str.append(processtime);
            str.append(" ");*/

            nametime[processname]=processtime; //dictionary
            //nametimearr[processnum]=nametime[i]; //putting dictionary into array
            //dumbass mistake
                //nametimearr[i]=nametime; //correct
            nametimearr.push_back(nametime);
        }

    cout << "Please provide the timequantum\n";
    cin >> timequantum;



    //cout << processnum<< endl; //add in text

    //dictionary stores process name and time
    //then have an array to store the dictionary

    //cout << i<< endl; //not working because i is inside the for loop, doesn't work outside of it
    //cout << timequantum<< endl;

    //use strtok, or customSplit, assign 2nd input to 1st input

    //1. have an array for processnum
    //2. have an array for processtime
    //processname[i]=processtime[i] //inefficient
    //output together with index

    ////always better for big org.
    //bundling the data together, store them together into an array
    //1. dictionary/*hashmap*
    //2. class or struct(only have struct in C, no C++), create new data type to store both


    //cout << nametimearr; //doesn't work



    return 0;
}
