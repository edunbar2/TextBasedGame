#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
private:
    double length;
    double width;

public:
    void setLength(double);
    void setWidth(double);

    double getLength() const;
    double getWidth() const;
    double getArea() const;

};

#endif