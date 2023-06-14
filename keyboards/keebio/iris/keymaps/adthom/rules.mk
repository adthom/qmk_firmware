RGB_MATRIX_ENABLE        = yes
RGBLIGHT_ENABLE          = no      # Enable keyboard RGB underglow
BACKLIGHT_ENABLE         = no      # Enable keyboard backlight functionality
BOOTMAGIC_ENABLE         = no      # Enable Bootmagic Lite
CONSOLE_ENABLE           = no      # Console for debug
COMMAND_ENABLE           = no      # Commands for debug and configuration
NKRO_ENABLE              = yes     # Enable N-Key Rollover
AUDIO_ENABLE             = no      # Audio output
SPLIT_KEYBOARD           = yes
ENCODER_ENABLE           = yes
MOUSEKEY_ENABLE          = yes
EXTRAKEY_ENABLE          = yes
AUTO_SHIFT_ENABLE        = yes
TAP_DANCE_ENABLE         = yes
CAPS_WORD_ENABLE         = yes
KEY_OVERRIDE_ENABLE	     = yes
LTO_ENABLE               = yes
SIGNALRGB_ENABLE         = yes

ifeq ($(strip $(SIGNALRGB_ENABLE)), yes)
    RGB_MATRIX_CUSTOM_USER  := yes
    RAW_ENABLE              := yes
	OPT_DEFS += -DSIGNALRGB_ENABLE
endif
