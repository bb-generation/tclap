#include <string>
#include <iostream>
#include <algorithm>
#include "tclap/CmdLine.h"

using namespace TCLAP;
using namespace std;

int main(int argc, char** argv)
{
   // Wrap everything in a try block.  Do this every time, 
   // because exceptions will be thrown for problems. 
   try {  

   // Define the command line object.
   CmdLine cmd("Command description message", ' ', "0.9");

   stringstream sin;
   sin >> noskipws;

   sin << argv[0];
   sin << " ";
   sin << argv[1];

   cmd.parse(sin.str());

   } catch (ArgException &e)  // catch any exceptions
   { cerr << "error: " << e.error() << " for arg " << e.argId() << endl; }
}

