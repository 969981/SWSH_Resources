/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004d18a0; name: FUN_004d18a0
 */


void FUN_004d18a0(long *param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  code *pcVar6;
  
  puVar1 = PTR_DAT_02713560 + 0x168;
  *param_1 = (long)(PTR_DAT_02713560 + 0x10);
  param_1[0x18] = (long)puVar1;
  FUN_004d19e0();
  plVar3 = (long *)param_1[0x65];
  if (plVar3 != (long *)0x0) {
    plVar4 = (long *)plVar3[0xc];
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4,PTR_PTR_02713088);
      *(undefined8 *)(param_1[0x65] + 0x60) = 0;
      plVar3 = (long *)param_1[0x65];
    }
    (**(code **)(*plVar3 + 0x28))();
    *(undefined4 *)(param_1[0x65] + 0x68) = 0xffffffff;
    puVar5 = (undefined8 *)param_1[0x65];
    if (puVar5 != (undefined8 *)0x0) {
      uVar2 = *(undefined4 *)PTR_DAT_02712e28;
      (**(code **)*puVar5)(puVar5);
      FUN_00404870(uVar2,puVar5);
    }
  }
  puVar5 = (undefined8 *)param_1[0x15];
  if (puVar5 != (undefined8 *)0x0) {
    uVar2 = *(undefined4 *)PTR_DAT_02712e28;
    (**(code **)*puVar5)(puVar5);
    FUN_00404870(uVar2,puVar5);
    param_1[0x15] = 0;
  }
  FUN_004c9600(param_1 + 0x66);
  pcVar6 = *(code **)(PTR_DAT_027130b0 + 0x38);
  puVar1 = PTR_DAT_027130b0 + 0x10;
  param_1[0x49] = (long)puVar1;
  (*pcVar6)(param_1 + 0x49);
  param_1[0x39] = (long)puVar1;
  (*pcVar6)(param_1 + 0x39);
  param_1[0x29] = (long)puVar1;
  (*pcVar6)(param_1 + 0x29);
  param_1[0x19] = (long)puVar1;
  (*pcVar6)();
  FUN_004cf860(param_1);
  return;
}


