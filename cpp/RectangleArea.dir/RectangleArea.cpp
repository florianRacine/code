#include <iostream>

using namespace std;

class RectangleArea
{
private:
    float w, h;
public:
    void read_input() {
        cin >> w >> h;
    }
    void par_display() {
        cout << w << " " << h << endl;
    }
    void area_display() {
        float v;
        v = w * h;
        cout << v << endl;
    }
};

int main()
{
    /*
     * Declare a RectangleArea object
     */
    RectangleArea r_area;
    
    /*
     * Read the width and height
     */
    r_area.read_input();
    
    /*
     * Print the width and height
     */
    r_area.par_display();
    
    /*
     * Print the area
     */
    r_area.area_display();
    
    return 0;
}

