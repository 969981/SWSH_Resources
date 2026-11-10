/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a75d10; name: FUN_00a75d10
 */


undefined8 FUN_00a75d10(long param_1,int *param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  ulong local_120;
  undefined8 local_100;
  undefined *local_f8;
  undefined8 local_f0;
  undefined1 auStack_e8 [16];
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [16];
  undefined8 local_98;
  undefined8 local_90;
  char *pcStack_88;
  undefined8 local_80;
  undefined1 auStack_78 [24];
  
  local_90 = 0x73b660db9e89286b;
  pcStack_88 = "waza_table";
  local_80 = 10;
  FUN_012b4250(auStack_78,param_1 + 0x1a20,&local_90);
  local_98 = 0;
  iVar6 = *param_2;
  uVar7 = FUN_012b4050(auStack_a8,auStack_78);
  FUN_00a75580(uVar7,(long)&local_98 + 4,&local_98,iVar6,auStack_a8);
  uVar3 = *(ushort *)(param_2 + 1);
  uVar10 = (uint)uVar3;
  iVar6 = param_2[5];
  iVar9 = *param_2;
  uVar11 = uVar10;
  if ((((uVar3 == 1) && (iVar9 == 0x2a6)) || ((uVar3 == 1 && (iVar9 == 0x36c)))) &&
     (uVar11 = 0, param_2[2] != 1)) {
    uVar11 = uVar10;
  }
  lVar2 = (long)(int)local_98;
  uVar8 = (ulong)local_98._4_4_;
  uVar7 = 0;
  if (iVar6 == 2 && iVar9 == 0x37a) {
    uVar11 = 1;
  }
  iVar1 = 0;
  if (iVar6 != 2 || iVar9 != 0x37a) {
    iVar1 = iVar6;
  }
  if (local_98._4_4_ < (int)local_98) {
    iVar9 = -1;
    local_120 = 0xffffffff;
    iVar6 = -1;
    do {
      while( true ) {
        FUN_012b4190(auStack_b8,auStack_78,uVar8);
        local_90 = 0xf3b47097d1e17785;
        pcStack_88 = "monsno";
        local_80 = 6;
        FUN_012b4250(&local_100,auStack_b8,&local_90);
        iVar4 = FUN_012b4420(&local_100,0);
        if (iVar4 == *param_2) break;
joined_r0x00a760f0:
        iVar4 = iVar6;
        uVar8 = uVar8 + 1;
        iVar6 = iVar4;
        if (lVar2 <= (long)uVar8) goto LAB_00a761bc;
      }
      FUN_012b4190(auStack_b8,auStack_78,uVar8);
      local_90 = 0x5069f221ce2139d6;
      pcStack_88 = "gType";
      local_80 = 5;
      FUN_012b4250(&local_100,auStack_b8,&local_90);
      iVar4 = FUN_012b4420(&local_100,0);
      if (iVar4 != 0) {
        FUN_012b4190(auStack_b8,auStack_78,uVar8);
        local_90 = 0x5069f221ce2139d6;
        pcStack_88 = "gType";
        local_80 = 5;
        FUN_012b4250(&local_100,auStack_b8,&local_90);
        iVar4 = FUN_012b4420(&local_100,0);
        if ((iVar1 != 1) || (iVar4 != 1)) {
          FUN_012b4190(auStack_b8,auStack_78,uVar8);
          local_90 = 0x5069f221ce2139d6;
          pcStack_88 = "gType";
          local_80 = 5;
          FUN_012b4250(&local_100,auStack_b8,&local_90);
          iVar4 = FUN_012b4420(&local_100,0);
          if ((iVar1 != 2) || (iVar4 != 2)) goto joined_r0x00a760f0;
        }
        goto LAB_00a761e4;
      }
      FUN_012b4190(auStack_b8,auStack_78,uVar8);
      local_90 = 0x430f1d44ee020fcc;
      pcStack_88 = "formno";
      local_80 = 6;
      FUN_012b4250(&local_100,auStack_b8,&local_90);
      uVar10 = FUN_012b4420(&local_100,0);
      iVar4 = (int)uVar8;
      if (uVar10 == uVar11) {
        if (iVar1 == 0) {
          FUN_012b4190(auStack_b8,auStack_78,uVar8);
          local_90 = 0x68a3732777251727;
          pcStack_88 = "sex";
          local_80 = 3;
          FUN_012b4250(&local_100,auStack_b8,&local_90);
          uVar10 = FUN_012b4420(&local_100,0);
          if (uVar10 == *(ushort *)(param_2 + 2)) goto LAB_00a761e4;
LAB_00a7607c:
          FUN_012b4190(auStack_b8,auStack_78,uVar8);
          local_90 = 0x68a3732777251727;
          pcStack_88 = "sex";
          local_80 = 3;
          FUN_012b4250(&local_100,auStack_b8,&local_90);
          iVar5 = FUN_012b4420(&local_100,0);
          if (iVar5 != 0) {
            iVar4 = iVar9;
          }
        }
        else {
          FUN_012b4190(auStack_b8,auStack_78,uVar8);
          local_90 = 0x68a3732777251727;
          pcStack_88 = "sex";
          local_80 = 3;
          FUN_012b4250(&local_100,auStack_b8,&local_90);
          uVar10 = FUN_012b4420(&local_100,0);
          if (uVar10 != *(ushort *)(param_2 + 2)) goto LAB_00a7607c;
          local_120 = uVar8 & 0xffffffff;
          iVar4 = iVar9;
        }
        iVar9 = iVar4;
        goto joined_r0x00a760f0;
      }
      if (iVar6 != -1) goto joined_r0x00a760f0;
      FUN_012b4190(auStack_c8,auStack_78,uVar8);
      local_90 = 0x430f1d44ee020fcc;
      pcStack_88 = "formno";
      local_80 = 6;
      FUN_012b4250(auStack_b8,auStack_c8,&local_90);
      iVar6 = FUN_012b4420(auStack_b8,0);
      if (iVar6 != 0) {
        iVar6 = -1;
        goto joined_r0x00a760f0;
      }
      FUN_012b4190(auStack_e8,auStack_78,uVar8);
      local_100 = 0x68a3732777251727;
      local_f8 = &DAT_01d00acd;
      local_f0 = 3;
      FUN_012b4250(auStack_d8,auStack_e8,&local_100);
      iVar6 = FUN_012b4420(auStack_d8,0);
      if (iVar6 != 0) {
        iVar4 = -1;
      }
      uVar8 = uVar8 + 1;
      iVar6 = iVar4;
    } while ((long)uVar8 < lVar2);
LAB_00a761bc:
    if ((int)local_120 == -1) {
      if ((iVar9 == -1) && (iVar9 = iVar4, iVar4 == -1)) {
        return 0;
      }
      FUN_012b4190(&local_90,auStack_78,(long)iVar9);
    }
    else {
      uVar8 = (ulong)(int)local_120;
LAB_00a761e4:
      FUN_012b4190(&local_90,auStack_78,uVar8);
    }
    FUN_012b4070(param_3,&local_90);
    uVar7 = 1;
  }
  return uVar7;
}


