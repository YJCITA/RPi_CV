#ifndef MPU6500_H
#define MPU6500_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdint.h>
#include <string.h>
#include <math.h>

#include "helper_3dmath.h"
#include "inv_mpu.h"
#include "inv_mpu_dmp.h"

#define YAW 0
#define PITCH 1
#define ROLL 2
#define DIM 3

int init();
int ms_update();

int GetGravity(VectorFloat *v, Quaternion *q);
int GetYawPitchRoll(float *data, Quaternion *q, VectorFloat *gravity); 
int GetGyro(int32_t *data, const uint8_t* packet);

// 刷新imu原始数据
int UpdateRawData();


#endif
