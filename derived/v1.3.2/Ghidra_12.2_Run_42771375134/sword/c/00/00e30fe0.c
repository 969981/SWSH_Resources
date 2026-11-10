/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e30fe0; name: FUN_00e30fe0
 */


void FUN_00e30fe0(undefined8 param_1,long *param_2,undefined8 *param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long local_98 [2];
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined2 local_5c;
  undefined8 local_5a;
  undefined4 local_52;
  undefined4 local_4c;
  undefined1 local_48;
  undefined4 local_46;
  
  local_80 = 0xffffffffffffffff;
  uStack_78 = 0x3ffffffff;
  local_68 = 899;
  local_64 = 0xffff00ff00010000;
  local_5c = 0x1ff;
  local_4c = 0xffff;
  local_98[1] = 0;
  local_46 = 0x1000100;
  local_88 = 0;
  local_70 = 0xffffffffffffffff;
  local_48 = 0;
  local_52 = 0xffffffff;
  local_5a = 0xffffffffffffffff;
  FUN_00e31910(param_1,local_98 + 1,param_4);
  lVar1 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar1 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar1 + *(ulong *)(lVar1 + 0x80) * 8) = param_2;
  *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + 1;
  lVar2 = (**(code **)(*param_2 + 0x10))(param_2,0xb8,8);
  if (lVar2 == 0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  FUN_008662a0(lVar2,param_2,local_98 + 1);
  *(long **)(lVar2 + 8) = param_2;
  *(long *)(lVar2 + 0x10) = lVar2;
  *(undefined8 *)(lVar2 + 0x18) = 0xb8;
  *(undefined8 *)(lVar2 + 0x20) = 8;
  *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + -1;
  if (lVar2 == 0) {
    local_98[0] = 0;
    FUN_00e31a70(param_1,local_98,param_4);
    (**(code **)(*(long *)*param_3 + 0x28))((long *)*param_3,0);
  }
  else {
    plVar3 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    local_98[0] = lVar2;
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_00e31a70(param_1,local_98,param_4);
    (**(code **)(*plVar3 + 0x18))(plVar3);
    local_98[0] = 0;
    (**(code **)(*(long *)*param_3 + 0x28))((long *)*param_3,lVar2);
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  return;
}


