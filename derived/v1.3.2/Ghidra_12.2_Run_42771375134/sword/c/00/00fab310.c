/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fab310; name: FUN_00fab310
 */


void FUN_00fab310(long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long local_60;
  undefined8 *local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  lVar4 = *(long *)(*(long *)(param_1 + 0x70) + 0x60);
  if (lVar4 == 0) {
    FUN_0077eb10(0,param_2,*(undefined8 *)(param_1 + 0xa0));
  }
  else {
    plVar5 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    FUN_0077eb10(lVar4,param_2,*(undefined8 *)(param_1 + 0xa0));
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  lVar4 = *(long *)(*(long *)PTR_DAT_02710848 + 0xb8);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  lVar6 = *(long *)(lVar4 + 0x1e0);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  lVar3 = *(long *)(lVar6 + 0xc0);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  plVar5 = *(long **)(param_1 + 8);
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = plVar5;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  lVar6 = (**(code **)(*plVar5 + 0x10))(plVar5,0x80,8);
  if (lVar6 == 0) {
    (**(code **)(*plVar5 + 0xb8))(plVar5);
  }
  FUN_0077d050(lVar6,0x5dc);
  *(long **)(lVar6 + 8) = plVar5;
  *(long *)(lVar6 + 0x10) = lVar6;
  *(undefined8 *)(lVar6 + 0x18) = 0x80;
  *(undefined8 *)(lVar6 + 0x20) = 8;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  FUN_014c62d0(lVar3,lVar6,*(undefined8 *)(param_1 + 0xa0));
  lVar4 = *(long *)(*(long *)(param_1 + 0x198) + 0x58);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  local_58 = &local_48;
  local_50 = 0x60dd9a51c30b7a73;
  local_48 = 0;
  FUN_008a0cd0(lVar4,&local_58,0);
  uVar2 = local_48;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  uVar1 = *(undefined4 *)(param_1 + 0x1c0);
  local_60 = lVar6;
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  FUN_016b4ab0(uVar2,uVar1,&local_60);
  if (local_60 != 0) {
    (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
    local_60 = 0;
  }
  *(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0x1c0) * 4 + 0x1a4) = param_3;
  *(int *)(param_1 + 0x1c0) = *(int *)(param_1 + 0x1c0) + 1;
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  }
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  return;
}


