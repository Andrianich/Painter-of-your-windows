#include <windows.h>
int main()
{
	HDC desk_hDC = GetWindowDC(GetDesktopWindow());
	while (true)
	{
		for (int j = 0; j <= 1080; j++)
		{
			for (int i = 0; i <= 1920; i++)
			{
				SetPixel(desk_hDC, i, j, 255);
			}
		}
	}
	return 0;
}
