/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013b13c0; name: FUN_013b13c0
 */


undefined8 FUN_013b13c0(long param_1)

{
  ulong uVar1;
  long lVar2;
  long local_38;
  
  if (*(long *)(param_1 + 0x80) == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  lVar2 = *(long *)(param_1 + 0x88);
  if (lVar2 == 0) {
    uVar1 = FUN_013b2340(param_1);
    if ((uVar1 & 1) == 0) {
      return 0;
    }
  }
  else {
    FUN_012e7d50(*(long *)(param_1 + 0x80),0x23,1);
    FUN_012e7d50(lVar2,0x23,1);
    *(undefined1 *)(param_1 + 0x95) = 1;
  }
  FUN_013a5170(&local_38);
  FUN_0130a910(local_38,1);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  return 1;
}


