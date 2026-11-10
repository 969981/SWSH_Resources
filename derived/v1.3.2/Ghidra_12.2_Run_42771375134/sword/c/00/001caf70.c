/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001caf70; name: FUN_001caf70
 */


void FUN_001caf70(long *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 1) >> 0x1e;
  if ((uVar1 == 3) || ((uVar1 == 2 && (*(char *)(*param_1 + 0x1fb9) != '\0')))) {
    *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) | 0x20000000;
    return;
  }
  FUN_001ba7d0();
  return;
}


