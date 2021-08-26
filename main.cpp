#include <iostream>
#include <fstream>
#include <string>

int main() {
   std::ifstream in_file {"poem.txt"};
   std::ofstream out_file{"poem_out.txt"};
   
   if(!in_file){
       std::cerr<<"Error opening input file"<<std::endl;
       return 1;
   }
   
   if(!out_file){
       std::cerr<<"Error opening output  file"<<std::endl;
       return 1;
   }
   
char c;
   
   while(in_file.get(c)){
       out_file.put(c);
   }
   out_file<<std::endl<<"Copied from poem.txt"<<std::endl;
   std::cout<<"File Copied "<<std::endl;
   in_file.close();
   out_file.close();
    return 0;
}