/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00febdf0; name: FUN_00febdf0
 */


void FUN_00febdf0(long param_1,ulong param_2)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x5cb) != '\0') {
    return;
  }
  uVar1 = 0;
  if ((param_2 & 1) == 0) {
    uVar1 = 2;
  }
  FUN_010364c0(param_1,uVar1);
  *(byte *)(param_1 + 0x5cb) = *(byte *)(param_1 + 0x5cb) ^ 1;
  return;
}


