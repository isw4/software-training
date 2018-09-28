#include <STSL/RJRobot.h>
#include <iostream>

using namespace std;

int main()
{
    RJRobot robot(RobotType::REAL);

    // your code here
    int brightness;
    brightness = robot.GetLineValue(LineSensor::CENTER);
    cout << brightness;

}
