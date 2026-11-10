/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00aa4f60; name: FUN_00aa4f60
 */


undefined8 * FUN_00aa4f60(void)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long local_30;
  long local_28;
  
  FUN_016ae300(&local_30);
  (**(code **)(**(long **)(local_30 + 0x2c8) + 0x10))(&local_28);
  if (local_28 != 0) {
    puVar4 = *(undefined8 **)(local_28 + 0x60);
    if (puVar4 != (undefined8 *)0x0) {
      plVar2 = (long *)(**(code **)*puVar4)(puVar4);
      if (((*PTR_DAT_02719658 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_02719658), iVar1 != 0)) {
        uVar3 = FUN_00aa5090();
        *(undefined8 *)PTR_DAT_02719660 = uVar3;
        __cxa_guard_release(PTR_DAT_02719658);
      }
      for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
        if (plVar2 == (long *)PTR_DAT_02719660) {
          puVar4 = puVar4 + -10;
          goto LAB_00aa4fe8;
        }
      }
      puVar4 = (undefined8 *)0x0;
    }
LAB_00aa4fe8:
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))((long *)(local_28 + 0x48));
    if (puVar4 != (undefined8 *)0x0) {
      if (local_30 != 0) {
        (**(code **)(*(long *)(local_30 + 0x48) + 0x18))();
      }
      return puVar4 + 0xc9;
    }
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


