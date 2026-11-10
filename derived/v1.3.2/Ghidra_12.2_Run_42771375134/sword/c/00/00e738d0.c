/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e738d0; name: FUN_00e738d0
 */


void FUN_00e738d0(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  
  lVar2 = *(long *)(param_1 + 0x70);
  if (lVar2 != 0) {
    *(long *)(param_1 + 0x78) = lVar2;
    if (((*(long **)(lVar2 + 0x418) != *(long **)(lVar2 + 0x420)) &&
        (lVar2 = **(long **)(lVar2 + 0x418), lVar2 != 0)) &&
       (puVar3 = *(undefined8 **)(lVar2 + 0x60), puVar3 != (undefined8 *)0x0)) {
      plVar1 = (long *)(**(code **)*puVar3)(puVar3);
      lVar2 = FUN_00c781c0();
      for (; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
        if (plVar1 == (long *)lVar2) {
          *(undefined8 **)(param_1 + 0x80) = puVar3 + -10;
          return;
        }
      }
    }
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


