/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01506920; name: FUN_01506920
 */


uint FUN_01506920(undefined8 param_1,long *param_2,long *param_3,undefined4 param_4,
                 undefined8 param_5)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long local_58;
  long local_48;
  
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = param_3;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  lVar3 = (**(code **)(*param_3 + 0x10))(param_3,0xb8,8);
  if (lVar3 == 0) {
    (**(code **)(*param_3 + 0xb8))(param_3);
  }
  FUN_00866110(lVar3,param_3);
  *(long **)(lVar3 + 8) = param_3;
  *(long *)(lVar3 + 0x10) = lVar3;
  *(undefined8 *)(lVar3 + 0x18) = 0xb8;
  *(undefined8 *)(lVar3 + 0x20) = 8;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  lVar2 = *param_2;
  local_48 = lVar2;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  local_58 = lVar3;
  if (lVar3 == 0) {
    uVar1 = FUN_015064c0(param_1,&local_48,&local_58,param_4,param_5);
  }
  else {
    plVar4 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    uVar1 = FUN_015064c0(param_1,&local_48,&local_58,param_4,param_5);
    (**(code **)(*plVar4 + 0x18))(plVar4);
    local_58 = 0;
  }
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
    local_48 = 0;
  }
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  return uVar1 & 1;
}


