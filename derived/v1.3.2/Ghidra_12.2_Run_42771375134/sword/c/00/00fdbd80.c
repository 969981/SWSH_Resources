/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fdbd80; name: FUN_00fdbd80
 */


undefined1 FUN_00fdbd80(long param_1)

{
  long *plVar1;
  long lVar2;
  long local_28;
  
  (**(code **)(**(long **)(param_1 + 0x2c8) + 0x10))(&local_28);
  if (local_28 != 0) {
    if (*(undefined8 **)(local_28 + 0x60) != (undefined8 *)0x0) {
      plVar1 = (long *)(**(code **)**(undefined8 **)(local_28 + 0x60))();
      lVar2 = FUN_016b1f00();
      for (; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
        if (plVar1 == (long *)lVar2) {
          (**(code **)(*(long *)(local_28 + 0x48) + 0x18))((long *)(local_28 + 0x48));
          return *PTR_DAT_02723070;
        }
      }
    }
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))((long *)(local_28 + 0x48));
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


