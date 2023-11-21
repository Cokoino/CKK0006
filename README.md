# How to download the Tutorial documents
- Click the "Code" button, then click "Download ZIP" button in the pop-up window.
- Do NOT click the "Open with GitHub Desktop" button, it will lead you to install Github software.
- Then,there will pop up a download task which named"CKK0015-main". 
- You will get a "CKK0015-main"ZIP file in your computer when the download task is finished,
- ! Unzip the ZIP file instead of opening the file in the ZIP file directly.

- ! Do not move, delete or rename files in the folder just unzipped.

![](https://github.com/Cokoino/CKK0006/raw/master/download.png)

# CKK0006
- Robot arm for arduino.
# Technical support
- Email: cokoino@outlook.com

# Cokoino mechanical arm source code
```c++
This code applies to cokoino mechanical arm
Company web site:
http://cokoino.com/
                                     ________
                         ----|servo4| 
                        |            --------
                    |servo3|   
                        |
                        |
                    |servo2|
                        |
                        |
                  ___________
                  |  servo1 |
         ____________________
         ____________________
Fanctions:
arm.servo1.read();         //read the servo of angle
arm.servo2.read();
arm.servo3.read();
arm.servo4.read();
 
arm.servo1.write(angle);   //servo run
arm.servo2.write(angle);
arm.servo3.write(angle);
arm.servo4.write(angle);
 
arm.left(speed);           //perform the action 
arm.right(speed);
arm.up(speed);
arm.down(speed);
arm.open(speed);
arm.close(speed);

arm.captureAction();              //capture the current action,return pointer array
arm.do_action(int *p,int speed);  //P is a pointer to the array
 
arm.JoyStickL.read_x();           //Returns joystick numerical
arm.JoyStickL.read_y();
arm.JoyStickR.read_x();
arm.JoyStickR.read_y();
```

# Contact us:
- Email: cokoino@outlook.com
- Company website address：http://cokoino.com/
- Facebook：https://www.facebook.com/cokoino.lk
- Amazon: https://www.amazon.com/stores/COKOINO/page/D21BC7AE-4404-4508-89AA-BEDE7718902C?ref_=ast_bln
