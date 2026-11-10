/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00479260; name: FUN_00479260
 */


long * FUN_00479260(long *param_1,long *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  
  puVar4 = PTR_DAT_02712a90;
  if ((int)param_1[1] != 0) {
    plVar8 = (long *)*param_1;
    do {
      *(int *)(*plVar8 + 0x74) = *(int *)(*plVar8 + 0x74) + -1;
      puVar6 = (undefined8 *)*plVar8;
      iVar3 = *(int *)((long)puVar6 + 100) + -1;
      *(int *)((long)puVar6 + 100) = iVar3;
      if (iVar3 == 0) {
        uVar1 = *(undefined4 *)puVar4;
        (**(code **)*puVar6)(puVar6);
        FUN_00404870(uVar1,puVar6);
      }
      plVar8 = plVar8 + 1;
    } while (plVar8 != (long *)(*param_1 + (ulong)*(uint *)(param_1 + 1) * 8));
  }
  *(undefined4 *)(param_1 + 1) = 0;
  uVar2 = *(uint *)(param_2 + 1);
  if (uVar2 != 0) {
    lVar5 = FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar2 << 3);
    *param_1 = lVar5;
    if (lVar5 != 0) {
      *(uint *)((long)param_1 + 0xc) = uVar2;
      if ((int)param_2[1] != 0) {
        puVar6 = (undefined8 *)*param_2;
        do {
          puVar7 = puVar6 + 1;
          FUN_00479360(param_1,*puVar6);
          puVar6 = puVar7;
        } while (puVar7 != (undefined8 *)(*param_2 + (ulong)*(uint *)(param_2 + 1) * 8));
      }
    }
  }
  return param_1;
}


