/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008803b0; name: FUN_008803b0
 */


void FUN_008803b0(long param_1,int param_2,ushort param_3)

{
  int iVar1;
  ushort local_68 [36];
  
  iVar1 = 0;
  if ((param_2 < 899) && (1 < param_2 - 899U)) {
    if (param_3 == 0) {
      iVar1 = param_2;
    }
    else {
      FUN_00880430(local_68,param_2);
      iVar1 = (uint)local_68[0] + (uint)param_3 + -1;
    }
  }
  FUN_00880430(param_1 + 10,iVar1);
  *(undefined1 *)(param_1 + 8) = 1;
  return;
}


