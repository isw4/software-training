#include <STSL/RJRobot.h>

using namespace std;

int main()
{
    RJRobot robot(RobotType::REAL);

    // here are some useful functions:
    //robot.SetDriveMotors(127, 127);
    //robot.Wait(1000ms);
    //robot.StopMotors();
    int count = 4;
    for (int i = 0; i < count; ++i) {
        robot.SetDriveMotors(100, 100);
        robot.Wait(600ms);
        robot.SetDriveMotors(85, 0);
        robot.Wait(1200ms);
    }
    robot.StopMotors();
}
