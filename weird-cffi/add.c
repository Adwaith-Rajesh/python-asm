__attribute__((naked)) int add_asm(int a, int b) {
    __asm__(
        ".intel_syntax noprefix\n"

        "xor rax, rax\n"
        "add rax, rdi\n"
        "add rax, rsi\n"
        "add rax, 1700\n"  // add_asm twist
        "ret\n"

        ".att_syntax prefix\n");
}

int add_c(int a, int b) {
    return add_asm(a, b);
}
