/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007e8fe0; name: FUN_007e8fe0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_007e8fe0(undefined8 *param_1,uint param_2,char *param_3,char *param_4)

{
  bool bVar1;
  size_t sVar2;
  byte *pbVar3;
  byte *pbVar5;
  byte *pbVar4;
  uint uVar6;
  ulong uVar7;
  void *pvVar8;
  ulong uVar9;
  ulong local_2f0;
  ulong local_2e8;
  void *local_2e0;
  undefined8 local_2d8;
  undefined4 local_2d0;
  undefined8 local_2a8;
  undefined4 local_2a0;
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
  char *local_188;
  undefined4 local_180;
  undefined1 auStack_17c [36];
  byte *local_158;
  uint local_150;
  void *local_128;
  undefined8 local_120;
  void *local_118;
  byte local_f8 [8];
  undefined1 auStack_f0 [16];
  ulong local_e0;
  undefined8 local_d8;
  void *local_d0;
  ulong local_c8;
  ulong local_c0;
  void *local_b8;
  byte *local_b0;
  byte *local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  char local_96;
  string local_90 [16];
  void *local_80;
  ulong local_78;
  ulong local_70;
  void *local_68;
  
  uVar7 = -(ulong)(param_2 >> 0x1f) & 0xfffffffe00000000 | (ulong)param_2 << 1;
  uVar6 = (uint)((ulong)param_2 << 1);
  local_70 = 0;
  local_68 = (void *)0x0;
  local_78 = 0;
  if (0xffffffef < uVar6) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (uVar6 < 0x17) {
    local_78 = (ulong)(byte)(param_2 << 2);
    pvVar8 = (void *)((ulong)&local_78 | 1);
    if (param_2 == 0) {
      *(undefined1 *)((long)pvVar8 + uVar7) = 0;
      local_e0 = 0;
      local_a8 = (byte *)0x0;
      uStack_a0 = 0;
      local_b8 = (void *)0x0;
      local_b0 = (byte *)0x0;
      local_c8 = 0;
      local_c0 = 0;
      local_d8 = 0;
      local_d0 = (void *)0x0;
      local_98 = *(undefined2 *)param_4;
      local_96 = param_4[2];
      std::string::string(local_90,(string *)&local_78);
      local_f8[0] = 0;
      if (*param_4 != '\0') {
        local_120 = (void *)0x0;
        local_118 = (void *)0x0;
        local_128 = (void *)0x0;
        FUN_007ea3c0(param_1,&local_128);
        local_f8[0] = FUN_007e9420(*(undefined8 *)(param_1[3] + 0x10),&local_128,auStack_f0);
        if (local_128 != (void *)0x0) {
          local_120 = local_128;
          operator_delete(local_128);
        }
        local_f8[0] = local_f8[0] & 1;
      }
      FUN_007e68d0(local_f8,param_3);
      local_128 = (void *)((ulong)&local_78 | 1);
      uVar6 = (uint)((byte)local_78._0_1_ >> 1);
      if ((local_78 & 1) != 0) {
        uVar6 = (uint)local_70;
        local_128 = local_68;
      }
      pbVar3 = (byte *)*param_1;
      local_158 = *(byte **)(pbVar3 + 0x10);
      if ((*pbVar3 & 1) == 0) {
        local_158 = pbVar3 + 1;
      }
      local_150 = (uint)(*pbVar3 >> 1);
      if ((*pbVar3 & 1) != 0) {
        local_150 = (uint)*(undefined8 *)(pbVar3 + 8);
      }
      local_120._0_4_ = uVar6;
      local_188 = (char *)FUN_007ff7d0(*(undefined4 *)(param_1 + 2),auStack_17c);
      sVar2 = strlen(local_188);
      local_180 = (undefined4)sVar2;
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
      local_2a8 = 0;
      local_2a0 = 0xffffffff;
      local_2d8 = 0;
      local_2d0 = 0xffffffff;
      FUN_00863060(param_3,"$0$1 = $2",&local_128,&local_158,&local_188,&local_1b8,&local_1e8,
                   &local_218,&local_248,&local_278,&local_2a8,&local_2d8);
      local_2e8 = 0;
      local_2e0 = (void *)0x0;
      local_2f0 = 0;
      uVar7 = FUN_007e8e80(0,param_1[4],&local_2f0);
      if ((uVar7 & 1) != 0) {
        local_158 = (byte *)0x0;
        bVar1 = (local_2f0 & 1) != 0;
        local_150 = 0xffffffff;
        local_128 = (void *)((ulong)&local_2f0 | 1);
        if (bVar1) {
          local_128 = local_2e0;
        }
        local_188 = (char *)0x0;
        local_180 = 0xffffffff;
        local_1b8 = 0;
        local_1b0 = 0xffffffff;
        local_1e8 = 0;
        local_1e0 = 0xffffffff;
        local_218 = 0;
        uVar7 = local_2f0 >> 1 & 0x7f;
        if (bVar1) {
          uVar7 = local_2e8;
        }
        local_248 = 0;
        local_240 = 0xffffffff;
        local_278 = 0;
        local_120._0_4_ = (uint)uVar7;
        local_210 = 0xffffffff;
        local_270 = 0xffffffff;
        local_2a8 = 0;
        local_2a0 = 0xffffffff;
        local_2d8 = 0;
        local_2d0 = 0xffffffff;
        FUN_00863060(param_3," [$0]",&local_128,&local_158,&local_188,&local_1b8,&local_1e8,
                     &local_218,&local_248,&local_278,&local_2a8,&local_2d8);
      }
      std::string::append(param_3);
      if (local_f8[0] != 0) {
        uVar7 = local_c8 >> 1 & 0x7f;
        if ((local_c8 & 1) != 0) {
          uVar7 = local_c0;
        }
        if (uVar7 != 0) {
          FUN_007f7ff0(&local_128,local_f8,&local_c8);
          pvVar8 = (void *)((ulong)&local_128 | 1);
          if (((ulong)local_128 & 1) != 0) {
            pvVar8 = local_118;
          }
          std::string::append(param_3,(ulong)pvVar8);
          if (((ulong)local_128 & 1) != 0) {
            operator_delete(local_118);
          }
        }
      }
      if ((local_2f0 & 1) != 0) {
        operator_delete(local_2e0);
      }
      if (((byte)local_90[0] & 1) == 0) {
        pbVar3 = local_b0;
      }
      else {
        operator_delete(local_80);
        pbVar3 = local_b0;
      }
      local_b0 = pbVar3;
      if (pbVar3 != (byte *)0x0) {
        if (local_a8 != pbVar3) {
          pbVar5 = local_a8;
          do {
            pbVar4 = pbVar5 + -0x18;
            if ((*pbVar4 & 1) != 0) {
              operator_delete(*(void **)(pbVar5 + -8));
            }
            pbVar5 = pbVar4;
          } while (pbVar3 != pbVar4);
        }
        local_a8 = pbVar3;
        operator_delete(local_b0);
      }
      if ((local_c8 & 1) != 0) {
        operator_delete(local_b8);
      }
      if ((local_e0 & 1) != 0) {
        operator_delete(local_d0);
      }
      if ((local_78 & 1) != 0) {
        operator_delete(local_68);
      }
      return;
    }
  }
  else {
    uVar9 = uVar7 + 0x10 & 0xfffffffffffffff0;
    pvVar8 = operator_new(uVar9);
    local_78 = uVar9 | 1;
    local_70 = uVar7;
    local_68 = pvVar8;
  }
                    /* WARNING: Subroutine does not return */
  memset(pvVar8,0x20,uVar7);
}


