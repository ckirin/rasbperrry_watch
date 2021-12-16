# LVGL demonstration
#### Raspberry Pi with 2.1 inches round screen with pixels 480*480
---
Based on LVGL version 7.0.0

The repository was cloned on 23 May 2020 from [the lvgl repository](https://github.com/lvgl).

LVGL documentation is [located here](https://docs.lvgl.io/v7).

---
This repository is a working implementation of LVGL (Little and Versatile Embedded Graphics Library) on  2.1 round screen.

This implementation uses the linux frame buffer interface.
___
### Building and running
Download the repository on your Pi and run ``make`` in the lvgl_demo directory.
The code should compile without errors and you should end up with an excutable file named **demo** in the lvgl_demo directory.

The executable file must be run with root permission to allow access to the frame buffer device:
```sudo ./demo```

 
