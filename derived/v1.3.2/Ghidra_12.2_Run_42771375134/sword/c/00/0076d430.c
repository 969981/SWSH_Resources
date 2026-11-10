/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0076d430; name: FUN_0076d430
 */


undefined8 FUN_0076d430(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  int iVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  
  lVar15 = *param_1;
  puVar11 = (uint *)(param_1 + 0xc);
  *puVar11 = *puVar11 | 0x4000;
  lVar14 = *(long *)((long)param_1 + 0xcc);
  lVar4 = param_1[0x1b];
  iVar17 = *(int *)(lVar15 + 0x10);
  iVar5 = *(int *)(lVar15 + 0x14);
  iVar3 = *(int *)(lVar15 + 0x18);
  *(undefined8 *)((long)param_1 + 0xcc) = 0;
  uVar12 = (uint)(lVar14 == 0xd6) << 1;
  if (lVar14 == 0xd5) {
    uVar12 = 1;
  }
  if (lVar4 < 1) {
LAB_0076d758:
    if (uVar12 - 1 < 2) {
      uVar2 = 0xd5;
      if (uVar12 != 1) {
        uVar2 = 0xd6;
      }
      *(undefined8 *)((long)param_1 + 0xcc) = uVar2;
    }
    uVar13 = 0x8000;
    if ((uVar12 & 2) != 0) {
      uVar13 = 0x8800;
    }
    *puVar11 = *puVar11 & 0xffff3fff | uVar13;
    return 0;
  }
  lVar20 = param_1[1];
  lVar16 = (long)iVar5 - (long)iVar17;
  lVar18 = (long)iVar3 - (long)iVar5;
  lVar14 = 0;
  lVar19 = -lVar18;
  iVar17 = (int)lVar18;
  lVar18 = (long)iVar17;
LAB_0076d4a0:
  uVar13 = *(uint *)(lVar20 + (int)lVar14);
  if ((0xd6 < uVar13) || (0xd3 < uVar13 - 1)) {
switchD_0076d4c4_caseD_32:
    *puVar11 = *puVar11 & 0xffffbfff;
    return 6;
  }
  lVar7 = lVar14 + 8;
  iVar5 = (int)lVar7;
  switch(uVar13) {
  case 1:
  case 2:
  case 5:
  case 6:
  case 0xf:
  case 0x10:
  case 0x13:
  case 0x14:
  case 0x6d:
  case 0x72:
    if ((*(long *)(lVar20 + iVar5) < 0) || (lVar16 <= *(long *)(lVar20 + iVar5))) goto LAB_0076d7b8;
    lVar14 = lVar14 + 0x10;
    break;
  case 3:
  case 4:
  case 7:
  case 8:
  case 0x11:
  case 0x12:
  case 0x15:
  case 0x16:
  case 0x6e:
  case 0x73:
    if ((*(long *)(lVar20 + iVar5) < lVar19) || (lVar18 < *(long *)(lVar20 + iVar5)))
    goto LAB_0076d7b8;
    lVar14 = lVar14 + 0x10;
    break;
  default:
    goto switchD_0076d4c4_caseD_9;
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0x18:
  case 0x1a:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2c:
  case 0x2d:
  case 0x34:
  case 0x44:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x57:
  case 0x58:
  case 0x5b:
  case 0x5c:
  case 0x69:
  case 0x6a:
  case 0x75:
  case 0x76:
  case 0x77:
  case 0x78:
  case 0x79:
  case 0x85:
    goto joined_r0x0076d5e8;
  case 0x31:
  case 0x33:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x3f:
  case 0x40:
  case 0x81:
    lVar4 = (long)iVar5;
    if (*(byte *)(lVar15 + 6) < 10) {
      *(long *)(lVar20 + lVar4) = *(long *)(lVar20 + lVar4) - lVar14;
      lVar20 = param_1[1];
    }
    lVar7 = *(long *)(lVar20 + lVar4) + lVar14;
    if ((lVar7 < 0) || (lVar4 = param_1[0x1b], lVar4 < lVar7)) {
LAB_0076d7b8:
      *puVar11 = *puVar11 & 0xffffbfff;
      return 4;
    }
    lVar14 = lVar14 + 0x10;
    if (lVar4 <= lVar14) goto LAB_0076d758;
    goto LAB_0076d4a0;
  case 0x32:
  case 0x7c:
  case 0x7d:
  case 0x7e:
  case 0x7f:
  case 0x80:
  case 0x88:
    goto switchD_0076d4c4_caseD_32;
  case 0x7b:
    uVar12 = uVar12 | 1;
joined_r0x0076d5e8:
    lVar14 = lVar14 + 0x10;
    break;
  case 0x82:
    goto switchD_0076d4c4_caseD_82;
  case 0x87:
    uVar12 = uVar12 | 2;
    goto joined_r0x0076d594;
  case 0x8a:
  case 0x8b:
  case 0x8c:
  case 0x8d:
  case 0x9c:
  case 0x9d:
joined_r0x0076d594:
    lVar14 = lVar14 + 0x18;
    break;
  case 0x8e:
  case 0x8f:
  case 0x90:
  case 0x91:
    lVar14 = lVar14 + 0x20;
    break;
  case 0x92:
  case 0x93:
  case 0x94:
  case 0x95:
    lVar14 = lVar14 + 0x28;
    break;
  case 0x96:
  case 0x97:
  case 0x98:
  case 0x99:
    lVar14 = lVar14 + 0x30;
    break;
  case 0x9a:
    lVar7 = *(long *)(lVar20 + iVar5);
    if (((lVar7 < 0) || (lVar16 <= lVar7)) ||
       ((lVar7 = ((long *)(lVar20 + iVar5))[1], lVar7 < 0 || (lVar16 <= lVar7)))) goto LAB_0076d7b8;
    lVar14 = lVar14 + 0x18;
    break;
  case 0x9b:
    lVar7 = *(long *)(lVar20 + iVar5);
    if (((lVar7 < lVar19 || lVar18 < lVar7) ||
        (lVar7 = ((long *)(lVar20 + iVar5))[1], lVar7 < lVar19)) || (lVar18 < lVar7))
    goto LAB_0076d7b8;
    lVar14 = lVar14 + 0x18;
    break;
  case 0x9e:
    goto switchD_0076d4c4_caseD_9e;
  case 0x9f:
    goto switchD_0076d4c4_caseD_9f;
  case 0xa0:
    lVar7 = *(long *)(lVar20 + iVar5) + lVar14;
    if ((lVar7 < 0) || (lVar4 < lVar7)) goto LAB_0076d7b8;
switchD_0076d4c4_caseD_9e:
    lVar7 = lVar14 + 0x10;
switchD_0076d4c4_caseD_9f:
    if (param_1[5] == 0) {
      return 0x1c;
    }
    goto switchD_0076d4c4_caseD_9;
  case 0xa1:
    if (param_1[5] == 0) {
      return 0x1c;
    }
    lVar14 = lVar14 + (*(long *)(lVar20 + iVar5) << 4 | 8U) + 0x10;
    break;
  case 0xa2:
  case 0xa3:
  case 0xa6:
  case 0xa7:
  case 0xaf:
  case 0xb0:
  case 0xb3:
  case 0xb4:
  case 0xcb:
  case 0xcd:
    if ((int)lVar16 < 1) goto LAB_0076d7b8;
    goto switchD_0076d4c4_caseD_9;
  case 0xa4:
  case 0xa5:
  case 0xa8:
  case 0xa9:
  case 0xb1:
  case 0xb2:
  case 0xb5:
  case 0xb6:
  case 0xcc:
  case 0xce:
    if (iVar17 < 0) goto LAB_0076d7b8;
switchD_0076d4c4_caseD_9:
    lVar14 = lVar7;
  }
  if (lVar4 <= lVar14) goto LAB_0076d758;
  goto LAB_0076d4a0;
switchD_0076d4c4_caseD_82:
  lVar6 = *(long *)(lVar20 + iVar5);
  if (-1 < lVar6) {
    lVar8 = 0;
    lVar9 = -8 - lVar14;
    lVar10 = lVar14 << 0x20;
    do {
      lVar10 = lVar10 + 0x1000000000;
      lVar4 = lVar10 >> 0x20;
      if (*(byte *)(lVar15 + 6) < 10) {
        *(long *)(lVar20 + lVar4) = lVar9 + *(long *)(lVar20 + lVar4);
        lVar20 = param_1[1];
      }
      lVar1 = lVar7 + *(long *)(lVar20 + lVar4);
      if ((lVar1 < 0) || (lVar4 = param_1[0x1b], lVar4 < lVar1)) goto LAB_0076d7b8;
      lVar8 = lVar8 + 1;
      lVar9 = lVar9 + -0x10;
      lVar7 = lVar7 + 0x10;
    } while (lVar8 <= lVar6);
  }
  lVar14 = (lVar6 << 4 | 8U) + lVar14 + 0x10;
  if (lVar4 <= lVar14) goto LAB_0076d758;
  goto LAB_0076d4a0;
}


