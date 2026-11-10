/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00488fb0; name: FUN_00488fb0
 */


void FUN_00488fb0(long *param_1)

{
  uint uVar1;
  long *plVar2;
  undefined8 local_28;
  
  plVar2 = param_1 + 3;
  local_28 = (**(code **)(*plVar2 + 0x28))(plVar2);
  uVar1 = (**(code **)(*plVar2 + 0x30))(plVar2);
  FUN_004a4660(plVar2,&local_28,uVar1 & 1);
  if (param_1[0xc] != 0) {
    *(undefined4 *)(param_1 + 0xd) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    param_1[0xc] = 0;
    *(undefined4 *)((long)param_1 + 0x6c) = 0;
  }
  param_1[2] = 0;
  if (*param_1 != 0) {
    *(undefined4 *)(param_1 + 1) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    *param_1 = 0;
    *(undefined4 *)((long)param_1 + 0xc) = 0;
  }
  FUN_004a4550(plVar2);
  return;
}


