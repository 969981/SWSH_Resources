/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a75760; name: FUN_00a75760
 */


undefined8 FUN_00a75760(long param_1,int *param_2,undefined8 param_3)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  long lVar13;
  int iVar14;
  undefined1 auStack_140 [16];
  undefined8 local_130;
  undefined1 auStack_128 [16];
  undefined8 local_118;
  undefined *local_110;
  undefined8 local_108;
  undefined1 auStack_100 [16];
  undefined8 local_f0;
  char *local_e8;
  undefined8 uStack_e0;
  undefined1 auStack_d8 [16];
  undefined8 local_c8;
  char *local_c0;
  undefined8 local_b8;
  undefined1 auStack_b0 [16];
  undefined8 local_a0;
  char *local_98;
  undefined8 local_90;
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [24];
  
  local_a0 = 0xa56fa3af69d2ef3c;
  local_98 = "timing_table";
  local_90 = 0xc;
  FUN_012b4250(auStack_128,param_1 + 0x1a20,&local_a0);
  local_130 = 0;
  iVar12 = *param_2;
  uVar8 = FUN_012b4050(auStack_140,auStack_128);
  FUN_00a75580(uVar8,(long)&local_130 + 4,&local_130,iVar12,auStack_140);
  uVar2 = *(ushort *)(param_2 + 1);
  uVar11 = (uint)uVar2;
  iVar12 = param_2[5];
  iVar4 = *param_2;
  if ((uVar2 == 1) && (iVar4 == 0x2a6)) {
    uVar11 = (uint)(param_2[2] != 1);
  }
  else if ((uVar2 == 1) && (iVar4 == 0x36c)) {
    uVar11 = (uint)(param_2[2] != 1);
  }
  else if ((iVar12 == 2) && (iVar4 == 0x37a)) {
    iVar12 = 0;
    uVar11 = 1;
  }
  else if (((iVar4 - 0x37cU < 7) && ((1 << (ulong)(iVar4 - 0x37cU & 0x1f) & 0x71U) != 0)) ||
          (iVar4 == 0x2ce)) {
    lVar13 = (long)(int)local_130;
    lVar9 = (long)local_130._4_4_;
    iVar4 = (uint)(iVar12 == 2) << 1;
    if (iVar12 == 1) {
      iVar4 = 1;
    }
    if ((int)local_130 <= local_130._4_4_) {
      return 0;
    }
    uVar11 = 0;
    iVar14 = -1;
    do {
      FUN_012b4190(auStack_78,auStack_128,lVar9);
      local_a0 = 0xf3b47097d1e17785;
      local_98 = "monsno";
      local_90 = 6;
      FUN_012b4250(auStack_88,auStack_78,&local_a0);
      iVar3 = FUN_012b4420(auStack_88,0);
      iVar12 = *param_2;
      local_c8 = 0x5069f221ce2139d6;
      local_c0 = "gType";
      local_b8 = 5;
      FUN_012b4250(auStack_b0,auStack_78,&local_c8);
      iVar6 = FUN_012b4420(auStack_b0,0);
      local_f0 = 0x430f1d44ee020fcc;
      local_e8 = "formno";
      uStack_e0 = 6;
      FUN_012b4250(auStack_d8,auStack_78,&local_f0);
      uVar5 = FUN_012b4420(auStack_d8,0);
      local_118 = 0x68a3732777251727;
      local_110 = &DAT_01d00acd;
      local_108 = 3;
      FUN_012b4250(auStack_100,auStack_78,&local_118);
      iVar7 = FUN_012b4420(auStack_100,0);
      if (iVar3 == iVar12) {
        uVar10 = 11000;
        if (iVar6 != iVar4) {
          uVar10 = 10000;
        }
        uVar1 = uVar10 + 100;
        if (uVar5 != uVar2) {
          uVar1 = uVar10;
        }
        uVar5 = uVar1 + 10;
        if (iVar7 != param_2[2]) {
          uVar5 = uVar1;
        }
        iVar12 = (int)lVar9;
        if (uVar5 <= uVar11) {
          uVar5 = uVar11;
          iVar12 = iVar14;
        }
        iVar14 = iVar12;
        uVar11 = uVar5;
      }
      lVar9 = lVar9 + 1;
    } while (lVar13 != lVar9);
    if (iVar14 < 0) {
      return 0;
    }
    goto LAB_00a75adc;
  }
  if (local_130._4_4_ < (int)local_130) {
    lVar13 = (long)(int)local_130;
    lVar9 = (long)local_130._4_4_;
    iVar4 = -1;
    do {
      FUN_012b4190(&local_f0,auStack_128,lVar9);
      local_a0 = 0xf3b47097d1e17785;
      local_98 = "monsno";
      local_90 = 6;
      FUN_012b4250(&local_c8,&local_f0,&local_a0);
      iVar3 = FUN_012b4420(&local_c8,0);
      iVar14 = iVar4;
      if (iVar3 == *param_2) {
        FUN_012b4190(&local_f0,auStack_128,lVar9);
        local_a0 = 0x5069f221ce2139d6;
        local_98 = "gType";
        local_90 = 5;
        FUN_012b4250(&local_c8,&local_f0,&local_a0);
        iVar3 = FUN_012b4420(&local_c8,0);
        if (iVar3 == 0) {
          FUN_012b4190(&local_f0,auStack_128,lVar9);
          local_a0 = 0x430f1d44ee020fcc;
          local_98 = "formno";
          local_90 = 6;
          FUN_012b4250(&local_c8,&local_f0,&local_a0);
          uVar5 = FUN_012b4420(&local_c8,0);
          if ((iVar12 == 0) && (uVar5 == uVar11)) {
            FUN_012b4190(&local_f0,auStack_128,lVar9);
            local_a0 = 0x68a3732777251727;
            local_98 = "sex";
            local_90 = 3;
            FUN_012b4250(&local_c8,&local_f0,&local_a0);
            uVar5 = FUN_012b4420(&local_c8,0);
            if (uVar5 == *(ushort *)(param_2 + 2)) goto LAB_00a75af4;
            FUN_012b4190(&local_f0,auStack_128,lVar9);
            local_a0 = 0x68a3732777251727;
            local_98 = "sex";
            local_90 = 3;
            FUN_012b4250(&local_c8,&local_f0,&local_a0);
            iVar3 = FUN_012b4420(&local_c8,0);
            iVar14 = (int)lVar9;
            if (iVar3 != 0) {
              iVar14 = iVar4;
            }
          }
        }
        else {
          FUN_012b4190(&local_f0,auStack_128,lVar9);
          local_a0 = 0x5069f221ce2139d6;
          local_98 = "gType";
          local_90 = 5;
          FUN_012b4250(&local_c8,&local_f0,&local_a0);
          iVar4 = FUN_012b4420(&local_c8,0);
          if ((iVar4 == 1) && (iVar12 == 1)) goto LAB_00a75af4;
          FUN_012b4190(&local_f0,auStack_128,lVar9);
          local_a0 = 0x5069f221ce2139d6;
          local_98 = "gType";
          local_90 = 5;
          FUN_012b4250(&local_c8,&local_f0,&local_a0);
          iVar4 = FUN_012b4420(&local_c8,0);
          if ((iVar4 == 2) && (iVar12 == 2)) goto LAB_00a75af4;
        }
      }
      lVar9 = lVar9 + 1;
      iVar4 = iVar14;
    } while (lVar9 < lVar13);
    if (iVar14 != -1) {
LAB_00a75adc:
      lVar9 = (long)iVar14;
LAB_00a75af4:
      FUN_012b4190(&local_a0,auStack_128,lVar9);
      FUN_012b4070(param_3,&local_a0);
      return 1;
    }
  }
  return 0;
}


