/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004bdd80; name: FUN_004bdd80
 */


void FUN_004bdd80(undefined8 param_1,long *param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  
  puVar2 = PTR_DAT_02712a90;
  plVar3 = (long *)*param_2;
  plVar4 = plVar3;
  if ((int)param_2[1] != 0) {
    do {
      lVar5 = *plVar4;
      FUN_004bd870(lVar5,*(int *)(lVar5 + 0x1c) + *(int *)(lVar5 + 0x18));
      FUN_004bd7a0(lVar5);
      if (lVar5 != 0) {
        uVar1 = *(undefined4 *)puVar2;
        FUN_004bd790(lVar5);
        FUN_00404870(uVar1,lVar5);
      }
      plVar3 = (long *)*param_2;
      plVar4 = plVar4 + 1;
    } while (plVar4 != plVar3 + *(uint *)(param_2 + 1));
  }
  if (plVar3 != (long *)0x0) {
    *(undefined4 *)(param_2 + 1) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90,plVar3);
    *param_2 = 0;
    *(undefined4 *)((long)param_2 + 0xc) = 0;
  }
  return;
}


