/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013359b0; name: FUN_013359b0
 */


void FUN_013359b0(long param_1)

{
  uint uVar1;
  
  if (*(char *)(param_1 + 0x60) != '\0') {
    uVar1 = *(int *)(param_1 + 100) + 10;
    if (0xc34 < uVar1 >> 5) {
      uVar1 = 100000;
    }
    *(uint *)(param_1 + 100) = uVar1;
  }
  return;
}


