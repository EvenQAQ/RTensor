# Settings for RiscV64 platforms.
ifeq ($(TARGET), riscv64)
  TARGET_ARCH := riscv64
  TARGET_TOOLCHAIN_PREFIX := riscv64-unknown-elf-

  #CXXFLAGS += -march=gap8
  CXXFLAGS += -DTFLITE_MCU
	LIBS += -ldl
	BUILD_TYPE := micro
endif
