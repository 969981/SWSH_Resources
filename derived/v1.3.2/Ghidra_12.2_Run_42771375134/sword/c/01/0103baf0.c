/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0103baf0; name: FUN_0103baf0
 */


void FUN_0103baf0(long *param_1)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x90))();
  if (((uVar1 & 1) == 0) || (param_1[0x98] == 0)) {
    return;
  }
  FUN_016d2080();
  return;
}


