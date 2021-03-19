#pragma once
using namespace std;
/**
* \brief Класс Прямоугольник
*/
class Rectangle
{
public:
	/**
	* \brief Конструктор по умолчанию
	*/
	Rectangle();
	/**
	* \brief Параметрический конструктор
	* \param x1 : Координата левого верхнего угла по оси X
	* \param y1 : Координата левого верхнего угла по оси Y
	* \param x2 : Координата правого нижнего угла по оси X
	* \param y2 : Координата правого нижнего угла по оси Y
	*/
	Rectangle(const double x1, const double y1, const double x2, const double y2);
	/**
	* \brief Деконструктор
	*/
	~Rectangle();
	/**
  * \brief Метод, возвращающий Координату левого верхнего угла по оси X
  * \return Координата левого верхнего угла по оси X
  */
	double Getx1() const;
	/**
  * \brief Метод, возвращающий Координату левого верхнего угла по оси Y
  * \return Координата левого верхнего угла по оси Y
  */
	double Gety1() const;
	/**
  * \brief Метод, возвращающий Координату нижнего правого угла по оси X
  * \return Координата нижнего правого угла по оси X
  */
	double Getx2() const;
	/**
  * \brief Метод, возвращающий Координату нижнего правого угла по оси Y
  * \return Координата нижнего правого угла по оси Y
  */
	double Gety2() const;
	/**
	  * \brief Метод ввода и вывода координат, задающих прямоугольник
	  * \param x1 : Координата левого верхнего угла по оси X
	  * \param y1 : Координата левого верхнего угла по оси Y
	  * \param x2 : Координата правого нижнего угла по оси X
	  * \param y2 : Координата правого нижнего угла по оси Y
	  * \return Координаты, задающие прямоугольник
	  */
	void input_and_output_coordinates(const double x1, const double y1, const double x2, const double y2)
	{

	}
	/**
	  * \brief Метод вычисления длины сторон прямоугольника
	  * \param x1 : Координата левого верхнего угла по оси X
	  * \param y1 : Координата левого верхнего угла по оси Y
	  * \param x2 : Координата правого нижнего угла по оси X
	  * \param y2 : Координата правого нижнего угла по оси Y
	  * \return Длина сторон прямоугольника
	  */
	void сalculation_of_sides(const double x1, const double y1, const double x2, const double y2)
	{

	}
	/**
	  * \brief Метод вычисления площади прямоугольника
	  * \param x1 : Координата левого верхнего угла по оси X
	  * \param y1 : Координата левого верхнего угла по оси Y
	  * \param x2 : Координата правого нижнего угла по оси X
	  * \param y2 : Координата правого нижнего угла по оси Y
	  * \return Площадь прямоугольника
	  */
	void calculating_the_area_of_a_rectangle(const double x1, const double y1, const double x2, const double y2) {

	}
	/**
	  * \brief Метод перемещения прямоугольника на плоскости
	  * \param x1 : Координата левого верхнего угла по оси X
	  * \param y1 : Координата левого верхнего угла по оси Y
	  * \param x2 : Координата правого нижнего угла по оси X
	  * \param y2 : Координата правого нижнего угла по оси Y
	  * \return Новые координаты, задающие прямоугольник
	  */
	void move_a_rectangle_on_a_plane(const double x1, const double y1, const double x2, const double y2) {
	}
private:
	/**
	* \brief Координата левого верхнего угла по оси X
	*/
	double x1;
	/**
	* \brief Координата левого верхнего угла по оси Y
	*/
	double y1;
	/**
	* \brief Координата правого нижнего угла по оси X
	*/
	double x2;
	/**
	* \brief Координата правого нижнего угла по оси Y
	*/
	double y2;
}
