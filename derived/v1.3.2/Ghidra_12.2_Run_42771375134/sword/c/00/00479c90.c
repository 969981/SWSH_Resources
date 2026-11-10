/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00479c90; name: FUN_00479c90
 */


void FUN_00479c90(undefined8 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  
  plVar4 = (long *)*param_1;
  if (plVar4 != (long *)0x0) {
    plVar3 = (long *)*plVar4;
    if (plVar3 != (long *)0x0) {
      do {
        *(undefined8 *)(plVar3[1] + 0x18) = 0;
        plVar3 = (long *)*plVar3;
      } while (plVar3 != (long *)0x0);
      plVar4 = (long *)*param_1;
    }
    iVar2 = (int)plVar4[5] + -1;
    *(int *)(plVar4 + 5) = iVar2;
    if (iVar2 == 0) {
      uVar1 = *(undefined4 *)PTR_DAT_02712a90;
      FUN_004794f0(plVar4);
      FUN_00404870(uVar1,plVar4);
    }
    *param_1 = 0;
  }
  return;
}


