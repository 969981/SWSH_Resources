/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00413210; name: FUN_00413210
 */


void FUN_00413210(long *param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  
  puVar2 = PTR_DAT_02712bb8;
  lVar3 = param_1[0x17];
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[6] = (long)(puVar2 + 0x308);
  uVar4 = (ulong)*(uint *)(param_1 + 0x18);
  *param_1 = (long)(puVar2 + 0x10);
  param_1[3] = (long)(puVar2 + 0x270);
  puVar2 = PTR_DAT_02712a90;
  if (*(uint *)(param_1 + 0x18) != 0) {
    lVar7 = lVar3;
    do {
      lVar5 = *(long *)(lVar7 + 8);
      if (lVar5 != 0) {
        uVar1 = *(undefined4 *)puVar2;
        FUN_004a7c60(lVar5);
        FUN_00404870(uVar1,lVar5);
        lVar3 = param_1[0x17];
        uVar4 = (ulong)*(uint *)(param_1 + 0x18);
      }
      lVar7 = lVar7 + 0x10;
    } while (lVar7 != lVar3 + uVar4 * 0x10);
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (lVar3 != 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    param_1[0x17] = 0;
    *(undefined4 *)((long)param_1 + 0xc4) = 0;
  }
  if (param_1[0x1c] != 0) {
    *(undefined4 *)(param_1 + 0x1d) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    param_1[0x1c] = 0;
    *(undefined4 *)((long)param_1 + 0xec) = 0;
  }
  puVar2 = PTR_DAT_02712a90;
  plVar6 = param_1 + 0x19;
  lVar3 = *plVar6;
  if (lVar3 != 0) {
    if (*(uint *)(param_1 + 0x1a) != 0) {
      lVar7 = (ulong)*(uint *)(param_1 + 0x1a) * 0x18;
      puVar8 = (undefined8 *)(lVar3 + 0x10);
      do {
        if (puVar8[-1] != 0) {
          FUN_00404870(*(undefined4 *)puVar2);
          puVar8[-1] = 0;
        }
        lVar7 = lVar7 + -0x18;
        *puVar8 = 0;
        puVar8 = puVar8 + 3;
      } while (lVar7 != 0);
      lVar3 = *plVar6;
    }
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90,lVar3);
    *plVar6 = 0;
    param_1[0x1a] = 0;
  }
  lVar3 = param_1[0x20];
  if (lVar3 != 0) {
    uVar1 = *(undefined4 *)PTR_DAT_02712a90;
    if (*(long *)(lVar3 + 0x10) != 0) {
      *(undefined4 *)(lVar3 + 0x18) = 0;
      FUN_00404870(uVar1);
      *(undefined8 *)(lVar3 + 0x10) = 0;
      *(undefined4 *)(lVar3 + 0x1c) = 0;
    }
    FUN_00404870(uVar1,lVar3);
  }
  thunk_FUN_0047e190(param_1);
  return;
}


