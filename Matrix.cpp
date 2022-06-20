// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <set>

using namespace std;



 vector<vector<int>> break_vector(vector<vector<int>> vec) {
 
    vector<vector<int>> result;
    
    for (int row = 0; row < 2;  row++) {
        for (int col = 0; col < 2; col++) {

            int a = vec[row][col];
            int b = vec[row][col + 1];
            int c = vec[row + 1][col];
            int d = vec[row + 1][col + 1];

            vector<int> x = { a, b, c, d };

            result.push_back(x);
        }
    }

    return result;
}




 vector<int> get_minimum(vector<vector<int>> vec) {
     
     vector<int> minimum;

     for (int i = 0; i < vec.size(); i++) {
         set<int> a(vec[i].begin(), vec[i].end());

         minimum.push_back(*(a.begin()));
     }

     return minimum;
 }



 vector<int> get_maximum(vector<vector<int>> vec) {

     vector<int> minimum;

     for (int i = 0; i < vec.size(); i++) {
         set<int> a(vec[i].begin(), vec[i].end());

         minimum.push_back(*(a.rbegin()));
     }

     return minimum;
 }

 //Display the 4 item vector as 2 by 2 matrix
 void display_vector(vector<int> vec, string str) {
     int nrows = 2;
     int ncols = 2;

     cout << str << endl;

     for (int i = 0; i < nrows; i++) {
         for (int j = 0; j < ncols; j++) {
             cout << vec[(i*2)+j] <<"   ";
         }
         cout << endl;
     }

     cout << "  " << endl;
 }


int main()
{
    vector<vector<int>> vec = { {1, 5, 7},
        {7, 3, 5},
        {2, 6, 9} };

   
    vector<vector<int>>  broken_vec = break_vector(vec);
    vector<int> mininum = get_minimum(broken_vec);
    vector<int> maximum = get_maximum(broken_vec);

    display_vector(mininum, "minimum");
    display_vector(maximum, "maximum");

    return 0;
}

