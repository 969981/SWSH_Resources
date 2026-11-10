/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004beff0; name: FUN_004beff0
 */


void FUN_004beff0(long *param_1,long *param_2,uint param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 local_40 [2];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined2 local_24;
  
  if (param_2 == (long *)0x0) {
    if ((param_3 & 1) != 0) {
      local_28 = 1;
      local_40[0] = 0;
      uStack_30 = 0;
      local_24 = 0x100;
      local_38 = param_4;
      (**(code **)(*param_1 + 0x120))(param_1,local_40);
    }
    return;
  }
  if ((param_3 & 1) == 0) {
    *(uint *)((long)param_2 + 0x26b) = *(uint *)((long)param_2 + 0x26b) | 0x100000;
  }
  (**(code **)(*param_2 + 0x20))(param_2,1);
  uVar1 = *(undefined4 *)PTR_DAT_02712a90;
  (**(code **)(*param_2 + 8))(param_2);
  FUN_00404870(uVar1,param_2);
  return;
}


