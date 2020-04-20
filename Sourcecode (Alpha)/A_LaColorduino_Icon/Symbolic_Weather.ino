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
  │ Version: 0.0.5 - ALPHA                    Date: 16.Apr.2020                      ┃
  ├──────────────────────────┴─────────────────────────┤
  │ + Reducing Space by using GFX Tools                                              ┃
  │ + New Modern Weather Style; reducing space about ~10%                            ┃
  └────────────────────────────────────────────────────┘
*/

void Symbolic_Weather(String Icon) {

  //https://gist.github.com/tbranyen/62d974681dea8ee0caa1
  //https://openweathermap.org/weather-conditions
  //http://www.alessioatzeni.com/meteocons/
  //https://openweathermap.org/current

  GFX_Fill(0, 0, 0);
  
  if (Icon == "11d" || Icon == "11n") {
    // Thundestorm
    GFX_Square(1, 4, 6, 3, 255, 255, 255);
    GFX_HLine(2, 2, 3, 255, 255, 0);
    Colorduino.SetPixel(2, 1, 255, 255, 0);
    
  } else if (Icon == "09d" || Icon == "09n") {
    // Drizzle
    GFX_Square(1, 4, 6, 3, 255, 255, 255);
    Colorduino.SetPixel(2, 2, 0, 0, 255);
    Colorduino.SetPixel(5, 2, 0, 0, 255);
    Colorduino.SetPixel(1, 1, 0, 0, 255);
    Colorduino.SetPixel(4, 1, 0, 0, 255);

  } else if (Icon == "10d") {
    // Rain Day
    GFX_Square(4, 6, 5, 5, 255, 255, 0);
    GFX_Square(1, 4, 6, 3, 255, 255, 255);
    Colorduino.SetPixel(2, 2, 0, 0, 255);
    Colorduino.SetPixel(5, 2, 0, 0, 255);
    Colorduino.SetPixel(1, 1, 0, 0, 255);
    Colorduino.SetPixel(4, 1, 0, 0, 255);

    } else if (Icon == "10n") {    //<---------
    // Rain Night
    GFX_Square(4, 6, 5, 5, 100, 140, 255);
    GFX_Square(1, 4, 6, 3, 255, 255, 255);
    Colorduino.SetPixel(2, 2, 0, 0, 255);
    Colorduino.SetPixel(5, 2, 0, 0, 255);
    Colorduino.SetPixel(1, 1, 0, 0, 255);
    Colorduino.SetPixel(4, 1, 0, 0, 255);

  } else if (Icon == "99d" || Icon == "99n") {
    // Snow
    GFX_Square(1, 4, 6, 3, 255, 255, 255);
    Colorduino.SetPixel(2, 2, 0, 127, 255);
    Colorduino.SetPixel(5, 2, 0, 127, 255);
    Colorduino.SetPixel(1, 1, 0, 127, 255);
    Colorduino.SetPixel(4, 1, 0, 127, 255);

  } else if (Icon == "13d" || Icon == "13n") {
    // Snow 2
    GFX_Square(1, 4, 6, 3, 255, 255, 255);
    Colorduino.SetPixel(2, 2, 255, 255, 255);
    Colorduino.SetPixel(4, 1, 255, 255, 255);
    Colorduino.SetPixel(1, 0, 255, 255, 255);
    Colorduino.SetPixel(6, 0, 255, 255, 255);

  } else if (Icon == "50d" || Icon == "50n") {
    // Atmosphere, Fog etc.
    GFX_HLine(1, 6, 6, 255, 255, 255);
    GFX_HLine(1, 4, 6, 255, 255, 255);
    GFX_HLine(1, 2, 6, 255, 255, 255);
  
  } else if (Icon == "01d") {
    // Clear Day
    GFX_Square(2, 5, 5, 2, 255, 255, 0);
    
  } else if (Icon == "01n") {
    // Clear Night
    GFX_Square(2, 5, 5, 2, 100, 140, 255);

  } else if (Icon == "02d") {
    // Few clouds Day
    GFX_Square(4, 6, 5, 5, 255, 255, 0);
    GFX_Square(1, 4, 6, 3, 255, 255, 255);

  } else if (Icon == "02n") {
    // Few clouds Night
    GFX_Square(4, 6, 5, 5, 100, 140, 255);    
    GFX_Square(1, 4, 6, 3, 255, 255, 255);

  } else if (Icon == "03d" || Icon == "03n") {
    // Scattered Clouds
    GFX_Square(1, 4, 6, 3, 255, 255, 255);
    
  } else if (Icon == "04d" || Icon == "04n") {
    // Broken/Overcast Clouds
    GFX_Square(1, 4, 6, 3, 255, 255, 255);

  } else {
    // Error/Unknowing Weather ID 
    Symbolic_Error();
  }
  
  return;
}
