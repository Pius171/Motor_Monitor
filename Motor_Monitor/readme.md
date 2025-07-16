

## ⚙️ Setup Used

The following setup file was selected in `User_Setup_Select.h`:

```cpp
#include <User_Setups/Setup16_ILI9488_Parallel.h>
```

The pinout or the setup can be found in the folder User_Setups/Setup16...

## Edit to Library
I had to edit the library, this file in particular: TFT_eSPI/Processors/TFT_eSPI_ESP32.c to make it compatible with verion 3 of ESP32 arduino core.

```cpp
reg = gpio_input_get(); // Read three times to allow for bus access time
reg = gpio_input_get();
reg = gpio_input_get(); // Data should be stable now

```

Replace with this

```cpp
reg = REG_READ(GPIO_IN_REG); // Read three times to allow for bus access time
reg = REG_READ(GPIO_IN_REG);
reg = REG_READ(GPIO_IN_REG); // Data should be stable now
```

## Todo:
- ESPNOW
- Add icons
- Add some designs
- Try graphs
- Try touch