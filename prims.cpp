#include <cstring>
#include <iostream>
using namespace std;

int main() {
  int no_edge;  
  int selected[5];
  memset(selected, false, sizeof(selected));
  no_edge = 0;
  selected[0] = true;
  int x;  
  int y;  
  cout << "Edge"
     << " : "
     << "Weight";
  cout << endl;
  while (no_edge < 5 - 1) {
    int min = 9999999;                            
    x = 0;
    y = 0;
    
    int G[5][5] = {
  {0, 9, 75, 0, 0},
  {9, 0, 95, 19, 42},
  {75, 95, 0, 51, 66},
  {0, 19, 51, 0, 31},
  {0, 42, 66, 31, 0}};

    for (int i = 0; i < 5; i++) {
      if (selected[i]) {
        for (int j = 0; j < 5; j++) {
          if (!selected[j] && G[i][j]) {     
            if (min > G[i][j]) {
              min = G[i][j];
              x = i;
              y = j;
            }
          }
        }
      }
    }
    cout << x << " - " << y << " :  " << G[x][y];
    cout << endl;
    selected[y] = true;
    no_edge++;
  }

  

  return 0;
}
// time complexity of the entire program is 
// O (n)+O (n^2) = O (n^2)