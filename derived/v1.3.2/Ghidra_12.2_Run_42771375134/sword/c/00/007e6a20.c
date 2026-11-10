/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007e6a20; name: FUN_007e6a20
 */


bool FUN_007e6a20(uint param_1,undefined8 param_2,undefined8 param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar4;
  byte *pbVar3;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  void *__s;
  ulong uVar8;
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
  void *local_c8;
  uint local_c0;
  byte *local_98;
  byte *local_90;
  undefined8 uStack_88;
  ulong local_80;
  ulong local_78;
  void *local_70;
  
  uVar6 = -(ulong)(param_1 >> 0x1f) & 0xfffffffe00000000 | (ulong)param_1 << 1;
  uVar5 = (uint)((ulong)param_1 << 1);
  local_78 = 0;
  local_70 = (void *)0x0;
  local_80 = 0;
  if (0xffffffef < uVar5) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (uVar5 < 0x17) {
    local_80 = (ulong)(byte)(param_1 << 2);
    __s = (void *)((ulong)&local_80 | 1);
    if (param_1 == 0) {
      *(undefined1 *)((long)__s + uVar6) = 0;
      local_98 = (byte *)0x0;
      local_90 = (byte *)0x0;
      uStack_88 = 0;
      uVar6 = FUN_007f81e0(0,param_2,&local_98);
      if (((uVar6 & 1) != 0) && (local_90 != local_98)) {
        lVar7 = 0;
        uVar6 = 0;
        do {
          local_c0 = (uint)((byte)local_80 >> 1);
          local_c8 = (void *)((ulong)&local_80 | 1);
          if ((local_80 & 1) != 0) {
            local_c0 = (uint)local_78;
            local_c8 = local_70;
          }
          pbVar1 = local_98 + lVar7;
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
          FUN_00863060(param_3,"$0option $1;\n",&local_c8,&local_f8,&local_128,&local_158,&local_188
                       ,&local_1b8,&local_1e8,&local_218,&local_248,&local_278);
          uVar6 = uVar6 + 1;
          lVar7 = lVar7 + 0x18;
        } while (uVar6 < (ulong)(((long)local_90 - (long)local_98 >> 3) * -0x5555555555555555));
      }
      pbVar2 = local_90;
      pbVar1 = local_98;
      if (local_98 != (byte *)0x0) {
        if (local_90 != local_98) {
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
      if ((local_80 & 1) != 0) {
        operator_delete(local_70);
      }
      return pbVar1 != pbVar2;
    }
  }
  else {
    uVar8 = uVar6 + 0x10 & 0xfffffffffffffff0;
    __s = operator_new(uVar8);
    local_80 = uVar8 | 1;
    local_78 = uVar6;
    local_70 = __s;
  }
                    /* WARNING: Subroutine does not return */
  memset(__s,0x20,uVar6);
}


