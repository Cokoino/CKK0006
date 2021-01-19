# CKK0006
- Robot arm for arduino.
# Download
- Click the "Code" button, then click "Download ZIP" button in the pop-up window. Do NOT click the "Open with GitHub Desktop" button, it will lead you to install Github software.

![](https://github.com/Cokoino/CKK0006/raw/master/download.png)

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

# Trouble shooting:
- Bottom servomotor does not rotate smoothly?
- Reply:During installation in step 9 of course 6.2, the self-locking nut must not be too tightly locked.

- The rotation attitude of the manipulator is inconsistent with the course description?
- Reply:1.Be sure to initialize the servomotor as per lesson 6.1 before installing the robotic arm.  2.Be sure to install the arm in the assembly pose as described in lesson 6.2.
