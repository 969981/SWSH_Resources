/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01210090; name: FUN_01210090
 */


void FUN_01210090(undefined8 param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined1 local_250 [2];
  undefined2 local_24e;
  undefined4 local_24c;
  long local_248;
  char local_240 [16];
  undefined1 auStack_230 [176];
  undefined1 local_180;
  undefined8 local_17c;
  undefined8 local_16c;
  undefined8 local_164;
  undefined8 local_15c;
  undefined8 local_154;
  undefined8 local_14c;
  undefined8 local_144;
  undefined8 local_13c;
  undefined4 local_134;
  char local_130;
  undefined8 local_12c;
  undefined1 local_120;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  uint local_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  
  uVar2 = FUN_01210290(param_2);
  if ((uVar2 & 1) != 0) {
    lVar3 = (**(code **)(*param_2 + 0x10))(param_2);
    FUN_0121ad90(&local_f0,lVar3 + 5,0x28);
    local_100 = local_d8;
    uStack_f8 = local_d0;
    local_120 = 1;
    uStack_108 = local_e0;
    local_f0 = 6;
    uStack_ec = 0;
    local_12c = FUN_012187d0(lVar3 + 0x2d,&local_f0);
    local_130 = '\x01';
    FUN_0121cd80(&local_f0,lVar3 + 0x33,0x31);
    local_13c = local_b0;
    local_17c = CONCAT44(uStack_ec,local_f0);
    local_154 = local_c8;
    local_15c = local_d0;
    local_164 = local_d8;
    local_16c = local_e0;
    local_134 = local_a8;
    local_144 = local_b8;
    local_14c = local_c0;
    local_180 = 1;
    FUN_01223900(&local_f0,lVar3 + 100,0x37);
    memcpy(auStack_230,&local_f0,0xb0);
    local_240[0] = '\x01';
    FUN_012103a0(&local_248,param_1,2,local_240);
    lVar3 = local_248;
    if (local_248 != 0) {
      uVar1 = local_f0 >> 8;
      local_f0 = local_f0 & 0xffffff00;
      if (local_130 != '\0') {
        uStack_ec = (undefined4)local_12c;
        local_e8 = (undefined4)((ulong)local_12c >> 0x20);
        local_f0 = CONCAT31((int3)uVar1,1);
        local_24c = FUN_012188c0((ulong)&local_f0 | 4);
        local_250[0] = 1;
        FUN_01225f60(lVar3,local_250);
        lVar3 = local_248;
        local_24e = FUN_012188d0((ulong)&local_f0 | 4);
        local_250[0] = 1;
        FUN_01225f70(lVar3,local_250);
        if ((char)local_f0 != '\0') {
          local_f0 = local_f0 & 0xffffff00;
        }
      }
      FUN_01225f80(local_248);
    }
  }
  return;
}


