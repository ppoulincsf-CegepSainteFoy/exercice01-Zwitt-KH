#pragma once
class Rectangle
{
public:
  Rectangle();
  Rectangle(int width, int length);
  ~Rectangle();
  int getArea() const;
  int getPerimeter() const;
  void setLength(int);
  void setWidth(int);
  int getLength() const;
  int getWidth() const;

  private:
    int length;
    int width;
};


