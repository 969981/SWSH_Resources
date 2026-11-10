/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008f9ca0; name: FUN_008f9ca0
 */


uint FUN_008f9ca0(long param_1)

{
  uint uVar1;
  uint uVar2;
  
  if ((*(byte *)(param_1 + 0x183) >> 3 & 1) != 0) {
    return *(uint *)(param_1 + 0x154);
  }
  uVar2 = (1 << (*(char *)(param_1 + 0x5c0) != '\0')) << (*(char *)(param_1 + 0x5c1) != '\0');
  uVar1 = *(uint *)(param_1 + 0x154);
  if (1 < uVar2) {
    uVar1 = uVar1 * uVar2;
    *(uint *)(param_1 + 0x154) = uVar1;
    uVar2 = *(int *)(param_1 + 0x158) * uVar2;
    if (0x1869e < uVar2) {
      uVar2 = 99999;
    }
    *(uint *)(param_1 + 0x158) = uVar2;
  }
  uVar2 = (uint)(*(float *)(*(long *)(param_1 + 0x88) + 0xa7c) * (float)uVar1);
  if (0xf423e < uVar2) {
    uVar2 = 999999;
  }
  *(byte *)(param_1 + 0x183) = *(byte *)(param_1 + 0x183) | 8;
  *(uint *)(param_1 + 0x154) = uVar2;
  return uVar2;
}


