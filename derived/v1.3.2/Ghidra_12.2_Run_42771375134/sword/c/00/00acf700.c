/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00acf700; name: FUN_00acf700
 */


void FUN_00acf700(long *param_1,undefined8 param_2)

{
  uint uVar1;
  
  (**(code **)(*param_1 + 0x178))();
  uVar1 = FUN_00aa56c0(param_1[0x78] + 0x3d0);
  *(uint *)(param_1 + 0xb4) = uVar1;
  if (uVar1 == 0x10) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  if (0xf < uVar1) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  FUN_00acf460(param_1,*(undefined8 *)(param_1[0x78] + (ulong)uVar1 * 0x20 + 0xb8),param_2);
  return;
}


