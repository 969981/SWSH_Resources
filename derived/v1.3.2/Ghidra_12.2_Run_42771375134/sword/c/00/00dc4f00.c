/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dc4f00; name: FUN_00dc4f00
 */


void FUN_00dc4f00(long *param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  char *__s;
  byte bVar1;
  float fVar2;
  float fVar3;
  undefined *puVar4;
  bool bVar5;
  size_t sVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  int *piVar10;
  ushort uVar11;
  ulong uVar12;
  ushort *puVar13;
  uint *puVar14;
  byte *pbVar15;
  long lVar16;
  long lVar17;
  uint *puVar18;
  ulong uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  float fVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  uint uVar25;
  uint uVar26;
  float fVar27;
  
  if ((*(ushort *)((long)param_4 - (long)*param_4) < 5) ||
     (uVar8 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[2], uVar8 == 0)) {
    lVar9 = 0;
  }
  else {
    puVar18 = (uint *)((long)param_4 + uVar8);
    lVar9 = (long)puVar18 + (ulong)*puVar18;
  }
  FUN_00db5850(param_1,param_2,param_3,lVar9);
  puVar4 = PTR_DAT_0271e918;
  *param_1 = (long)(PTR_DAT_0271e918 + 0x10);
  param_1[9] = (long)(puVar4 + 0x198);
  param_1[10] = (long)(puVar4 + 0x1d8);
  if (*(ushort *)((long)param_4 - (long)*param_4) < 7) {
    uVar20 = 0;
  }
  else {
    uVar8 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[3];
    uVar20 = 0;
    if (uVar8 != 0) {
      uVar20 = *(undefined4 *)((long)param_4 + uVar8);
    }
  }
  *(undefined4 *)(param_1 + 0x74) = uVar20;
  if (*(ushort *)((long)param_4 - (long)*param_4) < 9) {
    uVar20 = 0;
  }
  else {
    uVar8 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[4];
    uVar20 = 0;
    if (uVar8 != 0) {
      uVar20 = *(undefined4 *)((long)param_4 + uVar8);
    }
  }
  *(undefined4 *)((long)param_1 + 0x3a4) = uVar20;
  if (*(ushort *)((long)param_4 - (long)*param_4) < 0xb) {
    bVar5 = false;
  }
  else {
    uVar8 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[5];
    bVar5 = false;
    if (uVar8 != 0) {
      bVar5 = *(char *)((long)param_4 + uVar8) != '\0';
    }
  }
  *(bool *)(param_1 + 0x75) = bVar5;
  if ((*(ushort *)((long)param_4 - (long)*param_4) < 0xd) ||
     (uVar8 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[6], uVar8 == 0)) {
    bVar5 = false;
  }
  else {
    bVar5 = *(char *)((long)param_4 + uVar8) != '\0';
  }
  *(bool *)((long)param_1 + 0x3a9) = bVar5;
  param_1[0x77] = -0x340d631b7bddd9bb;
  param_1[0x78] = (long)&DAT_01d38550;
  param_1[0x85] = -0x340d631b7bddd9bb;
  param_1[0x86] = (long)&DAT_01d38550;
  param_1[0x93] = -0x340d631b7bddd9bb;
  lVar9 = 0;
  param_1[0x94] = (long)&DAT_01d38550;
  param_1[0xa1] = -0x340d631b7bddd9bb;
  param_1[0xa2] = (long)&DAT_01d38550;
  param_1[0xaf] = -0x340d631b7bddd9bb;
  param_1[0xb0] = (long)&DAT_01d38550;
  param_1[0xbd] = -0x340d631b7bddd9bb;
  param_1[0xbe] = (long)&DAT_01d38550;
  param_1[0xcb] = -0x340d631b7bddd9bb;
  param_1[0xcc] = (long)&DAT_01d38550;
  param_1[0xd9] = -0x340d631b7bddd9bb;
  param_1[0xda] = (long)&DAT_01d38550;
  param_1[0xe7] = -0x340d631b7bddd9bb;
  param_1[0xe8] = (long)&DAT_01d38550;
  param_1[0x76] = 0;
  param_1[0x7b] = 0;
  param_1[0x7a] = 0;
  param_1[0x79] = 0;
  param_1[0x84] = 0;
  param_1[0x89] = 0;
  param_1[0x88] = 0;
  param_1[0x87] = 0;
  param_1[0x92] = 0;
  param_1[0x97] = 0;
  param_1[0x96] = 0;
  param_1[0x95] = 0;
  param_1[0xa0] = 0;
  param_1[0xa5] = 0;
  param_1[0xa4] = 0;
  param_1[0xa3] = 0;
  param_1[0xae] = 0;
  param_1[0xb3] = 0;
  param_1[0xb2] = 0;
  param_1[0xb1] = 0;
  param_1[0xbc] = 0;
  param_1[0xc1] = 0;
  param_1[0xc0] = 0;
  param_1[0xbf] = 0;
  param_1[0xca] = 0;
  param_1[0xcf] = 0;
  param_1[0xce] = 0;
  param_1[0xcd] = 0;
  param_1[0xd8] = 0;
  param_1[0xdd] = 0;
  param_1[0xdc] = 0;
  param_1[0xdb] = 0;
  param_1[0xe6] = 0;
  param_1[0xeb] = 0;
  param_1[0xea] = 0;
  param_1[0xe9] = 0;
  *(undefined4 *)(param_1 + 0xf4) = 1;
  *(undefined8 *)((long)param_1 + 0x7b4) = 0;
  *(undefined8 *)((long)param_1 + 0x7ac) = 0;
  *(undefined8 *)((long)param_1 + 0x7a4) = 0;
  *(undefined4 *)(param_1 + 0xf8) = 1;
  *(undefined4 *)((long)param_1 + 0x7bc) = 0;
  *(undefined4 *)((long)param_1 + 0x7dc) = 0;
  *(undefined8 *)((long)param_1 + 0x7d4) = 0;
  *(undefined8 *)((long)param_1 + 0x7cc) = 0;
  *(undefined8 *)((long)param_1 + 0x7c4) = 0;
  fVar3 = DAT_01d4c284;
  fVar2 = DAT_01d4bb38;
  puVar13 = (ushort *)((long)param_4 - (long)*param_4);
  if (0xe < *puVar13) {
    uVar8 = (ulong)puVar13[7];
    lVar9 = 0;
    if (uVar8 != 0) {
      puVar18 = (uint *)((long)param_4 + uVar8);
      lVar9 = (long)puVar18 + (ulong)*puVar18;
    }
  }
  puVar18 = (uint *)(lVar9 + 4);
  lVar9 = lVar9 + 9;
  lVar16 = 0;
  puVar13 = (ushort *)((long)param_4 - (long)*param_4);
  uVar11 = *puVar13;
  if (0xe < uVar11) goto LAB_00dc5220;
  do {
    puVar14 = (uint *)0x0;
    lVar17 = lVar16;
LAB_00dc5234:
    if (puVar18 == puVar14 + (ulong)*puVar14 + 1) {
      if ((uVar11 < 0x11) || ((ulong)puVar13[8] == 0)) {
        piVar10 = (int *)0x0;
      }
      else {
        puVar18 = (uint *)((long)param_4 + (ulong)puVar13[8]);
        piVar10 = (int *)((long)puVar18 + (ulong)*puVar18);
      }
      puVar13 = (ushort *)((long)piVar10 - (long)*piVar10);
      uVar11 = *puVar13;
      if (uVar11 < 5) {
        uVar23 = 0;
        *(undefined4 *)(param_1 + 0xf4) = 0;
        uVar20 = 0;
        uVar25 = 0;
      }
      else {
        iVar7 = 0;
        if ((ulong)puVar13[2] != 0) {
          iVar7 = *(int *)((long)piVar10 + (ulong)puVar13[2]);
        }
        if (uVar11 < 7) {
          uVar25 = 0;
          uVar20 = 0;
          uVar23 = 0;
LAB_00dc5704:
          uVar21 = 0;
LAB_00dc5708:
          fVar27 = 0.0;
          fVar22 = fVar27;
LAB_00dc5710:
          uVar24 = 0;
          *(int *)(param_1 + 0xf4) = iVar7;
        }
        else {
          uVar20 = 0;
          if ((ulong)puVar13[3] != 0) {
            uVar20 = *(undefined4 *)((long)piVar10 + (ulong)puVar13[3]);
          }
          if (uVar11 < 9) {
            uVar25 = 0;
            uVar23 = 0;
            goto LAB_00dc5704;
          }
          uVar23 = 0;
          if ((ulong)puVar13[4] != 0) {
            uVar23 = *(undefined4 *)((long)piVar10 + (ulong)puVar13[4]);
          }
          if (uVar11 < 0xb) {
            uVar25 = 0;
            goto LAB_00dc5704;
          }
          uVar25 = 0;
          if ((ulong)puVar13[5] != 0) {
            uVar25 = *(uint *)((long)piVar10 + (ulong)puVar13[5]);
          }
          if (uVar11 < 0xd) goto LAB_00dc5704;
          uVar21 = 0;
          if ((ulong)puVar13[6] != 0) {
            uVar21 = *(undefined4 *)((long)piVar10 + (ulong)puVar13[6]);
          }
          if (uVar11 < 0x11) goto LAB_00dc5708;
          fVar22 = 0.0;
          fVar27 = 0.0;
          if ((ulong)puVar13[8] != 0) {
            fVar27 = *(float *)((long)piVar10 + (ulong)puVar13[8]);
          }
          if (0x14 < uVar11) {
            fVar22 = 0.0;
            if ((ulong)puVar13[10] != 0) {
              fVar22 = *(float *)((long)piVar10 + (ulong)puVar13[10]);
            }
            if ((0x18 < uVar11) && ((ulong)puVar13[0xc] != 0)) {
              uVar24 = *(undefined4 *)((long)piVar10 + (ulong)puVar13[0xc]);
              *(int *)(param_1 + 0xf4) = iVar7;
              goto joined_r0x00dc573c;
            }
            goto LAB_00dc5710;
          }
          uVar24 = 0;
          *(int *)(param_1 + 0xf4) = iVar7;
        }
joined_r0x00dc573c:
        if (iVar7 == 2) {
          *(float *)((long)param_1 + 0x7a4) = fVar22;
          *(undefined4 *)(param_1 + 0xf5) = uVar24;
          *(float *)((long)param_1 + 0x7ac) = (fVar27 * fVar2) / fVar3;
        }
        else if (iVar7 == 1) {
          *(undefined4 *)((long)param_1 + 0x7a4) = uVar21;
        }
      }
      param_1[0xf7] = (ulong)uVar25;
      param_1[0xf6] = CONCAT44(uVar23,uVar20);
      if ((*(ushort *)((long)param_4 - (long)*param_4) < 0x13) ||
         (uVar8 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[9], uVar8 == 0)) {
        piVar10 = (int *)0x0;
      }
      else {
        puVar18 = (uint *)((long)param_4 + uVar8);
        piVar10 = (int *)((long)puVar18 + (ulong)*puVar18);
      }
      puVar13 = (ushort *)((long)piVar10 - (long)*piVar10);
      uVar11 = *puVar13;
      if (uVar11 < 5) {
        uVar23 = 0;
        *(undefined4 *)(param_1 + 0xf8) = 0;
        uVar20 = 0;
        uVar25 = 0;
        goto LAB_00dc590c;
      }
      iVar7 = 0;
      if ((ulong)puVar13[2] != 0) {
        iVar7 = *(int *)((long)piVar10 + (ulong)puVar13[2]);
      }
      if (uVar11 < 7) {
        uVar25 = 0;
        uVar20 = 0;
        uVar23 = 0;
LAB_00dc58bc:
        uVar21 = 0;
LAB_00dc58c0:
        fVar22 = 0.0;
        fVar27 = fVar22;
LAB_00dc58c8:
        uVar24 = 0;
        *(int *)(param_1 + 0xf8) = iVar7;
      }
      else {
        uVar20 = 0;
        if ((ulong)puVar13[3] != 0) {
          uVar20 = *(undefined4 *)((long)piVar10 + (ulong)puVar13[3]);
        }
        if (uVar11 < 9) {
          uVar25 = 0;
          uVar23 = 0;
          goto LAB_00dc58bc;
        }
        uVar23 = 0;
        if ((ulong)puVar13[4] != 0) {
          uVar23 = *(undefined4 *)((long)piVar10 + (ulong)puVar13[4]);
        }
        if (uVar11 < 0xb) {
          uVar25 = 0;
          goto LAB_00dc58bc;
        }
        uVar25 = 0;
        if ((ulong)puVar13[5] != 0) {
          uVar25 = *(uint *)((long)piVar10 + (ulong)puVar13[5]);
        }
        if (uVar11 < 0xd) goto LAB_00dc58bc;
        uVar21 = 0;
        if ((ulong)puVar13[6] != 0) {
          uVar21 = *(undefined4 *)((long)piVar10 + (ulong)puVar13[6]);
        }
        if (uVar11 < 0x11) goto LAB_00dc58c0;
        fVar27 = 0.0;
        fVar22 = 0.0;
        if ((ulong)puVar13[8] != 0) {
          fVar22 = *(float *)((long)piVar10 + (ulong)puVar13[8]);
        }
        if (0x14 < uVar11) {
          fVar27 = 0.0;
          if ((ulong)puVar13[10] != 0) {
            fVar27 = *(float *)((long)piVar10 + (ulong)puVar13[10]);
          }
          if ((0x18 < uVar11) && ((ulong)puVar13[0xc] != 0)) {
            uVar24 = *(undefined4 *)((long)piVar10 + (ulong)puVar13[0xc]);
            *(int *)(param_1 + 0xf8) = iVar7;
            goto joined_r0x00dc58d0;
          }
          goto LAB_00dc58c8;
        }
        uVar24 = 0;
        *(int *)(param_1 + 0xf8) = iVar7;
      }
joined_r0x00dc58d0:
      if (iVar7 == 2) {
        *(float *)((long)param_1 + 0x7c4) = fVar27;
        *(undefined4 *)(param_1 + 0xf9) = uVar24;
        *(float *)((long)param_1 + 0x7cc) = (fVar22 * fVar2) / fVar3;
      }
      else if (iVar7 == 1) {
        *(undefined4 *)((long)param_1 + 0x7c4) = uVar21;
      }
LAB_00dc590c:
      param_1[0xfb] = (ulong)uVar25;
      param_1[0xfa] = CONCAT44(uVar23,uVar20);
      return;
    }
    piVar10 = (int *)((long)puVar18 + (ulong)*puVar18);
    if ((*(ushort *)((long)piVar10 - (long)*piVar10) < 5) ||
       (uVar8 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[2], uVar8 == 0)) {
      lVar16 = 0;
    }
    else {
      lVar16 = *(long *)((long)piVar10 + uVar8);
    }
    param_1[lVar17 * 0xe + 0x76] = lVar16;
    uVar25 = *puVar18;
    piVar10 = (int *)((long)puVar18 + (ulong)uVar25);
    puVar13 = (ushort *)((long)piVar10 - (long)*piVar10);
    if (*puVar13 < 7) {
LAB_00dc53b4:
      lVar16 = 0;
    }
    else {
      uVar8 = (ulong)puVar13[3];
      if (uVar8 == 0) {
LAB_00dc537c:
        uVar11 = *puVar13;
      }
      else {
        uVar19 = (ulong)*(uint *)((long)piVar10 + uVar8);
        lVar16 = (long)((long)piVar10 + uVar8) + uVar19;
        if (lVar16 == 0) goto LAB_00dc537c;
        __s = (char *)(lVar16 + 4);
        sVar6 = strlen(__s);
        if (1 < sVar6) {
          sVar6 = strlen(__s);
          bVar1 = *(byte *)(lVar16 + 4);
          uVar12 = 0xcbf29ce484222645;
          if (bVar1 != 0) {
            uVar12 = 0xcbf29ce484222645;
            pbVar15 = (byte *)(lVar9 + uVar19 + uVar8 + (ulong)uVar25);
            do {
              uVar12 = (uVar12 ^ bVar1) * 0x100000001b3;
              bVar1 = *pbVar15;
              pbVar15 = pbVar15 + 1;
            } while (bVar1 != 0);
          }
          param_1[lVar17 * 0xe + 0x79] = sVar6;
          param_1[lVar17 * 0xe + 0x77] = uVar12;
          param_1[lVar17 * 0xe + 0x78] = (long)__s;
          if (param_1[lVar17 * 0xe + 0x7a] != 0) {
            (**(code **)(*(long *)(param_1[lVar17 * 0xe + 0x7a] + 0x48) + 0x18))();
            param_1[lVar17 * 0xe + 0x7a] = 0;
          }
          param_1[lVar17 * 0xe + 0x7a] = 0;
          piVar10 = (int *)((long)puVar18 + (ulong)*puVar18);
          puVar13 = (ushort *)((long)piVar10 - (long)*piVar10);
          goto LAB_00dc537c;
        }
        uVar11 = *puVar13;
      }
      if (uVar11 < 9) goto LAB_00dc53b4;
      lVar16 = 0;
      if ((ulong)puVar13[4] != 0) {
        lVar16 = *(long *)((long)piVar10 + (ulong)puVar13[4]);
      }
    }
    param_1[lVar17 * 0xe + 0x7b] = lVar16;
    piVar10 = (int *)((long)puVar18 + (ulong)*puVar18);
    if ((*(ushort *)((long)piVar10 - (long)*piVar10) < 0xb) ||
       (uVar8 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[5], uVar8 == 0)) {
      uVar20 = 0;
    }
    else {
      uVar20 = *(undefined4 *)((long)piVar10 + uVar8);
    }
    *(undefined4 *)(param_1 + lVar17 * 0xe + 0x7c) = uVar20;
    piVar10 = (int *)((long)puVar18 + (ulong)*puVar18);
    if ((*(ushort *)((long)piVar10 - (long)*piVar10) < 0xd) ||
       (uVar8 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[6], uVar8 == 0)) {
      piVar10 = (int *)0x0;
    }
    else {
      puVar14 = (uint *)((long)piVar10 + uVar8);
      piVar10 = (int *)((long)puVar14 + (ulong)*puVar14);
    }
    if (*(ushort *)((long)piVar10 - (long)*piVar10) < 5) {
      uVar20 = 0;
    }
    else {
      uVar8 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[2];
      uVar20 = 0;
      if (uVar8 != 0) {
        uVar20 = *(undefined4 *)((long)piVar10 + uVar8);
      }
    }
    *(undefined4 *)((long)param_1 + lVar17 * 0x70 + 0x3e4) = uVar20;
    uVar20 = 0;
    if (0xc < *(ushort *)((long)piVar10 - (long)*piVar10)) {
      uVar8 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[6];
      uVar20 = 0;
      if (uVar8 != 0) {
        uVar20 = *(undefined4 *)((long)piVar10 + uVar8);
      }
    }
    *(undefined4 *)(param_1 + lVar17 * 0xe + 0x7d) = uVar20;
    puVar13 = (ushort *)((long)piVar10 - (long)*piVar10);
    uVar11 = *puVar13;
    uVar23 = 0;
    uVar20 = 0;
    uVar25 = 0;
    if (6 < uVar11) {
      uVar20 = 0;
      if ((ulong)puVar13[3] != 0) {
        uVar20 = *(undefined4 *)((long)piVar10 + (ulong)puVar13[3]);
      }
      if (uVar11 < 9) {
        uVar23 = 0;
      }
      else {
        uVar23 = 0;
        if ((ulong)puVar13[4] != 0) {
          uVar23 = *(undefined4 *)((long)piVar10 + (ulong)puVar13[4]);
        }
        if ((10 < uVar11) && ((ulong)puVar13[5] != 0)) {
          uVar25 = *(uint *)((long)piVar10 + (ulong)puVar13[5]);
          goto LAB_00dc54f8;
        }
      }
      uVar25 = 0;
    }
LAB_00dc54f8:
    uVar21 = 0;
    uVar24 = 0;
    uVar26 = 0;
    param_1[lVar17 * 0xe + 0x7f] = (ulong)uVar25;
    param_1[lVar17 * 0xe + 0x7e] = CONCAT44(uVar23,uVar20);
    puVar13 = (ushort *)((long)piVar10 - (long)*piVar10);
    uVar11 = *puVar13;
    if (0x14 < uVar11) {
      uVar21 = 0;
      if ((ulong)puVar13[10] != 0) {
        uVar21 = *(undefined4 *)((long)piVar10 + (ulong)puVar13[10]);
      }
      if (uVar11 < 0x17) {
        uVar24 = 0;
      }
      else {
        uVar24 = 0;
        if ((ulong)puVar13[0xb] != 0) {
          uVar24 = *(undefined4 *)((long)piVar10 + (ulong)puVar13[0xb]);
        }
        if ((0x18 < uVar11) && ((ulong)puVar13[0xc] != 0)) {
          uVar26 = *(uint *)((long)piVar10 + (ulong)puVar13[0xc]);
          goto LAB_00dc5578;
        }
      }
      uVar26 = 0;
    }
LAB_00dc5578:
    fVar22 = 0.0;
    param_1[lVar17 * 0xe + 0x81] = (ulong)uVar26;
    param_1[lVar17 * 0xe + 0x80] = CONCAT44(uVar24,uVar21);
    if (0x10 < *(ushort *)((long)piVar10 - (long)*piVar10)) {
      uVar8 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[8];
      fVar22 = 0.0;
      if (uVar8 != 0) {
        fVar22 = *(float *)((long)piVar10 + uVar8);
      }
    }
    lVar16 = lVar17 + 1;
    *(float *)(param_1 + lVar17 * 0xe + 0x82) = (fVar22 * fVar2) / fVar3;
    puVar18 = puVar18 + 1;
    lVar9 = lVar9 + 4;
    puVar13 = (ushort *)((long)param_4 - (long)*param_4);
    uVar11 = *puVar13;
  } while (uVar11 < 0xf);
LAB_00dc5220:
  puVar14 = (uint *)0x0;
  lVar17 = lVar16;
  if ((ulong)puVar13[7] != 0) {
    puVar14 = (uint *)((long)param_4 + (ulong)puVar13[7]);
    puVar14 = (uint *)((long)puVar14 + (ulong)*puVar14);
  }
  goto LAB_00dc5234;
}


