/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cfe4e0; name: FUN_00cfe4e0
 */


void FUN_00cfe4e0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  uint uStack_58;
  undefined5 uStack_54;
  undefined3 local_4f;
  undefined5 uStack_4c;
  
  lVar3 = *(long *)(*(long *)(param_1 + 0x5e0) + 0xe8);
  if (lVar3 != 0) {
    *(long *)(*(long *)(param_1 + 0x5e0) + 0xe8) = lVar3 + (lVar3 * 0x1c >> 2) * -0x6db6db6db6db6db7
    ;
  }
  lVar3 = 0;
  lVar4 = 0x18;
  do {
    local_60 = 1;
    uStack_58 = (uint)((ulong)*(undefined8 *)(param_1 + 0x5f0) >> 0x20) & 0xff000000 |
                (uint)((ulong)lVar3 >> 0x20);
    uStack_5c = (undefined4)*(undefined8 *)(param_1 + 0x5f0);
    uStack_4c = 0;
    uStack_54 = 0;
    local_4f = 0;
    FUN_00d00e40(*(long *)(param_1 + 0x5e0) + 0xa0,&local_60);
    lVar3 = lVar3 + 0x100000000;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  local_60 = 0x2cc5f8b1;
  uStack_5c = 0x970ffa26;
  uVar1 = FUN_00ffde30(param_1 + 0x100,&local_60);
  local_68 = *(long *)(param_1 + 0x5e0);
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x10))();
  }
  FUN_016c2cb0(uVar1,&local_68);
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    local_68 = 0;
  }
  FUN_016b2d70(uVar1,1);
  local_60 = 0x2cc5f8b1;
  uStack_5c = 0x970ffa26;
  uVar2 = FUN_00ffde30(param_1 + 0x100,&local_60);
  FUN_016c2c90(uVar2,*(undefined4 *)(param_1 + 0x804));
  FUN_016c2c80(uVar2,*(undefined4 *)(param_1 + 0x810),0);
  FUN_016bef00(uVar1);
  FUN_00cfe280(param_1,*(int *)(param_1 + 0x804) + *(int *)(param_1 + 0x810));
  return;
}


