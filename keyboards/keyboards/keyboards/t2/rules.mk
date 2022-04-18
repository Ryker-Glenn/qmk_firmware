# MCU name
MCU = atmega32u4

BOOTLOADER = caterina

F_CPU = 16000000

F_USB = $(F_CPU)

# Interrupt driven control endpoint task(+60)
OPT_DEFS += -DINTERRUPT_CONTROL_ENDPOINT

# Boot Section Size in *bytes*
OPT_DEFS += -DBOOTLOADER_SIZE=4096

# Build Options
#   comment out to disable the options.
#
BOOTMAGIC_ENABLE = no
MOUSEKEY_ENABLE  = no
EXTRAKEY_ENABLE  = yes
CONSOLE_ENABLE   = no
COMMAND_ENABLE 	 = no   
SLEEP_LED_ENABLE = no  
NKRO_ENABLE 	 = yes
LTO_ENABLE 	 = yes
SPLIT_KEYBOARD 	 = yes
ENCODER_ENABLE 	 = yes