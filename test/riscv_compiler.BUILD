package(default_visibility = ["//visibility:public"])

filegroup(
    name = "gcc",
    srcs = [
        "/opt/riscv/bin/riscv64-unknown-elf-gcc"
    ],
)

filegroup(
    name = "ar"
    srcs = [
        "/opt/riscv/bin/riscv64-unknown-elf-ar"
    ]
)

filegroup(
    name = "ld",
    srcs = [
        "/opt/riscv/bin/riscv64-unknown-elf-ld",
    ],
)

filegroup(
    name = "nm",
    srcs = [
        "/opt/riscv/bin/riscv64-unknown-elf-nm",
    ],
)

filegroup(
    name = "objcopy",
    srcs = [
        "/opt/riscv/bin/riscv64-unknown-elf-objcopy",
    ],
)

filegroup(
    name = "objdump",
    srcs = [
        "/opt/riscv/bin/riscv64-unknown-elf-objdump",
    ],
)

filegroup(
    name = "strip",
    srcs = [
        "/opt/riscv/bin/riscv64-unknown-elf-strip",
    ],
)

filegroup(
    name = "as",
    srcs = [
        "/opt/riscv/bin/riscv64-unknown-elf-as",
    ],
)

filegroup(
    name = "compiler_pieces",
    srcs = glob([
        "/opt/riscv/riscv64-unknown-elf/**",
        "/opt/riscv/libxec/**",
        "/opt/riscv/lib/gcc/riscv64-unknown-elf**",
        "/opt/riscv/include/**",
    ]),
)

filegroup(
    name = "compiler_components",
    srcs = [
        ":ar",
        ":as",
        ":gcc",
        ":ld",
        ":nm",
        ":objcopy",
        ":objdump",
        ":strip",
    ],
)
