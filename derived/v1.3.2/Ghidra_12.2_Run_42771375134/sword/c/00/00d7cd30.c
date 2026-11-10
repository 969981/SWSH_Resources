/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d7cd30; name: FUN_00d7cd30
 */


void FUN_00d7cd30(long param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  int iVar3;
  ushort uVar4;
  undefined *puVar5;
  bool bVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  int *piVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  long *plVar17;
  long lVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  int local_1a8;
  int iStack_1a4;
  uint local_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined4 local_170;
  ulong local_68;
  long local_60;
  long local_58;
  
  *(undefined4 *)(param_1 + 0x5dc) = *param_2;
  lVar15 = *(long *)(*(long *)(param_1 + 0x5f0) + 0xe8);
  piVar13 = (int *)(param_1 + 0x5dc);
  if (lVar15 != 0) {
    *(long *)(*(long *)(param_1 + 0x5f0) + 0xe8) = lVar15 - ((lVar15 << 4) >> 4);
  }
  local_68 = local_68 & 0xffffffff00000000;
  iVar8 = FUN_00d756f0(*(long *)(param_1 + 0x5d0) + 0x60,piVar13);
  puVar5 = PTR_DAT_02710860;
  if (iVar8 != 0) {
    do {
      lVar15 = *(long *)(param_1 + 0x5f0);
      uVar10 = FUN_00d75680(*(long *)(param_1 + 0x5d0) + 0x60,piVar13,&local_68);
      local_1a8 = (int)uVar10;
      iStack_1a4 = (int)((ulong)uVar10 >> 0x20);
      local_1a0 = local_1a0 & 0xffffff00;
      uVar16 = *(ulong *)(lVar15 + 0xe8);
      if (uVar16 < *(ulong *)(lVar15 + 0xf0)) {
        lVar18 = *(long *)(lVar15 + 0xe0);
        uVar10 = *(undefined8 *)(lVar15 + 0xa0);
        lVar11 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
        if (0xf < *(ulong *)(lVar11 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = uVar10;
        *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
        puVar2 = (undefined8 *)(lVar18 + uVar16 * 0x10);
        *puVar2 = CONCAT44(iStack_1a4,local_1a8);
        puVar2[1] = CONCAT44(uStack_19c,local_1a0);
        *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
        *(long *)(lVar15 + 0xe8) = *(long *)(lVar15 + 0xe8) + 1;
      }
      else {
        local_58 = *(long *)(lVar15 + 0xe0) + uVar16 * 0x10;
        FUN_00d820f0(&local_60,lVar15 + 0xa0,&local_58,1,&local_1a8);
      }
      uVar1 = (int)local_68 + 1;
      local_68 = CONCAT44(local_68._4_4_,uVar1);
      uVar9 = FUN_00d756f0(*(long *)(param_1 + 0x5d0) + 0x60,piVar13);
    } while (uVar1 < uVar9);
  }
  bVar7 = FUN_00d705e0(piVar13);
  lVar15 = param_1 + (ulong)bVar7 * 4;
  FUN_016c2c80(*(undefined8 *)(param_1 + 0x5e8),*(undefined4 *)(lVar15 + 0x608),0);
  FUN_016c2c90(*(undefined8 *)(param_1 + 0x5e8),*(undefined4 *)(lVar15 + 0x634));
  iVar8 = *(int *)(*(long *)(param_1 + 0x5f0) + 0xe8);
  if ((iVar8 == 0) && (**(int **)(*(long *)(param_1 + 0x5d0) + 0x280) == 2)) {
    uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x5d0) + 0x278);
    lVar15 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1e8);
    if (lVar15 == 0) {
      uVar12 = FUN_01524df0(0);
      FUN_00d83af0(uVar10,uVar12);
      iVar3 = *piVar13;
    }
    else {
      plVar17 = (long *)(lVar15 + 0x48);
      (**(code **)(*plVar17 + 0x10))(plVar17);
      uVar12 = FUN_01524df0(lVar15);
      FUN_00d83af0(uVar10,uVar12);
      (**(code **)(*plVar17 + 0x18))(plVar17);
      iVar3 = *piVar13;
    }
    if (((iVar3 == 4) || (iVar3 == 1)) && (*(char *)(param_1 + 0x668) != '\0')) {
      FUN_00d83b20(*(undefined8 *)(*(long *)(param_1 + 0x5d0) + 0x278),8);
    }
  }
  FUN_00d70930(&local_58,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0));
  if (iVar8 == 0) {
    uVar20 = 0x40000000;
  }
  else {
    iVar3 = **(int **)(*(long *)(param_1 + 0x5d0) + 0x280);
    uVar19 = 0x40000000;
    if (iVar3 != 0) {
      uVar19 = 0;
    }
    uVar20 = 0x3f800000;
    if (iVar3 != 2) {
      uVar20 = uVar19;
    }
  }
  local_1a8 = -0x258b390d;
  iStack_1a4 = 0x997e464c;
  FUN_00ffd510(uVar20,param_1 + 0x100,&local_1a8);
  *(undefined1 *)(param_1 + 0x5e4) = 0;
  if (((iVar8 != 0) && (*piVar13 == 8)) && (**(int **)(*(long *)(param_1 + 0x5d0) + 0x280) == 1)) {
    bVar7 = FUN_00d71370(*(long *)(*(long *)(param_1 + 0x5d0) + 0x278) + 0x58);
    *(byte *)(param_1 + 0x5e4) = ~bVar7 & 1;
  }
  local_1a8 = 0x1bb27824;
  iStack_1a4 = 0x26cacedb;
  lVar15 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&local_1a8);
  *(byte *)(lVar15 + 0x58) = *(byte *)(lVar15 + 0x58) & 0xfe | *(byte *)(param_1 + 0x5e4);
  local_1a8._0_1_ = 0xb2;
  local_1a8._1_3_ = 0x7f312f;
  iStack_1a4 = 0xb340ca00;
  lVar15 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&local_1a8);
  *(byte *)(lVar15 + 0x58) = *(byte *)(lVar15 + 0x58) & 0xfe | *(byte *)(param_1 + 0x5e4);
  FUN_016b2d70(*(undefined8 *)(param_1 + 0x5e8),*(char *)(param_1 + 0x5e4) == '\0');
  local_1a8._0_1_ = 0;
  do {
    uVar10 = FUN_00d707f0(&local_1a8,*(undefined8 *)(*(long *)(param_1 + 0x5d0) + 0x280));
    uVar10 = FUN_00ffdb00(param_1 + 0x100,uVar10);
    FUN_016b2d70(uVar10,*(char *)(param_1 + 0x5e4) == '\0');
    local_1a8._0_1_ = (byte)local_1a8 + 1;
  } while ((byte)local_1a8 < 7);
  iVar8 = **(int **)(*(long *)(param_1 + 0x5d0) + 0x280);
  if (iVar8 == 2) {
    FUN_00d7d7c0(param_1);
  }
  else if ((iVar8 == 1) &&
          (iVar8 = FUN_00d756f0(*(long *)(param_1 + 0x5d0) + 0x60,piVar13), iVar8 == 0)) {
    FUN_00d7d5b0(param_1);
  }
  puVar5 = PTR_DAT_0271e438;
  lVar15 = *(long *)(param_1 + 0x5d0);
  if (**(int **)(lVar15 + 0x280) != 1) goto LAB_00d7d2b8;
  if (*piVar13 == 0xb) {
    lVar11 = *(long *)(param_1 + 0x5f0);
    if (*(int *)(lVar11 + 0xe8) != 0) {
      lVar18 = 0;
      uVar16 = 1;
      do {
        local_1a8._0_1_ = *(undefined1 *)(*(long *)(lVar15 + 0x278) + 0x58);
        piVar13 = (int *)FUN_00d70a10(*(long *)(*(long *)(lVar11 + 0xe0) + lVar18) + 0x18,&local_1a8
                                     );
        uVar14 = FUN_00d71370(*(long *)(*(long *)(param_1 + 0x5d0) + 0x278) + 0x58);
        if ((uVar14 & 1) == 0) {
          if (*(ushort *)((long)piVar13 - (long)*piVar13) < 5) {
            bVar6 = *(long *)puVar5 == 0 || *(long *)(puVar5 + 8) == 0;
          }
          else {
            uVar4 = ((ushort *)((long)piVar13 - (long)*piVar13))[2];
            uVar14 = (ulong)uVar4;
            if (uVar14 == 0) {
              if (*(long *)puVar5 != 0) goto LAB_00d7d1e0;
            }
            else if (*(long *)((long)piVar13 + uVar14) != *(long *)puVar5) {
LAB_00d7d1e0:
              if (uVar4 == 0) {
                lVar15 = 0;
              }
              else {
                lVar15 = *(long *)((long)piVar13 + uVar14);
              }
              bVar6 = lVar15 == *(long *)(puVar5 + 8);
              goto LAB_00d7d1fc;
            }
            bVar6 = true;
          }
        }
        else {
          bVar6 = false;
        }
LAB_00d7d1fc:
        uVar14 = FUN_00d70df0(piVar13,*(long *)(*(long *)(param_1 + 0x5d0) + 0x278) + 0x58,bVar6 ^ 1
                             );
        if ((uVar14 & 1) != 0) goto LAB_00d7d22c;
        lVar11 = *(long *)(param_1 + 0x5f0);
        if (*(uint *)(lVar11 + 0xe8) <= uVar16) goto code_r0x00d7d228;
        lVar15 = *(long *)(param_1 + 0x5d0);
        lVar18 = lVar18 + 0x10;
        uVar16 = uVar16 + 1;
      } while( true );
    }
  }
  else {
    iVar8 = FUN_00d71450(piVar13);
    lVar15 = *(long *)(*(long *)(param_1 + 0x5d0) + 0x278);
    lVar11 = *(long *)(lVar15 + (long)iVar8 * 8 + 0x60);
    local_60 = lVar11;
    if ((*(int *)(param_1 + 0x5dc) != 0xb) &&
       (lVar15 = FUN_00d712e0(piVar13,lVar15 + 0x58), lVar11 != lVar15)) {
      lVar15 = *(long *)(*(long *)PTR_DAT_02710848 + 0x78);
      if (lVar15 == 0) {
        FUN_00c58c10(&local_68,0);
      }
      else {
        plVar17 = (long *)(lVar15 + 0x48);
        (**(code **)(*plVar17 + 0x10))(plVar17);
        FUN_00c58c10(&local_68,lVar15);
        (**(code **)(*plVar17 + 0x18))(plVar17);
      }
      local_1a8 = (uint)local_1a8._1_3_ << 8;
      local_170 = 0;
      iStack_1a4 = 0;
      local_1a0 = 0x3ff;
      local_180 = 0;
      uStack_178 = 0;
      local_198 = 0;
      local_190 = 0;
      uStack_188 = 0;
      FUN_00cc4490(local_68,*(undefined1 *)(*(long *)(*(long *)(param_1 + 0x5d0) + 0x278) + 0x58),
                   iVar8,&local_60,&local_1a8);
      if (iStack_1a4 == 0xc) {
        uVar16 = FUN_00d71480(&local_1a8);
        if ((uVar16 & 1) == 0) {
          if (*piVar13 != 4) goto LAB_00d7d3c0;
        }
        else if (*piVar13 != 3) goto LAB_00d7d3c0;
        bVar7 = 0;
      }
      else {
LAB_00d7d3c0:
        bVar7 = 1;
      }
      FUN_00d7da50(param_1,&local_1a8);
      if (local_68 != 0) {
        (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
        local_68 = 0;
      }
      goto LAB_00d7d288;
    }
  }
  bVar7 = 0;
  goto LAB_00d7d288;
code_r0x00d7d228:
  piVar13 = (int *)0x0;
LAB_00d7d22c:
  bVar7 = 0;
  if (piVar13 != (int *)0x0) {
    FUN_00d7dc80(param_1,piVar13);
    bVar7 = 1;
  }
LAB_00d7d288:
  local_1a8._0_1_ = 0x31;
  local_1a8._1_3_ = 0x72e36b;
  iStack_1a4 = 0x59ee5330;
  lVar15 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&local_1a8);
  *(byte *)(lVar15 + 0x58) = *(byte *)(lVar15 + 0x58) & 0xfe | bVar7;
LAB_00d7d2b8:
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  FUN_016bef00(*(undefined8 *)(param_1 + 0x5e8));
  FUN_016b2da0(*(undefined8 *)(param_1 + 0x5f8),1);
  FUN_016b2da0(*(undefined8 *)(param_1 + 0x600),1);
  return;
}


