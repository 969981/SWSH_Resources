/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009327c0; name: FUN_009327c0
 */


int FUN_009327c0(byte *param_1)

{
  uint uVar1;
  
  uVar1 = (uint)*param_1;
  if (*param_1 != 0) {
    uVar1 = *(uint *)(param_1 + 4);
    if (uVar1 != 0xff) {
      uVar1 = uVar1 - *(int *)(param_1 + 0xc);
    }
  }
  return uVar1 + *(int *)(param_1 + 0xc);
}


