/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fe59e0; name: FUN_00fe59e0
 */


void FUN_00fe59e0(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  long local_28;
  
  (**(code **)(**(long **)(param_1 + 0x2c8) + 0x10))(&local_28);
  if (local_28 != 0) {
    puVar3 = *(undefined8 **)(local_28 + 0x60);
    if (puVar3 != (undefined8 *)0x0) {
      plVar1 = (long *)(**(code **)*puVar3)(puVar3);
      lVar2 = FUN_00fe5e90();
      for (; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
        if (plVar1 == (long *)lVar2) {
          puVar3 = puVar3 + -10;
          goto LAB_00fe5a4c;
        }
      }
      puVar3 = (undefined8 *)0x0;
    }
LAB_00fe5a4c:
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))((long *)(local_28 + 0x48));
    if (puVar3 != (undefined8 *)0x0) {
      *(undefined1 *)((long)puVar3 + 0x684) = 1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


