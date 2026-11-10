/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004b3ed0; name: FUN_004b3ed0
 */


/* WARNING: Control flow encountered bad instruction data */

void FUN_004b3ed0(long *param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  
  puVar2 = PTR_DAT_02712a90;
  puVar5 = (undefined8 *)*param_1;
  puVar4 = puVar5;
  if ((int)param_1[1] != 0) {
    do {
      lVar8 = puVar5[1];
      if (*(long *)(lVar8 + 0x10) != 0) {
        *(undefined4 *)(lVar8 + 0x18) = 0;
        FUN_00404870(*(undefined4 *)puVar2);
        *(undefined8 *)(lVar8 + 0x10) = 0;
        *(undefined4 *)(lVar8 + 0x1c) = 0;
      }
      *(undefined8 *)(lVar8 + 8) = 0;
      FUN_00404870(*(undefined4 *)puVar2,lVar8);
      uVar3 = *(uint *)(param_1 + 1);
      if (1 < uVar3) {
        lVar8 = *param_1 + (ulong)uVar3 * 0x10;
        puVar5[1] = *(undefined8 *)(lVar8 + -8);
        *puVar5 = *(undefined8 *)(lVar8 + -0x10);
        uVar3 = *(uint *)(param_1 + 1);
      }
      puVar4 = (undefined8 *)*param_1;
      *(uint *)(param_1 + 1) = uVar3 - 1;
    } while (puVar4 + (ulong)(uVar3 - 1) * 2 != puVar5);
  }
  if (puVar4 != (undefined8 *)0x0) {
    *(undefined4 *)(param_1 + 1) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90,puVar4);
    *param_1 = 0;
    *(undefined4 *)((long)param_1 + 0xc) = 0;
  }
  FUN_004b4240(param_1 + 2);
  FUN_004b4350(param_1 + 8);
  puVar2 = PTR_DAT_02712a90;
  plVar6 = (long *)param_1[0x12];
  if (plVar6 == (long *)0x0) {
LAB_004b4034:
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    puVar2 = PTR_DAT_02712a90;
    plVar6 = (long *)param_1[0x14];
    if (plVar6 == (long *)0x0) {
LAB_004b40c4:
      param_1[0x13] = 0;
      param_1[0x14] = 0;
      return;
    }
    plVar7 = plVar6;
    do {
      plVar9 = (long *)*plVar7;
      param_1[0x14] = (long)plVar9;
      if ((long *)param_1[0x13] == plVar6) {
        param_1[0x13] = 0;
        uVar1 = *(undefined4 *)puVar2;
        lVar8 = plVar6[1];
        plVar6[4] = 0;
        plVar6[5] = 0;
      }
      else {
        uVar1 = *(undefined4 *)puVar2;
        lVar8 = plVar6[1];
        plVar6[4] = 0;
        plVar6[5] = 0;
      }
      if (lVar8 != 0) {
        *(undefined4 *)(plVar6 + 2) = 0;
        FUN_00404870(uVar1);
        plVar6[1] = 0;
        *(undefined4 *)((long)plVar6 + 0x14) = 0;
      }
      FUN_00404870(uVar1,plVar7);
      if (plVar9 == (long *)0x0) goto LAB_004b40c4;
      plVar6 = (long *)param_1[0x14];
      plVar7 = plVar9;
    } while (plVar6 == plVar9);
  }
  else {
    plVar7 = plVar6;
    do {
      plVar9 = (long *)*plVar7;
      param_1[0x12] = (long)plVar9;
      if ((long *)param_1[0x11] == plVar6) {
        param_1[0x11] = 0;
        uVar1 = *(undefined4 *)puVar2;
        lVar8 = plVar6[1];
        plVar6[4] = 0;
        plVar6[5] = 0;
      }
      else {
        uVar1 = *(undefined4 *)puVar2;
        lVar8 = plVar6[1];
        plVar6[4] = 0;
        plVar6[5] = 0;
      }
      if (lVar8 != 0) {
        *(undefined4 *)(plVar6 + 2) = 0;
        FUN_00404870(uVar1);
        plVar6[1] = 0;
        *(undefined4 *)((long)plVar6 + 0x14) = 0;
      }
      FUN_00404870(uVar1,plVar7);
      if (plVar9 == (long *)0x0) goto LAB_004b4034;
      plVar6 = (long *)param_1[0x12];
      plVar7 = plVar9;
    } while (plVar6 == plVar9);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


