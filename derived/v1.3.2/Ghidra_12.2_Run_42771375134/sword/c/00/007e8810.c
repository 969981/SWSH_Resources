/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007e8810; name: FUN_007e8810
 */


void FUN_007e8810(undefined8 *param_1,uint param_2,char *param_3,char *param_4)

{
  byte *pbVar1;
  byte *pbVar3;
  byte *pbVar2;
  uint uVar4;
  ulong uVar5;
  void *pvVar6;
  ulong uVar7;
  long lVar8;
  undefined8 local_2c8;
  undefined4 local_2c0;
  undefined8 local_298;
  undefined4 local_290;
  undefined8 local_268;
  undefined4 local_260;
  undefined8 local_238;
  undefined4 local_230;
  undefined8 local_208;
  undefined4 local_200;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined8 local_178;
  undefined4 local_170;
  byte *local_148;
  uint local_140;
  void *local_118;
  void *local_110;
  void *local_108;
  byte local_e8 [8];
  undefined1 auStack_e0 [16];
  ulong local_d0;
  undefined8 local_c8;
  void *local_c0;
  ulong local_b8;
  ulong local_b0;
  void *local_a8;
  byte *local_a0;
  byte *local_98;
  undefined8 uStack_90;
  undefined2 local_88;
  char local_86;
  string local_80 [16];
  void *local_70;
  ulong local_68;
  ulong local_60;
  void *local_58;
  
  uVar5 = -(ulong)(param_2 >> 0x1f) & 0xfffffffe00000000 | (ulong)param_2 << 1;
  uVar4 = (uint)((ulong)param_2 << 1);
  local_60 = 0;
  local_58 = (void *)0x0;
  local_68 = 0;
  if (0xffffffef < uVar4) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (uVar4 < 0x17) {
    local_68 = (ulong)(byte)(param_2 << 2);
    pvVar6 = (void *)((ulong)&local_68 | 1);
    if (param_2 == 0) {
      *(undefined1 *)((long)pvVar6 + uVar5) = 0;
      local_d0 = 0;
      local_98 = (byte *)0x0;
      uStack_90 = 0;
      local_a8 = (void *)0x0;
      local_a0 = (byte *)0x0;
      local_b8 = 0;
      local_b0 = 0;
      local_c8 = 0;
      local_c0 = (void *)0x0;
      local_88 = *(undefined2 *)param_4;
      local_86 = param_4[2];
      std::string::string(local_80,(string *)&local_68);
      local_e8[0] = 0;
      if (*param_4 != '\0') {
        local_110 = (void *)0x0;
        local_108 = (void *)0x0;
        local_118 = (void *)0x0;
        FUN_007e9e70(param_1,&local_118);
        local_e8[0] = FUN_007e9420(*(undefined8 *)(param_1[2] + 0x10),&local_118,auStack_e0);
        if (local_118 != (void *)0x0) {
          local_110 = local_118;
          operator_delete(local_118);
        }
        local_e8[0] = local_e8[0] & 1;
      }
      FUN_007e68d0(local_e8,param_3);
      uVar4 = (uint)((byte)local_68._0_1_ >> 1);
      local_118 = (void *)((ulong)&local_68 | 1);
      if ((local_68 & 1) != 0) {
        uVar4 = (uint)local_60;
        local_118 = local_58;
      }
      local_110 = (void *)CONCAT44(local_110._4_4_,uVar4);
      pbVar1 = (byte *)*param_1;
      local_148 = *(byte **)(pbVar1 + 0x10);
      if ((*pbVar1 & 1) == 0) {
        local_148 = pbVar1 + 1;
      }
      local_178 = 0;
      local_170 = 0xffffffff;
      local_1a8 = 0;
      local_1a0 = 0xffffffff;
      local_1d8 = 0;
      local_1d0 = 0xffffffff;
      local_208 = 0;
      local_200 = 0xffffffff;
      local_238 = 0;
      local_230 = 0xffffffff;
      local_268 = 0;
      local_260 = 0xffffffff;
      local_298 = 0;
      local_290 = 0xffffffff;
      local_2c8 = 0;
      local_2c0 = 0xffffffff;
      local_140 = (uint)(*pbVar1 >> 1);
      if ((*pbVar1 & 1) != 0) {
        local_140 = (uint)*(undefined8 *)(pbVar1 + 8);
      }
      FUN_00863060(param_3,"$0 oneof $1 {",&local_118,&local_148,&local_178,&local_1a8,&local_1d8,
                   &local_208,&local_238,&local_268,&local_298,&local_2c8);
      FUN_007e6a20(1,param_1[5],param_3);
      if (param_4[2] == '\0') {
        if (0 < *(int *)((long)param_1 + 0x1c)) {
          lVar8 = 0;
          do {
            FUN_007e8050(*(undefined8 *)(param_1[4] + lVar8 * 8),1,1,param_3,param_4);
            lVar8 = lVar8 + 1;
          } while (lVar8 < *(int *)((long)param_1 + 0x1c));
        }
        local_148 = (byte *)0x0;
        uVar4 = (uint)((byte)local_68._0_1_ >> 1);
        local_118 = (void *)((ulong)&local_68 | 1);
        if ((local_68 & 1) != 0) {
          uVar4 = (uint)local_60;
          local_118 = local_58;
        }
        local_110 = (void *)CONCAT44(local_110._4_4_,uVar4);
        local_140 = 0xffffffff;
        local_178 = 0;
        local_170 = 0xffffffff;
        local_1a8 = 0;
        local_1a0 = 0xffffffff;
        local_1d8 = 0;
        local_1d0 = 0xffffffff;
        local_208 = 0;
        local_200 = 0xffffffff;
        local_238 = 0;
        local_230 = 0xffffffff;
        local_268 = 0;
        local_260 = 0xffffffff;
        local_298 = 0;
        local_290 = 0xffffffff;
        local_2c8 = 0;
        local_2c0 = 0xffffffff;
        FUN_00863060(param_3,&DAT_01cfd0d8,&local_118,&local_148,&local_178,&local_1a8,&local_1d8,
                     &local_208,&local_238,&local_268,&local_298,&local_2c8);
      }
      else {
        std::string::append(param_3);
      }
      if (local_e8[0] != 0) {
        uVar5 = local_b8 >> 1 & 0x7f;
        if ((local_b8 & 1) != 0) {
          uVar5 = local_b0;
        }
        if (uVar5 != 0) {
          FUN_007f7ff0(&local_118,local_e8,&local_b8);
          pvVar6 = (void *)((ulong)&local_118 | 1);
          if (((ulong)local_118 & 1) != 0) {
            pvVar6 = local_108;
          }
          std::string::append(param_3,(ulong)pvVar6);
          if (((ulong)local_118 & 1) != 0) {
            operator_delete(local_108);
          }
        }
      }
      if (((byte)local_80[0] & 1) != 0) {
        operator_delete(local_70);
      }
      pbVar1 = local_a0;
      if (local_a0 != (byte *)0x0) {
        if (local_98 != local_a0) {
          pbVar3 = local_98;
          do {
            pbVar2 = pbVar3 + -0x18;
            if ((*pbVar2 & 1) != 0) {
              operator_delete(*(void **)(pbVar3 + -8));
            }
            pbVar3 = pbVar2;
          } while (pbVar1 != pbVar2);
        }
        local_98 = pbVar1;
        operator_delete(local_a0);
      }
      if ((local_b8 & 1) != 0) {
        operator_delete(local_a8);
      }
      if ((local_d0 & 1) != 0) {
        operator_delete(local_c0);
      }
      if ((local_68 & 1) != 0) {
        operator_delete(local_58);
      }
      return;
    }
  }
  else {
    uVar7 = uVar5 + 0x10 & 0xfffffffffffffff0;
    pvVar6 = operator_new(uVar7);
    local_68 = uVar7 | 1;
    local_60 = uVar5;
    local_58 = pvVar6;
  }
                    /* WARNING: Subroutine does not return */
  memset(pvVar6,0x20,uVar5);
}


