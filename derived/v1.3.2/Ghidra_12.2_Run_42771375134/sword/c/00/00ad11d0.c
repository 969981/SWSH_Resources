/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ad11d0; name: FUN_00ad11d0
 */


void FUN_00ad11d0(long *param_1,byte param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = (**(code **)(*param_1 + 400))();
  if ((uVar1 & 1) == 0) {
    return;
  }
  param_2 = param_2 & 1;
  if (param_3 != 1) {
    if (param_3 == 0) {
      *(byte *)(param_1 + 0xae) = param_2;
      return;
    }
    *(byte *)(param_1 + 0xae) = param_2;
  }
  *(byte *)((long)param_1 + 0x571) = param_2;
  return;
}


