/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003aa700; name: FUN_003aa700
 */


void FUN_003aa700(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x2a0) != 0) {
    uVar1 = 0;
    do {
      FUN_003adf90(*(undefined8 *)(*(long *)(param_1 + 0x298) + uVar1 * 8),1);
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_1 + 0x2a0));
  }
  return;
}


