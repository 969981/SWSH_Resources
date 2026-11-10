/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0103ec60; name: FUN_0103ec60
 */


void FUN_0103ec60(long param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0xa4) == 0) {
    *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_1 + 0xac);
    return;
  }
  uVar1 = *(int *)(param_1 + 0xa4) - 1;
  *(uint *)(param_1 + 0xa4) = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
  return;
}


