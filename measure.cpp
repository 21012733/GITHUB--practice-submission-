#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double h_inches, d_feet, d_inches, angle_degrees;
    
    // Input height of eye in inches
    cout << "Enter the height of your eye (in inches): ";
    cin >> h_inches;
    
    // Input distance to the tree in feet and inches
    cout << "Enter the distance to the tree (feet inches): ";
    cin >> d_feet >> d_inches;
    
    // Convert distance to inches
    double d_total_inches = d_feet * 12 + d_inches;
    
    // Input angle in degrees
    cout << "Enter the angle (in degrees): ";
    cin >> angle_degrees;
    
    // Calculate height of the tree
    double height_feet = (h_inches / 12) + (d_total_inches * tan(angle_degrees * M_PI / 180));
    
    // Output the height of the tree in feet
    cout << "The height of the tree is: " << height_feet << " feet" << endl;
    
    return 0;
}