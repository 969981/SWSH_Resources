/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00809070; name: FUN_00809070
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_00809070(long param_1,double *param_2)

{
  string sVar1;
  char cVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  byte *pbVar9;
  double dVar10;
  char *pcVar11;
  byte *pbVar12;
  char *pcVar13;
  ulong uVar14;
  long lVar15;
  string *psVar16;
  byte local_70 [16];
  void *local_60;
  ulong local_58;
  ulong local_50;
  byte *local_48;
  
  local_50 = 0;
  local_48 = (byte *)0x0;
  uVar4 = false;
  local_58 = 0x2d02;
  psVar16 = (string *)(param_1 + 0x30);
  sVar1 = *psVar16;
  uVar6 = (ulong)((byte)sVar1 >> 1);
  if (((byte)sVar1 & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 0x38);
  }
  lVar15 = param_1 + 0x28;
  if (uVar6 == 1) {
    if (((byte)sVar1 & 1) == 0) {
      if (*(char *)(param_1 + 0x31) == '-') {
        lVar8 = -(ulong)((byte)sVar1 >> 1);
        pcVar11 = (char *)(param_1 + 0x32);
        pcVar13 = (char *)((ulong)&local_58 | 2);
        do {
          lVar8 = lVar8 + 1;
          if (lVar8 == 0) goto LAB_00809120;
          cVar2 = *pcVar13;
          cVar3 = *pcVar11;
          pcVar11 = pcVar11 + 1;
          pcVar13 = pcVar13 + 1;
        } while (cVar3 == cVar2);
      }
    }
    else if (**(char **)(param_1 + 0x40) == '-') {
LAB_00809120:
      FUN_00842de0(lVar15);
      uVar4 = true;
      goto LAB_0080912c;
    }
    uVar4 = false;
    iVar5 = *(int *)(param_1 + 0x28);
  }
  else {
LAB_0080912c:
    iVar5 = *(int *)(param_1 + 0x28);
  }
  if (iVar5 != 2) {
    if (iVar5 != 4) {
      if (iVar5 == 3) {
        uVar6 = FUN_00809470(param_1,&local_58,0xffffffffffffffff);
        if ((uVar6 & 1) == 0) {
          return 0;
        }
        dVar10 = (double)NEON_ucvtf(local_58);
        *param_2 = dVar10;
        goto joined_r0x008091c0;
      }
      std::operator+("Expected double, got: ",psVar16);
      FUN_00802750(param_1,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),&local_58
                  );
      goto joined_r0x00809354;
    }
    dVar10 = (double)FUN_00843380(psVar16);
    *param_2 = dVar10;
    FUN_00842de0(lVar15);
    goto joined_r0x008091c0;
  }
  std::string::string((string *)&local_58,psVar16);
  if ((local_58 & 1) == 0) {
    pbVar9 = (byte *)((ulong)&local_58 | 1);
    pbVar12 = pbVar9 + (local_58 >> 1 & 0x7f);
    if (pbVar9 != pbVar12) {
LAB_00809238:
      do {
        if (*pbVar9 - 0x41 < 0x1a) {
          *pbVar9 = *pbVar9 + 0x20;
        }
        pbVar9 = pbVar9 + 1;
      } while (pbVar12 != pbVar9);
    }
  }
  else {
    pbVar12 = local_48 + local_50;
    pbVar9 = local_48;
    if (local_48 != pbVar12) goto LAB_00809238;
  }
  uVar7 = (uint)local_58 & 0xff;
  uVar14 = (ulong)(uVar7 >> 1);
  uVar6 = uVar14;
  if ((local_58 & 1) != 0) {
    uVar6 = local_50;
  }
  if (uVar6 == 3) {
    iVar5 = std::string::compare((ulong)&local_58,0,(char *)0xffffffffffffffff,0x1cddd59);
    if (iVar5 != 0) {
      uVar7 = (uint)(byte)local_58._0_1_;
      uVar14 = (ulong)((byte)local_58._0_1_ >> 1);
      goto LAB_008092ac;
    }
LAB_0080935c:
    dVar10 = INFINITY;
  }
  else {
LAB_008092ac:
    uVar7 = uVar7 & 1;
    uVar6 = uVar14;
    if (uVar7 != 0) {
      uVar6 = local_50;
    }
    if (uVar6 == 8) {
      iVar5 = std::string::compare((ulong)&local_58,0,(char *)0xffffffffffffffff,0x1d3a0e0);
      if (iVar5 == 0) goto LAB_0080935c;
      uVar7 = (byte)local_58._0_1_ & 1;
      uVar14 = (ulong)((byte)local_58._0_1_ >> 1);
    }
    if (uVar7 != 0) {
      uVar14 = local_50;
    }
    if ((uVar14 != 3) ||
       (iVar5 = std::string::compare((ulong)&local_58,0,(char *)0xffffffffffffffff,0x1d14976),
       iVar5 != 0)) {
      std::operator+("Expected double, got: ",(string *)&local_58);
      FUN_00802750(param_1,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),local_70)
      ;
      if ((local_70[0] & 1) != 0) {
        operator_delete(local_60);
      }
joined_r0x00809354:
      if ((local_58 & 1) != 0) {
        operator_delete(local_48);
      }
      return 0;
    }
    dVar10 = NAN;
  }
  *param_2 = dVar10;
  FUN_00842de0(lVar15);
  if ((local_58 & 1) != 0) {
    operator_delete(local_48);
  }
joined_r0x008091c0:
  if ((bool)uVar4) {
    *param_2 = -*param_2;
  }
  return 1;
}


