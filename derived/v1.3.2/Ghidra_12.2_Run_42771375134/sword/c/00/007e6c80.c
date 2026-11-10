/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007e6c80; name: FUN_007e6c80
 */


void FUN_007e6c80(undefined8 *param_1,uint param_2,char *param_3,char *param_4)

{
  bool bVar1;
  byte *pbVar2;
  byte *pbVar4;
  byte *pbVar3;
  uint uVar5;
  ulong uVar6;
  void *pvVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 local_2e0;
  undefined4 local_2d8;
  undefined8 local_2b0;
  undefined4 local_2a8;
  undefined8 local_280;
  undefined4 local_278;
  undefined8 local_250;
  undefined4 local_248;
  undefined8 local_220;
  undefined4 local_218;
  undefined8 local_1f0;
  undefined4 local_1e8;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined8 local_190;
  undefined4 local_188;
  byte *local_160;
  uint local_158;
  void *local_130;
  void *local_128;
  void *local_120;
  byte local_100 [8];
  undefined1 auStack_f8 [16];
  ulong local_e8;
  undefined8 local_e0;
  void *local_d8;
  ulong local_d0;
  ulong local_c8;
  void *local_c0;
  byte *local_b8;
  byte *local_b0;
  undefined8 uStack_a8;
  undefined2 local_a0;
  char local_9e;
  string local_98 [16];
  void *local_88;
  ulong local_80;
  ulong local_78;
  void *local_70;
  
  uVar6 = -(ulong)(param_2 >> 0x1f) & 0xfffffffe00000000 | (ulong)param_2 << 1;
  uVar5 = (uint)((ulong)param_2 << 1);
  local_78 = 0;
  local_70 = (void *)0x0;
  local_80 = 0;
  if (0xffffffef < uVar5) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (uVar5 < 0x17) {
    local_80 = (ulong)(byte)(param_2 << 2);
    pvVar7 = (void *)((ulong)&local_80 | 1);
    if (param_2 == 0) {
      *(undefined1 *)((long)pvVar7 + uVar6) = 0;
      local_e8 = 0;
      local_b0 = (byte *)0x0;
      uStack_a8 = 0;
      local_c0 = (void *)0x0;
      local_b8 = (byte *)0x0;
      local_d0 = 0;
      local_c8 = 0;
      local_e0 = 0;
      local_d8 = (void *)0x0;
      local_a0 = *(undefined2 *)param_4;
      local_9e = param_4[2];
      std::string::string(local_98,(string *)&local_80);
      local_100[0] = 0;
      if (*param_4 != '\0') {
        local_128 = (void *)0x0;
        local_120 = (void *)0x0;
        local_130 = (void *)0x0;
        FUN_007ea070(param_1,&local_130);
        local_100[0] = FUN_007e9420(param_1[2],&local_130,auStack_f8);
        if (local_130 != (void *)0x0) {
          local_128 = local_130;
          operator_delete(local_130);
        }
        local_100[0] = local_100[0] & 1;
      }
      FUN_007e68d0(local_100,param_3);
      uVar5 = (uint)((byte)local_80._0_1_ >> 1);
      local_130 = (void *)((ulong)&local_80 | 1);
      if ((local_80 & 1) != 0) {
        uVar5 = (uint)local_78;
        local_130 = local_70;
      }
      local_128 = (void *)CONCAT44(local_128._4_4_,uVar5);
      pbVar2 = (byte *)*param_1;
      local_160 = *(byte **)(pbVar2 + 0x10);
      if ((*pbVar2 & 1) == 0) {
        local_160 = pbVar2 + 1;
      }
      local_190 = 0;
      local_188 = 0xffffffff;
      local_1c0 = 0;
      local_1b8 = 0xffffffff;
      local_1f0 = 0;
      local_1e8 = 0xffffffff;
      local_220 = 0;
      local_218 = 0xffffffff;
      local_250 = 0;
      local_248 = 0xffffffff;
      local_280 = 0;
      local_278 = 0xffffffff;
      local_2b0 = 0;
      local_2a8 = 0xffffffff;
      local_2d8 = 0xffffffff;
      local_158 = (uint)(*pbVar2 >> 1);
      if ((*pbVar2 & 1) != 0) {
        local_158 = (uint)*(undefined8 *)(pbVar2 + 8);
      }
      local_2e0 = 0;
      FUN_00863060(param_3,"$0enum $1 {\n",&local_130,&local_160,&local_190,&local_1c0,&local_1f0,
                   &local_220,&local_250,&local_280,&local_2b0,&local_2e0);
      FUN_007e6a20(1,param_1[4],param_3);
      if (0 < *(int *)((long)param_1 + 0x2c)) {
        lVar8 = 0;
        lVar10 = 0;
        do {
          FUN_007e8fe0(param_1[6] + lVar8,1,param_3,param_4);
          lVar10 = lVar10 + 1;
          lVar8 = lVar8 + 0x28;
        } while (lVar10 < *(int *)((long)param_1 + 0x2c));
      }
      local_190 = 0;
      bVar1 = (local_80 & 1) != 0;
      uVar5 = (uint)((byte)local_80._0_1_ >> 1);
      if (bVar1) {
        uVar5 = (uint)local_78;
      }
      local_128 = (void *)CONCAT44(local_128._4_4_,uVar5);
      local_130 = (void *)((ulong)&local_80 | 1);
      if (bVar1) {
        local_130 = local_70;
      }
      local_2e0 = 0;
      local_160 = (byte *)0x0;
      local_158 = 0xffffffff;
      local_188 = 0xffffffff;
      local_1c0 = 0;
      local_1b8 = 0xffffffff;
      local_1f0 = 0;
      local_1e8 = 0xffffffff;
      local_220 = 0;
      local_218 = 0xffffffff;
      local_250 = 0;
      local_248 = 0xffffffff;
      local_280 = 0;
      local_278 = 0xffffffff;
      local_2b0 = 0;
      local_2a8 = 0xffffffff;
      local_2d8 = 0xffffffff;
      FUN_00863060(param_3,&DAT_01cfd0d8,&local_130,&local_160,&local_190,&local_1c0,&local_1f0,
                   &local_220,&local_250,&local_280,&local_2b0,&local_2e0);
      if (local_100[0] != 0) {
        uVar6 = local_d0 >> 1 & 0x7f;
        if ((local_d0 & 1) != 0) {
          uVar6 = local_c8;
        }
        if (uVar6 != 0) {
          FUN_007f7ff0(&local_130,local_100,&local_d0);
          pvVar7 = (void *)((ulong)&local_130 | 1);
          if (((ulong)local_130 & 1) != 0) {
            pvVar7 = local_120;
          }
          std::string::append(param_3,(ulong)pvVar7);
          if (((ulong)local_130 & 1) != 0) {
            operator_delete(local_120);
          }
        }
      }
      if (((byte)local_98[0] & 1) != 0) {
        operator_delete(local_88);
      }
      pbVar2 = local_b8;
      if (local_b8 != (byte *)0x0) {
        if (local_b0 != local_b8) {
          pbVar4 = local_b0;
          do {
            pbVar3 = pbVar4 + -0x18;
            if ((*pbVar3 & 1) != 0) {
              operator_delete(*(void **)(pbVar4 + -8));
            }
            pbVar4 = pbVar3;
          } while (pbVar2 != pbVar3);
        }
        local_b0 = pbVar2;
        operator_delete(local_b8);
      }
      if ((local_d0 & 1) != 0) {
        operator_delete(local_c0);
      }
      if ((local_e8 & 1) != 0) {
        operator_delete(local_d8);
      }
      if ((local_80 & 1) != 0) {
        operator_delete(local_70);
      }
      return;
    }
  }
  else {
    uVar9 = uVar6 + 0x10 & 0xfffffffffffffff0;
    pvVar7 = operator_new(uVar9);
    local_80 = uVar9 | 1;
    local_78 = uVar6;
    local_70 = pvVar7;
  }
                    /* WARNING: Subroutine does not return */
  memset(pvVar7,0x20,uVar6);
}


