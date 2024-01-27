# wd66

![wd66](https://i.imgur.com/7HqgUfl.png)

*A short description of the keyboard/project*

* Keyboard Maintainer: [11customs](https://github.com/11Customs)
* Hardware Supported: *WD66_ver1*
* Hardware Availability: *UNDER_CONSTRUCTION*

Compile firmware (requires build environment setup):

    qmk compile -kb wd66 -km default

Flash your firmware with [QMK ToolBox](https://github.com/qmk/qmk_toolbox/releases):

    wd66_default.hex in qmk_firmware/.build

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: NOT IMPLEMENTED YET
* **Physical reset button**: Briefly press the button on the back of the PCB (under spacebar in case of WD66)
* **Keycode in layout**: NOT IMPLEMENTED
