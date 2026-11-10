/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008885c0; name: FUN_008885c0
 */


void FUN_008885c0(undefined8 *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(long *)PTR_DAT_02717468 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  uVar1 = FUN_00887ec0();
  *param_1 = uVar1;
  *(undefined4 *)(param_1 + 1) = param_2;
  return;
}


