PROJECT_NAME = $(shell basename "$(realpath ./)")

APPLICATION_SRCS = $(notdir $(wildcard ./*.c))
#APPLICATION_SRCS += system_nrf51.c
APPLICATION_SRCS += softdevice_handler.c
APPLICATION_SRCS += ble_advdata.c
APPLICATION_SRCS += ble_conn_params.c
APPLICATION_SRCS += app_timer.c
APPLICATION_SRCS += ble_srv_common.c
APPLICATION_SRCS += nrf_drv_twi.c
APPLICATION_SRCS += app_util_platform.c
APPLICATION_SRCS += nrf_drv_common.c
APPLICATION_SRCS += nrf_drv_gpiote.c
APPLICATION_SRCS += nrf_delay.c
APPLICATION_SRCS += led.c

APPLICATION_SRCS += tripoint_interface.c

DEVICE = NRF51

ifndef TARGET
	TARGET = tritag
endif

TARGET_UPPER = $(shell echo $(TARGET) | tr a-z A-Z)
TARGET_LOWER = $(shell echo $(TARGET) | tr A-Z a-z)
BOARD = BOARD_$(TARGET_UPPER)

APPLICATION_SRCS += $(TARGET_LOWER).c

USE_SOFTDEVICE = s110

SDK_VERSION = 9
TEMPLATE_PATH ?= ../../nrf5x-base/nrf51-pure-gcc-setup/template/

LIBRARY_PATHS += . ../../nrf5x-base/peripherals ../../nrf5x-base/devices ../../nrf5x-base/services ../../src
SOURCE_PATHS += ../../nrf5x-base/peripherals ../../nrf5x-base/devices ../../nrf5x-base/services ../../src

CFLAGS = -Os
GDB_PORT_NUMBER = 2331

include ../../Makefile.include
include $(TEMPLATE_PATH)Makefile
