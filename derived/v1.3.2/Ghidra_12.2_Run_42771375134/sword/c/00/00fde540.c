/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fde540; name: FUN_00fde540
 */


void FUN_00fde540(long *param_1,long param_2,long *param_3)

{
  long lVar1;
  
  *param_1 = (long)(PTR_DAT_02723068 + 0x10);
  param_1[1] = param_2;
  lVar1 = *param_3;
  param_1[2] = lVar1;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
    param_2 = param_1[1];
  }
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  return;
}


