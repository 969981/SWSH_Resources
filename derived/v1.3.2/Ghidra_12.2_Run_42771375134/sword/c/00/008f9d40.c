/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008f9d40; name: FUN_008f9d40
 */


void FUN_008f9d40(long param_1,int param_2)

{
  uint uVar1;
  
  if ((*(byte *)(param_1 + 0x183) >> 3 & 1) == 0) {
    uVar1 = *(int *)(param_1 + 0x158) + param_2;
    if (0x1869e < uVar1) {
      uVar1 = 99999;
    }
    *(uint *)(param_1 + 0x158) = uVar1;
  }
  return;
}


