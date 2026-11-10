/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ecb890; name: FUN_00ecb890
 */


void FUN_00ecb890(long param_1,undefined8 *param_2)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long local_60;
  undefined1 auStack_58 [8];
  long local_50;
  long local_40;
  long local_38;
  
  lVar4 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  if (*(long *)(lVar4 + 0x578) == 0) {
    if (((*PTR_DAT_02715558 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_02715558), iVar2 != 0)) {
      lVar3 = FUN_006e5e60();
      *(long *)PTR_DAT_02715560 = lVar3;
      if (lVar3 != 0) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
      }
      FUN_001001c0(PTR_LAB_02715568,PTR_DAT_02715560,&PTR_LOOP_025db000);
      __cxa_guard_release(PTR_DAT_02715558);
    }
    local_38 = *(long *)PTR_DAT_02715560;
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
    }
  }
  else {
    FUN_006e7120(&local_38,*(long *)(lVar4 + 0x578),param_2);
  }
  FUN_006cf0c0(auStack_58,&local_38);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
    local_40 = 0;
  }
  local_38 = local_50;
  FUN_00bb9100(&local_60,&local_38,&DAT_01d43b31);
  FUN_008933b0(*(undefined8 *)(param_1 + 0x58));
  uVar5 = *(undefined8 *)(param_1 + 0x58);
  FUN_006cf0c0(auStack_58,&local_60);
  FUN_008932e0(uVar5,auStack_58,1);
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
    local_40 = 0;
  }
  bVar1 = FUN_008934e0(*(undefined8 *)(param_1 + 0x58));
  *(byte *)(param_1 + 0x78) = bVar1 & 1;
  *(undefined8 *)(param_1 + 0x48) = *param_2;
  if (local_60 != 0) {
    (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
    local_60 = 0;
  }
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  return;
}


