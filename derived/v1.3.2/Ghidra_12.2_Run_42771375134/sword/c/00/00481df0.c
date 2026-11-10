/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00481df0; name: FUN_00481df0
 */


void FUN_00481df0(long *param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  
  puVar2 = PTR_DAT_02713278;
  *param_1 = (long)(PTR_DAT_02713278 + 0x10);
  param_1[3] = (long)(puVar2 + 600);
  plVar4 = param_1 + 6;
  *plVar4 = (long)(puVar2 + 0x2f0);
  puVar2 = PTR_DAT_02712a90;
  plVar5 = (long *)param_1[0xb];
  if (plVar5 != (long *)0x0) {
    lVar8 = *plVar5;
    plVar3 = plVar5 + 1;
    lVar7 = lVar8;
    if ((int)*plVar3 != 0) {
      do {
        lVar8 = *(long *)(lVar7 + 8);
        if (lVar8 != 0) {
          uVar1 = *(undefined4 *)puVar2;
          FUN_004a6600(lVar8);
          FUN_00404870(uVar1,lVar8);
          plVar5 = (long *)param_1[0xb];
        }
        lVar8 = *plVar5;
        lVar7 = lVar7 + 0x10;
      } while (lVar7 != lVar8 + (ulong)*(uint *)(plVar5 + 1) * 0x10);
      plVar3 = plVar5 + 1;
    }
    if (lVar8 != 0) {
      *(int *)plVar3 = 0;
      FUN_00404870(*(undefined4 *)PTR_DAT_02712a90,lVar8);
      *plVar5 = 0;
      *(undefined4 *)((long)plVar5 + 0xc) = 0;
      plVar5 = (long *)param_1[0xb];
    }
    if (plVar5 != (long *)0x0) {
      FUN_00404870(*(undefined4 *)PTR_DAT_02712a90,plVar5);
    }
    param_1[0xb] = 0;
  }
  if (param_1[0x11] != 0) {
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
  }
  if (param_1[0xd] != 0) {
    FUN_00463490();
    FUN_00462fd0(param_1[0xd]);
    puVar6 = (undefined8 *)param_1[0xd];
    if (puVar6 != (undefined8 *)0x0) {
      uVar1 = *(undefined4 *)PTR_DAT_02712a90;
      (**(code **)*puVar6)(puVar6);
      FUN_00404870(uVar1,puVar6);
    }
    param_1[0xd] = 0;
  }
  if (param_1[0xc] != 0) {
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
  }
  lVar7 = param_1[10];
  if (lVar7 != 0) {
    uVar1 = *(undefined4 *)PTR_DAT_02712a90;
    FUN_004a6600(lVar7);
    FUN_00404870(uVar1,lVar7);
  }
  if (param_1[0xe] != 0) {
    FUN_00481ff0(param_1);
  }
  FUN_004a47a0(plVar4);
  if (param_1[0x12] != 0) {
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
  }
  param_1[0x12] = 0;
  FUN_004a46c0(param_1 + 8);
  FUN_004a46c0(plVar4);
  FUN_00489170(param_1 + 3);
  thunk_FUN_004635e0(param_1);
  return;
}


