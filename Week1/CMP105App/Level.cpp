#include "Level.h"

Level::Level(sf::RenderWindow* hwnd)
{
	window = hwnd;

	// initialise game objects
	rect.setSize(sf::Vector2f(50, 5));
	rect.setPosition(100, 100);
	rect.setFillColor(sf::Color::Red);

	circle.setRadius(50);
	circle.setPosition(550, (675/2)-50);
	circle.setFillColor(sf::Color::Blue);
	circle.setOutlineColor(sf::Color::Red);
	circle.setOutlineThickness(1);

	bigRect.setSize(sf::Vector2f(50, 50));
	bigRect.setPosition(575, (675/2)-25);
	bigRect.setFillColor(sf::Color::Red);

	medRect.setSize(sf::Vector2f(30, 30));
	medRect.setPosition(585, (675/2)-15);
	medRect.setFillColor(sf::Color::Green);

	smlRect.setSize(sf::Vector2f(10, 10));
	smlRect.setPosition(595, (675/2)-5);
	smlRect.setFillColor(sf::Color::Blue);

	font.loadFromFile("font/arial.ttf");

	text.setFont(font);
	text.setString("Hello world");
	text.setPosition(550, 0);

	botRight.setFillColor(sf::Color::Green);
	botRight.setSize(sf::Vector2f(100, 100));
}

Level::~Level()
{
}

// handle user input
void Level::handleInput()
{

}

// Update game objects
void Level::update()
{
	botRight.setPosition(window->getSize().x-100, window->getSize().y-100);
}

// Render level
void Level::render()
{
	beginDraw();

	window->draw(rect);
	window->draw(circle);
	window->draw(bigRect);
	window->draw(medRect);
	window->draw(smlRect);
	window->draw(text);
	window->draw(botRight);

	endDraw();
}

void Level::beginDraw()
{
	window->clear(sf::Color(100, 149, 237));
}

// Ends rendering to the back buffer, and swaps buffer to the screen.
void Level::endDraw()
{
	window->display();
}