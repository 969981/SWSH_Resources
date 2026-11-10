/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00818210; name: FUN_00818210
 */


void FUN_00818210(undefined8 param_1,undefined8 param_2)

{
  ulong local_28 [2];
  void *local_18;
  
  local_28[0] = 0;
  local_28[1] = 0;
  local_18 = (void *)0x0;
  FUN_00824f20(param_1,local_28,param_2);
  if ((local_28[0] & 1) != 0) {
    operator_delete(local_18);
  }
  return;
}


