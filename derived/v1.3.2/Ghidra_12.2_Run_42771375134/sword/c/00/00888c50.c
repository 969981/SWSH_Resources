/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00888c50; name: FUN_00888c50
 */


undefined8 FUN_00888c50(uint param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined8 local_30;
  uint local_28;
  
  if (0x647 < param_1) {
    return 0;
  }
  local_30 = 0;
  local_28 = 0;
  if (*(long *)PTR_DAT_02717468 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  local_30 = FUN_00887ec0(*(long *)PTR_DAT_02717468,param_1);
  local_28 = param_1;
  uVar1 = FUN_00888630(&local_30,param_2);
  return uVar1;
}


