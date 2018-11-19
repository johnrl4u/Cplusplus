/*Write an Angle class. The interesting 
things about angles is that they cycle 
through the range 0◦ to 360◦. 

For 
example, 250◦ + 190◦ = 80◦, 
and 40◦−90◦ = 310◦. 

In other words, 
you do a math operation and then while 
the angle is greater than 360, you 
subtract 360. While it is less 
than 0, you add 360. Implement the 
following operators: • +, -, +=, and -= 
operators so that you can add and 
subtract pairs of angles. • *, /, *= 
and /= so that you can multiply 
and divide an angle by a double. 
• = so that you can assign from 
either another Angle or a double. • == 
to compare two Angles. After each of 
these operations, make sure the angle 
is between 0 and 360 degrees. Make the 
class printable. Write a program that 
tests your class.
*/
#ifndef ANGLE_H
#define ANGLE_H

class Angle{


private:
int deg;



public:

Angle();


 int getDeg()const;
void set(int deg);

 

};


#endif