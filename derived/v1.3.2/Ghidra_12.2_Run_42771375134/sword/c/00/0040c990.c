/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0040c990; name: FUN_0040c990
 */


undefined8
FUN_0040c990(long param_1,long param_2,long param_3,undefined4 *param_4,long param_5,
            undefined4 param_6,uint param_7)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  undefined *puVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  
  puVar3 = PTR_DAT_02712a90;
  plVar6 = (long *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x30);
  if (plVar6 == (long *)0x0) {
    return 2;
  }
  plVar6[1] = 0;
  puVar7 = (undefined8 *)FUN_00404690(*(undefined4 *)puVar3,0x20);
  if (puVar7 == (undefined8 *)0x0) {
    uVar1 = *(undefined4 *)puVar3;
    lVar8 = plVar6[1];
    plVar6[1] = 0;
    if ((lVar8 != 0) && (FUN_00408b50(), plVar6[1] != 0)) {
      FUN_00408b50();
      plVar6[1] = 0;
    }
    FUN_00404870(uVar1,plVar6);
    return 2;
  }
  *(undefined4 *)(plVar6 + 2) = *param_4;
  *(undefined4 *)((long)plVar6 + 0x14) = param_4[1];
  plVar6[3] = param_5;
  auVar2 = SEXT816((long)((ulong)*(uint *)PTR_DAT_02712b38 * (long)(int)param_4[4])) *
           SEXT816(0x20c49ba5e353f7cf);
  *(int *)(plVar6 + 4) = (int)(auVar2._8_8_ >> 7) - (auVar2._12_4_ >> 0x1f);
  *(undefined4 *)((long)plVar6 + 0x24) = param_6;
  if (param_3 != 0) {
    *(long *)(param_3 + 0x68) = param_5;
    *(int *)(param_3 + 0x48) = *(int *)(param_3 + 0x48) + 1;
    lVar8 = plVar6[1];
    plVar6[1] = param_3;
    if (lVar8 != 0) {
      FUN_00408b50();
    }
    lVar8 = FUN_0040b030(param_3,0);
    if (lVar8 == 0) {
      iVar5 = 0;
    }
    else {
      iVar4 = FUN_0040ead0(lVar8);
      iVar5 = FUN_0040eab0(lVar8);
      iVar5 = iVar5 + iVar4;
    }
    *(int *)(plVar6 + 5) = iVar5;
  }
  if ((param_7 & 1) == 0) {
    *(undefined1 *)((long)plVar6 + 0x2c) = 0;
    lVar8 = *(long *)(param_1 + 0x40);
  }
  else {
    *(bool *)((long)plVar6 + 0x2c) = param_4[5] != 0;
    lVar8 = *(long *)(param_1 + 0x40);
  }
  if (lVar8 == 0) {
    *(long **)(param_1 + 0x40) = plVar6;
    *plVar6 = 0;
  }
  else {
    *plVar6 = lVar8;
    *(long **)(param_1 + 0x40) = plVar6;
  }
  *(undefined4 *)(puVar7 + 1) = 0;
  lVar8 = FUN_00419150(param_2,0);
  uVar9 = FUN_00419200(param_2 + 0x108,param_5 - lVar8);
  *puVar7 = uVar9;
  puVar7[2] = plVar6;
  lVar8 = *(long *)(param_2 + 0x108);
  if (*(long *)(lVar8 + 0x10) == 0) {
    *(undefined8 **)(lVar8 + 0x10) = puVar7;
    puVar7[3] = 0;
  }
  else {
    puVar7[3] = *(long *)(lVar8 + 0x10);
    *(undefined8 **)(lVar8 + 0x10) = puVar7;
  }
  return 1;
}


