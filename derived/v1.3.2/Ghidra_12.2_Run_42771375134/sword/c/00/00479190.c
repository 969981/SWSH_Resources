/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00479190; name: FUN_00479190
 */


void FUN_00479190(undefined8 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined *puVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  
  puVar3 = PTR_DAT_02712a90;
  plVar4 = (long *)*param_1;
  plVar5 = plVar4;
  if (*(int *)(param_1 + 1) != 0) {
    do {
      *(int *)(*plVar5 + 0x74) = *(int *)(*plVar5 + 0x74) + -1;
      puVar6 = (undefined8 *)*plVar5;
      iVar2 = *(int *)((long)puVar6 + 100) + -1;
      *(int *)((long)puVar6 + 100) = iVar2;
      if (iVar2 == 0) {
        uVar1 = *(undefined4 *)puVar3;
        (**(code **)*puVar6)(puVar6);
        FUN_00404870(uVar1,puVar6);
      }
      plVar4 = (long *)*param_1;
      plVar5 = plVar5 + 1;
    } while (plVar5 != plVar4 + *(uint *)(param_1 + 1));
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (plVar4 != (long *)0x0) {
    *(undefined4 *)(param_1 + 1) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90,plVar4);
    *param_1 = 0;
    *(undefined4 *)((long)param_1 + 0xc) = 0;
  }
  return;
}


