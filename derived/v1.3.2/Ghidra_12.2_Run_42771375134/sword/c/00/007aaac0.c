/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007aaac0; name: FUN_007aaac0
 */


void FUN_007aaac0(long param_1,UserHandle *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 local_78;
  undefined1 local_74;
  long local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  if ((*(long *)(param_1 + 0x50) == 0) || (*(char *)(param_1 + 0x88) != '\0')) {
    return;
  }
  uVar1 = *(undefined8 *)param_2;
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x70) = uVar2;
  *(undefined8 *)(param_1 + 0x60) = uVar1;
  nn::account::GetUserId((Uid *)(param_1 + 0x78),param_2);
  local_70 = *(long *)(param_1 + 0x58);
  if (local_70 == 0) {
    local_70 = (**(code **)(**(long **)(param_1 + 0x50) + 0x10))
                         (*(long **)(param_1 + 0x50),0x300000,0x1000);
    *(long *)(param_1 + 0x58) = local_70;
  }
  local_78 = 5;
  uStack_68 = 0x300000;
  local_60 = 0x20000;
  local_58 = 0x8000;
  local_50 = 0x10000;
  local_48 = 0x30000;
  uStack_40 = 0x30000;
  local_38 = 0x2400;
  local_30 = 0xa500;
  local_74 = 0;
  local_28 = 0xe00000004;
  nn::socket::Initialize((Config *)&local_78);
  DAT_029f4e50 = *(undefined8 *)(param_1 + 0x50);
  FUN_01965a90(3,&LAB_007ab300,&LAB_007ab320,&LAB_007ab350,&LAB_007ab420,&LAB_007ab490);
  *(undefined1 *)(param_1 + 0x88) = 1;
  return;
}


