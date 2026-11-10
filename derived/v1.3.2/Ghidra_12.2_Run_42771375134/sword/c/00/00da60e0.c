/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00da60e0; name: FUN_00da60e0
 */


void FUN_00da60e0(long param_1,undefined4 param_2,long *param_3,long *param_4,long *param_5,
                 undefined8 param_6,long param_7)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  long local_68;
  long local_60;
  long local_58;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0xade8));
  FUN_00da4d60(param_1);
  lVar7 = *param_3;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  lVar3 = *(long *)(param_1 + 0x60);
  *(long *)(param_1 + 0x60) = lVar7;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
  }
  lVar7 = *param_4;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  lVar3 = *(long *)(param_1 + 0x68);
  *(long *)(param_1 + 0x68) = lVar7;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
  }
  lVar7 = *param_5;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  lVar3 = *(long *)(param_1 + 0x70);
  *(long *)(param_1 + 0x70) = lVar7;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
  }
  *(undefined8 *)(param_1 + 0xae20) = param_6;
  if (*(char *)(param_1 + 0x81) == '\0') {
    iVar2 = *(int *)(param_1 + 0xae28);
    if (6 < iVar2) {
      iVar2 = FUN_0102b670(*(undefined1 *)(param_1 + 0x85));
    }
    *(undefined1 *)(param_1 + 0x80) = 1;
    iVar5 = 6;
    if (0 < iVar2) {
      iVar5 = -1;
    }
  }
  else {
    iVar2 = 1;
    *(undefined1 *)(param_1 + 0x80) = 1;
    iVar5 = -1;
  }
  *(int *)(param_1 + 0x78) = iVar2;
  *(undefined4 *)(param_1 + 0x7c) = param_2;
  *(int *)(param_1 + 0x88) = iVar5 + iVar2;
  *(undefined4 *)(param_1 + 0x8c) = param_2;
  *(undefined4 *)(param_1 + 0x90) = 0;
  FUN_00da8a20(param_1);
  uVar4 = FUN_007240a0(*(long *)(param_1 + 0x60) + 0x4e0);
  if ((int)uVar4 == 0) {
    if (param_7 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    local_58 = *(long *)(param_1 + 0x60);
    if (local_58 == 0) {
      FUN_00da63f0(uVar4,&local_58,param_7);
      lVar7 = *(long *)(param_1 + 0x68);
    }
    else {
      plVar6 = (long *)(local_58 + 0x48);
      uVar4 = (**(code **)(*plVar6 + 0x10))(plVar6);
      FUN_00da63f0(uVar4,&local_58,param_7);
      (**(code **)(*plVar6 + 0x18))(plVar6);
      local_58 = 0;
      lVar7 = *(long *)(param_1 + 0x68);
    }
  }
  else {
    lVar7 = *(long *)(param_1 + 0x68);
  }
  if (lVar7 != 0) {
    local_60 = *(long *)(param_1 + 0xae08);
    if (local_60 != 0) {
      (**(code **)(*(long *)(local_60 + 0x48) + 0x10))();
    }
    local_68 = *(long *)(param_1 + 0xae10);
    if (local_68 != 0) {
      (**(code **)(*(long *)(local_68 + 0x48) + 0x10))();
    }
    FUN_01052f80(lVar7,&local_60,&local_68);
    if (local_68 != 0) {
      (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
      local_68 = 0;
    }
    if (local_60 != 0) {
      (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
      local_60 = 0;
    }
  }
  lVar7 = *(long *)(param_1 + 0x70);
  if (lVar7 != 0) {
    local_60 = *(long *)(param_1 + 0xae08);
    if (local_60 != 0) {
      (**(code **)(*(long *)(local_60 + 0x48) + 0x10))();
    }
    local_68 = *(long *)(param_1 + 0xae10);
    if (local_68 != 0) {
      (**(code **)(*(long *)(local_68 + 0x48) + 0x10))();
    }
    FUN_01052f80(lVar7,&local_60,&local_68);
    if (local_68 != 0) {
      (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
      local_68 = 0;
    }
    if (local_60 != 0) {
      (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
      local_60 = 0;
    }
  }
  bVar1 = FUN_00da6690(param_1);
  *(byte *)(param_1 + 0x83) = bVar1 & 1;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0xade8));
  return;
}


