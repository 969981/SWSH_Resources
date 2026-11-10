/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00804430; name: FUN_00804430
 */


void FUN_00804430(int *param_1,long *param_2,undefined8 param_3,undefined4 param_4,byte *param_5)

{
  undefined8 uVar1;
  long *local_88;
  undefined8 uStack_80;
  int local_78;
  undefined2 local_74;
  ulong local_70 [2];
  void *local_60;
  int local_58;
  long local_50 [2];
  
  if ((*param_5 & 1) == 0) {
    param_5[0] = 0;
    param_5[1] = 0;
  }
  else {
    **(undefined1 **)(param_5 + 0x10) = 0;
    param_5[8] = 0;
    param_5[9] = 0;
    param_5[10] = 0;
    param_5[0xb] = 0;
    param_5[0xc] = 0;
    param_5[0xd] = 0;
    param_5[0xe] = 0;
    param_5[0xf] = 0;
  }
  FUN_0080ea30(local_50,param_5);
  local_58 = *param_1;
  local_78 = 0;
  local_74 = 1;
  local_60 = (void *)0x0;
  local_70[1] = 0;
  local_70[0] = 0;
  uStack_80 = 0;
  local_88 = local_50;
  std::string::resize((ulong)local_70,(char)((long)local_58 << 1));
  uVar1 = (**(code **)(*param_2 + 0xb0))(param_2);
  FUN_00804540(param_1,param_2,uVar1,param_3,param_4,&local_88);
  if ((local_74._1_1_ == '\0') && (0 < local_78)) {
    (**(code **)(*local_88 + 0x18))();
  }
  if ((local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  thunk_FUN_0080ee40(local_50);
  return;
}


