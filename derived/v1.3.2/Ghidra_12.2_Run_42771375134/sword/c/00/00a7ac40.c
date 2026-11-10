/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a7ac40; name: FUN_00a7ac40
 */


undefined8 * FUN_00a7ac40(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  long local_38;
  long local_28;
  
  FUN_016ae300(&local_38,*(undefined8 *)(*(long *)(param_1 + 0x5c8) + 0x38));
  (**(code **)(**(long **)(local_38 + 0x2c8) + 0x10))(&local_28);
  if (local_28 != 0) {
    puVar3 = *(undefined8 **)(local_28 + 0x60);
    if (puVar3 != (undefined8 *)0x0) {
      plVar1 = (long *)(**(code **)*puVar3)(puVar3);
      lVar2 = FUN_00a871c0();
      for (; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
        if (plVar1 == (long *)lVar2) {
          puVar3 = puVar3 + -10;
          goto LAB_00a7acc4;
        }
      }
      puVar3 = (undefined8 *)0x0;
    }
LAB_00a7acc4:
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))((long *)(local_28 + 0x48));
    if (puVar3 != (undefined8 *)0x0) {
      if (local_38 != 0) {
        (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      }
      return puVar3 + 0x128;
    }
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


