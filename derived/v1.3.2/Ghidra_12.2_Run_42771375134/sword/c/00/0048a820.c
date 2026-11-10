/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0048a820; name: FUN_0048a820
 */


void FUN_0048a820(long *param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  
  puVar2 = PTR_DAT_02712a90;
  plVar3 = (long *)*param_1;
  plVar4 = plVar3;
  if ((int)param_1[1] != 0) {
    do {
      lVar5 = *plVar4;
      FUN_004896b0(lVar5);
      if (lVar5 != 0) {
        uVar1 = *(undefined4 *)puVar2;
        FUN_00489640(lVar5);
        FUN_00404870(uVar1,lVar5);
      }
      plVar3 = (long *)*param_1;
      plVar4 = plVar4 + 1;
    } while (plVar4 != plVar3 + *(uint *)(param_1 + 1));
  }
  if (plVar3 != (long *)0x0) {
    *(undefined4 *)(param_1 + 1) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90,plVar3);
    *param_1 = 0;
    *(undefined4 *)((long)param_1 + 0xc) = 0;
  }
  return;
}


