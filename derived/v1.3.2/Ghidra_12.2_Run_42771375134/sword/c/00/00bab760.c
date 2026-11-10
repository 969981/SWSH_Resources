/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bab760; name: FUN_00bab760
 */


void FUN_00bab760(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 local_68;
  int local_60;
  uint uStack_5c;
  undefined1 auStack_58 [8];
  undefined8 local_48;
  
  local_68 = *(undefined8 *)(param_1 + 8);
  local_48 = CONCAT44(local_48._4_4_,0xb);
  lVar3 = FUN_00bb0e70(auStack_58,local_68,&local_48,&local_68);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x5f0) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x5f0) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x5f0) = 0;
  }
  *(long *)(param_1 + 0x5f0) = lVar3;
  puVar2 = PTR_DAT_02710860;
  uVar5 = 1;
  while( true ) {
    local_60 = uVar5 - 1;
    uStack_5c = uStack_5c & 0xffffff00;
    uVar1 = *(ulong *)(lVar3 + 0xe8);
    if (uVar1 < *(ulong *)(lVar3 + 0xf0)) {
      lVar6 = *(long *)(lVar3 + 0xe0);
      uVar7 = *(undefined8 *)(lVar3 + 0xa0);
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
      if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = uVar7;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
      *(ulong *)(lVar6 + uVar1 * 8) = CONCAT44(uStack_5c,local_60);
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
      *(long *)(lVar3 + 0xe8) = *(long *)(lVar3 + 0xe8) + 1;
    }
    else {
      local_48 = *(long *)(lVar3 + 0xe0) + uVar1 * 8;
      FUN_00bb18b0(auStack_58,lVar3 + 0xa0,&local_48,1,&local_60);
    }
    if (10 < uVar5) break;
    lVar3 = *(long *)(param_1 + 0x5f0);
    uVar5 = uVar5 + 1;
  }
  local_48._4_4_ = (undefined4)((ulong)local_48 >> 0x20);
  local_48 = CONCAT44(local_48._4_4_,0x100);
  lVar3 = FUN_00bb1a90(auStack_58,local_68,&local_48,&local_68);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x5f8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x5f8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x5f8) = 0;
  }
  *(long *)(param_1 + 0x5f8) = lVar3;
  return;
}


