/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011591f0; name: FUN_011591f0
 */


void FUN_011591f0(long param_1)

{
  long lVar1;
  undefined1 *local_28;
  
  lVar1 = *(long *)(param_1 + 0x2b0);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x5e0) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x5e0) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x5e0) = 0;
  }
  *(long *)(param_1 + 0x5e0) = lVar1;
  if (lVar1 != 0) {
    local_28 = &DAT_80a8e808288e407;
    lVar1 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&local_28);
    if (lVar1 != 0) {
      *(long *)(param_1 + 0x5f0) = lVar1;
      FUN_00ffa160(param_1,1,1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


