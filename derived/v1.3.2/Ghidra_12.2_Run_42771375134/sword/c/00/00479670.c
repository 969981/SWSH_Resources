/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00479670; name: FUN_00479670
 */


undefined8 FUN_00479670(long *param_1,long param_2,undefined8 *param_3,long *param_4)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar2 = (long *)0x0;
    do {
      plVar4 = plVar5 + 1;
      plVar5 = (long *)*plVar5;
      if (*plVar4 != param_2) {
        plVar4 = plVar2;
      }
      plVar2 = plVar4;
    } while (plVar5 != (long *)0x0);
    if (plVar4 != (long *)0x0) {
      lVar1 = *param_4;
      goto joined_r0x004797b0;
    }
  }
  plVar2 = param_1 + 2;
  plVar5 = (long *)*plVar2;
  if (plVar5 == (long *)0x0) {
    plVar5 = (long *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x20);
    if (plVar5 == (long *)0x0) {
      return 2;
    }
    plVar5[2] = 0;
    plVar5[3] = 0;
    *plVar5 = *plVar2;
    *plVar2 = (long)plVar5;
    puVar3 = (undefined8 *)param_1[1];
    if (puVar3 == (undefined8 *)0x0) goto LAB_00479768;
LAB_00479700:
    *puVar3 = plVar5;
    plVar5 = (long *)*plVar2;
  }
  else {
    puVar3 = (undefined8 *)param_1[1];
    if (puVar3 != (undefined8 *)0x0) goto LAB_00479700;
LAB_00479768:
    *param_1 = (long)plVar5;
  }
  param_1[1] = (long)plVar5;
  param_1[2] = *plVar5;
  *plVar5 = 0;
  *(int *)((long)param_1 + 0x24) = *(int *)((long)param_1 + 0x24) + 1;
  plVar4 = (long *)(param_1[1] + 8);
  *plVar4 = param_2;
  *(int *)(param_2 + 100) = *(int *)(param_2 + 100) + 1;
  *(int *)(*plVar4 + 0x74) = *(int *)(*plVar4 + 0x74) + 1;
  lVar1 = *param_4;
joined_r0x004797b0:
  if (lVar1 != 0) {
    if ((int)param_4[2] - 4U < 2) {
      FUN_00466510(lVar1,plVar4 + 1,*(undefined4 *)(*(long *)(param_2 + 0x10) + 0x10),*param_3);
    }
    else if ((int)param_4[2] == 2) {
      FUN_00482f80(lVar1 + -0x30,plVar4 + 1,*(undefined4 *)(*(long *)(param_2 + 0x10) + 0x10),
                   *param_3,1);
      return 1;
    }
  }
  return 1;
}


