/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007f7ff0; name: FUN_007f7ff0
 */


void FUN_007f7ff0(undefined8 *param_1,long param_2,string *param_3)

{
  byte *pbVar1;
  bool bVar2;
  byte *pbVar4;
  byte *pbVar3;
  long lVar5;
  ulong uVar6;
  undefined8 local_278;
  undefined4 local_270;
  undefined8 local_248;
  undefined4 local_240;
  undefined8 local_218;
  undefined4 local_210;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined8 local_188;
  undefined4 local_180;
  undefined8 local_158;
  undefined4 local_150;
  undefined8 local_128;
  undefined4 local_120;
  byte *local_f8;
  uint local_f0;
  long local_c8;
  uint local_c0;
  byte *local_98;
  byte *local_90;
  undefined8 uStack_88;
  string local_80 [16];
  void *local_70;
  
  std::string::string(local_80,param_3);
  FUN_007febc0(local_80);
  local_90 = (byte *)0x0;
  uStack_88 = 0;
  local_98 = (byte *)0x0;
  FUN_007fed10(local_80,&DAT_01d245b7,&local_98);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (local_90 != local_98) {
    lVar5 = 0;
    uVar6 = 0;
    do {
      bVar2 = (*(byte *)(param_2 + 0x68) & 1) != 0;
      local_c8 = param_2 + 0x69;
      if (bVar2) {
        local_c8 = *(long *)(param_2 + 0x78);
      }
      local_c0 = (uint)(*(byte *)(param_2 + 0x68) >> 1);
      if (bVar2) {
        local_c0 = (uint)*(undefined8 *)(param_2 + 0x70);
      }
      pbVar1 = local_98 + lVar5;
      local_f8 = *(byte **)(pbVar1 + 0x10);
      if ((*pbVar1 & 1) == 0) {
        local_f8 = pbVar1 + 1;
      }
      local_128 = 0;
      local_120 = 0xffffffff;
      local_158 = 0;
      local_150 = 0xffffffff;
      local_188 = 0;
      local_180 = 0xffffffff;
      local_1b8 = 0;
      local_1b0 = 0xffffffff;
      local_1e8 = 0;
      local_1e0 = 0xffffffff;
      local_218 = 0;
      local_210 = 0xffffffff;
      local_248 = 0;
      local_240 = 0xffffffff;
      local_278 = 0;
      local_270 = 0xffffffff;
      local_f0 = (uint)(*pbVar1 >> 1);
      if ((*pbVar1 & 1) != 0) {
        local_f0 = (uint)*(undefined8 *)(pbVar1 + 8);
      }
      FUN_00863060(param_1,"$0// $1\n",&local_c8,&local_f8,&local_128,&local_158,&local_188,
                   &local_1b8,&local_1e8,&local_218,&local_248,&local_278);
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0x18;
    } while (uVar6 < (ulong)(((long)local_90 - (long)local_98 >> 3) * -0x5555555555555555));
  }
  pbVar1 = local_98;
  if (local_98 != (byte *)0x0) {
    if (local_98 != local_90) {
      pbVar4 = local_90;
      do {
        pbVar3 = pbVar4 + -0x18;
        if ((*pbVar3 & 1) != 0) {
          operator_delete(*(void **)(pbVar4 + -8));
        }
        pbVar4 = pbVar3;
      } while (pbVar1 != pbVar3);
    }
    local_90 = pbVar1;
    operator_delete(local_98);
  }
  if (((byte)local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  return;
}


