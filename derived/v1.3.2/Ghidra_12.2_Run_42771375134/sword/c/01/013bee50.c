/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013bee50; name: FUN_013bee50
 */


void FUN_013bee50(long *param_1,long param_2,undefined2 param_3,undefined8 param_4,byte param_5)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long local_58;
  byte local_4c [4];
  undefined8 local_48;
  undefined1 auStack_38 [4];
  undefined2 local_34 [2];
  
  local_4c[0] = param_5 & 1;
  local_58 = param_2;
  local_48 = param_4;
  local_34[0] = param_3;
  lVar2 = FUN_013befb0(auStack_38,*(undefined8 *)(param_2 + 0x20),local_34,&local_48,local_4c,
                       &local_58);
  lVar4 = lVar2;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    local_58 = lVar2;
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    lVar4 = local_58;
  }
  local_58 = lVar4;
  plVar1 = *(long **)(param_2 + 0x48);
  if (plVar1 < *(long **)(param_2 + 0x50)) {
    uVar5 = *(undefined8 *)(param_2 + 0x58);
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    lVar4 = local_58;
    if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = uVar5;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    local_58 = 0;
    *plVar1 = lVar4;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    *(long *)(param_2 + 0x48) = *(long *)(param_2 + 0x48) + 8;
  }
  else {
    FUN_009b7f80(param_2 + 0x40,&local_58);
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
      local_58 = 0;
    }
  }
  lVar4 = *(long *)(lVar2 + 0x58);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  *param_1 = lVar4;
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  return;
}


