/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e39180; name: FUN_00e39180
 */


void FUN_00e39180(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00da4bb0(*(undefined8 *)(param_1 + 0x400),1);
  if ((uVar1 & 1) == 0) {
    return;
  }
  FUN_00da4c30(*(undefined8 *)(param_1 + 0x400),1);
  return;
}


