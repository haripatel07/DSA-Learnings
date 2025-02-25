#include <iostream>
#include <cmath>

using namespace std;

int distance(int x1, int y1, int x2, int y2){
    double dist = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    return round(dist);
}

int main(){
    int x1, y1, x2, y2;
    cout << "Enter the coordinates of the first point: ";
    cin >> x1 >> y1;
    cout << "Enter the coordinates of the second point: ";
    cin >> x2 >> y2;
    cout << "The distance between the two points is: " << distance(x1, y1, x2, y2) << endl;
    return 0;
}