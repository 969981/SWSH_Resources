/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010647a0; name: FUN_010647a0
 */


void FUN_010647a0(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long local_c8 [14];
  undefined2 local_58;
  undefined1 local_56;
  undefined8 local_50;
  undefined4 local_48;
  
  local_50 = 0;
  local_56 = 0;
  local_58 = 0;
  lVar4 = *(long *)PTR_DAT_02710848;
  local_c8[0xc] = 0;
  local_c8[0xd] = 0;
  local_c8[10] = 0;
  local_c8[0xb] = 0;
  local_c8[1] = 0;
  local_48 = 1;
  local_c8[8] = 0;
  local_c8[9] = 0;
  local_c8[6] = 0;
  local_c8[7] = 0;
  local_c8[4] = 0;
  local_c8[5] = 0;
  local_c8[2] = 0;
  local_c8[3] = 0;
  if (param_4 == 0) {
    lVar2 = *(long *)(lVar4 + 0x88);
    if (lVar2 != 0) {
      plVar5 = (long *)(lVar2 + 0x48);
      (**(code **)(*plVar5 + 0x10))(plVar5);
      uVar1 = FUN_01067470(lVar2);
      FUN_01057d10(local_c8 + 1,uVar1);
      (**(code **)(*plVar5 + 0x18))(plVar5);
      goto LAB_01064854;
    }
    param_4 = FUN_01067470(0);
  }
  FUN_01057d10(local_c8 + 1,param_4);
LAB_01064854:
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = param_3;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  lVar3 = (**(code **)(*param_3 + 0x10))(param_3,0x160,8);
  if (lVar3 == 0) {
    (**(code **)(*param_3 + 0xb8))(param_3);
  }
  FUN_01052210(lVar3,param_2,param_3,local_c8 + 1);
  *(long **)(lVar3 + 8) = param_3;
  *(long *)(lVar3 + 0x10) = lVar3;
  *(undefined8 *)(lVar3 + 0x18) = 0x160;
  *(undefined8 *)(lVar3 + 0x20) = 8;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  *param_1 = lVar3;
  local_c8[0] = lVar3;
  if (lVar3 != 0) {
    plVar5 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  FUN_01064980(lVar4,local_c8);
  if (local_c8[0] != 0) {
    (**(code **)(*(long *)(local_c8[0] + 0x48) + 0x18))();
    local_c8[0] = 0;
  }
  FUN_01058eb0(local_c8 + 1);
  return;
}


