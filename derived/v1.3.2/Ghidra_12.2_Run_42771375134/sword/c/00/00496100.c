/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00496100; name: FUN_00496100
 */


void FUN_00496100(long *param_1)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  
  *param_1 = (long)(PTR_DAT_02713328 + 0x10);
  if (param_1[9] != 0) {
    *(undefined4 *)(param_1 + 10) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    param_1[9] = 0;
    *(undefined4 *)((long)param_1 + 0x54) = 0;
  }
  if (param_1[4] != 0) {
    *(undefined2 *)(param_1 + 7) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    param_1[4] = 0;
  }
  puVar2 = PTR_DAT_02712a90;
  lVar3 = param_1[5];
  uVar4 = *(uint *)(param_1 + 6);
  if (uVar4 != 0) {
    lVar5 = lVar3;
    do {
      if (*(long *)(lVar5 + 8) != 0) {
        *(undefined4 *)(lVar5 + 0x10) = 0;
        FUN_00404870(*(undefined4 *)puVar2,*(long *)(lVar5 + 8));
        *(undefined8 *)(lVar5 + 8) = 0;
        *(undefined4 *)(lVar5 + 0x14) = 0;
        lVar3 = param_1[5];
        uVar4 = *(uint *)(param_1 + 6);
      }
      lVar5 = lVar5 + 0x18;
    } while (lVar5 != lVar3 + (ulong)uVar4 * 0x18);
  }
  if (lVar3 != 0) {
    *(undefined4 *)(param_1 + 6) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    param_1[5] = 0;
    *(undefined4 *)((long)param_1 + 0x34) = 0;
  }
  *param_1 = (long)(PTR_DAT_02713318 + 0x10);
  if (param_1[2] == 0) {
    lVar3 = 0;
  }
  else {
    *(long *)(param_1[2] + 0x18) = param_1[3];
    lVar3 = param_1[2];
  }
  puVar2 = PTR_DAT_02713320;
  lVar5 = param_1[3];
  plVar1 = (long *)(PTR_DAT_02713320 + 0x10);
  if (*(long **)(PTR_DAT_02713320 + 0x10) != param_1) {
    plVar1 = (long *)(lVar5 + 0x10);
  }
  *plVar1 = lVar3;
  if (*(long **)(puVar2 + 8) == param_1) {
    *(long *)(puVar2 + 8) = lVar5;
  }
  *(int *)puVar2 = *(int *)puVar2 + -1;
  return;
}


