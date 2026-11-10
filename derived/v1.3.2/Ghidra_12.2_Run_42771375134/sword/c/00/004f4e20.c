/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004f4e20; name: FUN_004f4e20
 */


void FUN_004f4e20(long *param_1)

{
  long *plVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  *param_1 = (long)(PTR_DAT_02713738 + 0x10);
  if (*(int *)((long)param_1 + 0x8c) != 0) {
    puVar4 = PTR_DAT_02713630;
    while (puVar4 = *(undefined **)(puVar4 + 0x10), puVar4 != (undefined *)0x0) {
      if (*(long **)(puVar4 + 0xd8) == param_1) {
        *(undefined8 *)(puVar4 + 0xd8) = 0;
        *(int *)((long)param_1 + 0x8c) = *(int *)((long)param_1 + 0x8c) + -1;
      }
    }
  }
  puVar4 = PTR_DAT_02712a90;
  puVar7 = (undefined8 *)param_1[0xe];
  puVar8 = puVar7;
  if ((int)param_1[0xf] != 0) {
    do {
      puVar7 = (undefined8 *)*puVar8;
      iVar2 = *(int *)(puVar7 + 10);
      *(int *)(puVar7 + 10) = iVar2 + -1;
      if (iVar2 + -1 == 0) {
        uVar3 = *(undefined4 *)puVar4;
        (**(code **)*puVar7)(puVar7);
        FUN_00404870(uVar3,puVar7);
      }
      puVar7 = (undefined8 *)param_1[0xe];
      puVar8 = puVar8 + 1;
    } while (puVar8 != puVar7 + *(uint *)(param_1 + 0xf));
  }
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (puVar7 != (undefined8 *)0x0) {
    *(undefined4 *)(param_1 + 0xf) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02713640,puVar7);
    param_1[0xe] = 0;
    *(undefined4 *)((long)param_1 + 0x7c) = 0;
  }
  *param_1 = (long)(PTR_DAT_02713730 + 0x10);
  if (param_1[2] == 0) {
    lVar6 = 0;
  }
  else {
    *(long *)(param_1[2] + 0x18) = param_1[3];
    lVar6 = param_1[2];
  }
  puVar4 = PTR_DAT_02713638;
  lVar5 = param_1[3];
  plVar1 = (long *)(PTR_DAT_02713638 + 0x10);
  if (*(long **)(PTR_DAT_02713638 + 0x10) != param_1) {
    plVar1 = (long *)(lVar5 + 0x10);
  }
  *plVar1 = lVar6;
  if (*(long **)(puVar4 + 8) == param_1) {
    *(long *)(puVar4 + 8) = lVar5;
  }
  *(int *)puVar4 = *(int *)puVar4 + -1;
  return;
}


