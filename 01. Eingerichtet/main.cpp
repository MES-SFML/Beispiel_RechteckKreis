#include <SFML/Graphics.hpp>

using namespace sf; // statt std, hat zur Folge, dass bei String etc. std:: vor gesetzt werden muss

int main()
{
    // Windows-Fenster einrichten
    RenderWindow window(VideoMode(800, 600), "Formen >> Kreis & Rechteck");
    
    // Form: Kreis
    CircleShape kreis(50.f);
    kreis.setOutlineThickness(5.f);
    kreis.setOutlineColor(Color(250, 150, 100));
    kreis.setPosition(130, 385);


    // Form: Rechteck
    sf::RectangleShape rechteck(sf::Vector2f(120.f, 50.f)); // 120 x 50 großes Rechteck
    // rechteck.setSize(sf::Vector2f(100.f, 100.f)); // Ändern Sie die Größe auf 100 x 100
    rechteck.setFillColor(Color::Red);
    rechteck.setPosition(10, 20);
   
    while (window.isOpen())
    {
        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed) 
                window.close();
        }

        window.clear();          
        window.draw(kreis);      
        window.draw(rechteck);  
        window.display();      
    }

    return 0;
}