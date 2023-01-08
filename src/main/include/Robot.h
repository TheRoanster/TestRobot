// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include <string>
#include <rev/CANSparkMax.h>
#include <frc/TimedRobot.h>
#include <frc/smartdashboard/SendableChooser.h>
#include <frc/Joystick.h>
class Robot : public frc::TimedRobot {
 public:
 void ArcadeDrive();
  void RobotInit() override;
  void RobotPeriodic() override;
  void AutonomousInit() override;
  void AutonomousPeriodic() override;
  void TeleopInit() override;
  void TeleopPeriodic() override;
  void DisabledInit() override;
  void DisabledPeriodic() override;
  void TestInit() override;
  void TestPeriodic() override;
  void SimulationInit() override;
  void SimulationPeriodic() override;
int lMotorLeaderID = 15;
int lMotorFollowerID = 16;
int rMotorLeaderID = 9;
int rMotorFollowerID = 3;
rev::CANSparkMax * lMotor = new rev::CANSparkMax(lMotorLeaderID, rev::CANSparkMax::MotorType::kBrushless);
rev::CANSparkMax * lMotorFollower = new rev::CANSparkMax(lMotorFollowerID, rev::CANSparkMax::MotorType::kBrushless);
rev::CANSparkMax * rMotor = new rev::CANSparkMax(rMotorLeaderID, rev::CANSparkMax::MotorType::kBrushless);
rev::CANSparkMax * rMotorFollower = new rev::CANSparkMax(rMotorFollowerID, rev::CANSparkMax::MotorType::kBrushless);
frc::Joystick* controller = new frc::Joystick(0);

};
