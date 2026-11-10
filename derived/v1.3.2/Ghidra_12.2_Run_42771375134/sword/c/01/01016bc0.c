/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01016bc0; name: FUN_01016bc0
 */


void FUN_01016bc0(long *param_1,int *param_2)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  char *pcVar4;
  uint *puVar5;
  int *piVar6;
  uint *puVar7;
  ulong *puVar8;
  int iVar9;
  long lVar10;
  size_t __n;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  ulong uVar16;
  uint *puVar17;
  ulong uVar18;
  char *__s;
  ulong unaff_x24;
  long *plVar19;
  char *local_1f8;
  ulong local_1f0;
  undefined8 local_1e8;
  undefined1 *local_1e0;
  long local_1d8;
  long local_1d0;
  undefined4 local_1c8;
  ulong local_1c0;
  undefined8 local_1b8;
  undefined1 *local_1b0;
  long local_1a8;
  long local_1a0;
  undefined4 local_198;
  undefined *local_190;
  long local_188;
  undefined8 local_180;
  code *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined1 auStack_160 [96];
  undefined8 local_100;
  code *local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 auStack_e0 [96];
  bool local_80;
  char *local_70 [2];
  
  param_1[7] = 0;
  puVar2 = PTR_DAT_02710a18;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[2] = 0;
  param_1[3] = 0;
  lVar10 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  puVar2 = PTR_DAT_027235a8;
  if (lVar10 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = 0;
    if (*(long *)(lVar10 + 0x80) != 0) {
      lVar11 = *(long *)(lVar10 + *(long *)(lVar10 + 0x80) * 8 + -8);
    }
  }
  param_1[10] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[1] = lVar11;
  plVar19 = param_1 + 9;
  *plVar19 = 0;
  lVar10 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (((lVar10 == 0) || (*(long *)(lVar10 + 0x80) == 0)) ||
     (lVar10 = *(long *)(lVar10 + *(long *)(lVar10 + 0x80) * 8 + -8), lVar10 == 0)) {
    lVar10 = FUN_0075ecb0();
  }
  param_1[0xb] = lVar10;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  lVar10 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (((lVar10 == 0) || (*(long *)(lVar10 + 0x80) == 0)) ||
     (lVar10 = *(long *)(lVar10 + *(long *)(lVar10 + 0x80) * 8 + -8), lVar10 == 0)) {
    lVar10 = FUN_0075ecb0();
  }
  param_1[0xf] = lVar10;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0x3f800000;
  puVar5 = (uint *)((long)param_2 + (ulong)*(ushort *)((long)param_2 + (4 - (long)*param_2)));
  puVar5 = (uint *)((long)puVar5 + (ulong)*puVar5);
  puVar17 = puVar5 + 1;
  uVar12 = (ulong)*puVar5;
  if (uVar12 != 0) {
    puVar5 = puVar17 + uVar12;
    plVar1 = param_1 + 0xe;
    puVar2 = PTR_DAT_027164d8 + 0x10;
    puVar3 = PTR_DAT_027164e0 + 0x10;
    __s = PTR_s_data___02710918;
    do {
      local_1c0 = 0;
      local_1b8 = 0xcbf29ce484222645;
      local_1b0 = &DAT_01d38550;
      piVar6 = (int *)((long)puVar17 + (ulong)*puVar17);
      local_198 = 0;
      local_1a8 = 0;
      local_1a0 = 0;
      local_f0 = 0;
      uStack_e8 = 0;
      local_100 = 0;
      local_f8 = (code *)0x0;
      local_170 = 0;
      uStack_168 = 0;
      local_188 = 0;
      local_180 = 0;
      local_178 = (code *)0x0;
      local_80 = false;
      lVar10 = 0;
      if (4 < *(ushort *)((long)piVar6 - (long)*piVar6)) {
        uVar12 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[2];
        lVar10 = 0;
        if (uVar12 != 0) {
          puVar7 = (uint *)((long)piVar6 + uVar12);
          lVar10 = (long)puVar7 + (ulong)*puVar7;
        }
      }
      pcVar4 = (char *)(lVar10 + 4);
      local_1f8 = pcVar4;
      local_190 = puVar2;
      __n = strlen(__s);
      iVar9 = strncmp(pcVar4,__s,__n);
      if (iVar9 == 0) {
        local_70[0] = pcVar4;
        FUN_00d99c10(&local_1f0,local_70,0);
        pcVar4 = local_70[0];
      }
      else {
        FUN_008d51b0(local_70,__s,&local_1f8);
        FUN_006e5870(&local_1f0,local_70,0);
        pcVar4 = (char *)0x0;
        if (local_70[0] != (char *)0x0) {
          (**(code **)(*(long *)(local_70[0] + 0x48) + 0x18))();
          local_70[0] = (char *)0x0;
          pcVar4 = local_70[0];
        }
      }
      local_70[0] = pcVar4;
      if ((local_1a8 != 0) && (local_1c0 != 0)) {
        (**(code **)(*(long *)(local_1c0 + 0x48) + 0x18))();
      }
      local_1c0 = 0;
      if (local_1a0 != 0) {
        local_1a8 = 0;
        local_1b0 = &DAT_01d38550;
        local_1b8 = 0xcbf29ce484222645;
        local_1c0 = 0;
        (**(code **)(*(long *)(local_1a0 + 0x48) + 0x18))();
      }
      local_1a0 = local_1d0;
      local_1b8 = local_1e8;
      local_1b0 = local_1e0;
      local_1d0 = 0;
      local_1a8 = local_1d8;
      local_198 = local_1c8;
      if (local_1d8 == 0) {
        local_1c0 = local_1f0;
      }
      else {
        if (local_1c0 != 0) {
          (**(code **)(*(long *)(local_1c0 + 0x48) + 0x18))();
        }
        local_1c0 = local_1f0;
      }
      local_1f0 = 0;
      local_1e8 = 0xcbf29ce484222645;
      local_1e0 = &DAT_01d38550;
      local_1d8 = 0;
      if (local_1d0 != 0) {
        (**(code **)(*(long *)(local_1d0 + 0x48) + 0x18))();
        local_1d0 = 0;
      }
      if (*(ushort *)((long)piVar6 - (long)*piVar6) < 7) {
        local_80 = false;
      }
      else {
        uVar12 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[3];
        local_80 = false;
        if (uVar12 != 0) {
          local_80 = *(char *)((long)piVar6 + uVar12) != '\0';
        }
      }
      uVar12 = param_1[10];
      puVar8 = &local_1c0;
      if (local_1a8 != 0) {
        puVar8 = (ulong *)((ulong)&local_1c0 | 8);
      }
      uVar18 = *puVar8;
      if (uVar12 == 0) {
LAB_01016d94:
        plVar14 = (long *)(**(code **)(*(long *)param_1[0xf] + 0x10))
                                    ((long *)param_1[0xf],0x170,0x10);
        if (plVar14 == (long *)0x0) {
          (**(code **)(*(long *)param_1[0xf] + 0xb8))();
        }
        lVar11 = param_1[0xf];
        lVar10 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
        if (0xf < *(ulong *)(lVar10 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long *)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = lVar11;
        *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
        plVar14[2] = *puVar8;
        FUN_010175b0(plVar14 + 4,&local_1c0);
        *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
        *plVar14 = 0;
        plVar14[1] = uVar18;
        __s = PTR_s_data___02710918;
        if ((uVar12 == 0) ||
           (*(float *)(param_1 + 0x13) * (float)uVar12 < (float)(param_1[0x12] + 1))) {
          if (uVar12 < 3) {
            uVar15 = 1;
          }
          else {
            uVar15 = (ulong)((uVar12 - 1 & uVar12) != 0);
          }
          uVar16 = (ulong)((float)(param_1[0x12] + 1) / *(float *)(param_1 + 0x13));
          uVar15 = uVar15 | uVar12 << 1;
          if (uVar16 <= uVar15) {
            uVar16 = uVar15;
          }
          FUN_010174a0(plVar19,uVar16);
          uVar12 = param_1[10];
          if ((uVar12 - 1 & uVar12) == 0) {
            unaff_x24 = uVar12 - 1 & uVar18;
            plVar13 = *(long **)(*plVar19 + unaff_x24 * 8);
            goto joined_r0x01016eec;
          }
          if (uVar18 < uVar12) {
            plVar13 = *(long **)(*plVar19 + uVar18 * 8);
            unaff_x24 = uVar18;
            goto joined_r0x01016eec;
          }
          uVar15 = 0;
          if (uVar12 != 0) {
            uVar15 = uVar18 / uVar12;
          }
          unaff_x24 = uVar18 - uVar15 * uVar12;
          plVar13 = *(long **)(*plVar19 + unaff_x24 * 8);
          if (plVar13 == (long *)0x0) goto LAB_01016f04;
LAB_01016e80:
          *plVar14 = *plVar13;
LAB_01016f6c:
          *plVar13 = (long)plVar14;
        }
        else {
          plVar13 = *(long **)(*plVar19 + unaff_x24 * 8);
joined_r0x01016eec:
          if (plVar13 != (long *)0x0) goto LAB_01016e80;
LAB_01016f04:
          *plVar14 = *plVar1;
          *plVar1 = (long)plVar14;
          *(long **)(*plVar19 + unaff_x24 * 8) = plVar1;
          if (*plVar14 != 0) {
            uVar18 = *(ulong *)(*plVar14 + 8);
            if ((uVar12 - 1 & uVar12) == 0) {
              uVar18 = uVar18 & uVar12 - 1;
            }
            else if (uVar12 <= uVar18) {
              uVar15 = 0;
              if (uVar12 != 0) {
                uVar15 = uVar18 / uVar12;
              }
              uVar18 = uVar18 - uVar15 * uVar12;
            }
            plVar13 = (long *)(*plVar19 + uVar18 * 8);
            goto LAB_01016f6c;
          }
        }
        param_1[0x12] = param_1[0x12] + 1;
        if (local_188 != 0) goto LAB_0101723c;
LAB_01016f8c:
        local_188 = 0;
        local_190 = puVar3;
      }
      else {
        uVar15 = uVar12 - 1;
        if ((uVar15 & uVar12) == 0) {
          unaff_x24 = uVar15 & uVar18;
          plVar14 = *(long **)(*plVar19 + unaff_x24 * 8);
          if (plVar14 != (long *)0x0) goto LAB_010171c4;
          goto LAB_01016d94;
        }
        unaff_x24 = uVar18;
        if (uVar12 <= uVar18) {
          uVar16 = 0;
          if (uVar12 != 0) {
            uVar16 = uVar18 / uVar12;
          }
          unaff_x24 = uVar18 - uVar16 * uVar12;
        }
        plVar14 = *(long **)(*plVar19 + unaff_x24 * 8);
        if (plVar14 == (long *)0x0) goto LAB_01016d94;
LAB_010171c4:
        if ((uVar15 & uVar12) == 0) {
          do {
            plVar14 = (long *)*plVar14;
            if ((plVar14 == (long *)0x0) ||
               (plVar14[1] != uVar18 && (plVar14[1] & uVar15) != unaff_x24)) goto LAB_01016d94;
          } while (plVar14[2] != uVar18);
        }
        else {
          do {
            plVar14 = (long *)*plVar14;
            if (plVar14 == (long *)0x0) goto LAB_01016d94;
            uVar15 = plVar14[1];
            if (uVar15 != uVar18) {
              if (uVar12 <= uVar15) {
                uVar16 = 0;
                if (uVar12 != 0) {
                  uVar16 = uVar15 / uVar12;
                }
                uVar15 = uVar15 - uVar16 * uVar12;
              }
              if (uVar15 != unaff_x24) goto LAB_01016d94;
            }
          } while (plVar14[2] != uVar18);
        }
        if (local_188 == 0) goto LAB_01016f8c;
LAB_0101723c:
        local_190 = puVar3;
        FUN_006e2100(local_188,&local_190);
        lVar10 = local_188;
        local_188 = 0;
        if (lVar10 != 0) {
          (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))();
        }
      }
      if (local_f8 != (code *)0x0) {
        local_f0 = 0;
        uStack_e8 = 0;
        local_100 = 0;
        (*local_f8)(auStack_e0);
      }
      if (local_178 != (code *)0x0) {
        local_170 = 0;
        uStack_168 = 0;
        local_180 = 0;
        (*local_178)(auStack_160);
      }
      if (local_188 != 0) {
        (**(code **)(*(long *)(local_188 + 0x48) + 0x18))();
        local_188 = 0;
      }
      if ((local_1a8 != 0) && (local_1c0 != 0)) {
        (**(code **)(*(long *)(local_1c0 + 0x48) + 0x18))();
      }
      local_1c0 = 0;
      local_1b8 = 0xcbf29ce484222645;
      local_1b0 = &DAT_01d38550;
      local_1a8 = 0;
      if (local_1a0 != 0) {
        (**(code **)(*(long *)(local_1a0 + 0x48) + 0x18))();
      }
      puVar17 = puVar17 + 1;
    } while (puVar17 != puVar5);
  }
  return;
}


