#ifndef DLL_VECTOR
#define DLL_VECTOR
using namespace std;

namespace lesson_9
{
#ifdef DLL_VECTOR
#define DLL_API __declspec(dllexport) 
#else
#define DLL_API __declspec(dllimport) 
#endif
	class DLL_API  vector2d
	{
	public:
		 vector2d();
		 vector2d(float X, float Y);
		~vector2d();
		float GetY() const;
		float GetX() const;
		DLL_API friend  ostream&  operator<< (ostream& cout,
			const vector2d& vec);
		DLL_API friend  float operator*(const vector2d& a,
			const vector2d& b);
		vector2d operator+ (const vector2d& vec)const;
		vector2d operator- (const vector2d& vec)const;
		vector2d operator- ()const;
		vector2d operator/ (const vector2d& vec)const;
		vector2d operator= (const vector2d& vec);
		vector2d operator+= (const vector2d& vec);
		vector2d operator-= (const vector2d& vec);
		vector2d operator*= (const vector2d& vec);
		vector2d operator/= (const vector2d& vec);
		vector2d operator+ (const float& x)const;
		vector2d operator- (const float& x)const;
		vector2d operator* (const float& x)const;
		vector2d operator/ (const float& x)const;
		vector2d operator/= (const float& x);
		vector2d operator+= (const float& x);
		vector2d operator-= (const float& x);
		vector2d operator*= (const float& x);
	private:
		float x, y;
	};
}

#endif