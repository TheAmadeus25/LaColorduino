/*
  ┌────────────────────────────────────────────────────┐
  │ LaColorduino by TheAmadeus25                                                     ┃
  ├────────────────────────────────────────────────────┤
  │ https://theamadeus25.github.io/LaColorduino/                                     ┃
  ├────────────────────────────────────────────────────┤
  │ IMPORTANT! Read the Wiki on GitHub. Otherwise you will not understand how to     ┃
  │ install all THREE Sourcecodes. For problems, the Wiki is a good place to find    ┃
  │ out, how to solve it.                                                            ┃
  ├────────────────────────────────────────────────────┤
  │ Symbolic_Weather(): Show Symbolic                                                ┃
  │                                                                                  ┃
  │                                                                                  ┃
  │                                                                                  ┃
  │                                                                                  ┃
  │                                                                                  ┃
  ├──────────────────────────┬─────────────────────────┤
  │ Version: 0.0.3 - ALPHA                    Date: 27.Mar.2019                      ┃
  ├──────────────────────────┴─────────────────────────┤
  └────────────────────────────────────────────────────┘
*/

void Symbolic_Weather() {

  //https://gist.github.com/tbranyen/62d974681dea8ee0caa1
  //https://openweathermap.org/weather-conditions
  //http://www.alessioatzeni.com/meteocons/
  //https://openweathermap.org/current

  if (Weather.Icon == "11d" || Weather.Icon == "11n") {
    // Thundestorm

    GFX_Fill(0, 0, 0);
    Symbolic_Weather_Cloud(0);

    Colorduino.SetPixel(1, 7, 5, 5, 5);
    Colorduino.SetPixel(2, 7, 5, 5, 5);
    Colorduino.SetPixel(3, 7, 5, 5, 5);
    Colorduino.SetPixel(5, 7, 5, 5, 5);
    Colorduino.SetPixel(6, 7, 5, 5, 5);

    Colorduino.SetPixel(0, 6, 5, 5, 5);
    Colorduino.SetPixel(3, 6, 5, 5, 5);
    Colorduino.SetPixel(4, 6, 5, 5, 5);
    Colorduino.SetPixel(7, 6, 5, 5, 5);

    Colorduino.SetPixel(3, 5, 5, 5, 5);

    Colorduino.SetPixel(2, 2, 255, 255, 0);
    Colorduino.SetPixel(3, 2, 255, 255, 0);

    Colorduino.SetPixel(2, 1, 255, 255, 0);

    Colorduino.SetPixel(2, 0, 255, 255, 0);
    Colorduino.SetPixel(1, 0, 255, 255, 0);

  } else if (Weather.Icon == "09d" || Weather.Icon == "09n") {
    // Drizzle

    GFX_Fill(0, 0, 0);
    Symbolic_Weather_Cloud(0);

    Colorduino.SetPixel(1, 7, 5, 5, 5);
    Colorduino.SetPixel(2, 7, 5, 5, 5);
    Colorduino.SetPixel(3, 7, 5, 5, 5);
    Colorduino.SetPixel(5, 7, 5, 5, 5);
    Colorduino.SetPixel(6, 7, 5, 5, 5);

    Colorduino.SetPixel(0, 6, 5, 5, 5);
    Colorduino.SetPixel(3, 6, 5, 5, 5);
    Colorduino.SetPixel(4, 6, 5, 5, 5);
    Colorduino.SetPixel(7, 6, 5, 5, 5);

    Colorduino.SetPixel(3, 5, 5, 5, 5);

    Colorduino.SetPixel(2, 2, 0, 0, 255);
    Colorduino.SetPixel(5, 2, 0, 0, 255);

    Colorduino.SetPixel(1, 1, 0, 0, 255);
    Colorduino.SetPixel(4, 1, 0, 0, 255);
  } else if (Weather.Icon == "10d") {
    // Rain

    GFX_Fill(0, 0, 0);

    //Colorduino.SetPixel(2, 7, 255, 255, 0);
    Colorduino.SetPixel(4, 7, 255, 255, 0);
    Colorduino.SetPixel(5, 7, 255, 255, 0);
    //Colorduino.SetPixel(5, 7, 255, 255, 0);

    Colorduino.SetPixel(3, 6, 255, 255, 0);
    Colorduino.SetPixel(4, 6, 255, 255, 0);
    Colorduino.SetPixel(5, 6, 255, 255, 0);
    Colorduino.SetPixel(6, 6, 255, 255, 0);

    Colorduino.SetPixel(3, 5, 255, 255, 0);
    Colorduino.SetPixel(4, 5, 255, 255, 0);
    Colorduino.SetPixel(5, 5, 255, 255, 0);
    Colorduino.SetPixel(6, 5, 255, 255, 0);

    Colorduino.SetPixel(3, 4, 255, 255, 0);
    Colorduino.SetPixel(4, 4, 255, 255, 0);
    Colorduino.SetPixel(5, 4, 255, 255, 0);
    Colorduino.SetPixel(6, 4, 255, 255, 0);

    Symbolic_Weather_Cloud(1);

    Colorduino.SetPixel(2, 1, 0, 0, 255);
    Colorduino.SetPixel(5, 1, 0, 0, 255);

    Colorduino.SetPixel(1, 0, 0, 0, 255);
    Colorduino.SetPixel(4, 0, 0, 0, 255);
    } else if (Weather.Icon == "10n") {    //<---------
    // Rain

    GFX_Fill(0, 0, 0);

    //Colorduino.SetPixel(2, 7, 255, 255, 0);
    Colorduino.SetPixel(4, 7, 100, 140, 255);
    Colorduino.SetPixel(5, 7, 100, 140, 255);
    //Colorduino.SetPixel(5, 7, 255, 255, 0);

    Colorduino.SetPixel(3, 6, 100, 140, 255);
    Colorduino.SetPixel(4, 6, 100, 140, 255);
    Colorduino.SetPixel(5, 6, 100, 140, 255);
    Colorduino.SetPixel(6, 6, 100, 140, 255);

    Colorduino.SetPixel(3, 5, 100, 140, 255);
    Colorduino.SetPixel(4, 5, 100, 140, 255);
    Colorduino.SetPixel(5, 5, 100, 140, 255);
    Colorduino.SetPixel(6, 5, 100, 140, 255);

    Colorduino.SetPixel(3, 4, 100, 140, 255);
    Colorduino.SetPixel(4, 4, 100, 140, 255);
    Colorduino.SetPixel(5, 4, 100, 140, 255);
    Colorduino.SetPixel(6, 4, 100, 140, 255);

    Symbolic_Weather_Cloud(1);

    Colorduino.SetPixel(2, 1, 0, 0, 255);
    Colorduino.SetPixel(5, 1, 0, 0, 255);

    Colorduino.SetPixel(1, 0, 0, 0, 255);
    Colorduino.SetPixel(4, 0, 0, 0, 255);
  } else if (Weather.Icon == "99d" || Weather.Icon == "99n") {
    // Snow

    GFX_Fill(0, 0, 0);
    Symbolic_Weather_Cloud(0);

    Colorduino.SetPixel(1, 7, 5, 5, 5);
    Colorduino.SetPixel(2, 7, 5, 5, 5);
    Colorduino.SetPixel(3, 7, 5, 5, 5);
    Colorduino.SetPixel(5, 7, 5, 5, 5);
    Colorduino.SetPixel(6, 7, 5, 5, 5);

    Colorduino.SetPixel(0, 6, 5, 5, 5);
    Colorduino.SetPixel(3, 6, 5, 5, 5);
    Colorduino.SetPixel(4, 6, 5, 5, 5);
    Colorduino.SetPixel(7, 6, 5, 5, 5);

    Colorduino.SetPixel(3, 5, 5, 5, 5);

    Colorduino.SetPixel(2, 2, 0, 127, 255);
    Colorduino.SetPixel(5, 2, 0, 127, 255);

    Colorduino.SetPixel(1, 1, 0, 127, 255);
    Colorduino.SetPixel(4, 1, 0, 127, 255);
  } else if (Weather.Icon == "13d" || Weather.Icon == "13n") {
    // Snow 2

    GFX_Fill(0, 0, 0);
    Symbolic_Weather_Cloud(0);

    Colorduino.SetPixel(2, 2, 255, 255, 255);

    Colorduino.SetPixel(4, 1, 255, 255, 255);

    Colorduino.SetPixel(1, 0, 255, 255, 255);
    Colorduino.SetPixel(6, 0, 255, 255, 255);
  } else if (Weather.Icon == "50d" || Weather.Icon == "50n") {
    // Atmosphere

    GFX_Fill(0, 0, 0);
    /*
    GFX_HLine(1, 5, 6, 255, 255, 255);
    Colorduino.SetPixel(4, 5, 0, 0, 0);
    GFX_HLine(1, 3, 6, 255, 255, 255);
    Colorduino.SetPixel(5, 3, 0, 0, 0);
    GFX_HLine(1, 1, 6, 255, 255, 255);
    Colorduino.SetPixel(2, 1, 0, 0, 0);
    */
    
    GFX_HLine(1, 6, 6, 255, 255, 255);
    //GFX_HLine(2, 3, 7, 255, 255, 255);
    GFX_HLine(1, 4, 6, 255, 255, 255);
    GFX_HLine(1, 2, 6, 255, 255, 255);
    
    
    /*
    Colorduino.SetPixel(1, 7, 5, 5, 5);
    Colorduino.SetPixel(2, 7, 5, 5, 5);
    Colorduino.SetPixel(5, 7, 5, 5, 5);
    Colorduino.SetPixel(6, 7, 5, 5, 5);

    Colorduino.SetPixel(0, 6, 5, 5, 5);
    Colorduino.SetPixel(3, 6, 5, 5, 5);
    Colorduino.SetPixel(4, 6, 5, 5, 5);
    Colorduino.SetPixel(7, 6, 5, 5, 5);

    Colorduino.SetPixel(1, 4, 30, 30, 30);
    Colorduino.SetPixel(2, 4, 30, 30, 30);
    Colorduino.SetPixel(5, 4, 30, 30, 30);
    Colorduino.SetPixel(6, 4, 30, 30, 30);

    Colorduino.SetPixel(0, 3, 30, 30, 30);
    Colorduino.SetPixel(3, 3, 30, 30, 30);
    Colorduino.SetPixel(4, 3, 30, 30, 30);
    Colorduino.SetPixel(7, 3, 30, 30, 30);

    Colorduino.SetPixel(1, 1, 255, 255, 255);
    Colorduino.SetPixel(2, 1, 255, 255, 255);
    Colorduino.SetPixel(5, 1, 255, 255, 255);
    Colorduino.SetPixel(6, 1, 255, 255, 255);

    Colorduino.SetPixel(0, 0, 255, 255, 255);
    Colorduino.SetPixel(3, 0, 255, 255, 255);
    Colorduino.SetPixel(4, 0, 255, 255, 255);
    Colorduino.SetPixel(7, 0, 255, 255, 255);
    */
  } else if (Weather.Icon == "01d") {
    // Clear Day

    GFX_Fill(0, 0, 0);

    Colorduino.SetPixel(2, 7, 255, 255, 0);
    Colorduino.SetPixel(5, 7, 255, 255, 0);

    Colorduino.SetPixel(0, 5, 255, 255, 0);
    Colorduino.SetPixel(2, 5, 255, 255, 0);
    Colorduino.SetPixel(3, 5, 255, 255, 0);
    Colorduino.SetPixel(4, 5, 255, 255, 0);
    Colorduino.SetPixel(5, 5, 255, 255, 0);
    Colorduino.SetPixel(7, 5, 255, 255, 0);

    Colorduino.SetPixel(2, 4, 255, 255, 0);
    Colorduino.SetPixel(3, 4, 255, 255, 0);
    Colorduino.SetPixel(4, 4, 255, 255, 0);
    Colorduino.SetPixel(5, 4, 255, 255, 0);

    Colorduino.SetPixel(2, 3, 255, 255, 0);
    Colorduino.SetPixel(3, 3, 255, 255, 0);
    Colorduino.SetPixel(4, 3, 255, 255, 0);
    Colorduino.SetPixel(5, 3, 255, 255, 0);

    Colorduino.SetPixel(0, 2, 255, 255, 0);
    Colorduino.SetPixel(2, 2, 255, 255, 0);
    Colorduino.SetPixel(3, 2, 255, 255, 0);
    Colorduino.SetPixel(4, 2, 255, 255, 0);
    Colorduino.SetPixel(5, 2, 255, 255, 0);
    Colorduino.SetPixel(7, 2, 255, 255, 0);

    Colorduino.SetPixel(2, 0, 255, 255, 0);
    Colorduino.SetPixel(5, 0, 255, 255, 0);
  } else if (Weather.Icon == "01n") {
    // Clear Night
    // For the Future, implementing Moon-Phase

    GFX_Fill(0, 0, 0);

    Colorduino.SetPixel(2, 5, 100, 140, 255);
    Colorduino.SetPixel(3, 5, 100, 140, 255);
    Colorduino.SetPixel(4, 5, 100, 140, 255);
    Colorduino.SetPixel(5, 5, 100, 140, 255);

    Colorduino.SetPixel(2, 4, 100, 140, 255);
    Colorduino.SetPixel(3, 4, 100, 140, 255);
    Colorduino.SetPixel(4, 4, 100, 140, 255);
    Colorduino.SetPixel(5, 4, 100, 140, 255);

    Colorduino.SetPixel(2, 3, 100, 140, 255);
    Colorduino.SetPixel(3, 3, 100, 140, 255);
    Colorduino.SetPixel(4, 3, 100, 140, 255);
    Colorduino.SetPixel(5, 3, 100, 140, 255);

    Colorduino.SetPixel(2, 2, 100, 140, 255);
    Colorduino.SetPixel(3, 2, 100, 140, 255);
    Colorduino.SetPixel(4, 2, 100, 140, 255);
    Colorduino.SetPixel(5, 2, 100, 140, 255);
  } else if (Weather.Icon == "02d") {
    // Few clouds Day

    GFX_Fill(0, 0, 0);

    //Colorduino.SetPixel(2, 7, 255, 255, 0);
    Colorduino.SetPixel(4, 7, 255, 255, 0);
    Colorduino.SetPixel(5, 7, 255, 255, 0);
    //Colorduino.SetPixel(5, 7, 255, 255, 0);

    Colorduino.SetPixel(3, 6, 255, 255, 0);
    Colorduino.SetPixel(4, 6, 255, 255, 0);
    Colorduino.SetPixel(5, 6, 255, 255, 0);
    Colorduino.SetPixel(6, 6, 255, 255, 0);

    Colorduino.SetPixel(3, 5, 255, 255, 0);
    Colorduino.SetPixel(4, 5, 255, 255, 0);
    Colorduino.SetPixel(5, 5, 255, 255, 0);
    Colorduino.SetPixel(6, 5, 255, 255, 0);

    Colorduino.SetPixel(3, 4, 255, 255, 0);
    Colorduino.SetPixel(4, 4, 255, 255, 0);
    Colorduino.SetPixel(5, 4, 255, 255, 0);
    Colorduino.SetPixel(6, 4, 255, 255, 0);

    Symbolic_Weather_Cloud(1);
  } else if (Weather.Icon == "02n") {
    // Few clouds Night

    GFX_Fill(0, 0, 0);

    //Colorduino.SetPixel(2, 7, 100, 140, 255);
    Colorduino.SetPixel(4, 7, 100, 140, 255);
    Colorduino.SetPixel(5, 7, 100, 140, 255);
    //Colorduino.SetPixel(5, 7, 100, 140, 255);

    Colorduino.SetPixel(3, 6, 100, 140, 255);
    Colorduino.SetPixel(4, 6, 100, 140, 255);
    Colorduino.SetPixel(5, 6, 100, 140, 255);
    Colorduino.SetPixel(6, 6, 100, 140, 255);

    Colorduino.SetPixel(3, 5, 100, 140, 255);
    Colorduino.SetPixel(4, 5, 100, 140, 255);
    Colorduino.SetPixel(5, 5, 100, 140, 255);
    Colorduino.SetPixel(6, 5, 100, 140, 255);

    Colorduino.SetPixel(3, 4, 100, 140, 255);
    Colorduino.SetPixel(4, 4, 100, 140, 255);
    Colorduino.SetPixel(5, 4, 100, 140, 255);
    Colorduino.SetPixel(6, 4, 100, 140, 255);

    Symbolic_Weather_Cloud(1);
  } else if (Weather.Icon == "03d" || Weather.Icon == "03n") {
    // Scattered clouds Day/Night

    GFX_Fill(0, 0, 0);

    Symbolic_Weather_Cloud(1);
  } else if (Weather.Icon == "04d" || Weather.Icon == "04n") {
    // Broken/Overcast clouds Day/Night

    GFX_Fill(0, 0, 0);

    Symbolic_Weather_Cloud(1);

    Colorduino.SetPixel(1, 6, 5, 5, 5);
    Colorduino.SetPixel(2, 6, 5, 5, 5);
    Colorduino.SetPixel(3, 6, 5, 5, 5);
    Colorduino.SetPixel(5, 6, 5, 5, 5);
    Colorduino.SetPixel(6, 6, 5, 5, 5);

    Colorduino.SetPixel(0, 5, 5, 5, 5);
    Colorduino.SetPixel(3, 5, 5, 5, 5);
    Colorduino.SetPixel(4, 5, 5, 5, 5);
    Colorduino.SetPixel(7, 5, 5, 5, 5);

    Colorduino.SetPixel(3, 4, 5, 5, 5);
  } else {
    // Error/Unkowing Weather ID
    
    Symbolic_Error();
  }
  
  
  return;
}
