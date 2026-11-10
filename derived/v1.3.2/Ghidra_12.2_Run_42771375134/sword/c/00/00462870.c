/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00462870; name: FUN_00462870
 */


void FUN_00462870(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_027130c0 + 0x50;
  *param_1 = (long)(PTR_DAT_027130c0 + 0x10);
  param_1[3] = (long)puVar1;
  puVar1 = PTR_DAT_02712a90;
  lVar3 = param_1[10];
  lVar4 = lVar3;
  if ((int)param_1[0xb] != 0) {
    do {
      if (*(long *)(lVar4 + 0x10) != 0) {
        FUN_00404870(*(undefined4 *)puVar1);
        *(undefined8 *)(lVar4 + 0x10) = 0;
      }
      *(undefined8 *)(lVar4 + 0x18) = 0;
      lVar3 = param_1[10];
      lVar4 = lVar4 + 0x20;
    } while (lVar4 != lVar3 + (ulong)*(uint *)(param_1 + 0xb) * 0x20);
  }
  if (lVar3 != 0) {
    *(undefined4 *)(param_1 + 0xb) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90,lVar3);
    param_1[10] = 0;
    *(undefined4 *)((long)param_1 + 0x5c) = 0;
  }
  if (param_1[0xc] != 0) {
    *(undefined4 *)(param_1 + 0xd) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    param_1[0xc] = 0;
    *(undefined4 *)((long)param_1 + 0x6c) = 0;
  }
  if (param_1[8] != 0) {
    *(undefined4 *)(param_1 + 9) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    param_1[8] = 0;
    *(undefined4 *)((long)param_1 + 0x4c) = 0;
  }
  plVar2 = (long *)param_1[7];
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2,PTR_PTR_02712da8);
  }
  FUN_00462ad0(param_1 + 3);
  FUN_004635e0(param_1);
  return;
}


