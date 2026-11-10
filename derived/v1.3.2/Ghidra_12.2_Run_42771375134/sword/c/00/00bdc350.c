/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bdc350; name: FUN_00bdc350
 */


void FUN_00bdc350(undefined1 *param_1,long param_2)

{
  undefined2 uVar1;
  
  *param_1 = 0;
  if (*(char *)(param_2 + 0x19a8) != '\0') {
    *(undefined **)(param_1 + 8) = PTR_DAT_0271b858 + 0x10;
    param_1[0x10] = *(undefined1 *)(param_2 + 0x19b8);
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x19c0);
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x19c8);
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x19d0);
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x19d8);
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x19dc);
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x19e0);
    *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x19e4);
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x19e8);
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x19ec);
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x19f0);
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x19f4);
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x19f8);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 0x19fc);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x1a00);
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_2 + 0x1a04);
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x1a08);
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_2 + 0x1a0c);
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x1a10);
    *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_2 + 0x1a14);
    *(undefined2 *)(param_1 + 0x70) = *(undefined2 *)(param_2 + 0x1a18);
    uVar1 = *(undefined2 *)(param_2 + 0x1a1a);
    *(undefined **)(param_1 + 8) = PTR_DAT_027169c0 + 0x10;
    *(undefined2 *)(param_1 + 0x72) = uVar1;
    *param_1 = 1;
  }
  return;
}


