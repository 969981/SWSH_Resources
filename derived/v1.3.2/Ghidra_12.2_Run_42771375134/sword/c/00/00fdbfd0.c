/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fdbfd0; name: FUN_00fdbfd0
 */


uint FUN_00fdbfd0(long param_1)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  long local_28;
  
  (**(code **)(**(long **)(param_1 + 0x2c8) + 0x10))(&local_28);
  if (local_28 != 0) {
    puVar4 = *(undefined8 **)(local_28 + 0x60);
    if (puVar4 != (undefined8 *)0x0) {
      plVar2 = (long *)(**(code **)*puVar4)(puVar4);
      lVar3 = FUN_016b1f00();
      for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
        if (plVar2 == (long *)lVar3) {
          puVar4 = puVar4 + -10;
          goto LAB_00fdc03c;
        }
      }
      puVar4 = (undefined8 *)0x0;
    }
LAB_00fdc03c:
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))((long *)(local_28 + 0x48));
    if (puVar4 != (undefined8 *)0x0) {
      uVar1 = FUN_00fdf6e0(puVar4[0x26]);
      return uVar1 & 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


