/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004e1f00; name: FUN_004e1f00
 */


void FUN_004e1f00(long *param_1)

{
  long *plVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  puVar2 = PTR_DAT_02713610;
  *param_1 = (long)(PTR_DAT_02713610 + 0x10);
  plVar7 = param_1 + 0xb;
  *plVar7 = (long)(puVar2 + 200);
  param_1[0xe] = (long)(puVar2 + 0x138);
  if (param_1[0x1c] != 0) {
    FUN_004a7fd0(param_1[0x19]);
  }
  puVar3 = (undefined8 *)param_1[0x1b];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,0);
  }
  (**(code **)(*(long *)param_1[0x18] + 0x130))((long *)param_1[0x18],1);
  plVar4 = *(long **)(param_1[0x18] + 0x110);
  plVar5 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    plVar6 = plVar4;
    if (plVar4 != param_1) {
      do {
        plVar5 = plVar6;
        plVar6 = (long *)plVar5[0x30];
      } while (plVar6 != (long *)0x0 && plVar6 != param_1);
    }
    if (plVar6 != (long *)0x0) {
      plVar1 = (long *)(param_1[0x18] + 0x110);
      if (plVar6 != plVar4) {
        plVar1 = plVar5 + 0x30;
      }
      *plVar1 = plVar6[0x30];
    }
  }
  (**(code **)(*(long *)param_1[0x18] + 0x18))();
  if (param_1[0x17] != 0) {
    FUN_004c2f90(param_1[0x17],param_1);
  }
  if (param_1[0xd] != 0) {
    FUN_0041db60(param_1[0xd],plVar7);
  }
  FUN_004097f0(plVar7);
  if (param_1[0x2c] != 0) {
    *(undefined4 *)(param_1 + 0x2d) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    param_1[0x2c] = 0;
    *(undefined4 *)((long)param_1 + 0x16c) = 0;
  }
  FUN_004e2dc0(param_1 + 0x1e);
  FUN_004a4550(param_1 + 0xe);
  FUN_004097c0(plVar7);
  FUN_004c2a40(param_1);
  return;
}


