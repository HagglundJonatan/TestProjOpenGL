#pragma once

#include <SDL2/SDL.h>
#include <string>

class Display
{
public:
	Display(int width, int height, const std::string& title);
	
	virtual ~Display();

	void update();

	void clear(float r, float g, float b, float a);

	bool isClosed();

protected:
private:
	Display(const Display& other);
	void operator=(const Display& other) {}

	SDL_Window* m_window;
	SDL_GLContext m_glContext;
	bool m_isClosed;

};

