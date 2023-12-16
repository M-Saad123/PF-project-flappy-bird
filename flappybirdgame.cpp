#include<SFML/Graphics.hpp>
#include<SFML/Audio.hpp>
#include<iostream>
#include<random>
#include<fstream>
using namespace std;
using namespace sf;
void check(int& y2, int& y1, int n,int& count) {
    int a = 400;
    int b = -300;
    y2 = a;
    y1 = b;
  
    n = rand() % 200;
    if (count % 3 == 0) {
        y2 = y2 + n;
        y1 = y1 + n;
    }
    else {
        y2 = y2 - n;
        y1 = y1 - n;
    }
    count++;


}





int saad = 1;


int main() {
   


    RenderWindow one(VideoMode(1200, 700), "FLAPPY BIRD", Style::Close | Style::Resize);
    RectangleShape flappybhai(Vector2f(80.0f, 60.0f));
    flappybhai.setPosition(700 / 2.0 - 100.0f, 800 / 2 - 100.0f);
    Texture flappy;
    flappy.loadFromFile("1.png");
    flappybhai.setTexture(&flappy);
    Vector2u flappysir = flappy.getSize();
    flappysir.x /= 5.01;
    flappysir.y /= 2.9;

    RectangleShape grass(Vector2f(1200.0f,100.0f));
    Texture grassi;
    grassi.loadFromFile("2.png");
    grass.setTexture(&grassi);
    grass.setPosition(0.0f, 600.0f);
    RectangleShape help(Vector2f(1200.0f, 100.0f));
    Texture helper;
    helper.loadFromFile("2.png");
    help.setTexture(&helper);
    help.setPosition(1150.0f, 600.0f);
    RectangleShape help1(Vector2f(1200.0f, 100.0f));
    Texture helpone;
    helpone.loadFromFile("2.png");
    help1.setTexture(&helpone);
    help1.setPosition(1150+1100.0f, 600.0f);
    int y2 = 400;
    int y1 = -300;
    int n = 0;
    int count = 0;
    check(y2, y1, n,count);


    RectangleShape pipe1(Vector2f(100, 600));//1
    RectangleShape pipe2(Vector2f(100, 600));
    RectangleShape f1(Vector2f(65, 600));
    RectangleShape f2(Vector2f(65, 600));
    Texture piped;
    Texture pipeu;
    pipeu.loadFromFile("pipe2.png");
    piped.loadFromFile("pipe.png");
    pipe1.setTexture(&pipeu);

    pipe2.setTexture(&piped);
    pipe2.setPosition(1300, y2);
    pipe1.setPosition(1300, y1);
    f1.setPosition(1300 + 5, y1-15);
    f2.setPosition(1300 + 5, y2 + 15);
    RectangleShape pipe11(Vector2f(100, 600));//2
    RectangleShape pipe22(Vector2f(100, 600));
    RectangleShape s1(Vector2f(65, 600));
    RectangleShape s2(Vector2f(65, 600));
    pipe11.setTexture(&pipeu);
    pipe22.setTexture(&piped);
    check(y2, y1, n,count);
    pipe22.setPosition(1900, y2);
    pipe11.setPosition(1900, y1);
    s1.setPosition(1900 + 5, y1 - 15);
    s2.setPosition(1900 + 5, y2 + 15);
    RectangleShape pipe111(Vector2f(100, 600));//3
    RectangleShape pipe222(Vector2f(100, 600));
    RectangleShape t1(Vector2f(65, 600));
    RectangleShape t2(Vector2f(65, 600));
    pipe111.setTexture(&pipeu);
    pipe222.setTexture(&piped);
    check(y2, y1, n,count);
    pipe222.setPosition(2500, y2);
    pipe111.setPosition(2500, y1);
    t1.setPosition(2500 + 5, y1 - 15);
    t2.setPosition(2500 + 5, y2 + 15);
    RectangleShape pipe1111(Vector2f(100, 600));//4
    RectangleShape pipe2222(Vector2f(100, 600));
    RectangleShape r1(Vector2f(65, 600));
    RectangleShape r2(Vector2f(65, 600));
    pipe1111.setTexture(&pipeu);
    pipe2222.setTexture(&piped);
    check(y2, y1, n,count);
    pipe2222.setPosition(3100, y2);
    pipe1111.setPosition(3100, y1);
    r1.setPosition(3100 + 5, y1 - 15);
    r2.setPosition(3100 + 5, y2 + 15);
    
   
    RectangleShape sky(Vector2f(1200, 700));
    Texture bg;
    bg.loadFromFile("sky.jpg");
    sky.setTexture(&bg);
    
    
    RectangleShape go(Vector2f(1200, 700));
    Texture gov;
    gov.loadFromFile("gov.png");
    go.setTexture(&gov);

    
    RectangleShape pause(Vector2f(1200, 700));
    Texture ps;
    ps.loadFromFile("pause.png");
    pause.setTexture(&ps);
    
    Font lf;
    if (lf.loadFromFile("fonts.otf")) {
        cout << "FONT HAS BEEN LOADED" << endl;
    }
    Text lfs;
    lfs.setFont(lf);
    lfs.setFillColor(Color::White);
    lfs.setCharacterSize(48);

    Text pus;
    pus.setFont(lf);
    pus.setFillColor(Color::White);
    pus.setCharacterSize(48);

    Text eg;
    eg.setFont(lf);
    eg.setFillColor(Color::White);
    eg.setCharacterSize(48);

    Text ps1;
    ps1.setFont(lf);
    ps1.setFillColor(Color::White);
    ps1.setCharacterSize(36);
    Text ps2;
    ps2.setFont(lf);
    ps2.setFillColor(Color::White);
    ps2.setCharacterSize(36);
    Text ps3;
    ps3.setFont(lf);
    ps3.setFillColor(Color::White);
    ps3.setCharacterSize(36);
    Text ps4;
    ps4.setFont(lf);
    ps4.setFillColor(Color::White);
    ps4.setCharacterSize(36);
    Text ps5;
    ps5.setFont(lf);
    ps5.setFillColor(Color::White);
    ps5.setCharacterSize(36);
    int aik = 0;
    int doo = 0;
    int teen = 0;
    int chaar = 0;
    int panch = 0;
    int x[1000];
    int start = 0;

    RectangleShape sb(Vector2f(1000, 700));
    Texture sbs;
    sbs.loadFromFile("start.png");
    sb.setTexture(&sbs);
    sb.setPosition(100, 50);
    sb.setFillColor(Color::Black);

    SoundBuffer points;
    points.loadFromFile("points.mp3");
    Sound point;
    point.setBuffer(points);

    SoundBuffer flap;
    flap.loadFromFile("flaps.mp3");
    Sound flaps;
    flaps.setBuffer(flap);

    SoundBuffer cd;
    cd.loadFromFile("cd.mp3");
    Sound cod;
    cod.setBuffer(cd);


    SoundBuffer stop;
    stop.loadFromFile("pause.mp3");
    Sound stops;
    stops.setBuffer(stop);


    RectangleShape gd(Vector2f(1200, 700));
    Texture gud;
    gud.loadFromFile("guides.png");
    gd.setTexture(&gud);
    gd.setFillColor(Color::Black);




    
    
   


   
   

    
    




    
    
    
    
    int score = 0;
    int i = 0;
    int j = 0;
    int loopspeed = 0;
    int onee = 0;
    int one1 = 0;
    int one11 = 0;
    int one111 = 0;
    int repeat = 0;
    int guide = 0;
   




    while(saad==1){
        flappybhai.setPosition(700 / 2.0 - 100.0f, 800 / 2 - 100.0f);
        grass.setPosition(0.0f, 600.0f);
        help.setPosition(1150.0f, 600.0f);
        help1.setPosition(1150 + 1100.0f, 600.0f);
        check(y2, y1, n, count);
        pipe2.setPosition(1300, y2);
        pipe1.setPosition(1300, y1);
        f1.setPosition(1300 + 5, y1-15);
        f2.setPosition(1300 + 5, y2 + 15);
        check(y2, y1, n, count);
        pipe22.setPosition(1900, y2);
        pipe11.setPosition(1900, y1);
        s1.setPosition(1900 + 5, y1 - 15);
        s2.setPosition(1900 + 5, y2 + 15);
        check(y2, y1, n, count);
        pipe222.setPosition(2500, y2);
        pipe111.setPosition(2500, y1);
        t1.setPosition(2500 + 5, y1 - 15);
        t2.setPosition(2500 + 5, y2 + 15);

        check(y2, y1, n, count);
        pipe2222.setPosition(3100, y2);
        pipe1111.setPosition(3100, y1);
        r1.setPosition(3100 + 5, y1 - 15);
        r2.setPosition(3100 + 5, y2 + 15);
        int score = 0;
        lfs.setPosition(10.0f, 10.0f);
        lfs.setString("Score="+ to_string(score));
        int ab = 1;
        int abb = 1;
        int abbb = 1;
        int abbbb = 1;
       




















        while (one.isOpen()) {
          
            if (start == 0) {
                flaps.play();
                while (true) {
                    if (flaps.getStatus() != SoundSource::Playing && start != 1) {

                        flaps.play();

                    }
                    one.clear();
                    one.draw(sky);
                    one.draw(sb);
                    one.display();
                    Event four;
                    while (one.pollEvent(four)) {
                        if (Keyboard::isKeyPressed(Keyboard::Key::Space)) {
                            break;
                        }
                        else if (four.type == four.Closed) {
                            one.close();
                            flaps.stop();
                            start = 1;
                        }
                        else if (four.type == four.Resized) {
                            cout << four.size.width << " " << four.size.height << endl;
                        }
                        else if (four.type == four.TextEntered) {
                            cout << (char)four.text.unicode;

                        }
                    }
                    if (Keyboard::isKeyPressed(Keyboard::Key::Space)) {
                        start = 1;
                        break;
                    }
                }
            }
            if (guide == 0) {
                
                while (true) {
                    if (flaps.getStatus() != SoundSource::Playing && guide!=1) {

                        flaps.play();
                       
                    }
                    
                    one.clear();
                    one.draw(sky);
                    one.draw(gd);
                    one.display();
                    Event five;
                    while (one.pollEvent(five)) {
                        if (Keyboard::isKeyPressed(Keyboard::Key::Enter)) {
                            break;
                        }
                        else if (five.type == five.Closed) {
                            one.close();
                            flaps.stop();
                            guide = 1;
                        }
                        else if (five.type == five.Resized) {
                            cout << five.size.width << " " << five.size.height << endl;
                        }
                        else if (five.type == five.TextEntered) {
                            cout << (char)five.text.unicode;

                        }
                    }
                    if (Keyboard::isKeyPressed(Keyboard::Key::Enter)) {
                        guide = 1;
                        break;
                    }
                }
            }
            
           
            Event two;
            while (one.pollEvent(two)) {
               
                if (two.type == two.Closed) {
                    one.close();
                    flaps.stop();
                    repeat = 1;
                }
                else if (two.type == two.Resized) {
                    cout << two.size.width << " " << two.size.height << endl;
                }
                else if (two.type == two.TextEntered) {
                    cout << (char)two.text.unicode;

                }
                else if (Keyboard::isKeyPressed(Keyboard::Key::Up)) {
                    if (flappybhai.getPosition().y > 15) {
                        flappybhai.move(0.0f, -20.0f);
                    }

                }
                else if (Keyboard::isKeyPressed(Keyboard::Key::Down)) {
                    if (flappybhai.getPosition().y < 600) {
                        flappybhai.move(0.0f, +20.0f);
                    }
                }
                else if (Keyboard::isKeyPressed(Keyboard::Key::Right)) {
                    if (flappybhai.getPosition().x < 1110) {
                        flappybhai.move(+20.0f, 0.0f);
                    }
                }
                else if (Keyboard::isKeyPressed(Keyboard::Key::Left)) {
                    if (flappybhai.getPosition().x >= 15) {
                        flappybhai.move(-20.0f, 0.0f);
                    }
                }
                else if (Keyboard::isKeyPressed(Keyboard::Key::Enter)) {
                    flaps.stop();
                    pus.setPosition(200.0f, 570.0f);
                    stops.play();
                    pus.setString("PRESS SPACE TO RESUME THE GAME");
                    while (true) {
                        one.clear();
                        one.draw(sky);
                        one.draw(pause);
                        one.draw(pus);
                        one.display();
                        Event three;
                        
                        while (one.pollEvent(three)) {


                            /* grass.move(0, 0);
                             help.move(0, 0);
                             help1.move(0, 0);
                             pipe1.move(0, 0);
                             pipe2.move(0, 0);
                             pipe11.move(0, 0);
                             pipe22.move(0, 0);
                             pipe111.move(0, 0);
                             pipe222.move(0, 0);
                             pipe1111.move(0, 0);
                             pipe2222.move(0, 0);*/
                            if (Keyboard::isKeyPressed(Keyboard::Key::Space)) {
                                break;
                            }
                            else if (three.type == three.Closed) {
                                one.close();
                            }
                            else if (three.type == three.Resized) {
                                cout << three.size.width << " " << three.size.height << endl;
                            }
                            else if (three.type == three.TextEntered) {
                                cout << (char)three.text.unicode;

                            }
                        }
                        if (Keyboard::isKeyPressed(Keyboard::Key::Space)) {
                            break;
                        }
                    }

                }
            }
            if (repeat != 1) {
                if (flaps.getStatus() != SoundSource::Playing) {

                    flaps.play();

                }
            }
           
            lfs.setString("Score=" + to_string(score));

            flappybhai.setTextureRect(IntRect((int)flappysir.x * j, (int)flappysir.y * i, flappysir.x, flappysir.y));
           
               

            
            grass.move(-0.6f, 0.0f);
            help.move(-0.6f, 0.0f);
            help1.move(-0.6f, 0.0f);
            pipe1.move(-0.6f, 0.0f);
            pipe2.move(-0.6f, 0.0f);
            pipe11.move(-0.6f, 0.0f);
            pipe22.move(-0.6f, 0.0f);
            pipe111.move(-0.6f, 0.0f);
            pipe222.move(-0.6f, 0.0f);
            pipe1111.move(-0.6f, 0.0f);
            pipe2222.move(-0.6f, 0.0f);
            f1.move(-0.6, 0);
            f2.move(-0.6, 0);
            s1.move(-0.6, 0);
            s2.move(-0.6, 0);
            t1.move(-0.6, 0);
            t2.move(-0.6, 0);
            r1.move(-0.6, 0);
            r2.move(-0.6, 0);
            






            if (loopspeed % 10 == 0) {
                j++;

                if (j > 4) {
                    i++;
                    j = 0;

                }
                if (i == 2 && j == 4) {
                    i = 0;
                    j = 0;
                }
                loopspeed = 0;
            }

            loopspeed++;




            if (grass.getPosition().x <= -1200) {
                grass.setPosition(help1.getPosition().x + 1150.0f, 600.0f);
            }

            if (help.getPosition().x <= -1200) {
                help.setPosition(grass.getPosition().x + 1150.0f, 600.0f);
            }

            if (help1.getPosition().x <= -1200) {
                help1.setPosition(help.getPosition().x + 1150.0f, 600.0f);
            }

            check(y2, y1, n, count);
            if (pipe11.getPosition().x <= -10 && pipe22.getPosition().x <= -10) {
                pipe1.setPosition(1200.0f, y1);
                pipe2.setPosition(1200.0f, y2);
                f1.setPosition(1200 + 5, y1-15);
                
                f2.setPosition(1200 + 5, y2 + 15);
                onee = 1;
            }
            check(y2, y1, n, count);
            if (pipe111.getPosition().x <= -10 && pipe222.getPosition().x <= -10) {
                pipe11.setPosition(1200.0f, y1);
                pipe22.setPosition(1200.0f, y2);
                s1.setPosition(1200 + 5, y1 - 15);

                s2.setPosition(1200 + 5, y2 + 15);
                one1 = 1;

            }
            check(y2, y1, n, count);
            if (pipe1111.getPosition().x <= -10 && pipe2222.getPosition().x <= -10) {
                pipe111.setPosition(1200.0f, y1);
                pipe222.setPosition(1200.0f, y2);
                t1.setPosition(1200 + 5, y1 - 15);

                t2.setPosition(1200 + 5, y2 + 15);
                one11 = 1;

            }
            check(y2, y1, n, count);
            if (pipe1.getPosition().x <= -10 && pipe2.getPosition().x <= -10) {
                pipe1111.setPosition(1200.0f, y1);
                pipe2222.setPosition(1200.0f, y2);
                r1.setPosition(1200 + 5, y1 - 15);

                r2.setPosition(1200 + 5, y2 + 15);
                one111 = 1;

            }

           

               //COLLISIONS;



           


            /*1*/    if (flappybhai.getGlobalBounds().intersects(f1.getGlobalBounds()) || flappybhai.getGlobalBounds().intersects(f2.getGlobalBounds())) {
                int w = 0;
                cod.play();
                flaps.stop();
              
               
                while (w <= 300000000) {
                    w++;
                }
               
                lfs.setPosition(275, 580);
                eg.setPosition(385, 510);
                eg.setString("YOUR SCORE IS=" + to_string(score));
                lfs.setString("PRESS SPACE TO START OVER");
                pus.setPosition(10.0, 15.0);
                pus.setString("PREVIOUS FIVE SCORES:");
                ps1.setPosition(10.0, 65.0);
                ps2.setPosition(10.0, 100.0);
                ps3.setPosition(10.0, 135.0);
                ps4.setPosition(10.0, 170.0);
                ps5.setPosition(10.0, 205.0);
                ofstream write("ps.txt",ios::app);
                write <<"\n" << score;
                write.close();
                ifstream rd("ps.txt");
                int  p= 1;
                while (!rd.eof()) {
                    rd >> x[p];
                    p++;
                } 
                x[0] = score;
                
                ofstream wr("ps.txt");
                wr << x[0] << "\n" << x[1] << "\n" << x[2] << "\n" << x[3] << "\n" << x[4];
                wr.close();
              

                ifstream read("ps.txt");
               
                read >> aik;
                ps1.setString(to_string(aik));
                read >> doo;
                ps2.setString(to_string(doo));
                read >> teen;
                ps3.setString(to_string(teen));
                read >> chaar;
                ps4.setString(to_string(chaar));
                read >> panch;
                ps5.setString(to_string(panch));
                read.close();
               
              



                while (true) {
                    one.clear();
                    one.draw(sky);
                    one.draw(go);
                    one.draw(lfs);
                    one.draw(eg);
                    one.draw(pus);
                    one.draw(ps1);
                    one.draw(ps2);
                    one.draw(ps3);
                    one.draw(ps4);
                    one.draw(ps5);
                    one.display();
                    Event three;

                    while (one.pollEvent(three)) {

                        if (Keyboard::isKeyPressed(Keyboard::Key::Space)) {
                            break;
                        }
                        else if (three.type == three.Closed) {
                            one.close();
                        }
                        else if (three.type == three.Resized) {
                            cout << three.size.width << " " << three.size.height << endl;
                        }
                        else if (three.type == three.TextEntered) {
                            cout << (char)three.text.unicode;

                        }
                    }
                    if (Keyboard::isKeyPressed(Keyboard::Key::Space)) {
                        break;
                    }
                }
                 saad = 0;
                 break;

            }




            /*2*/    if (flappybhai.getGlobalBounds().intersects(s1.getGlobalBounds()) || flappybhai.getGlobalBounds().intersects(s2.getGlobalBounds())) {
                int w = 0;
                cod.play();
                flaps.stop();
               
                while (w <= 300000000) {
                    w++;
                }
                lfs.setPosition(275, 580);
                eg.setPosition(385, 510);
                eg.setString("YOUR SCORE IS=" + to_string(score));
                lfs.setString("PRESS SPACE TO START OVER");
                pus.setPosition(10.0, 15.0);
                pus.setString("PREVIOUS FIVE SCORES:");
                ps1.setPosition(10.0, 65.0);
                ps2.setPosition(10.0, 100.0);
                ps3.setPosition(10.0, 135.0);
                ps4.setPosition(10.0, 170.0);
                ps5.setPosition(10.0, 205.0);
                ofstream write("ps.txt", ios::app);
                write << "\n" << score;
                write.close();
                ifstream rd("ps.txt");
                int  p = 1;
                while (!rd.eof()) {
                    rd >> x[p];
                    p++;
                }
                x[0] = score;

                ofstream wr("ps.txt");
                wr << x[0] << "\n" << x[1] << "\n" << x[2] << "\n" << x[3] << "\n" << x[4];
                wr.close();


                ifstream read("ps.txt");

                read >> aik;
                ps1.setString(to_string(aik));
                read >> doo;
                ps2.setString(to_string(doo));
                read >> teen;
                ps3.setString(to_string(teen));
                read >> chaar;
                ps4.setString(to_string(chaar));
                read >> panch;
                ps5.setString(to_string(panch));
                read.close();

                while (true) {
                    one.clear();
                    one.draw(sky);
                    one.draw(go);
                    one.draw(lfs);
                    one.draw(eg);
                    one.draw(pus);
                    one.draw(ps1);
                    one.draw(ps2);
                    one.draw(ps3);
                    one.draw(ps4);
                    one.draw(ps5);
                    one.display();
                    Event three;

                    while (one.pollEvent(three)) {

                        if (Keyboard::isKeyPressed(Keyboard::Key::Space)) {
                            break;
                        }
                        else if (three.type == three.Closed) {
                            one.close();
                        }
                        else if (three.type == three.Resized) {
                            cout << three.size.width << " " << three.size.height << endl;
                        }
                        else if (three.type == three.TextEntered) {
                            cout << (char)three.text.unicode;

                        }
                    }
                    if (Keyboard::isKeyPressed(Keyboard::Key::Space)) {
                        break;
                    }
                }
                saad = 0;
                break;
            }
            /*3*/    if (flappybhai.getGlobalBounds().intersects(t1.getGlobalBounds()) || flappybhai.getGlobalBounds().intersects(t2.getGlobalBounds())) {
                int w = 0;
                cod.play();
                flaps.stop();
               
                while (w <= 300000000) {
                    w++;
                }
                lfs.setPosition(275, 580);
                eg.setPosition(385, 510);
                eg.setString("YOUR SCORE IS=" + to_string(score));
                lfs.setString("PRESS SPACE TO START OVER");
                pus.setPosition(10.0, 15.0);
                pus.setString("PREVIOUS FIVE SCORES:");
                ps1.setPosition(10.0, 65.0);
                ps2.setPosition(10.0, 100.0);
                ps3.setPosition(10.0, 135.0);
                ps4.setPosition(10.0, 170.0);
                ps5.setPosition(10.0, 205.0);
                ofstream write("ps.txt", ios::app);
                write << "\n" << score;
                write.close();
                ifstream rd("ps.txt");
                int  p = 1;
                while (!rd.eof()) {
                    rd >> x[p];
                    p++;
                }
                x[0] = score;

                ofstream wr("ps.txt");
                wr << x[0] << "\n" << x[1] << "\n" << x[2] << "\n" << x[3] << "\n" << x[4];
                wr.close();


                ifstream read("ps.txt");

                read >> aik;
                ps1.setString(to_string(aik));
                read >> doo;
                ps2.setString(to_string(doo));
                read >> teen;
                ps3.setString(to_string(teen));
                read >> chaar;
                ps4.setString(to_string(chaar));
                read >> panch;
                ps5.setString(to_string(panch));
                read.close();


                while (true) {
                    one.clear();
                    one.draw(sky);
                    one.draw(go);
                    one.draw(lfs);
                    one.draw(eg);
                    one.draw(pus);
                    one.draw(ps1);
                    one.draw(ps2);
                    one.draw(ps3);
                    one.draw(ps4);
                    one.draw(ps5);
                    one.display();
                    Event three;

                    while (one.pollEvent(three)) {

                        if (Keyboard::isKeyPressed(Keyboard::Key::Space)) {
                            break;
                        }
                        else if (three.type == three.Closed) {
                            one.close();
                        }
                        else if (three.type == three.Resized) {
                            cout << three.size.width << " " << three.size.height << endl;
                        }
                        else if (three.type == three.TextEntered) {
                            cout << (char)three.text.unicode;

                        }
                    }
                    if (Keyboard::isKeyPressed(Keyboard::Key::Space)) {
                        break;
                    }
                }
                saad = 0;
                break;
            }
            /*4*/    if (flappybhai.getGlobalBounds().intersects(r1.getGlobalBounds()) || flappybhai.getGlobalBounds().intersects(r2.getGlobalBounds())) {
                int w = 0;
                cod.play();
                flaps.stop();
                
                while (w <= 300000000) {
                    w++;
                }
                lfs.setPosition(275, 580);
                eg.setPosition(385, 510);
                eg.setString("YOUR SCORE IS=" + to_string(score));
                lfs.setString("PRESS SPACE TO START OVER");
                pus.setPosition(10.0, 15.0);
                pus.setString("PREVIOUS FIVE SCORES:");
                ps1.setPosition(10.0, 65.0);
                ps2.setPosition(10.0, 100.0);
                ps3.setPosition(10.0, 135.0);
                ps4.setPosition(10.0, 170.0);
                ps5.setPosition(10.0, 205.0);
                ofstream write("ps.txt", ios::app);
                write << "\n" << score;
                write.close();
                ifstream rd("ps.txt");
                int  p = 1;
                while (!rd.eof()) {
                    rd >> x[p];
                    p++;
                }
                x[0] = score;

                ofstream wr("ps.txt");
                wr << x[0] << "\n" << x[1] << "\n" << x[2] << "\n" << x[3] << "\n" << x[4];
                wr.close();


                ifstream read("ps.txt");

                read >> aik;
                ps1.setString(to_string(aik));
                read >> doo;
                ps2.setString(to_string(doo));
                read >> teen;
                ps3.setString(to_string(teen));
                read >> chaar;
                ps4.setString(to_string(chaar));
                read >> panch;
                ps5.setString(to_string(panch));
                read.close();

                while (true) {
                    one.clear();
                    one.draw(sky);
                    one.draw(go);
                    one.draw(lfs);
                    one.draw(eg);
                    one.draw(pus);
                    one.draw(ps1);
                    one.draw(ps2);
                    one.draw(ps3);
                    one.draw(ps4);
                    one.draw(ps5);
                    one.display();
                    Event three;

                    while (one.pollEvent(three)) {

                        if (Keyboard::isKeyPressed(Keyboard::Key::Space)) {
                            break;
                        }
                        else if (three.type == three.Closed) {
                            one.close();
                        }
                        else if (three.type == three.Resized) {
                            cout << three.size.width << " " << three.size.height << endl;
                        }
                        else if (three.type == three.TextEntered) {
                            cout << (char)three.text.unicode;

                        }
                    }
                    if (Keyboard::isKeyPressed(Keyboard::Key::Space)) {
                        break;
                    }
                }
                saad = 0;
                break;

            }


            //SCORE;
            if (pipe1.getPosition().x < flappybhai.getPosition().x) {
                if (onee == 1 || ab == 1) {
                    score++;
                    point.play();
                    ab = 0;
                    onee = 0;
                }
          }
            if (pipe11.getPosition().x < flappybhai.getPosition().x) {
                if (one1 == 1 || abb == 1) {
                    score++;
                    point.play();
                    abb = 0;
                    one1 = 0;
                }
            }
            if (pipe111.getPosition().x < flappybhai.getPosition().x) {
                if (one11 == 1 || abbb == 1) {
                    score++;
                    point.play();
                    abbb = 0;
                    one11 = 0;
                }
            }
            if (pipe1111.getPosition().x < flappybhai.getPosition().x) {
                if (one111 == 1 || abbbb == 1) {
                    score++;
                    point.play();
                    abbbb = 0;
                    one111 = 0;
                }
            }
            
            


          









            one.clear(Color::White);
            one.draw(sky);
            one.draw(flappybhai);
            one.draw(pipe2);
            one.draw(pipe22);
            one.draw(pipe222);
            one.draw(pipe2222);
            one.draw(grass);
            one.draw(help);
            one.draw(help1);
            one.draw(pipe1);
            one.draw(pipe11);
            one.draw(pipe111);
            one.draw(pipe1111);


            one.draw(lfs);
            one.display();
            

        }
        saad = 1;
       

    }
    return 0;
}
