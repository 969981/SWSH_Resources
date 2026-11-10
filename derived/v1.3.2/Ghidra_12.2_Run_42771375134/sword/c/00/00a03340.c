/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a03340; name: FUN_00a03340
 */


void FUN_00a03340(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  long local_38;
  
  (**(code **)(**(long **)(param_1 + 0x2c8) + 0x10))(&local_38);
  if (local_38 != 0) {
    puVar3 = *(undefined8 **)(local_38 + 0x60);
    if (puVar3 != (undefined8 *)0x0) {
      plVar1 = (long *)(**(code **)*puVar3)(puVar3);
      lVar2 = FUN_00a03e20();
      for (; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
        if (plVar1 == (long *)lVar2) {
          puVar3 = puVar3 + -10;
          goto LAB_00a033b4;
        }
      }
      puVar3 = (undefined8 *)0x0;
    }
LAB_00a033b4:
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))((long *)(local_38 + 0x48));
    if (puVar3 != (undefined8 *)0x0) {
      if (*(int *)(puVar3 + 0xc) == 1) {
        **(undefined4 **)(param_1 + 0x700) = 0;
        *(undefined4 *)(*(long *)(param_1 + 0x700) + 4) = 1;
      }
      else if (*(int *)(puVar3 + 0xc) == 0) {
        **(undefined4 **)(param_1 + 0x700) = 0;
        *(undefined4 *)(*(long *)(param_1 + 0x700) + 4) = 0;
      }
      else {
        **(undefined4 **)(param_1 + 0x700) = 1;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


