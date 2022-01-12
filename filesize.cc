#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// output format to use IDENTICALLY:
//BSH:Saru> ./filesize input.3lines input.1line
//program: ./filesize
// input.3lines: 3
// input.1line: 1

int main( int argc, char* argv[] )
{
    // just to get you started, this is how to refer to the arguments that were passed
  //  for (int arg = 0; arg < argc; ++arg)
  //          std::cout << "argv[" << arg << "]: " << argv[arg] << '\n' ;


  string filename = "";   //variable to hold filenames
  string line ;       //variable used to hold line from the files
  ifstream file;          //needed to open a file
  int lines = 0;          // variable counter to count amount of lines

    cout << "program: ./filesize"<< endl;

    for(int i = 1; i < argc; i++){

        lines = 0;

        filename = argv[i];
        file.open(filename);

        if(file.is_open()){     // checks to see if file opened correctly

          while(getline(file, line)){       //runs while not end of file
                                            // grabs each line of the file

          //  if(line.length() >= 1){

            lines++;                // increment counter

          //}

          }



        }else{                      // if opening the file failed

          lines = -1;               // notify user of failure to open file

        }

        cout << " " << filename << ": " << lines << endl;    //prints the numebr of lines out

        file.close();

    }

    exit(0); // this means that the program executed correctly!
}
