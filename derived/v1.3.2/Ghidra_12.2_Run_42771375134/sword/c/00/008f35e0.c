/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008f35e0; name: FUN_008f35e0
 */


uint FUN_008f35e0(long param_1)

{
  uint uVar1;
  uint uVar2;
  
  if (*(char *)(*(long *)(param_1 + 0x88) + 0xa84) != '\0') {
    return 0;
  }
  uVar2 = *(uint *)(param_1 + 0x158);
  if (((*(byte *)(param_1 + 0x183) >> 3 & 1) == 0) &&
     (uVar1 = (1 << (*(char *)(param_1 + 0x5c0) != '\0')) << (*(char *)(param_1 + 0x5c1) != '\0'),
     1 < uVar1)) {
    uVar2 = uVar1 * uVar2;
    if (0x1869e < uVar2) {
      uVar2 = 99999;
    }
  }
  return uVar2;
}


