#include <gamma.h>
#include <RGBmatrixPanel.h>
//#define CLK  8   // USE THIS ON ADAFRUIT METRO M0, etc.
//#define CLK A4 // USE THIS ON METRO M4 (not M0)
#define CLK 11 // USE THIS ON ARDUINO MEGA
#define OE   9
#define LAT 10
#define A   A0
#define B   A1
#define C   A2
#define D   A3

// Define some speeds to play with in ms
#define DSLOW 120
#define DMEDIUM 80
#define DRAPID 65
#define DFAST 40
#define DQUICK 30
#define DULTRA 21
#define DPICO 5
#define DNANO 2

// mega ready 
RGBmatrixPanel matrix(A, B, C, D, CLK, LAT, OE, false, 64);

void setup() {
  matrix.begin();
  // draw some text!
  matrix.setTextSize(1);     // size 1 == 8 pixels high
  matrix.setTextWrap(false); // Don't wrap at end of line - will do ourselves

}

void loop() {
  int test=0;
  /**/
  for (test=0; test<10; test++) {
    matrix.setCursor(1, 8); 
    matrix.setTextColor(matrix.Color333(10+test,10+test,10+test)); 
    matrix.print("-");
    delay(100);
  }
  
  glitch_intro();
  
  glitch_hackstuph_rising();

  glitch_circles_chaos();
  
  glitch_circles();
  
  glitch_circles_bouncing();
  
  glitch_circles_large();
  
  glitch_circles2_hackstuph();
  resetscreen();
  /**/
  
}

void resetscreen() {
  // fill the screen with 'black'
  matrix.fillScreen(matrix.Color333(0, 0, 0));
}

void glitch_intro() {
  resetscreen();
  // draw a blue circle
  matrix.drawCircle(10, 10, 10, matrix.Color333(0, 0, 7));
  delay(DQUICK);


  // fill a violet circle
  matrix.fillCircle(40, 21, 10, matrix.Color333(7, 0, 7));
  delay(DULTRA);

  // draw some text!
  matrix.setTextSize(1);     // size 1 == 8 pixels high
  matrix.setTextWrap(true); // Don't wrap at end of line - will do ourselves

// fill the screen with 'black'
  matrix.fillScreen(matrix.Color333(0, 0, 0));

  matrix.setCursor(8, 0);    // start at top left, with 8 pixel of spacing
  uint8_t w = 0;
  char *str = ".0xH.0xE.0xC.0x7. ";
  for (w=0; w<16; w++) {
    matrix.setTextColor(Wheel(w));
    matrix.print(str[w]);
  }
  matrix.setCursor(2, 8);    // next line
  for (w=8; w<18; w++) {
    matrix.setTextColor(Wheel(w));
    matrix.print(str[w]);
  }

  matrix.fillScreen(matrix.Color333(0.1, 0.1, 0.1));
  delay(DFAST);
  for (int ha1=4; ha1>=0; ha1--) { 
    matrix.setCursor(1, 8); 
    matrix.setTextColor(matrix.Color333(ha1,4,ha1));
    for (int ab=1; ab<ha1; ab++) {
      matrix.setCursor(1+(ab/10), 8); 
      matrix.print("-");
    }
    matrix.print(")yo hah");
    delay(DFAST);

    matrix.setCursor(1, 8); 
    matrix.setTextColor(matrix.Color333(0,0,0));
    for (int ab=1; ab<ha1; ab++) {
      matrix.setCursor(1+(ab/10), 8); 
      matrix.print("-");
    }
    matrix.print(")yo hah");
    delay(DNANO);

  }
  
  matrix.fillScreen(matrix.Color333(0.2, 0.2, 0.5));
  matrix.setTextSize(1);     

  delay(DFAST);
  for (int ha1=14; ha1>=0; ha1--) { 
    matrix.setCursor(1+ha1/14, 8+ha1/7); 
    matrix.setTextColor(matrix.Color333(ha1,4,ha1));
    matrix.print("places to be");
    delay(DFAST);
    matrix.setCursor(1+ha1/14, 8+ha1/7); 
    matrix.setTextColor(matrix.Color333(0,0,0));
    matrix.print("places to be");
    delay(DNANO);
  }
  matrix.fillScreen(matrix.Color333(0.2, 0.2, 0.5));
  delay(DFAST);
  for (int ha1=14; ha1>=0; ha1--) { 
    matrix.setCursor(1+ha1/14, 8+ha1/7); 
    matrix.setTextColor(matrix.Color333(ha1,4,ha1));
    matrix.print("boxes to _root.");
    delay(DFAST);
    matrix.setCursor(1+ha1/14, 8+ha1/7); 
    matrix.setTextColor(matrix.Color333(0,0,0));
    matrix.print("boxes to _root.");
    delay(DNANO);
  }

  matrix.fillScreen(matrix.Color333(0.2, 0.2, 0.5));
  delay(DFAST);
  for (int ha1=14; ha1>=0; ha1--) { 
    matrix.setCursor(1+ha1/6, 4+ha1/3); 
    matrix.setTextColor(matrix.Color333(ha1,4,ha1));
    matrix.print("try harder");
    delay(DFAST);
    matrix.setCursor(1+ha1/6, 4+ha1/3); 
    matrix.setTextColor(matrix.Color333(0,0,0));
    matrix.print("try harder");
    delay(DNANO);
  }

  matrix.fillScreen(matrix.Color333(0.2, 0.2, 0.5));
  delay(DFAST);
  for (int ha1=14; ha1>=0; ha1--) { 
    matrix.setCursor(1+ha1/4, 8+ha1/5); 
    matrix.setTextColor(matrix.Color333(ha1,4,ha1));
    matrix.print("ENUMERATE");
    delay(DFAST);
    matrix.setCursor(1+ha1/4, 8+ha1/5); 
    matrix.setTextColor(matrix.Color333(0,0,0));
    matrix.print("ENUMERATE");
    delay(DNANO);
  }

  matrix.fillScreen(matrix.Color333(0.2, 0.2, 0.5));
  delay(DFAST);
  for (int ha1=14; ha1>=0; ha1--) { 
    matrix.setCursor(1+ha1/4, 8+ha1/5); 
    matrix.setTextColor(matrix.Color333(ha1,4,ha1));
    matrix.print("analyze");
    delay(DFAST);
    matrix.setCursor(1+ha1/4, 8+ha1/5); 
    matrix.setTextColor(matrix.Color333(0,0,0));
    matrix.print("analyze");
    delay(DNANO);
  }
  
  matrix.fillScreen(matrix.Color333(0.2, 0.2, 0.5));
  delay(DFAST);
  for (int ha1=14; ha1>=0; ha1--) { 
    matrix.setCursor(1+ha1/4, 8+ha1/5); 
    matrix.setTextColor(matrix.Color333(ha1,4,ha1));
    matrix.print("RTFM");
    delay(DFAST);
    matrix.setCursor(1+ha1/4, 8+ha1/5); 
    matrix.setTextColor(matrix.Color333(0,0,0));
    matrix.print("RTFM");
    delay(DNANO);
  }
  
  matrix.fillScreen(matrix.Color333(0.2, 0.2, 0.5));
  delay(DFAST);
  for (int ha1=64; ha1>=0; ha1--) { 
    matrix.setCursor(1+ha1/4, 8+ha1/5); 
    matrix.setTextColor(matrix.Color333(ha1,4,ha1));
    matrix.print("#");
    delay(DFAST);
    matrix.setCursor(1+ha1/4, 8+ha1/5); 
    matrix.setTextColor(matrix.Color333(0,0,0));
    matrix.print("#");
    delay(DNANO);
  }
  
}

void glitch_hackstuph_rising() {   
  resetscreen();
  matrix.setTextSize(1);     
  matrix.fillScreen(matrix.Color333(0, 0, 0));
  matrix.setCursor(1, 8); 
  int y=0;
  bool yup=true;
  for (int h1=4; h1>0; h1-=1) {
    for (int h2=4; h2>0; h2-=1) {
      if (y & 1) {
        for (int h3=4; h3>0; h3-=1) {
          if (yup) { y+=1; } else { y-=1; }
          if (y>30) { yup=false; }
          if (y<0) { yup=true; }
          matrix.setTextColor(matrix.Color333(h1,h2,h3));
          matrix.setCursor(1+h1/7+y, 7.5+10/h3); 
          matrix.println("_hackstuph");
          delay(DPICO);
          matrix.setTextColor(matrix.Color333(0,0,0));
          matrix.setCursor(1+h1/7+y, 7.5+10/h3); 
          matrix.println("_hackstuph");
          delay(1);
        }
      } else {
        for (int h3=0; h3<=4; h3+=1) {
          if (yup) { y+=1; } else { y-=1; }
          if (y>30) { yup=false; }
          if (y<0) { yup=true; }
          matrix.setTextColor(matrix.Color333(1+h2-h1,h2-h3*4-h1,h3*4));
          matrix.setCursor(h3+y, h3+y); 
          matrix.println("_hackstuph");
          delay(2);
          matrix.setTextColor(matrix.Color333(0,0,0));
          matrix.setCursor(h3+y, h3+y); 
          matrix.println("_hackstuph");
          delay(1);
        }
      }
    }
  }  
}

void glitch_circles() {
  resetscreen();
  
  for (int h1=3; h1>0; h1--) {
    for (int h2=4; h2>0; h2--) {
        // draw a circle with changing colors
        matrix.drawCircle(h1, h2, h2, matrix.Color333(h1*16, h2*8, h2*16));
        delay(h2+h1/2);
        matrix.drawCircle(h1, h2, h2, matrix.Color333(0, 0, 0));
        delay(h1/2);
      
    }
  }
}

void glitch_circles_chaos() {
  resetscreen();
  for (int h1=3; h1>0; h1--) {
    for (int h2=4; h2>0; h2--) {
      for (int h3=7; h3>0; h3--) {
        // draw a circle with changing colors
        matrix.drawCircle(h1, h2, h3, matrix.Color333(h1*8, h2*4, h3*16));
        delay(h2+h1/2);
        matrix.drawCircle(h1, h2, h3, matrix.Color333(0, 0, 0));
        delay(h1/2);
      }
    }
  }
  bool yup=true,xup=false;
  int x=0,y=0; 
  for (int h1=0; h1<4; h1+=1) {
    for (int h2=0; h2<15; h2+=2) {
     for (int h3=0; h3<6; h3+=1) {
        // draw a circle with changing colors
        if (yup) { y++; } else { y--;}
        if (xup) { x++; } else { x--;}
        if (y>=60) { yup=false; }
        if (x>=30) { xup=false; }
        if (x<=0) { xup=true;  }
        if (y<=0) { yup=false;  } 
        matrix.drawCircle(h1+y, h2+x, h3, matrix.Color333(h1+8*h3, h2+4*h2, h3+16));
        delay(h3/2);
        matrix.drawCircle(h1+y, h2+x, h3, matrix.Color333(0, 0, 0));
        delay(h2/2);
      }
     
     for (int h3=6; h3>0; h3-=1) {
        // draw a circle with changing colors
        if (yup) { y++; } else { y--;}
        if (xup) { x++; } else { x--;}
        if (y>=60) { yup=false; }
        if (x>=30) { xup=false; }
        if (x<=0) { xup=true;  }
        if (y<=0) { yup=false;  } 
        matrix.drawCircle(h1+y, h2, h3, matrix.Color333(h1+8*h3, h2+4*h2, h3+16));
        delay(h3/2);
        matrix.drawCircle(h1+y, h2, h3, matrix.Color333(0, 0, 0));
        delay(h2/2);
      }
    }
  }  

  
}

void glitch_circles_bouncing() {
  resetscreen();
  for (int h1=3; h1>0; h1--) {
    for (int h2=4; h2>0; h2--) {
      for (int h3=7; h3>0; h3--) {
        // draw a circle with changing colors
        matrix.drawCircle(h1, h2, h3, matrix.Color333(h1*8, h2*4, h3*16));
        delay(h2+h1/2);
        matrix.drawCircle(h1, h2, h3, matrix.Color333(0, 0, 0));
        delay(h1/2);
      }
    }
  }
  bool yup=true,xup=false;
  int x=0,y=0; 
  for (int h1=0; h1<4; h1+=1) {
    for (int h2=0; h2<5; h2+=1) {
     for (int h3=0; h3<4; h3+=1) {
        // draw a circle with changing colors
        if (yup) { y++; } else { y--;}
        if (xup) { x++; } else { x--;}
        if (y>=60) { yup=false; }
        if (x>=30) { xup=false; }
        if (x<=0) { xup=true;  }
        if (y<=0) { yup=false;  } 
        matrix.drawCircle(h1+y, h2+x, h3, matrix.Color333(h1+8*h3, h2+4*h2, h3+16));
        delay(h3/2);
        matrix.drawCircle(h1+y, h2+x, h3, matrix.Color333(0, 0, 0));
        delay(h2/2);
      }
    }
  }  

  
}

//*********

void glitch_circles_large() {
  resetscreen();
    int y=0;
    for (int h2=0; h2<40; h2+=1) {
        y+=1;
        // draw a circle with changing colors
        matrix.drawCircle(y, h2, 33, matrix.Color333(8, h2+4, h2+16));
        delay(8);
        matrix.drawCircle(y, h2, 33, matrix.Color333(0, 0, 0));
        delay(h2/8);
     
    }
    
    for (int h1=60; h1>0; h1-=1) {
      // draw a circle with changing colors
        matrix.drawCircle(h1, 40, 33, matrix.Color333(h1+8, 44, 60));
        delay(h1/8);
        matrix.drawCircle(h1, 40, 33, matrix.Color333(0, 0, 0));
        delay(40/8);
    }  



}

void glitch_circles2_hackstuph() {
  resetscreen();
  matrix.setTextSize(1);     
  for (int h1=3; h1>0; h1--) {
    for (int h2=4; h2>0; h2--) {
      for (int h3=7; h3>0; h3--) {
        matrix.setCursor(2,8); 
        
        // draw a blue circle
        matrix.drawCircle(10+h1/49, 10+h2/7, 20+h3, matrix.Color333(0, 0, 7));
        matrix.setTextColor(matrix.Color333(h1,h2,h3));
        matrix.setCursor(1+h3/7, 7.5+1/h2*2+(h3/(7))); 
        matrix.println("-HACKSTUPH");
        delay(h1);
        
        // draw a blue circle
        matrix.drawCircle(0+h1/49, 10+h2/7, 20+h3/7, matrix.Color333(0+h1/7, 0+h1/7, 7+h1/7));
        matrix.setTextColor(matrix.Color333(h1,h2,h3));
        matrix.setCursor(1+h2/49, 7.5+1/h3+(h2/(49*7))); 
        matrix.println("_hackstuph");
        delay(h2);

        if (random(0, 1)>.8) {
          matrix.setTextColor(matrix.Color333(h1,0,0));
          matrix.setCursor(1+h2/49, 7.5+1/h3+(h2/(49*7))); 
          matrix.println("_hackstuph");
          delay(h2+10);
        }
        
        // Overwrite with black
        matrix.fillCircle(10+h1/49, 10+h2/49, 20+h3/49, matrix.Color333(0, 0, 0));
        matrix.setTextColor(matrix.Color333(0,0,0));
        matrix.setCursor(1+h2/49, 7.5+1/h3+(h2/(49*7))); 
        matrix.println("_hackstuph");
        delay(h3);
      }
    }
  }  // whewx2!

}


// Input a value 0 to 24 to get a color value.
// The colours are a transition r - g - b - back to r.
uint16_t Wheel(byte WheelPos) {
  if(WheelPos < 8) {
   return matrix.Color333(7 - WheelPos, WheelPos, 0);
  } else if(WheelPos < 16) {
   WheelPos -= 8;
   return matrix.Color333(0, 7-WheelPos, WheelPos);
  } else {
   WheelPos -= 16;
   return matrix.Color333(WheelPos, 0, 7 - WheelPos);
  }
}
