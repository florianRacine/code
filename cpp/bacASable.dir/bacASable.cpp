#include <bits/stdc++.h>

using namespace std;

class Complex {
    public:
        Complex(float x, float y) {
            this->a=x;
            this->b=y;
        }
        int getReel() {
            return a;
        }
        int getIm() {
            return b;
        }
        int mod() {
            float z;
            z = pow(pow(a,2)+pow(b,2),1/2);
            return z;
        }
    private:
        float a, b;
};

int main() {
    Complex z(1,2);
    cout << z.mod() << endl;
    return 0;
}
