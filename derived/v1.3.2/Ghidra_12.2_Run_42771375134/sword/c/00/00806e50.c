/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00806e50; name: FUN_00806e50
 */


undefined8 FUN_00806e50(long param_1,string *param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  ulong *puVar4;
  undefined8 uVar5;
  byte local_c8 [16];
  void *local_b8;
  ulong local_b0;
  ulong local_a8;
  void *local_a0;
  string local_98 [16];
  void *local_88;
  ulong local_80;
  ulong local_78;
  void *local_70;
  ulong local_58;
  undefined8 local_50;
  void *local_48;
  
  lVar1 = FUN_007e34a0(param_3);
  if (lVar1 == 0) {
    std::operator+("Could not find type \"",param_2);
    puVar4 = (ulong *)std::string::append((char *)&local_58);
    local_80 = *puVar4;
    local_78 = puVar4[1];
    local_70 = (void *)puVar4[2];
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = 0;
    FUN_00802750(param_1,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),&local_80);
    if ((local_80 & 1) != 0) {
      operator_delete(local_70);
    }
    if (((byte)local_58._0_1_ & 1) != 0) {
      operator_delete(local_48);
    }
    return 0;
  }
  FUN_00817750(&local_80);
  plVar2 = (long *)FUN_008178c0(&local_80,lVar1);
  if (plVar2 == (long *)0x0) {
    uVar5 = 0;
    goto LAB_0080705c;
  }
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))();
  local_50 = 0;
  local_48 = (void *)0x0;
  local_58 = 0;
  uVar3 = FUN_008088a0(param_1,&local_58);
  if ((uVar3 & 1) == 0) {
LAB_00807034:
    uVar5 = 0;
  }
  else {
    std::string::string(local_98,(string *)&local_58);
    uVar3 = FUN_008089c0(param_1,plVar2,local_98);
    if (((byte)local_98[0] & 1) != 0) {
      operator_delete(local_88);
    }
    if ((uVar3 & 1) == 0) goto LAB_00807034;
    if (*(char *)(param_1 + 0xe8) == '\0') {
      uVar3 = (**(code **)(*plVar2 + 0x40))(plVar2);
      if ((uVar3 & 1) == 0) {
        std::operator+("Value of type \"",param_2);
        puVar4 = (ulong *)std::string::append((char *)local_c8);
        local_b0 = *puVar4;
        local_a8 = puVar4[1];
        local_a0 = (void *)puVar4[2];
        puVar4[1] = 0;
        puVar4[2] = 0;
        *puVar4 = 0;
        FUN_00802750(param_1,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),
                     &local_b0);
        if ((local_b0 & 1) != 0) {
          operator_delete(local_a0);
        }
        if ((local_c8[0] & 1) != 0) {
          operator_delete(local_b8);
        }
        goto LAB_00807034;
      }
      thunk_FUN_0080c5d0(plVar2,param_4);
      uVar5 = 1;
    }
    else {
      FUN_0080c5d0(plVar2,param_4);
      uVar5 = 1;
    }
  }
  if ((local_58 & 1) != 0) {
    operator_delete(local_48);
  }
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))(plVar2);
  }
LAB_0080705c:
  FUN_008177b0(&local_80);
  return uVar5;
}


