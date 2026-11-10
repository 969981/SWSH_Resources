/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f1a220; name: FUN_00f1a220
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00f1a220(long param_1)

{
  undefined1 auVar1 [12];
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 uVar15;
  uint uVar16;
  byte *pbVar17;
  long lVar18;
  byte *pbVar19;
  undefined8 uVar20;
  undefined8 *puVar21;
  long *plVar22;
  undefined8 *puVar23;
  byte bVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  float fVar30;
  undefined8 uVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  float fVar34;
  float fVar35;
  float fVar36;
  undefined4 uVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  long *local_280;
  undefined8 *local_270;
  float fStack_268;
  long local_260 [4];
  long local_240;
  undefined8 uStack_238;
  uint local_230;
  undefined4 uStack_22c;
  undefined4 local_228;
  undefined2 uStack_224;
  undefined2 uStack_222;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 local_13c;
  undefined4 uStack_138;
  undefined4 local_134;
  undefined4 uStack_130;
  undefined4 local_12c;
  undefined4 uStack_128;
  undefined4 local_124;
  undefined4 uStack_120;
  undefined4 local_11c;
  undefined4 uStack_118;
  undefined8 local_114;
  undefined8 local_10c;
  undefined8 local_104;
  undefined8 local_fc;
  undefined8 local_f4;
  undefined8 local_ec;
  undefined8 local_e4;
  undefined8 local_dc;
  undefined8 local_d4;
  undefined8 local_cc;
  undefined4 local_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined8 local_90;
  
  if (0xb < *(uint *)(param_1 + 0x9e4)) {
    return 0;
  }
  lVar29 = *(long *)PTR_DAT_027194d8;
  switch(*(uint *)(param_1 + 0x9e4)) {
  case 0:
    *(undefined8 *)(param_1 + 0xa08) = 0x67ba81af02b647b4;
    *(undefined8 *)(param_1 + 0x9e8) = 0x49529972e22fc3bb;
    *(char **)(param_1 + 0x9f0) = "z_t0301_g0102";
    *(undefined8 *)(param_1 + 0x9f8) = 0xd;
    if (*(long *)(param_1 + 0xa00) == 0) {
      iVar5 = 0;
    }
    else {
      (**(code **)(*(long *)(*(long *)(param_1 + 0xa00) + 0x48) + 0x18))();
      iVar5 = *(int *)(param_1 + 0x9e4);
      *(undefined8 *)(param_1 + 0xa00) = 0;
    }
    *(undefined8 *)(param_1 + 0xa00) = 0;
    *(int *)(param_1 + 0x9e4) = iVar5 + 1;
    break;
  case 1:
    break;
  case 2:
    goto LAB_00f1a4fc;
  case 3:
    goto LAB_00f1a91c;
  case 4:
    goto LAB_00f1aa38;
  case 5:
    goto switchD_00f1a274_caseD_5;
  case 6:
    goto switchD_00f1a274_caseD_6;
  case 7:
    goto switchD_00f1a274_caseD_7;
  case 8:
    goto switchD_00f1a274_caseD_8;
  case 9:
    goto switchD_00f1a274_caseD_9;
  case 10:
    goto switchD_00f1a274_caseD_a;
  case 0xb:
    goto switchD_00f1a274_caseD_b;
  }
  uVar16 = 0;
  *(undefined8 *)(param_1 + 0x7a0) = *(undefined8 *)(param_1 + 0x798);
  do {
    local_270 = (undefined8 *)(param_1 + 0x9f0);
    snprintf((char *)&local_240,0x20,"%s%s%02d",(char *)*local_270,"_DogPath_",uVar16);
    uVar14 = 0xcbf29ce484222645;
    if ((byte)local_240 != 0) {
      pbVar17 = (byte *)((ulong)&local_240 | 1);
      bVar24 = (byte)local_240;
      do {
        uVar14 = (uVar14 ^ bVar24) * 0x100000001b3;
        bVar24 = *pbVar17;
        pbVar17 = pbVar17 + 1;
      } while (bVar24 != 0);
    }
    plVar11 = *(long **)(lVar29 + 0xb0);
    plVar22 = *(long **)(lVar29 + 0xb8);
    while( true ) {
      if (plVar11 == plVar22) goto LAB_00f1a4c4;
      lVar18 = FUN_00f1bc10(*plVar11 + 0x50);
      if (((lVar18 != 0) && (*(ulong *)(lVar18 + 0x1a0) == uVar14)) &&
         (uVar12 = (**(code **)(*(long *)*plVar11 + 0x88))(), (uVar12 & 1) == 0)) break;
      plVar11 = plVar11 + 1;
    }
    plVar11 = *(long **)(param_1 + 0x7a0);
    local_260[0] = lVar18;
    if (plVar11 < *(long **)(param_1 + 0x7a8)) {
      uVar15 = *(undefined8 *)(param_1 + 0x7b0);
      lVar18 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar18 + 0x80)) goto LAB_00f1bc0c;
      *(undefined8 *)(lVar18 + *(ulong *)(lVar18 + 0x80) * 8) = uVar15;
      *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + 1;
      *plVar11 = local_260[0];
      *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + -1;
      *(long *)(param_1 + 0x7a0) = *(long *)(param_1 + 0x7a0) + 8;
    }
    else {
      FUN_00dbbe90(param_1 + 0x798,local_260);
    }
    uVar16 = uVar16 + 1;
  } while (uVar16 < 6);
LAB_00f1a4c4:
  puVar13 = *(undefined8 **)(param_1 + 0x7a0);
  puVar23 = *(undefined8 **)(param_1 + 0x798);
  if (*(undefined8 **)(param_1 + 0x798) == puVar13) {
    return 0;
  }
  do {
    puVar21 = puVar23 + 1;
    uVar14 = (**(code **)(*(long *)*puVar23 + 0x70))();
    if ((uVar14 & 1) == 0) {
      return 0;
    }
    puVar23 = puVar21;
  } while (puVar13 != puVar21);
  *(int *)(param_1 + 0x9e4) = *(int *)(param_1 + 0x9e4) + 1;
LAB_00f1a4fc:
  uVar16 = 0;
  *(undefined8 *)(param_1 + 2000) = *(undefined8 *)(param_1 + 0x7c8);
LAB_00f1a534:
  local_280 = (long *)(lVar29 + 0xb0);
  snprintf((char *)&local_240,0x20,"%s%s%02d",*(char **)(param_1 + 0x9f0),"_DogPokemon_",uVar16);
  uVar14 = 0xcbf29ce484222645;
  if ((byte)local_240 != 0) {
    uVar14 = 0xcbf29ce484222645;
    pbVar17 = (byte *)((ulong)&local_240 | 1);
    bVar24 = (byte)local_240;
    do {
      uVar14 = (uVar14 ^ bVar24) * 0x100000001b3;
      bVar24 = *pbVar17;
      pbVar17 = pbVar17 + 1;
    } while (bVar24 != 0);
  }
  plVar11 = *(long **)(lVar29 + 0xb8);
  for (local_280 = (long *)*local_280; local_280 != plVar11; local_280 = local_280 + 1) {
    lVar27 = *local_280;
    plVar22 = (long *)(*(code *)**(undefined8 **)(lVar27 + 0x50))((undefined8 *)(lVar27 + 0x50));
    lVar18 = FUN_01590f40();
    for (; plVar22 != (long *)0x0; plVar22 = (long *)*plVar22) {
      if (plVar22 == (long *)lVar18) {
        if ((*(ulong *)(lVar27 + 0x1a0) == uVar14) &&
           (uVar12 = (**(code **)(*(long *)*local_280 + 0x88))(), (uVar12 & 1) == 0)) {
          plVar11 = *(long **)(param_1 + 2000);
          local_260[0] = lVar27;
          if (plVar11 < *(long **)(param_1 + 0x7d8)) {
            uVar15 = *(undefined8 *)(param_1 + 0x7e0);
            lVar18 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
            if (0xf < *(ulong *)(lVar18 + 0x80)) goto LAB_00f1bc0c;
            *(undefined8 *)(lVar18 + *(ulong *)(lVar18 + 0x80) * 8) = uVar15;
            *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + 1;
            *plVar11 = local_260[0];
            *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + -1;
            *(long *)(param_1 + 2000) = *(long *)(param_1 + 2000) + 8;
          }
          else {
            FUN_00dbbe90(param_1 + 0x7c8,local_260);
          }
          uVar16 = uVar16 + 1;
          if (uVar16 < 6) goto LAB_00f1a534;
          goto LAB_00f1a69c;
        }
        break;
      }
    }
  }
LAB_00f1a69c:
  puVar23 = *(undefined8 **)(param_1 + 0x7c8);
  puVar13 = *(undefined8 **)(param_1 + 2000);
  if (puVar23 == puVar13) {
    return 0;
  }
  do {
    puVar21 = puVar23 + 1;
    uVar14 = (**(code **)(*(long *)*puVar23 + 0x70))();
    if ((uVar14 & 1) == 0) {
      return 0;
    }
    puVar23 = puVar21;
  } while (puVar13 != puVar21);
  uVar14 = *(long *)(param_1 + 2000) - *(long *)(param_1 + 0x7c8);
  if (0 < (int)(uVar14 >> 3)) {
    uVar12 = 0;
    do {
      lVar18 = FUN_00f1bc10(*(long *)(*(long *)(param_1 + 0x798) + uVar12 * 8) + 0x50);
      lVar27 = *(long *)(param_1 + 0x7c8);
      uStack_22c = 0;
      local_228 = 0x40a00000;
      local_230 = local_230 & 0xffffff00;
      uStack_224 = 0;
      local_220 = CONCAT35(local_220._5_3_,0x3e4ccccd);
      local_240 = *(long *)(lVar18 + 0x1a0);
      uStack_118 = 0xffffffff;
      local_218 = 0xffffffff;
      uStack_210 = 0;
      local_208 = 0xffffffff;
      uStack_200 = 0;
      local_1f8 = 0xffffffff;
      uStack_1f0 = 0;
      local_1e8 = 0xffffffff;
      uStack_1e0 = 0;
      local_1d8 = 0xffffffff;
      uStack_1d0 = 0;
      local_1c8 = 0xffffffff;
      uStack_1c0 = 0;
      local_1b8 = 0xffffffff;
      uStack_1b0 = 0;
      local_1a8 = 0xffffffff;
      uStack_1a0 = 0;
      local_198 = 0xffffffff;
      uStack_190 = 0;
      local_188 = 0xffffffff;
      uStack_180 = 0;
      local_178 = 0xffffffff;
      uStack_170 = 0;
      local_168 = 0xffffffff;
      uStack_160 = 0;
      local_158 = 0xffffffff;
      uStack_150 = 0;
      local_148 = 0xffffffff;
      uStack_144 = 0;
      uStack_140 = 0;
      local_13c = 0;
      uStack_138 = 0xffffffff;
      local_134 = 0;
      uStack_130 = 0;
      local_12c = 0;
      uStack_128 = 0xffffffff;
      local_124 = 0;
      uStack_120 = 0;
      local_11c = 0;
      local_114 = 0;
      local_10c = 0xffffffff00000000;
      local_104 = 0;
      local_fc = 0xffffffff00000000;
      local_f4 = 0;
      local_ec = 0xffffffff00000000;
      local_e4 = 0;
      local_dc = 0xffffffff00000000;
      local_d4 = 0;
      local_cc = 0xffffffff00000000;
      local_c4 = 0;
      uStack_c0 = 0;
      uStack_bc = 0;
      uStack_b8 = 0xffffffff;
      uStack_b4 = 0;
      local_b0 = 0;
      uStack_ac = 0;
      local_a8 = 0xffffffff;
      uStack_a4 = 0;
      local_a0 = 0;
      uStack_9c = 0;
      local_98 = 0xffffffff;
      uStack_94 = 0;
      local_90 = 0;
      uStack_238 = 0x3f80000000000000;
      lVar18 = *(long *)(lVar27 + uVar12 * 8);
      if (*(long *)(lVar18 + 0x1d8) != 0) {
        FUN_00f20690(lVar18 + 0x1e0,*(long *)(lVar18 + 0x1d8),lVar18,&local_240);
        lVar18 = *(long *)(lVar27 + uVar12 * 8);
      }
      FUN_00f207e0(lVar18 + 0x1e0);
      uVar12 = uVar12 + 1;
    } while ((uVar14 >> 3 & 0xffffffff) != uVar12);
  }
  *(int *)(param_1 + 0x9e4) = *(int *)(param_1 + 0x9e4) + 1;
LAB_00f1a91c:
  *(undefined8 *)(param_1 + 0x830) = *(undefined8 *)(param_1 + 0x828);
  puVar2 = PTR_DAT_02710860;
  plVar11 = *(long **)(lVar29 + 0xb0);
  plVar22 = *(long **)(lVar29 + 0xb8);
  if (plVar11 != plVar22) {
LAB_00f1a940:
    do {
      lVar18 = FUN_00eca190(*plVar11 + 0x50);
      if ((lVar18 != 0) && (uVar14 = (**(code **)(*(long *)*plVar11 + 0x88))(), (uVar14 & 1) == 0))
      {
        plVar8 = *(long **)(param_1 + 0x830);
        if ((ulong)((long)plVar8 - *(long *)(param_1 + 0x828)) <
            (ulong)((long)*(long **)(param_1 + 0x838) - *(long *)(param_1 + 0x828))) {
          local_240 = lVar18;
          if (*(long **)(param_1 + 0x838) <= plVar8) {
            FUN_00dbbe90(param_1 + 0x828,&local_240);
            plVar11 = plVar11 + 1;
            if (plVar22 == plVar11) break;
            goto LAB_00f1a940;
          }
          uVar15 = *(undefined8 *)(param_1 + 0x840);
          lVar18 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
          if (0xf < *(ulong *)(lVar18 + 0x80)) {
LAB_00f1bc0c:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(undefined8 *)(lVar18 + *(ulong *)(lVar18 + 0x80) * 8) = uVar15;
          *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + 1;
          *plVar8 = local_240;
          *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + -1;
          *(long *)(param_1 + 0x830) = *(long *)(param_1 + 0x830) + 8;
        }
      }
      plVar11 = plVar11 + 1;
    } while (plVar22 != plVar11);
    puVar13 = *(undefined8 **)(param_1 + 0x830);
    puVar23 = *(undefined8 **)(param_1 + 0x828);
    while (puVar23 != puVar13) {
      uVar14 = (**(code **)(*(long *)*puVar23 + 0x70))();
      puVar23 = puVar23 + 1;
      if ((uVar14 & 1) == 0) {
        return 0;
      }
    }
  }
  *(int *)(param_1 + 0x9e4) = *(int *)(param_1 + 0x9e4) + 1;
LAB_00f1aa38:
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x70);
  puVar4 = PTR_DAT_0271fd60;
  puVar3 = PTR_DAT_0271fd58;
  puVar2 = PTR_DAT_02710860;
  plVar11 = *(long **)(lVar29 + 0xb0);
  plVar22 = *(long **)(lVar29 + 0xb8);
  if (plVar11 == plVar22) {
    return 0;
  }
  do {
    lVar18 = *plVar11;
    plVar8 = (long *)(*(code *)**(undefined8 **)(lVar18 + 0x50))((undefined8 *)(lVar18 + 0x50));
    if (((*puVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar3), iVar5 != 0)) {
      uVar15 = FUN_01590f40();
      *(undefined8 *)puVar4 = uVar15;
      __cxa_guard_release(puVar3);
    }
    for (; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
      if (plVar8 == (long *)puVar4) {
        uVar14 = (**(code **)(*(long *)*plVar11 + 0x88))();
        if ((uVar14 & 1) == 0) {
          plVar8 = *(long **)(param_1 + 0x78);
          if ((ulong)((long)plVar8 - *(long *)(param_1 + 0x70)) <
              (ulong)((long)*(long **)(param_1 + 0x80) - *(long *)(param_1 + 0x70))) {
            local_240 = lVar18;
            if (plVar8 < *(long **)(param_1 + 0x80)) {
              uVar15 = *(undefined8 *)(param_1 + 0x88);
              lVar18 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
              if (0xf < *(ulong *)(lVar18 + 0x80)) goto LAB_00f1bc0c;
              *(undefined8 *)(lVar18 + *(ulong *)(lVar18 + 0x80) * 8) = uVar15;
              *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + 1;
              *plVar8 = local_240;
              *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + -1;
              *(long *)(param_1 + 0x78) = *(long *)(param_1 + 0x78) + 8;
            }
            else {
              FUN_00dbbe90((undefined8 *)(param_1 + 0x70),&local_240);
            }
          }
        }
        break;
      }
    }
    plVar11 = plVar11 + 1;
  } while (plVar11 != plVar22);
  puVar23 = *(undefined8 **)(param_1 + 0x78);
  puVar13 = *(undefined8 **)(param_1 + 0x70);
  if (*(undefined8 **)(param_1 + 0x70) == puVar23) {
    return 0;
  }
  do {
    puVar21 = puVar13 + 1;
    uVar14 = (**(code **)(*(long *)*puVar13 + 0x70))();
    if ((uVar14 & 1) == 0) {
      return 0;
    }
    puVar13 = puVar21;
  } while (puVar23 != puVar21);
  *(int *)(param_1 + 0x9e4) = *(int *)(param_1 + 0x9e4) + 1;
switchD_00f1a274_caseD_5:
  iVar5 = *(int *)(param_1 + 0x760);
  if (iVar5 == 0) {
    uVar14 = 0;
    do {
      snprintf((char *)&local_240,0x20,"%s%s%02d",*(char **)(param_1 + 0x9f0),"_Fence_",(int)uVar14)
      ;
      uVar12 = 0xcbf29ce484222645;
      if ((byte)local_240 != 0) {
        uVar12 = 0xcbf29ce484222645;
        pbVar17 = (byte *)((ulong)&local_240 | 1);
        bVar24 = (byte)local_240;
        do {
          uVar12 = (uVar12 ^ bVar24) * 0x100000001b3;
          bVar24 = *pbVar17;
          pbVar17 = pbVar17 + 1;
        } while (bVar24 != 0);
      }
      plVar11 = *(long **)(lVar29 + 0xb0);
      plVar22 = *(long **)(lVar29 + 0xb8);
      while( true ) {
        if (plVar11 == plVar22) {
          iVar5 = *(int *)(param_1 + 0x760);
          goto LAB_00f1acc4;
        }
        lVar18 = *plVar11;
        uVar10 = FUN_015bec30(lVar18 + 0x50);
        if ((((uVar10 & 1) != 0) && (*(ulong *)(lVar18 + 0x1a0) == uVar12)) &&
           (uVar10 = (**(code **)(*(long *)*plVar11 + 0x88))(), (uVar10 & 1) == 0)) break;
        plVar11 = plVar11 + 1;
      }
      *(long *)(param_1 + uVar14 * 0x80 + 0x360) = lVar18;
      uVar14 = uVar14 + 1;
      iVar5 = *(int *)(param_1 + 0x760) + 1;
      *(int *)(param_1 + 0x760) = iVar5;
    } while (uVar14 < 8);
LAB_00f1acc4:
    if (iVar5 == 0) {
      return 0;
    }
  }
  if (0 < iVar5) {
    lVar18 = 0;
    puVar23 = (undefined8 *)(param_1 + 0x360);
    do {
      uVar14 = (**(code **)(*(long *)*puVar23 + 0x70))();
      if ((uVar14 & 1) == 0) {
        return 0;
      }
      lVar18 = lVar18 + 1;
      puVar23 = puVar23 + 0x10;
    } while (lVar18 < *(int *)(param_1 + 0x760));
  }
  lVar18 = **(long **)(param_1 + 0x70);
  plVar11 = (long *)(*(code *)**(undefined8 **)(lVar18 + 0x50))();
  if (((*PTR_DAT_0271fd58 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_0271fd58), iVar5 != 0))
  {
    uVar15 = FUN_01590f40();
    *(undefined8 *)PTR_DAT_0271fd60 = uVar15;
    __cxa_guard_release(PTR_DAT_0271fd58);
  }
  for (; plVar11 != (long *)PTR_DAT_0271fd60; plVar11 = (long *)*plVar11) {
  }
  fVar35 = *(float *)(lVar18 + 0x910);
  local_260[0] = *(long *)(lVar29 + 0xa0);
  if (local_260[0] != 0) {
    (**(code **)(*(long *)(local_260[0] + 0x48) + 0x10))();
  }
  puVar3 = PTR_DAT_02715298;
  puVar2 = PTR_DAT_02715290;
  uVar15 = _UNK_01d4a0e8;
  lVar18 = _DAT_01d4a0e0;
  if (0 < *(int *)(param_1 + 0x760)) {
    fVar35 = fVar35 * DAT_01d4bdd0;
    uVar31 = NEON_fmov(0x3f800000,4);
    uVar14 = 0;
    do {
      lVar27 = param_1 + uVar14 * 0x80;
      plVar11 = (long *)(lVar27 + 0x360);
      lVar6 = FUN_0105e8d0(*(undefined8 *)(lVar27 + 0x360),&local_240);
      FUN_006a0e30(lVar6 + 0x80);
      FUN_0069a860();
      FUN_006a0e30(lVar6 + 0x80);
      FUN_0069a850();
      lVar6 = *(long *)(lVar27 + 0x360);
      auVar32 = *(undefined1 (*) [16])(lVar6 + 0xb0);
      fStack_268 = auVar32._8_4_;
      if ((*(long *)(lVar6 + 0x410) == 0) ||
         (lVar25 = *(long *)(*(long *)(lVar6 + 0x410) + 0x60), lVar25 == 0)) {
        lVar25 = 0;
      }
      else {
        uVar12 = FUN_00a8cbe0(lVar25);
        lVar25 = lVar25 + -0x50;
        if ((uVar12 & 1) == 0) {
          lVar25 = 0;
        }
        lVar6 = *plVar11;
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0x290) + 0x80);
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
      puVar23 = *(undefined8 **)(lVar6 + 0x60);
      plVar22 = (long *)(**(code **)*puVar23)(puVar23);
      if (((*puVar2 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar2), iVar5 != 0)) {
        uVar7 = FUN_01590a70();
        *(undefined8 *)puVar3 = uVar7;
        __cxa_guard_release(puVar2);
      }
      for (; plVar22 != (long *)puVar3; plVar22 = (long *)*plVar22) {
      }
      fVar36 = *(float *)(puVar23 + 0x17);
      fVar40 = *(float *)(puVar23 + 0x16);
      fVar39 = *(float *)((long)puVar23 + 0xb4);
      lVar26 = *(long *)(*(long *)(*plVar11 + 0x360) + 0x80);
      (**(code **)(*(long *)(lVar26 + 0x48) + 0x10))();
      puVar23 = *(undefined8 **)(lVar26 + 0x60);
      plVar22 = (long *)(**(code **)*puVar23)(puVar23);
      if (((*puVar2 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar2), iVar5 != 0)) {
        uVar7 = FUN_01590a70();
        *(undefined8 *)puVar3 = uVar7;
        __cxa_guard_release(puVar2);
      }
      for (; plVar22 != (long *)puVar3; plVar22 = (long *)*plVar22) {
      }
      fVar41 = auVar32._0_4_;
      fVar42 = auVar32._4_4_;
      fVar38 = *(float *)(puVar23 + 0x17);
      fVar30 = *(float *)(puVar23 + 0x16);
      fVar34 = *(float *)((long)puVar23 + 0xb4);
      uVar37 = (undefined4)((ulong)uVar31 >> 0x20);
      *(ulong *)(lVar27 + 0x3b8) = CONCAT44(uVar37,fStack_268);
      *(ulong *)(lVar27 + 0x3b0) = CONCAT44(fVar42 - fVar34,fVar41 - fVar30);
      *(ulong *)(lVar27 + 0x3c8) = CONCAT44(uVar37,fStack_268 + fVar38);
      *(ulong *)(lVar27 + 0x3c0) = CONCAT44(fVar42 + fVar34,fVar41 + fVar30);
      fVar40 = fVar35 + fVar40;
      *(ulong *)(lVar27 + 0x398) = CONCAT44(uVar37,fStack_268);
      *(ulong *)(lVar27 + 0x390) = CONCAT44(fVar42 - fVar39,fVar41 - fVar40);
      *(ulong *)(lVar27 + 0x3a8) = CONCAT44(uVar37,fStack_268 + fVar35 + fVar36);
      *(ulong *)(lVar27 + 0x3a0) = CONCAT44(fVar42 + fVar39,fVar41 + fVar40);
      lVar25 = *(long *)(lVar25 + 0x108);
      auVar32 = NEON_ext(auVar32,auVar32,8,1);
      uVar7 = *(undefined8 *)(lVar25 + 0x1c8);
      *(undefined8 *)(lVar27 + 0x378) = *(undefined8 *)(lVar25 + 0x1b8);
      uVar20 = *(undefined8 *)(lVar25 + 0x1c0);
      *(undefined8 *)(lVar27 + 0x370) = *(undefined8 *)(lVar25 + 0x1b0);
      *(undefined8 *)(lVar27 + 0x380) = uVar20;
      *(undefined8 *)(lVar27 + 0x388) = uVar7;
      auVar33._0_8_ =
           CONCAT44(fVar42 + *(float *)(lVar27 + 0x374),fVar41 + *(float *)(lVar27 + 0x370));
      auVar33._8_4_ = auVar32._0_4_ + *(float *)(lVar27 + 0x378);
      auVar33._12_4_ = *(float *)(lVar27 + 0x37c) + 0.0;
      *(long *)(lVar27 + 0x378) = auVar33._8_8_;
      *(undefined8 *)(lVar27 + 0x370) = auVar33._0_8_;
      *(ulong *)(lVar27 + 0x388) =
           CONCAT44((float)((ulong)*(undefined8 *)(lVar27 + 0x388) >> 0x20) + 0.0,
                    auVar32._0_4_ + (float)*(undefined8 *)(lVar27 + 0x388));
      *(ulong *)(lVar27 + 0x380) =
           CONCAT44(fVar42 + (float)((ulong)*(undefined8 *)(lVar27 + 0x380) >> 0x20),
                    fVar41 + (float)*(undefined8 *)(lVar27 + 0x380));
      lVar28 = *plVar11;
      lVar25 = FUN_00add530(&local_240,*(undefined8 *)(param_1 + 8),local_260);
      if (lVar25 != 0) {
        (**(code **)(*(long *)(lVar25 + 0x48) + 0x10))();
      }
      local_240 = lVar25;
      FUN_006d9640(lVar28,&local_240);
      if (local_240 != 0) {
        (**(code **)(*(long *)(local_240 + 0x48) + 0x18))();
        local_240 = 0;
      }
      plVar11 = (long *)(lVar27 + 0x3d0);
      if (lVar25 != 0) {
        (**(code **)(*(long *)(lVar25 + 0x48) + 0x10))();
      }
      lVar27 = *plVar11;
      *plVar11 = lVar25;
      if (lVar27 != 0) {
        (**(code **)(*(long *)(lVar27 + 0x48) + 0x18))();
      }
      if (uVar14 == *(int *)(param_1 + 0x760) - 1) {
        uStack_238 = uVar15;
        local_240 = lVar18;
        FUN_00794370(*plVar11,param_1 + 0x250);
        FUN_00794650(*plVar11,&local_240);
      }
      else {
        FUN_00794370(*plVar11,param_1 + 0x140);
      }
      (**(code **)(*(long *)(lVar26 + 0x48) + 0x18))((long *)(lVar26 + 0x48));
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
      uVar14 = uVar14 + 1;
    } while ((long)uVar14 < (long)*(int *)(param_1 + 0x760));
  }
  *(int *)(param_1 + 0x9e4) = *(int *)(param_1 + 0x9e4) + 1;
  if (local_260[0] != 0) {
    (**(code **)(*(long *)(local_260[0] + 0x48) + 0x18))();
    local_260[0] = 0;
  }
switchD_00f1a274_caseD_6:
  puVar23 = *(undefined8 **)(param_1 + 0x768);
  puVar13 = *(undefined8 **)(param_1 + 0x770);
  if (puVar23 == puVar13) {
    uVar16 = 0;
LAB_00f1b178:
    snprintf((char *)&local_240,0x20,"%s%s%02d",*(char **)(param_1 + 0x9f0),"_EndPoint_",uVar16);
    uVar14 = 0xcbf29ce484222645;
    if ((byte)local_240 != 0) {
      uVar14 = 0xcbf29ce484222645;
      pbVar17 = (byte *)((ulong)&local_240 | 1);
      bVar24 = (byte)local_240;
      do {
        uVar14 = (uVar14 ^ bVar24) * 0x100000001b3;
        bVar24 = *pbVar17;
        pbVar17 = pbVar17 + 1;
      } while (bVar24 != 0);
    }
    plVar22 = *(long **)(lVar29 + 0xb8);
    for (plVar11 = *(long **)(lVar29 + 0xb0); plVar11 != plVar22; plVar11 = plVar11 + 1) {
      lVar27 = *plVar11;
      plVar8 = (long *)(*(code *)**(undefined8 **)(lVar27 + 0x50))((undefined8 *)(lVar27 + 0x50));
      lVar18 = FUN_00e5a8f0();
      for (; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
        if (plVar8 == (long *)lVar18) {
          if ((*(ulong *)(lVar27 + 0x1a0) == uVar14) &&
             (uVar12 = (**(code **)(*(long *)*plVar11 + 0x88))(), (uVar12 & 1) == 0)) {
            plVar11 = *(long **)(param_1 + 0x770);
            local_260[0] = lVar27;
            if (plVar11 < *(long **)(param_1 + 0x778)) {
              uVar15 = *(undefined8 *)(param_1 + 0x780);
              lVar18 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
              if (0xf < *(ulong *)(lVar18 + 0x80)) goto LAB_00f1bc0c;
              *(undefined8 *)(lVar18 + *(ulong *)(lVar18 + 0x80) * 8) = uVar15;
              *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + 1;
              *plVar11 = local_260[0];
              *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + -1;
              *(long *)(param_1 + 0x770) = *(long *)(param_1 + 0x770) + 8;
            }
            else {
              FUN_00dbbe90(param_1 + 0x768,local_260);
            }
            uVar16 = uVar16 + 1;
            if (uVar16 < 0x1e) goto LAB_00f1b178;
            goto LAB_00f1b2bc;
          }
          break;
        }
      }
    }
LAB_00f1b2bc:
    puVar23 = *(undefined8 **)(param_1 + 0x768);
    puVar13 = *(undefined8 **)(param_1 + 0x770);
    if (puVar23 == puVar13) {
      return 0;
    }
    if (puVar23 != puVar13) goto LAB_00f1b110;
LAB_00f1b2d8:
    puVar23 = puVar13;
  }
  else {
    if (puVar23 == puVar13) goto LAB_00f1b2d8;
LAB_00f1b110:
    do {
      puVar21 = puVar23 + 1;
      uVar14 = (**(code **)(*(long *)*puVar23 + 0x70))();
      if ((uVar14 & 1) == 0) {
        return 0;
      }
      puVar23 = puVar21;
    } while (puVar13 != puVar21);
    puVar13 = *(undefined8 **)(param_1 + 0x768);
    puVar23 = *(undefined8 **)(param_1 + 0x770);
  }
  FUN_00f20a60(puVar13,puVar23);
  *(int *)(param_1 + 0x9e4) = *(int *)(param_1 + 0x9e4) + 1;
switchD_00f1a274_caseD_7:
  iVar5 = *(int *)(param_1 + 0x998);
  if (iVar5 == 0) {
    pbVar17 = (byte *)((ulong)local_260 | 1);
    uVar14 = 0;
    do {
      uVar12 = uVar14 + 1;
      iVar5 = (int)uVar12;
      snprintf((char *)&local_240,0x20,"%s%s%d",*(char **)(param_1 + 0x9f0),"_COUNTER_",iVar5);
      uVar10 = 0xcbf29ce484222645;
      if ((byte)local_240 != 0) {
        uVar10 = 0xcbf29ce484222645;
        pbVar19 = (byte *)((ulong)&local_240 | 1);
        bVar24 = (byte)local_240;
        do {
          uVar10 = (uVar10 ^ bVar24) * 0x100000001b3;
          bVar24 = *pbVar19;
          pbVar19 = pbVar19 + 1;
        } while (bVar24 != 0);
      }
      plVar11 = *(long **)(lVar29 + 0xb0);
      plVar22 = *(long **)(lVar29 + 0xb8);
      while( true ) {
        if (plVar11 == plVar22) goto LAB_00f1b6f8;
        lVar18 = *plVar11;
        uVar9 = FUN_015bec30(lVar18 + 0x50);
        if ((((uVar9 & 1) != 0) && (*(ulong *)(lVar18 + 0x1a0) == uVar10)) &&
           (uVar9 = (**(code **)(*(long *)*plVar11 + 0x88))(), (uVar9 & 1) == 0)) break;
        plVar11 = plVar11 + 1;
      }
      *(long *)(param_1 + uVar14 * 0x28 + 0x858) = lVar18;
      snprintf((char *)local_260,0x20,"%s%s%d_%d",*(char **)(param_1 + 0x9f0),"_NUMBER_",iVar5,1);
      uVar10 = 0xcbf29ce484222645;
      if ((byte)local_260[0] != 0) {
        uVar10 = 0xcbf29ce484222645;
        pbVar19 = pbVar17;
        bVar24 = (byte)local_260[0];
        do {
          uVar10 = (uVar10 ^ bVar24) * 0x100000001b3;
          bVar24 = *pbVar19;
          pbVar19 = pbVar19 + 1;
        } while (bVar24 != 0);
      }
      plVar11 = *(long **)(lVar29 + 0xb0);
      plVar22 = *(long **)(lVar29 + 0xb8);
      while( true ) {
        if (plVar11 == plVar22) goto LAB_00f1b6f8;
        lVar18 = *plVar11;
        uVar9 = FUN_015bec30(lVar18 + 0x50);
        if ((((uVar9 & 1) != 0) && (*(ulong *)(lVar18 + 0x1a0) == uVar10)) &&
           (uVar9 = (**(code **)(*(long *)*plVar11 + 0x88))(), (uVar9 & 1) == 0)) break;
        plVar11 = plVar11 + 1;
      }
      *(long *)(param_1 + uVar14 * 0x28 + 0x860) = lVar18;
      snprintf((char *)local_260,0x20,"%s%s%d_%d",*(char **)(param_1 + 0x9f0),"_NUMBER_",iVar5,2);
      uVar10 = 0xcbf29ce484222645;
      if ((byte)local_260[0] != 0) {
        uVar10 = 0xcbf29ce484222645;
        pbVar19 = pbVar17;
        bVar24 = (byte)local_260[0];
        do {
          uVar10 = (uVar10 ^ bVar24) * 0x100000001b3;
          bVar24 = *pbVar19;
          pbVar19 = pbVar19 + 1;
        } while (bVar24 != 0);
      }
      plVar11 = *(long **)(lVar29 + 0xb0);
      plVar22 = *(long **)(lVar29 + 0xb8);
      while( true ) {
        if (plVar11 == plVar22) goto LAB_00f1b6f8;
        lVar18 = *plVar11;
        uVar9 = FUN_015bec30(lVar18 + 0x50);
        if ((((uVar9 & 1) != 0) && (*(ulong *)(lVar18 + 0x1a0) == uVar10)) &&
           (uVar9 = (**(code **)(*(long *)*plVar11 + 0x88))(), (uVar9 & 1) == 0)) break;
        plVar11 = plVar11 + 1;
      }
      *(long *)(param_1 + uVar14 * 0x28 + 0x868) = lVar18;
      snprintf((char *)local_260,0x20,"%s%s%d_%d",*(char **)(param_1 + 0x9f0),"_NUMBER_",iVar5,3);
      uVar10 = 0xcbf29ce484222645;
      if ((byte)local_260[0] != 0) {
        uVar10 = 0xcbf29ce484222645;
        pbVar19 = pbVar17;
        bVar24 = (byte)local_260[0];
        do {
          uVar10 = (uVar10 ^ bVar24) * 0x100000001b3;
          bVar24 = *pbVar19;
          pbVar19 = pbVar19 + 1;
        } while (bVar24 != 0);
      }
      plVar11 = *(long **)(lVar29 + 0xb0);
      plVar22 = *(long **)(lVar29 + 0xb8);
      while( true ) {
        if (plVar11 == plVar22) goto LAB_00f1b6f8;
        lVar18 = *plVar11;
        uVar9 = FUN_015bec30(lVar18 + 0x50);
        if ((((uVar9 & 1) != 0) && (*(ulong *)(lVar18 + 0x1a0) == uVar10)) &&
           (uVar9 = (**(code **)(*(long *)*plVar11 + 0x88))(), (uVar9 & 1) == 0)) break;
        plVar11 = plVar11 + 1;
      }
      *(long *)(param_1 + uVar14 * 0x28 + 0x870) = lVar18;
      snprintf((char *)local_260,0x20,"%s%s%d_%d",*(char **)(param_1 + 0x9f0),"_NUMBER_",iVar5,4);
      uVar10 = 0xcbf29ce484222645;
      if ((byte)local_260[0] != 0) {
        uVar10 = 0xcbf29ce484222645;
        pbVar19 = pbVar17;
        bVar24 = (byte)local_260[0];
        do {
          uVar10 = (uVar10 ^ bVar24) * 0x100000001b3;
          bVar24 = *pbVar19;
          pbVar19 = pbVar19 + 1;
        } while (bVar24 != 0);
      }
      plVar11 = *(long **)(lVar29 + 0xb0);
      plVar22 = *(long **)(lVar29 + 0xb8);
      while( true ) {
        if (plVar11 == plVar22) goto LAB_00f1b6f8;
        lVar18 = *plVar11;
        uVar9 = FUN_015bec30(lVar18 + 0x50);
        if ((((uVar9 & 1) != 0) && (*(ulong *)(lVar18 + 0x1a0) == uVar10)) &&
           (uVar9 = (**(code **)(*(long *)*plVar11 + 0x88))(), (uVar9 & 1) == 0)) break;
        plVar11 = plVar11 + 1;
      }
      *(long *)(param_1 + uVar14 * 0x28 + 0x878) = lVar18;
      iVar5 = *(int *)(param_1 + 0x998) + 1;
      *(int *)(param_1 + 0x998) = iVar5;
      uVar14 = uVar12;
    } while (uVar12 < 8);
    goto LAB_00f1b6fc;
  }
LAB_00f1b700:
  if (0 < iVar5) {
    lVar18 = 0;
    puVar23 = (undefined8 *)(param_1 + 0x878);
    do {
      uVar14 = (**(code **)(*(long *)puVar23[-4] + 0x70))();
      if ((uVar14 & 1) == 0) {
        return 0;
      }
      uVar14 = (**(code **)(*(long *)puVar23[-3] + 0x70))();
      if ((uVar14 & 1) == 0) {
        return 0;
      }
      uVar14 = (**(code **)(*(long *)puVar23[-2] + 0x70))();
      if ((uVar14 & 1) == 0) {
        return 0;
      }
      uVar14 = (**(code **)(*(long *)puVar23[-1] + 0x70))();
      if ((uVar14 & 1) == 0) {
        return 0;
      }
      uVar14 = (**(code **)(*(long *)*puVar23 + 0x70))();
      if ((uVar14 & 1) == 0) {
        return 0;
      }
      lVar18 = lVar18 + 1;
      puVar23 = puVar23 + 5;
    } while (lVar18 < *(int *)(param_1 + 0x998));
  }
  *(int *)(param_1 + 0x9e4) = *(int *)(param_1 + 0x9e4) + 1;
switchD_00f1a274_caseD_8:
  if (*(long *)(param_1 + 0x9a0) == 0) {
    uVar14 = 0xcbf29ce484222645;
    snprintf((char *)&local_240,0x20,"%s%s",*(undefined8 *)(param_1 + 0x9f0),"_WOOLGATE");
    uVar12 = 0xcbf29ce484222645;
    if ((byte)local_240 != 0) {
      uVar12 = 0xcbf29ce484222645;
      pbVar17 = (byte *)((ulong)&local_240 | 1);
      bVar24 = (byte)local_240;
      do {
        uVar12 = (uVar12 ^ bVar24) * 0x100000001b3;
        bVar24 = *pbVar17;
        pbVar17 = pbVar17 + 1;
      } while (bVar24 != 0);
    }
    plVar11 = *(long **)(lVar29 + 0xb0);
    plVar22 = *(long **)(lVar29 + 0xb8);
    if (plVar11 != plVar22) {
LAB_00f1b80c:
      lVar18 = *plVar11;
      uVar10 = FUN_015bec30(lVar18 + 0x50);
      if ((((uVar10 & 1) == 0) || (*(ulong *)(lVar18 + 0x1a0) != uVar12)) ||
         (uVar10 = (**(code **)(*(long *)*plVar11 + 0x88))(), (uVar10 & 1) != 0)) goto LAB_00f1b840;
      *(long *)(param_1 + 0x9a0) = lVar18;
      snprintf((char *)&local_240,0x20,"%s%s",*(undefined8 *)(param_1 + 0x9f0),"_WOOLGATE_0");
      if ((byte)local_240 != 0) {
        pbVar17 = (byte *)((ulong)&local_240 | 1);
        bVar24 = (byte)local_240;
        do {
          uVar14 = (uVar14 ^ bVar24) * 0x100000001b3;
          bVar24 = *pbVar17;
          pbVar17 = pbVar17 + 1;
        } while (bVar24 != 0);
      }
      plVar11 = *(long **)(lVar29 + 0xb0);
      plVar22 = *(long **)(lVar29 + 0xb8);
      while( true ) {
        if (plVar11 == plVar22) goto LAB_00f1b84c;
        lVar18 = *plVar11;
        uVar12 = FUN_015bec30(lVar18 + 0x50);
        if ((((uVar12 & 1) != 0) && (*(ulong *)(lVar18 + 0x1a0) == uVar14)) &&
           (uVar12 = (**(code **)(*(long *)*plVar11 + 0x88))(), (uVar12 & 1) == 0)) break;
        plVar11 = plVar11 + 1;
      }
      *(long *)(param_1 + 0x9a8) = lVar18;
    }
  }
LAB_00f1b84c:
  lVar18 = 0;
  do {
    plVar11 = *(long **)(param_1 + 0x9a0 + lVar18);
    if ((plVar11 == (long *)0x0) || (uVar14 = (**(code **)(*plVar11 + 0x70))(), lVar18 == 8)) break;
    lVar18 = lVar18 + 8;
  } while ((uVar14 & 1) != 0);
  *(int *)(param_1 + 0x9e4) = *(int *)(param_1 + 0x9e4) + 1;
switchD_00f1a274_caseD_9:
  uVar14 = 0xcbf29ce484222645;
  snprintf((char *)local_260,0x20,"%s%s",*(undefined8 *)(param_1 + 0x9f0),"_PokeSpaceBox");
  if ((byte)local_260[0] != 0) {
    pbVar17 = (byte *)((ulong)local_260 | 1);
    bVar24 = (byte)local_260[0];
    do {
      uVar14 = (uVar14 ^ bVar24) * 0x100000001b3;
      bVar24 = *pbVar17;
      pbVar17 = pbVar17 + 1;
    } while (bVar24 != 0);
  }
  puVar23 = *(undefined8 **)(lVar29 + 0xb0);
  puVar13 = *(undefined8 **)(lVar29 + 0xb8);
  do {
    if (puVar23 == puVar13) {
      return 0;
    }
    plVar22 = (long *)*puVar23;
    plVar11 = (long *)(**(code **)plVar22[10])(plVar22 + 10);
    lVar29 = FUN_00e5a8f0();
    for (; plVar11 != (long *)0x0; plVar11 = (long *)*plVar11) {
      if (plVar11 == (long *)lVar29) {
        if ((plVar22[0x34] == uVar14) &&
           (uVar12 = (**(code **)(*(long *)*puVar23 + 0x88))(), (uVar12 & 1) == 0)) {
          uVar14 = (**(code **)(*plVar22 + 0x70))();
          if ((uVar14 & 1) == 0) {
            return 0;
          }
          lVar29 = plVar22[0x17];
          *(long *)(param_1 + 0x9c0) = plVar22[0x16];
          *(long *)(param_1 + 0x9c8) = lVar29;
          if ((plVar22[0x6c] == 0) || (lVar29 = *(long *)(plVar22[0x6c] + 0x80), lVar29 == 0)) {
            lVar29 = 0;
            puVar23 = (undefined8 *)0x0;
            bVar24 = 1;
            goto LAB_00f1bacc;
          }
          (**(code **)(*(long *)(lVar29 + 0x48) + 0x10))((long *)(lVar29 + 0x48));
          puVar23 = *(undefined8 **)(lVar29 + 0x60);
          if (puVar23 == (undefined8 *)0x0) goto LAB_00f1bac4;
          puVar13 = (undefined8 *)(**(code **)*puVar23)(puVar23);
          if (((*PTR_DAT_02715290 & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(PTR_DAT_02715290), iVar5 != 0)) {
            uVar15 = FUN_01590a70();
            *(undefined8 *)PTR_DAT_02715298 = uVar15;
            __cxa_guard_release(PTR_DAT_02715290);
          }
          goto joined_r0x00f1bc04;
        }
        break;
      }
    }
    puVar23 = puVar23 + 1;
  } while( true );
LAB_00f1b6f8:
  iVar5 = *(int *)(param_1 + 0x998);
LAB_00f1b6fc:
  if (iVar5 == 0) {
    return 0;
  }
  goto LAB_00f1b700;
LAB_00f1b840:
  plVar11 = plVar11 + 1;
  if (plVar22 == plVar11) goto LAB_00f1b84c;
  goto LAB_00f1b80c;
joined_r0x00f1bc04:
  if (puVar13 == (undefined8 *)0x0) goto LAB_00f1bac4;
  if (puVar13 == (undefined8 *)PTR_DAT_02715298) {
    bVar24 = 0;
    puVar23 = puVar23 + -10;
    goto LAB_00f1bacc;
  }
  puVar13 = (undefined8 *)*puVar13;
  goto joined_r0x00f1bc04;
LAB_00f1bac4:
  bVar24 = 0;
  puVar23 = (undefined8 *)0x0;
LAB_00f1bacc:
  uVar15 = puVar23[0x1b];
  local_228 = (undefined4)uVar15;
  uStack_224 = (undefined2)((ulong)uVar15 >> 0x20);
  uStack_222 = (undefined2)((ulong)uVar15 >> 0x30);
  local_240 = puVar23[0x18];
  uStack_238 = puVar23[0x19];
  local_230 = (uint)puVar23[0x1a];
  uStack_22c = (undefined4)((ulong)puVar23[0x1a] >> 0x20);
  uStack_210 = puVar23[0x1e];
  local_208 = puVar23[0x1f];
  local_220 = puVar23[0x1c];
  local_218 = puVar23[0x1d];
  fVar35 = *(float *)*(undefined1 (*) [12])(puVar23 + 0x20);
  fVar36 = *(float *)(puVar23 + 0x21);
  auVar1 = *(undefined1 (*) [12])(puVar23 + 0x20);
  fVar39 = (float)*(undefined8 *)(param_1 + 0x9c8);
  *(ulong *)(param_1 + 0x9d8) = (ulong)auVar1._8_4_;
  *(long *)(param_1 + 0x9d0) = auVar1._0_8_;
  fVar40 = (float)*(undefined8 *)(param_1 + 0x9c0);
  FUN_00f43570(fVar40 - fVar35,fVar39 - fVar36,fVar35 + fVar40,fVar36 + fVar39,
               *(undefined8 *)(param_1 + 0x68),4);
  *(int *)(param_1 + 0x9e4) = *(int *)(param_1 + 0x9e4) + 1;
  if (!(bool)bVar24) {
    (**(code **)(*(long *)(lVar29 + 0x48) + 0x18))((long *)(lVar29 + 0x48));
  }
switchD_00f1a274_caseD_a:
  uVar14 = FUN_00f1bd40(param_1);
  if ((uVar14 & 1) == 0) {
    return 0;
  }
  *(int *)(param_1 + 0x9e4) = *(int *)(param_1 + 0x9e4) + 1;
switchD_00f1a274_caseD_b:
  *(undefined1 *)(param_1 + 0x60) = 1;
  return 1;
}


