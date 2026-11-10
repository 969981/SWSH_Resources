/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014f9130; name: FUN_014f9130
 */


void FUN_014f9130(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 local_38;
  
  plVar4 = *(long **)(param_1 + 8);
  lVar1 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar1 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar1 + *(ulong *)(lVar1 + 0x80) * 8) = plVar4;
  *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + 1;
  lVar2 = (**(code **)(*plVar4 + 0x10))(plVar4,0x80,8);
  if (lVar2 == 0) {
    (**(code **)(*plVar4 + 0xb8))(plVar4);
  }
  FUN_0077d050(lVar2,0x100);
  *(long **)(lVar2 + 8) = plVar4;
  *(long *)(lVar2 + 0x10) = lVar2;
  *(undefined8 *)(lVar2 + 0x18) = 0x80;
  *(undefined8 *)(lVar2 + 0x20) = 8;
  *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + -1;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  FUN_014c75c0(*(undefined8 *)(param_1 + 0x608));
  uVar3 = *(undefined8 *)(param_1 + 0x608);
  lVar1 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1e8);
  if (lVar1 == 0) {
    FUN_014c9030(uVar3,0,0);
  }
  else {
    plVar4 = (long *)(lVar1 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    FUN_014c9030(uVar3,0,lVar1);
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x618);
  local_38 = 0x6415f8874cbb23f7;
  lVar1 = *(long *)(*(long *)(param_1 + 0x610) + 0x2e8);
  if (lVar1 == 0) {
    FUN_0077eb10(uVar3,&local_38,0);
  }
  else {
    plVar4 = (long *)(lVar1 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    FUN_0077eb10(uVar3,&local_38,lVar1);
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  lVar1 = *(long *)(*(long *)(param_1 + 0x610) + 0x2e8);
  uVar3 = *(undefined8 *)(param_1 + 0x608);
  plVar4 = (long *)(lVar1 + 0x48);
  if (lVar1 != 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  FUN_014c62d0(uVar3,lVar2,lVar1);
  (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))(plVar4);
  uVar3 = FUN_0077d470(lVar2);
  FUN_00ffd6a0(param_1 + 0x100,"pane_T_message_00",uVar3,10);
  FUN_00ffd840(param_1 + 0x100,*(undefined8 *)(param_1 + 0x650));
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  }
  return;
}


