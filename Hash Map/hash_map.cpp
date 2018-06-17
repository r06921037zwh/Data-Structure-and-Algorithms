#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <string>
using namespace std;
 
int main() {
    unordered_map<string, int> hash_map;
    vector<string> names;
    names.push_back("James");
    names.push_back("Mike");
    names.push_back("Sam");
    names.push_back("James");
    
    for(int i=0; i<names.size(); ++i){
        if (hash_map.find(names[i]) == hash_map.end()){
            //if we are here, then we didn't find the names[i] in the hash_map
            hash_map.insert( make_pair(names[i], 1) );
        }
        else{
            //if hash_map.find(something)!=hash_map.end(), then it means 
            //that something is inside the hash map!
            //you can access it with the [] operator
            hash_map[ names[i] ] = hash_map[ names[i] ] + 1;
        }
    }
    //now hash map includes all the names and the frequencies in which they happen
    //now let us output these frequencies
    for(auto it = hash_map.begin(); it!=hash_map.end() ; ++it){
        cout << it->first << " " << it->second << endl; 
        //first is the name, second is frequency
    }
}