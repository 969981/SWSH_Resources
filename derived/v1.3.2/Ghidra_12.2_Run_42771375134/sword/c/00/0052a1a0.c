/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0052a1a0; name: FUN_0052a1a0
 */


undefined8 FUN_0052a1a0(long param_1)

{
  int *piVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  uVar7 = *(uint *)(param_1 + 0x8c8);
  cVar2 = *(char *)(param_1 + 0x59a);
  if (uVar7 == 0xffffffff) {
    if (*(char *)(param_1 + 0x59e) == '\0') {
      uVar10 = 0x30002;
      if (cVar2 == '\0') {
        uVar10 = 0x50008;
      }
      uVar7 = 2;
      if (*(char *)(param_1 + 0x598) != '\0') {
        uVar7 = uVar10;
      }
    }
    else {
      uVar7 = 0x30002;
      if (cVar2 == '\0') {
        uVar7 = 0x50005;
      }
    }
  }
  uVar10 = uVar7 & 0xffff;
  *(uint *)(param_1 + 0x8c8) = uVar7;
  if (uVar10 == 8 && *(char *)(param_1 + 0x599) != '\0') {
    uVar10 = uVar7 >> 0x10;
    uVar7 = uVar7 & 0xffff0000 | uVar7 >> 0x10;
    *(uint *)(param_1 + 0x8c8) = uVar7;
  }
  uVar4 = uVar7 >> 0x10;
  *(bool *)(param_1 + 0x106a) = uVar10 == uVar4;
  *(undefined1 *)(param_1 + 0x106b) = 0;
  cVar3 = *(char *)(param_1 + 0x59d);
  if (cVar3 == '\0') {
    bVar5 = false;
joined_r0x0052a250:
    if ((DAT_0275cc3f & 1) == 0) {
      DAT_0275cc3f = 1;
      DAT_0275cdcc = 0x100000000;
      DAT_0275cdd4 = 0x20000000a;
      DAT_0275cddc = 0x600000004;
      DAT_0275cde4 = 0xe00000008;
      DAT_0275cdec = 1;
    }
    iVar8 = *(int *)((long)&DAT_0275cdcc + (ulong)uVar10 * 4);
    if (((bVar5) && (uVar10 = iVar8 - 2, uVar10 < 0xd)) &&
       ((0x1155U >> (ulong)(uVar10 & 0x1f) & 1) != 0)) {
      iVar8 = *(int *)(&DAT_01d6af20 + (long)(int)uVar10 * 4);
    }
  }
  else {
    if (uVar10 == 8) {
      bVar5 = false;
      goto joined_r0x0052a250;
    }
    bVar5 = true;
    *(undefined1 *)(param_1 + 0x106b) = 1;
    if ((uVar10 == uVar4) || (uVar10 == 8)) goto joined_r0x0052a250;
    iVar12 = 0xd;
    if (uVar7 != 0x30002) {
      iVar12 = -1;
    }
    iVar8 = 0xc;
    if (uVar7 != 0x30001) {
      iVar8 = iVar12;
    }
  }
  *(int *)(param_1 + 0x6a4) = iVar8;
  *(undefined8 *)(param_1 + 0x688) = 0;
  *(undefined4 *)(param_1 + 0x690) = 0;
  switch(uVar4) {
  case 0:
    iVar12 = 0;
    iVar9 = 0;
    iVar8 = 0;
    *(undefined4 *)(param_1 + 0x694) = 0;
    *(undefined8 *)(param_1 + 0x688) = 0;
    *(undefined8 *)(param_1 + 0x680) = 0;
    goto switchD_0052a510_caseD_2;
  default:
    if ((uVar7 & 0xffff0000) == 0x70000) {
      uVar11 = 0;
      uVar13 = 0xf;
      iVar8 = 0xd;
      if (*(char *)(param_1 + 0x104d) == '\0') {
        iVar8 = 0xe;
      }
      break;
    }
    iVar8 = 0;
    goto LAB_0052a42c;
  case 3:
    iVar8 = 1;
    if (*(char *)(param_1 + 0x104d) == '\0') {
      iVar8 = 2;
    }
    uVar11 = 0x10;
    uVar13 = 3;
    break;
  case 4:
    iVar8 = 4;
    if (*(char *)(param_1 + 0x104d) == '\0') {
      iVar8 = 5;
    }
    uVar11 = 0x11;
    uVar13 = 6;
    break;
  case 5:
    iVar8 = 7;
    if (*(char *)(param_1 + 0x104d) == '\0') {
      iVar8 = 8;
    }
    uVar11 = 0x12;
    uVar13 = 9;
    break;
  case 6:
    iVar8 = 10;
    if (*(char *)(param_1 + 0x104d) == '\0') {
      iVar8 = 0xb;
    }
    uVar11 = 0x13;
    uVar13 = 0xc;
  }
  *(int *)(param_1 + 0x688) = iVar8;
  *(undefined4 *)(param_1 + 0x68c) = uVar13;
  *(undefined4 *)(param_1 + 0x690) = uVar11;
LAB_0052a42c:
  iVar12 = iVar8;
  if (cVar3 != '\0') {
    iVar12 = 0;
  }
  iVar9 = 0;
  if (cVar3 != '\0') {
    iVar9 = iVar8;
  }
  *(int *)(param_1 + 0x694) = iVar8;
  *(int *)(param_1 + 0x680) = iVar12;
  *(int *)(param_1 + 0x684) = iVar9;
  if (*(char *)(param_1 + 0x598) == '\0') {
LAB_0052a45c:
    if (cVar2 == '\0') goto LAB_0052a4f0;
LAB_0052a460:
    iVar12 = 3;
    *(undefined4 *)(param_1 + 0x680) = 3;
    *(undefined8 *)(param_1 + 0x688) = 0x100000003;
    iVar8 = 3;
    *(undefined4 *)(param_1 + 0x690) = 0;
switchD_0052a510_caseD_2:
    iVar6 = iVar12;
    goto switchD_0052a510_caseD_7;
  }
  piVar1 = (int *)(param_1 + 0x680);
  if ((uVar7 & 0xffff0000) == 0x70000) {
    *piVar1 = iVar8;
    iVar12 = iVar8;
    goto LAB_0052a45c;
  }
  iVar8 = 0;
  iVar9 = 0;
  iVar12 = 0;
  piVar1[0] = 0;
  piVar1[1] = 0;
  *(undefined8 *)(param_1 + 0x688) = 0;
  if (cVar2 != '\0') goto LAB_0052a460;
LAB_0052a4f0:
  iVar6 = 8;
  switch(iVar12) {
  case 1:
    *(undefined4 *)(param_1 + 0x698) = 2;
    goto joined_r0x0052a524;
  default:
    goto switchD_0052a510_caseD_2;
  case 4:
    *(undefined4 *)(param_1 + 0x698) = 5;
    break;
  case 7:
    goto switchD_0052a510_caseD_7;
  case 10:
    *(undefined4 *)(param_1 + 0x698) = 0xb;
    break;
  case 0xd:
    *(undefined4 *)(param_1 + 0x698) = 0xe;
  }
  uVar7 = iVar9 - 1;
  if (uVar7 < 0xd) goto LAB_0052a490;
switchD_0052a4a4_caseD_52a5d8:
  *(int *)(param_1 + 0x69c) = iVar9;
  goto joined_r0x0052a53c;
switchD_0052a510_caseD_7:
  *(int *)(param_1 + 0x698) = iVar6;
joined_r0x0052a524:
  uVar7 = iVar9 - 1;
  if (0xc < uVar7) goto switchD_0052a4a4_caseD_52a5d8;
LAB_0052a490:
  uVar11 = 8;
  switch((long)&switchD_0052a4a4::switchdataD_01d6ac3c +
         (long)(int)(&switchD_0052a4a4::switchdataD_01d6ac3c)[uVar7]) {
  case 0x52a4a8:
    uVar11 = 2;
  case 0x52a4ac:
    *(undefined4 *)(param_1 + 0x69c) = uVar11;
    break;
  case 0x52a52c:
    *(undefined4 *)(param_1 + 0x69c) = 5;
    break;
  case 0x52a544:
    *(undefined4 *)(param_1 + 0x69c) = 0xb;
    break;
  case 0x52a55c:
    *(undefined4 *)(param_1 + 0x69c) = 0xe;
    break;
  default:
    goto switchD_0052a4a4_caseD_52a5d8;
  }
joined_r0x0052a53c:
  if (iVar8 - 1U < 0xd) {
    iVar12 = 8;
    switch((long)&switchD_0052a4d0::switchdataD_01d6ac70 +
           (long)(int)(&switchD_0052a4d0::switchdataD_01d6ac70)[iVar8 - 1U]) {
    case 0x52a4d4:
      iVar12 = 2;
      break;
    case 0x52a574:
      iVar12 = 5;
      break;
    case 0x52a57c:
      iVar12 = 0xb;
      break;
    case 0x52a584:
      iVar12 = 0xe;
      break;
    default:
      goto switchD_0052a4d0_caseD_52a5ec;
    case 0x52a5f0:
      break;
    }
  }
  else {
switchD_0052a4d0_caseD_52a5ec:
    iVar12 = iVar8;
  }
  fVar14 = *(float *)(param_1 + 0x8cc) / *(float *)(param_1 + 0x8d0);
  *(int *)(param_1 + 0x6a0) = iVar12;
  fVar16 = DAT_01d4c0cc;
  if (*(char *)(param_1 + 0x59c) != '\0') {
    fVar16 = 16.0;
  }
  if (fVar14 <= fVar16) {
    fVar16 = fVar14;
  }
  fVar15 = DAT_01d4bec4;
  if (DAT_01d4bec4 <= fVar14) {
    fVar15 = fVar16;
  }
  *(float *)(param_1 + 0xf70) = fVar15;
  return 0;
}


