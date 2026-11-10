/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e44e90; name: FUN_00e44e90
 */


void FUN_00e44e90(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  FUN_00dbf0f0();
  lVar2 = *(long *)(param_1 + 0x588);
  if (lVar2 != 0) {
    plVar3 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    plVar4 = *(long **)(lVar2 + 0x60);
    if (plVar4 != (long *)0x0) {
      plVar1 = (long *)(**(code **)*plVar4)(plVar4);
      lVar2 = FUN_0156b190();
      for (; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
        if (plVar1 == (long *)lVar2) {
          plVar4 = plVar4 + -10;
          goto LAB_00e44f00;
        }
      }
      plVar4 = (long *)0x0;
    }
LAB_00e44f00:
    (**(code **)(*plVar3 + 0x18))(plVar3);
    if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00e44f2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x1c8))(plVar4);
      return;
    }
  }
  return;
}


