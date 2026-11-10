/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dd75b0; name: FUN_00dd75b0
 */


void FUN_00dd75b0(long *param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  byte *pbVar1;
  uint *puVar2;
  long lVar3;
  byte bVar4;
  byte bVar5;
  ushort uVar6;
  float fVar7;
  float fVar8;
  undefined *puVar9;
  bool bVar10;
  char *pcVar11;
  ulong uVar12;
  ushort *puVar13;
  int *piVar14;
  long lVar15;
  byte *pbVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  float fVar22;
  uint uVar23;
  float fVar24;
  undefined4 uVar25;
  float fVar26;
  undefined4 uVar27;
  uint uVar28;
  ulong local_70;
  byte *pbStack_68;
  size_t local_60;
  ulong uStack_58;
  
  if ((*(ushort *)((long)param_4 - (long)*param_4) < 5) ||
     (uVar12 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[2], uVar12 == 0)) {
    lVar15 = 0;
  }
  else {
    puVar2 = (uint *)((long)param_4 + uVar12);
    lVar15 = (long)puVar2 + (ulong)*puVar2;
  }
  FUN_00dbc9a0(param_1,param_2,param_3,lVar15);
  puVar9 = PTR_DAT_0271e9f8;
  *param_1 = (long)(PTR_DAT_0271e9f8 + 0x10);
  param_1[9] = (long)(puVar9 + 0x250);
  param_1[10] = (long)(puVar9 + 0x290);
  if (*(ushort *)((long)param_4 - (long)*param_4) < 0x1b) {
    piVar14 = (int *)0x0;
  }
  else {
    uVar12 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[0xd];
    piVar14 = (int *)0x0;
    if (uVar12 != 0) {
      puVar2 = (uint *)((long)param_4 + uVar12);
      piVar14 = (int *)((long)puVar2 + (ulong)*puVar2);
    }
  }
  if ((*(ushort *)((long)piVar14 - (long)*piVar14) < 5) ||
     (uVar12 = (ulong)((ushort *)((long)piVar14 - (long)*piVar14))[2], uVar12 == 0)) {
    uVar20 = 0;
  }
  else {
    uVar20 = *(undefined4 *)((long)piVar14 + uVar12);
  }
  *(undefined4 *)(param_1 + 0x98) = uVar20;
  if (*(ushort *)((long)param_4 - (long)*param_4) < 0x1b) {
    piVar14 = (int *)0x0;
  }
  else {
    uVar12 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[0xd];
    piVar14 = (int *)0x0;
    if (uVar12 != 0) {
      puVar2 = (uint *)((long)param_4 + uVar12);
      piVar14 = (int *)((long)puVar2 + (ulong)*puVar2);
    }
  }
  uVar20 = 0;
  if ((0xc < *(ushort *)((long)piVar14 - (long)*piVar14)) &&
     (uVar12 = (ulong)((ushort *)((long)piVar14 - (long)*piVar14))[6], uVar12 != 0)) {
    uVar20 = *(undefined4 *)((long)piVar14 + uVar12);
  }
  *(undefined4 *)((long)param_1 + 0x4c4) = uVar20;
  puVar13 = (ushort *)((long)param_4 - (long)*param_4);
  uVar6 = *puVar13;
  if (uVar6 < 0x1b) {
    piVar14 = (int *)0x0;
  }
  else {
    piVar14 = (int *)0x0;
    if ((ulong)puVar13[0xd] != 0) {
      puVar2 = (uint *)((long)param_4 + (ulong)puVar13[0xd]);
      piVar14 = (int *)((long)puVar2 + (ulong)*puVar2);
    }
  }
  uVar20 = 0;
  if ((6 < *(ushort *)((long)piVar14 - (long)*piVar14)) &&
     (uVar12 = (ulong)((ushort *)((long)piVar14 - (long)*piVar14))[3], uVar12 != 0)) {
    uVar20 = *(undefined4 *)((long)piVar14 + uVar12);
  }
  if (uVar6 < 0x1b) {
    piVar14 = (int *)0x0;
  }
  else {
    piVar14 = (int *)0x0;
    if ((ulong)puVar13[0xd] != 0) {
      puVar2 = (uint *)((long)param_4 + (ulong)puVar13[0xd]);
      piVar14 = (int *)((long)puVar2 + (ulong)*puVar2);
    }
  }
  uVar21 = 0;
  if ((8 < *(ushort *)((long)piVar14 - (long)*piVar14)) &&
     (uVar12 = (ulong)((ushort *)((long)piVar14 - (long)*piVar14))[4], uVar12 != 0)) {
    uVar21 = *(undefined4 *)((long)piVar14 + uVar12);
  }
  if (uVar6 < 0x1b) {
    piVar14 = (int *)0x0;
  }
  else {
    piVar14 = (int *)0x0;
    if ((ulong)puVar13[0xd] != 0) {
      puVar2 = (uint *)((long)param_4 + (ulong)puVar13[0xd]);
      piVar14 = (int *)((long)puVar2 + (ulong)*puVar2);
    }
  }
  uVar23 = 0;
  if ((10 < *(ushort *)((long)piVar14 - (long)*piVar14)) &&
     (uVar12 = (ulong)((ushort *)((long)piVar14 - (long)*piVar14))[5], uVar12 != 0)) {
    uVar23 = *(uint *)((long)piVar14 + uVar12);
  }
  param_1[0x9b] = (ulong)uVar23;
  param_1[0x9a] = CONCAT44(uVar21,uVar20);
  puVar13 = (ushort *)((long)param_4 - (long)*param_4);
  uVar6 = *puVar13;
  if (uVar6 < 0x1b) {
    piVar14 = (int *)0x0;
  }
  else {
    piVar14 = (int *)0x0;
    if ((ulong)puVar13[0xd] != 0) {
      puVar2 = (uint *)((long)param_4 + (ulong)puVar13[0xd]);
      piVar14 = (int *)((long)puVar2 + (ulong)*puVar2);
    }
  }
  uVar20 = 0;
  if ((0x14 < *(ushort *)((long)piVar14 - (long)*piVar14)) &&
     (uVar12 = (ulong)((ushort *)((long)piVar14 - (long)*piVar14))[10], uVar12 != 0)) {
    uVar20 = *(undefined4 *)((long)piVar14 + uVar12);
  }
  if (uVar6 < 0x1b) {
    piVar14 = (int *)0x0;
  }
  else {
    piVar14 = (int *)0x0;
    if ((ulong)puVar13[0xd] != 0) {
      puVar2 = (uint *)((long)param_4 + (ulong)puVar13[0xd]);
      piVar14 = (int *)((long)puVar2 + (ulong)*puVar2);
    }
  }
  uVar21 = 0;
  if ((0x16 < *(ushort *)((long)piVar14 - (long)*piVar14)) &&
     (uVar12 = (ulong)((ushort *)((long)piVar14 - (long)*piVar14))[0xb], uVar12 != 0)) {
    uVar21 = *(undefined4 *)((long)piVar14 + uVar12);
  }
  if (uVar6 < 0x1b) {
    piVar14 = (int *)0x0;
  }
  else {
    piVar14 = (int *)0x0;
    if ((ulong)puVar13[0xd] != 0) {
      puVar2 = (uint *)((long)param_4 + (ulong)puVar13[0xd]);
      piVar14 = (int *)((long)puVar2 + (ulong)*puVar2);
    }
  }
  uVar23 = 0;
  if ((0x18 < *(ushort *)((long)piVar14 - (long)*piVar14)) &&
     (uVar12 = (ulong)((ushort *)((long)piVar14 - (long)*piVar14))[0xc], uVar12 != 0)) {
    uVar23 = *(uint *)((long)piVar14 + uVar12);
  }
  param_1[0x9d] = (ulong)uVar23;
  param_1[0x9c] = CONCAT44(uVar21,uVar20);
  fVar8 = DAT_01d4c284;
  fVar7 = DAT_01d4bb38;
  puVar13 = (ushort *)((long)param_4 - (long)*param_4);
  if (*puVar13 < 0x1b) {
    piVar14 = (int *)0x0;
  }
  else {
    piVar14 = (int *)0x0;
    if ((ulong)puVar13[0xd] != 0) {
      puVar2 = (uint *)((long)param_4 + (ulong)puVar13[0xd]);
      piVar14 = (int *)((long)puVar2 + (ulong)*puVar2);
    }
  }
  fVar24 = 0.0;
  fVar22 = 0.0;
  if (0xe < *(ushort *)((long)piVar14 - (long)*piVar14)) {
    uVar12 = (ulong)((ushort *)((long)piVar14 - (long)*piVar14))[7];
    fVar22 = 0.0;
    if (uVar12 != 0) {
      fVar22 = *(float *)((long)piVar14 + uVar12);
    }
  }
  piVar14 = (int *)((long)((long)param_4 + (ulong)puVar13[0xd]) +
                   (ulong)*(uint *)((long)param_4 + (ulong)puVar13[0xd]));
  fVar22 = (fVar22 * DAT_01d4bb38) / DAT_01d4c284;
  puVar13 = (ushort *)((long)piVar14 - (long)*piVar14);
  fVar26 = 0.0;
  if (0x10 < *puVar13) {
    fVar26 = 0.0;
    fVar24 = 0.0;
    if ((ulong)puVar13[8] != 0) {
      fVar24 = *(float *)((long)piVar14 + (ulong)puVar13[8]);
    }
    fVar24 = (fVar24 * DAT_01d4bb38) / DAT_01d4c284;
    if ((0x12 < *puVar13) && ((ulong)puVar13[9] != 0)) {
      fVar26 = *(float *)((long)piVar14 + (ulong)puVar13[9]);
    }
  }
  param_1[0x9f] = (ulong)(uint)((fVar26 * DAT_01d4bb38) / DAT_01d4c284);
  param_1[0x9e] = CONCAT44(fVar24,fVar22);
  puVar2 = (uint *)((long)param_4 + (ulong)*(ushort *)((long)param_4 + (0x1e - (long)*param_4)));
  piVar14 = (int *)((long)puVar2 + (ulong)*puVar2);
  if ((*(ushort *)((long)piVar14 - (long)*piVar14) < 5) ||
     (uVar12 = (ulong)((ushort *)((long)piVar14 - (long)*piVar14))[2], uVar12 == 0)) {
    uVar20 = 0;
  }
  else {
    uVar20 = *(undefined4 *)((long)piVar14 + uVar12);
  }
  *(undefined4 *)(param_1 + 0xa0) = uVar20;
  puVar2 = (uint *)((long)param_4 + (ulong)*(ushort *)((long)param_4 + (0x1e - (long)*param_4)));
  piVar14 = (int *)((long)puVar2 + (ulong)*puVar2);
  fVar22 = 0.0;
  uVar20 = 0;
  if (0xc < *(ushort *)((long)piVar14 - (long)*piVar14)) {
    uVar12 = (ulong)((ushort *)((long)piVar14 - (long)*piVar14))[6];
    uVar20 = 0;
    if (uVar12 != 0) {
      uVar20 = *(undefined4 *)((long)piVar14 + uVar12);
    }
  }
  *(undefined4 *)((long)param_1 + 0x504) = uVar20;
  puVar2 = (uint *)((long)param_4 + (ulong)*(ushort *)((long)param_4 + (0x1e - (long)*param_4)));
  piVar14 = (int *)((long)puVar2 + (ulong)*puVar2);
  puVar13 = (ushort *)((long)piVar14 - (long)*piVar14);
  uVar6 = *puVar13;
  uVar21 = 0;
  uVar20 = 0;
  uVar23 = 0;
  if (6 < uVar6) {
    uVar21 = 0;
    uVar20 = 0;
    if ((ulong)puVar13[3] != 0) {
      uVar20 = *(undefined4 *)((long)piVar14 + (ulong)puVar13[3]);
    }
    if (uVar6 < 9) {
      uVar23 = 0;
    }
    else {
      uVar23 = 0;
      uVar21 = 0;
      if ((ulong)puVar13[4] != 0) {
        uVar21 = *(undefined4 *)((long)piVar14 + (ulong)puVar13[4]);
      }
      if ((10 < uVar6) && ((ulong)puVar13[5] != 0)) {
        uVar23 = *(uint *)((long)piVar14 + (ulong)puVar13[5]);
      }
    }
  }
  uVar25 = 0;
  uVar27 = 0;
  uVar28 = 0;
  param_1[0xa3] = (ulong)uVar23;
  param_1[0xa2] = CONCAT44(uVar21,uVar20);
  puVar2 = (uint *)((long)param_4 + (ulong)*(ushort *)((long)param_4 + (0x1e - (long)*param_4)));
  piVar14 = (int *)((long)puVar2 + (ulong)*puVar2);
  puVar13 = (ushort *)((long)piVar14 - (long)*piVar14);
  uVar6 = *puVar13;
  if (0x14 < uVar6) {
    uVar27 = 0;
    uVar25 = 0;
    if ((ulong)puVar13[10] != 0) {
      uVar25 = *(undefined4 *)((long)piVar14 + (ulong)puVar13[10]);
    }
    if (uVar6 < 0x17) {
      uVar28 = 0;
    }
    else {
      uVar28 = 0;
      uVar27 = 0;
      if ((ulong)puVar13[0xb] != 0) {
        uVar27 = *(undefined4 *)((long)piVar14 + (ulong)puVar13[0xb]);
      }
      if ((0x18 < uVar6) && ((ulong)puVar13[0xc] != 0)) {
        uVar28 = *(uint *)((long)piVar14 + (ulong)puVar13[0xc]);
      }
    }
  }
  fVar24 = 0.0;
  fVar26 = 0.0;
  param_1[0xa5] = (ulong)uVar28;
  param_1[0xa4] = CONCAT44(uVar27,uVar25);
  puVar2 = (uint *)((long)param_4 + (ulong)*(ushort *)((long)param_4 + (0x1e - (long)*param_4)));
  piVar14 = (int *)((long)puVar2 + (ulong)*puVar2);
  puVar13 = (ushort *)((long)piVar14 - (long)*piVar14);
  uVar6 = *puVar13;
  if (0xe < uVar6) {
    fVar22 = 0.0;
    fVar24 = 0.0;
    if ((ulong)puVar13[7] != 0) {
      fVar24 = *(float *)((long)piVar14 + (ulong)puVar13[7]);
    }
    fVar24 = (fVar24 * fVar7) / fVar8;
    if (uVar6 < 0x11) {
      fVar26 = 0.0;
    }
    else {
      fVar26 = 0.0;
      fVar22 = 0.0;
      if ((ulong)puVar13[8] != 0) {
        fVar22 = *(float *)((long)piVar14 + (ulong)puVar13[8]);
      }
      fVar22 = (fVar22 * fVar7) / fVar8;
      if ((0x12 < uVar6) && ((ulong)puVar13[9] != 0)) {
        fVar26 = *(float *)((long)piVar14 + (ulong)puVar13[9]);
      }
    }
  }
  param_1[0xa7] = (ulong)(uint)((fVar26 * fVar7) / fVar8);
  param_1[0xa6] = CONCAT44(fVar22,fVar24);
  FUN_00dc9c00(param_1 + 0xa8);
  puVar13 = (ushort *)((long)param_4 - (long)*param_4);
  if (6 < *puVar13) {
    uVar12 = (ulong)puVar13[3];
    lVar15 = -(long)*param_4;
    if (uVar12 != 0) {
      uVar19 = (ulong)*(uint *)((long)param_4 + uVar12);
      lVar3 = (long)((long)param_4 + uVar12) + uVar19;
      if (lVar3 != 0) {
        pbVar1 = (byte *)(lVar3 + 4);
        uVar18 = 0xcbf29ce484222645;
        local_60 = strlen((char *)pbVar1);
        bVar5 = *(byte *)(lVar3 + 4);
        if (bVar5 != 0) {
          uVar17 = (ulong)(uint)bVar5;
          pbVar16 = (byte *)((long)param_4 + uVar19 + uVar12 + 5);
          do {
            uVar18 = (uVar18 ^ uVar17) * 0x100000001b3;
            bVar4 = *pbVar16;
            uVar17 = (ulong)bVar4;
            pbVar16 = pbVar16 + 1;
          } while (bVar4 != 0);
        }
        uStack_58 = 0;
        local_70 = uVar18;
        pbStack_68 = pbVar1;
        if (bVar5 != 0) {
          param_1[0x80] = local_60;
          lVar15 = param_1[0x81];
          param_1[0x7e] = uVar18;
          param_1[0x7f] = (long)pbVar1;
          param_1[0x81] = 0;
          if (lVar15 != 0) {
            (**(code **)(*(long *)(lVar15 + 0x48) + 0x18))();
          }
          FUN_00dd8640(param_1,&local_70,0);
          if (uStack_58 != 0) {
            (**(code **)(*(long *)(uStack_58 + 0x48) + 0x18))();
            uStack_58 = 0;
          }
        }
        lVar15 = -(long)*param_4;
        puVar13 = (ushort *)((long)param_4 - (long)*param_4);
      }
    }
    if ((8 < *puVar13) && (uVar12 = (ulong)*(ushort *)((long)param_4 + lVar15 + 8), uVar12 != 0)) {
      uVar19 = (ulong)*(uint *)((long)param_4 + uVar12);
      lVar15 = (long)((long)param_4 + uVar12) + uVar19;
      if (lVar15 != 0) {
        pbVar1 = (byte *)(lVar15 + 4);
        pcVar11 = strstr((char *)pbVar1,".gfbanmcfg");
        if (pcVar11 == (char *)0x0) {
          pcVar11 = strstr((char *)pbVar1,".gfbanm");
          if (pcVar11 == (char *)0x0) goto LAB_00dd7e48;
          uVar18 = 0xcbf29ce484222645;
          local_60 = strlen((char *)pbVar1);
          bVar5 = *pbVar1;
          if (bVar5 != 0) {
            pbVar16 = (byte *)((long)param_4 + uVar19 + uVar12 + 5);
            do {
              uVar18 = (uVar18 ^ bVar5) * 0x100000001b3;
              bVar5 = *pbVar16;
              pbVar16 = pbVar16 + 1;
            } while (bVar5 != 0);
          }
          uStack_58 = 0;
          local_70 = uVar18;
          pbStack_68 = pbVar1;
          FUN_00dda040(param_1,&local_70,0);
        }
        else {
          uVar18 = 0xcbf29ce484222645;
          local_60 = strlen((char *)pbVar1);
          bVar5 = *pbVar1;
          if (bVar5 != 0) {
            pbVar16 = (byte *)((long)param_4 + uVar19 + uVar12 + 5);
            do {
              uVar18 = (uVar18 ^ bVar5) * 0x100000001b3;
              bVar5 = *pbVar16;
              pbVar16 = pbVar16 + 1;
            } while (bVar5 != 0);
          }
          uStack_58 = 0;
          local_70 = uVar18;
          pbStack_68 = pbVar1;
          FUN_00dd9600(param_1,&local_70,0);
        }
        if (uStack_58 != 0) {
          (**(code **)(*(long *)(uStack_58 + 0x48) + 0x18))();
          uStack_58 = 0;
        }
      }
    }
  }
LAB_00dd7e48:
  puVar13 = (ushort *)((long)param_4 - (long)*param_4);
  if (*puVar13 < 0xf) {
LAB_00dd807c:
    local_70 = local_70 & 0xffffffffffffff00;
    local_60 = 0;
    uStack_58 = 0;
    goto LAB_00dd80bc;
  }
  uVar12 = (ulong)puVar13[7];
  if (uVar12 != 0) {
    uVar19 = (ulong)*(uint *)((long)param_4 + uVar12);
    lVar15 = (long)((long)param_4 + uVar12) + uVar19;
    if (lVar15 != 0) {
      pbVar1 = (byte *)(lVar15 + 4);
      uVar18 = 0xcbf29ce484222645;
      local_60 = strlen((char *)pbVar1);
      bVar5 = *(byte *)(lVar15 + 4);
      if (bVar5 != 0) {
        uVar17 = (ulong)(uint)bVar5;
        pbVar16 = (byte *)((long)param_4 + uVar19 + uVar12 + 5);
        do {
          uVar18 = (uVar18 ^ uVar17) * 0x100000001b3;
          bVar4 = *pbVar16;
          uVar17 = (ulong)bVar4;
          pbVar16 = pbVar16 + 1;
        } while (bVar4 != 0);
      }
      uStack_58 = 0;
      local_70 = uVar18;
      pbStack_68 = pbVar1;
      if ((bVar5 != 0) && (FUN_00dda9d0(param_1,&local_70,4), uStack_58 != 0)) {
        (**(code **)(*(long *)(uStack_58 + 0x48) + 0x18))();
        uStack_58 = 0;
      }
      puVar13 = (ushort *)((long)param_4 - (long)*param_4);
    }
  }
  if (0x10 < *puVar13) {
    uVar12 = (ulong)puVar13[8];
    if (uVar12 != 0) {
      uVar19 = (ulong)*(uint *)((long)param_4 + uVar12);
      lVar15 = (long)((long)param_4 + uVar12) + uVar19;
      if (lVar15 != 0) {
        pbVar1 = (byte *)(lVar15 + 4);
        uVar18 = 0xcbf29ce484222645;
        local_60 = strlen((char *)pbVar1);
        bVar5 = *(byte *)(lVar15 + 4);
        if (bVar5 != 0) {
          uVar17 = (ulong)(uint)bVar5;
          pbVar16 = (byte *)((long)param_4 + uVar19 + uVar12 + 5);
          do {
            uVar18 = (uVar18 ^ uVar17) * 0x100000001b3;
            bVar4 = *pbVar16;
            uVar17 = (ulong)bVar4;
            pbVar16 = pbVar16 + 1;
          } while (bVar4 != 0);
        }
        uStack_58 = 0;
        local_70 = uVar18;
        pbStack_68 = pbVar1;
        if ((bVar5 != 0) && (FUN_00dda9d0(param_1,&local_70,2), uStack_58 != 0)) {
          (**(code **)(*(long *)(uStack_58 + 0x48) + 0x18))();
        }
        puVar13 = (ushort *)((long)param_4 - (long)*param_4);
      }
    }
    if (0x20 < *puVar13) {
      if ((ulong)puVar13[0x10] == 0) goto LAB_00dd807c;
      puVar2 = (uint *)((long)param_4 + (ulong)puVar13[0x10]);
      piVar14 = (int *)((long)puVar2 + (ulong)*puVar2);
      local_70 = local_70 & 0xffffffffffffff00;
      local_60 = 0;
      uStack_58 = 0;
      if (piVar14 == (int *)0x0) goto LAB_00dd80bc;
      uVar12 = (ulong)*(ushort *)((long)piVar14 + (4 - (long)*piVar14));
      bVar10 = false;
      if (uVar12 != 0) {
        bVar10 = *(char *)((long)piVar14 + uVar12) != '\0';
      }
      local_70 = CONCAT71(local_70._1_7_,bVar10);
      puVar2 = (uint *)((long)piVar14 + (ulong)*(ushort *)((long)piVar14 + (6 - (long)*piVar14)));
      piVar14 = (int *)((long)puVar2 + (ulong)*puVar2);
      puVar13 = (ushort *)((long)piVar14 - (long)*piVar14);
      uVar6 = *puVar13;
      if (uVar6 < 5) {
        uVar20 = 0;
LAB_00dd80a8:
        uVar28 = 0;
        uVar23 = uVar28;
      }
      else {
        uVar20 = 0;
        if ((ulong)puVar13[2] != 0) {
          uVar20 = *(undefined4 *)((long)piVar14 + (ulong)puVar13[2]);
        }
        if (uVar6 < 7) goto LAB_00dd80a8;
        uVar28 = 0;
        if ((ulong)puVar13[3] != 0) {
          uVar28 = *(uint *)((long)piVar14 + (ulong)puVar13[3]);
        }
        uVar23 = 0;
        if ((8 < uVar6) && ((ulong)puVar13[4] != 0)) {
          uVar23 = *(uint *)((long)piVar14 + (ulong)puVar13[4]);
        }
      }
      local_60 = CONCAT44(uVar28,uVar20);
      uStack_58 = (ulong)uVar23;
      goto LAB_00dd80bc;
    }
  }
  local_70 = local_70 & 0xffffffffffffff00;
  local_60 = 0;
  uStack_58 = 0;
LAB_00dd80bc:
  FUN_00dc9c40(param_1 + 0xa8,&local_70);
  return;
}


