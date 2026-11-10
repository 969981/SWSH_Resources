/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cfe660; name: FUN_00cfe660
 */


void FUN_00cfe660(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  long local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  uint uStack_58;
  undefined5 uStack_54;
  undefined3 local_4f;
  undefined5 uStack_4c;
  
  lVar4 = *(long *)(*(long *)(param_1 + 0x5e0) + 0xe8);
  if (lVar4 != 0) {
    *(long *)(*(long *)(param_1 + 0x5e0) + 0xe8) = lVar4 + (lVar4 * 0x1c >> 2) * -0x6db6db6db6db6db7
    ;
  }
  cVar1 = *(char *)(param_1 + 0x5f4);
  uVar5 = (uint)cVar1;
  iVar6 = cVar1 + 3;
  if (0x17 < iVar6) {
    iVar6 = 0x18;
  }
  if (iVar6 != cVar1 && cVar1 <= iVar6) {
    do {
      local_60 = 2;
      uStack_58 = (uint)((ulong)*(undefined8 *)(param_1 + 0x5f0) >> 0x20) & 0xff000000 |
                  uVar5 & 0xff | 0x3b00;
      uStack_5c = (undefined4)*(undefined8 *)(param_1 + 0x5f0);
      uStack_4c = 0;
      uStack_54 = 0;
      local_4f = 0;
      FUN_00d00e40(*(long *)(param_1 + 0x5e0) + 0xa0,&local_60);
      iVar6 = *(char *)(param_1 + 0x5f4) + 3;
      uVar5 = uVar5 + 1;
      if (0x17 < iVar6) {
        iVar6 = 0x18;
      }
    } while ((int)uVar5 < iVar6);
  }
  local_60 = 0x2cc5f8b1;
  uStack_5c = 0x970ffa26;
  uVar2 = FUN_00ffde30(param_1 + 0x100,&local_60);
  local_68 = *(long *)(param_1 + 0x5e0);
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x10))();
  }
  FUN_016c2cb0(uVar2,&local_68);
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    local_68 = 0;
  }
  FUN_016b2d70(uVar2,1);
  local_60 = 0x2cc5f8b1;
  uStack_5c = 0x970ffa26;
  uVar3 = FUN_00ffde30(param_1 + 0x100,&local_60);
  FUN_016c2c90(uVar3,*(undefined4 *)(param_1 + 0x808));
  FUN_016c2c80(uVar3,*(undefined4 *)(param_1 + 0x814),0);
  FUN_016bef00(uVar2);
  FUN_00cfe280(param_1,*(int *)(param_1 + 0x808) + *(int *)(param_1 + 0x814));
  return;
}


