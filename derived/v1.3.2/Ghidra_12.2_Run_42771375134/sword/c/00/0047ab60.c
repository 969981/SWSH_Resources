/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0047ab60; name: FUN_0047ab60
 */


void FUN_0047ab60(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  
  *param_1 = (long)(PTR_DAT_027131f0 + 0x10);
  if (param_1[0x21] != 0) {
    FUN_00458240();
    param_1[0x21] = 0;
  }
  plVar3 = (long *)param_1[0x22];
  if (plVar3 != (long *)0x0) {
    lVar2 = *plVar3;
    *(undefined4 *)(plVar3 + 2) = 0;
    *(undefined4 *)(plVar3 + 1) = 0;
    *plVar3 = 0;
    if (lVar2 != 0) {
      FUN_004047f0(*(undefined4 *)PTR_DAT_02712e28);
    }
    if (param_1[0x22] != 0) {
      FUN_00404870(*(undefined4 *)PTR_DAT_02712e28);
    }
    param_1[0x22] = 0;
  }
  plVar3 = param_1 + 0x13;
  FUN_00462550(plVar3);
  param_1[0x1f] = 0;
  *(undefined4 *)((long)param_1 + 0x3c) = 0;
  if (param_1[8] != 0) {
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
  }
  FUN_0047ac80(param_1);
  if ((long *)param_1[5] != (long *)0x0) {
    *(undefined4 *)(param_1 + 6) = 0;
    if (param_1 + 4 != (long *)param_1[5]) {
      FUN_004047f0(*(undefined4 *)PTR_DAT_02712a90);
    }
    param_1[5] = 0;
    *(undefined4 *)((long)param_1 + 0x34) = 0;
  }
  puVar1 = PTR_DAT_027130b8;
  *plVar3 = (long)(PTR_DAT_027130b8 + 0x10);
  (**(code **)(puVar1 + 0x38))(plVar3);
  puVar1 = PTR_DAT_027130b0;
  *plVar3 = (long)(PTR_DAT_027130b0 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0047ac78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(puVar1 + 0x38))(plVar3);
  return;
}


