#include <fstream>
#include <iostream>
#include <memory>
#include <vector>
using namespace std;

//Note: Do not change any part of the existing code.
int main(int argc, char *argv[]) {
    std::vector<int> numVec;
    int nextNum;
    ifstream inFile;
    inFile.open(argv[1]);
    ofstream outfile;
    outfile.open("output");

    while(inFile >> nextNum){
       numVec.push_back(nextNum);
    }
    
    // Write your code to remove all occurences 3 contiguous numbers that add up to 0 from the vector numVec
    while(inFile>>nextNum)
    {
       numVec.push_back(nextNum):

    }
    int n=numVec.size();
    int k=0;
    while(k<n){
       if(numVec[k]+numVec [k+1]+numVec [k+2]==0)
       { 
          numVec.erase(numVec.begin()+k); n = numVec.size();

numVec.erase(numVec.begin()+k); numVec.erase (numVec.begin()+k);

k = 0;

}else{

k++;

}
    }

    // Note that the output vector should not have any occurances where 3 contiguous numbers sum to 0

   for(auto n:numVec) {
      outfile << n << endl; 
   }
}
