cmake_minimum_required(VERSION 2.8.2)


ADD_DEFINITIONS(-DMPU_DEBUG) # 开启调试

ADD_EXECUTABLE(mpu6500_main  "./mpu6500_main.cpp")
TARGET_LINK_LIBRARIES(mpu6500_main
        -Wl,--start-group
        I2Cdev mpu6500
        -Wl,--end-group
)
    
