/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cec0b0; name: FUN_00cec0b0
 */


void FUN_00cec0b0(long param_1,ulong param_2)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x610) != '\0') {
    return;
  }
  uVar1 = 0;
  if ((param_2 & 1) == 0) {
    uVar1 = 2;
  }
  FUN_010364c0(param_1,uVar1);
  *(undefined1 *)(param_1 + 0x610) = 1;
  return;
}


