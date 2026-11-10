/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008c0bc0; name: FUN_008c0bc0
 */


void FUN_008c0bc0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long local_58;
  long local_50;
  undefined8 *local_48;
  undefined8 local_40;
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
  FUN_0077d050(lVar2,0x30);
  *(long **)(lVar2 + 8) = plVar4;
  *(long *)(lVar2 + 0x10) = lVar2;
  *(undefined8 *)(lVar2 + 0x18) = 0x80;
  *(undefined8 *)(lVar2 + 0x20) = 8;
  *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + -1;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x5d0) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x5d0) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x5d0) = 0;
  }
  *(long *)(param_1 + 0x5d0) = lVar2;
  if ((*(long *)(param_1 + 0x4c0) == 0) ||
     (lVar1 = *(long *)(*(long *)(param_1 + 0x4c0) + 0x58), lVar1 == 0)) {
    uVar3 = 0;
  }
  else {
    plVar4 = (long *)(lVar1 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    (**(code **)(*plVar4 + 0x18))(plVar4);
    lVar1 = *(long *)(*(long *)(param_1 + 0x4c0) + 0x58);
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
    }
    local_48 = &local_38;
    local_40 = 0xe2c06acab97c29c2;
    local_38 = 0;
    FUN_01037340(lVar1,&local_48,0);
    uVar3 = local_38;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
    }
  }
  *(undefined8 *)(param_1 + 0x638) = uVar3;
  FUN_016bbde0(uVar3,0);
  FUN_016bbde0(*(undefined8 *)(param_1 + 0x638),1);
  FUN_016bbde0(*(undefined8 *)(param_1 + 0x638),2);
  FUN_016bbde0(*(undefined8 *)(param_1 + 0x638),3);
  FUN_016bbde0(*(undefined8 *)(param_1 + 0x638),4);
  FUN_00ff86a0(&local_48,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),0);
  lVar1 = local_48[0xc];
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  if (local_48 != (undefined8 *)0x0) {
    (**(code **)(local_48[9] + 0x18))();
  }
  local_48 = (undefined8 *)0x99153d925b5e71a3;
  FUN_0077eb10(lVar1,&local_48,*(undefined8 *)(param_1 + 0x5d0));
  uVar3 = *(undefined8 *)(param_1 + 0x638);
  local_50 = *(long *)(param_1 + 0x5d0);
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x10))();
  }
  FUN_016bb930(uVar3,0,1,&local_50);
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
    local_50 = 0;
  }
  local_48 = (undefined8 *)0x34ecf4b93e7611b7;
  FUN_0077eb10(lVar1,&local_48,*(undefined8 *)(param_1 + 0x5d0));
  uVar3 = *(undefined8 *)(param_1 + 0x638);
  local_58 = *(long *)(param_1 + 0x5d0);
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x10))();
  }
  FUN_016bb930(uVar3,1,0,&local_58);
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  }
  return;
}


