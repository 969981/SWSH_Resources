/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0080c180; name: FUN_0080c180
 */


bool FUN_0080c180(long *param_1,long param_2,int param_3)

{
  void *pvVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 uVar4;
  long local_d0;
  long lStack_c8;
  undefined8 local_c0;
  int local_b8;
  undefined8 local_b4;
  undefined2 local_ac;
  int local_a8;
  undefined8 local_a4;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined8 uStack_88;
  ulong local_80 [2];
  void *local_70;
  undefined1 auStack_68 [48];
  byte local_38 [16];
  void *local_28;
  
  lStack_c8 = param_2 + param_3;
  local_a4 = 0x400000000000000;
  local_c0 = 0;
  local_ac = 0;
  local_b4 = 0;
  local_9c = 0x2000000;
  local_98 = *(undefined4 *)PTR_DAT_02716f78;
  local_90 = 0;
  uStack_88 = 0;
  local_d0 = param_2;
  local_b8 = param_3;
  local_a8 = param_3;
  uStack_94 = local_98;
  (**(code **)(*param_1 + 0x38))();
  uVar3 = (**(code **)(*param_1 + 0x58))(param_1,&local_d0);
  bVar2 = false;
  if ((uVar3 & 1) != 0) {
    uVar3 = (**(code **)(*param_1 + 0x40))(param_1);
    if ((uVar3 & 1) == 0) {
      FUN_00801270(auStack_68,2,
                   "C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/external/include/google/protobuf/message_lite.cc"
                   ,0x76);
      local_80[1] = 0;
      local_70 = (void *)0x0;
      local_80[0] = 0;
      std::string::append((char *)local_80);
      std::string::append((char *)local_80);
      std::string::append((char *)local_80);
      (**(code **)(*param_1 + 0x10))(local_38,param_1);
      pvVar1 = (void *)((ulong)local_38 | 1);
      if ((local_38[0] & 1) != 0) {
        pvVar1 = local_28;
      }
      std::string::append((char *)local_80,(ulong)pvVar1);
      if ((local_38[0] & 1) != 0) {
        operator_delete(local_28);
      }
      std::string::append((char *)local_80);
      (**(code **)(*param_1 + 0x48))(local_38,param_1);
      pvVar1 = (void *)((ulong)local_38 | 1);
      if ((local_38[0] & 1) != 0) {
        pvVar1 = local_28;
      }
      std::string::append((char *)local_80,(ulong)pvVar1);
      if ((local_38[0] & 1) != 0) {
        operator_delete(local_28);
      }
      uVar4 = FUN_00800f60(auStack_68,local_80);
      FUN_00800fa0(local_38,uVar4);
      if ((local_80[0] & 1) != 0) {
        operator_delete(local_70);
      }
      FUN_00801290(auStack_68);
      bVar2 = false;
    }
    else {
      bVar2 = (char)local_ac != '\0';
    }
  }
  FUN_0080c870(&local_d0);
  return bVar2;
}


