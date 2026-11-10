/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0120f9a0; name: FUN_0120f9a0
 */


void FUN_0120f9a0(undefined8 param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 local_1c0 [2];
  undefined2 local_1be;
  undefined4 local_1bc;
  char local_1b8 [16];
  undefined1 local_1a8;
  undefined1 local_184;
  undefined1 local_148;
  undefined1 local_f8;
  char local_a8;
  undefined8 local_a4;
  char local_98;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68 [2];
  uint local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  uVar2 = FUN_0120fba0(param_2);
  if ((uVar2 & 1) != 0) {
    lVar3 = (**(code **)(*param_2 + 0x10))(param_2);
    local_68[0] = lVar3 + 5;
    local_68[1] = 0x1fb;
    local_1b8[0] = '\0';
    local_1a8 = 0;
    local_184 = 0;
    local_148 = 0;
    local_f8 = 0;
    local_a8 = '\0';
    local_98 = '\0';
    FUN_0121ad90(&local_58,local_68[0],0x28);
    local_78 = local_40;
    uStack_70 = uStack_38;
    uStack_80 = local_48;
    if (local_98 == '\0') {
      local_98 = '\x01';
    }
    local_58 = 6;
    uStack_54 = 0;
    uVar4 = FUN_012187d0(lVar3 + 0x2d,&local_58);
    if (local_a8 == '\0') {
      local_a8 = '\x01';
      local_a4 = uVar4;
    }
    else {
      local_a4._0_6_ = (undefined6)uVar4;
    }
    FUN_01214520(local_1b8,local_68);
    FUN_0120fcb0(local_68,param_1,1,local_1b8);
    lVar3 = local_68[0];
    if (local_68[0] != 0) {
      uVar1 = local_58 >> 8;
      local_58 = local_58 & 0xffffff00;
      if (local_a8 != '\0') {
        uStack_54 = (undefined4)local_a4;
        local_50 = (undefined4)((ulong)local_a4 >> 0x20);
        local_58 = CONCAT31((int3)uVar1,1);
        local_1bc = FUN_012188c0((ulong)&local_58 | 4);
        local_1c0[0] = 1;
        FUN_01225f60(lVar3,local_1c0);
        lVar3 = local_68[0];
        local_1be = FUN_012188d0((ulong)&local_58 | 4);
        local_1c0[0] = 1;
        FUN_01225f70(lVar3,local_1c0);
        if ((char)local_58 != '\0') {
          local_58 = local_58 & 0xffffff00;
        }
      }
      FUN_01225f80(local_68[0]);
    }
  }
  return;
}


