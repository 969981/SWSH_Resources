/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0072f7b0; name: FUN_0072f7b0
 */


bool FUN_0072f7b0(long param_1,int param_2,undefined8 *param_3)

{
  uint uVar1;
  
  uVar1 = (uint)*param_3 & (uint)*(undefined8 *)(param_1 + 0x38);
  if (param_2 == 1) {
    return uVar1 != 0;
  }
  if (param_2 == 0) {
    return uVar1 == (uint)*param_3;
  }
  return false;
}


