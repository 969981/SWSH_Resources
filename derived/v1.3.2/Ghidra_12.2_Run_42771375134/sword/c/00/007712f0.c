/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007712f0; name: FUN_007712f0
 */


/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_007712f0(long *param_1,undefined8 param_2,long param_3,char param_4,uint param_5,uint param_6,
            undefined4 param_7,code *param_8,code *param_9,undefined8 param_10)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  char cVar5;
  size_t sVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  int iVar12;
  char *pcVar13;
  undefined1 *puVar14;
  int iVar15;
  ulong *puVar16;
  undefined8 local_b8;
  undefined8 local_b0;
  ulong local_a8;
  code *local_a0;
  code *pcStack_98;
  undefined8 local_90;
  char local_88 [40];
  
  uVar7 = (uint)param_2 & 0xff;
  iVar12 = (int)param_3;
  switch(uVar7) {
  case 99:
    break;
  case 100:
    lVar8 = param_1[2];
    if (lVar8 == 0) {
      lVar8 = *param_1 + (long)*(int *)(*param_1 + 0x10);
      if (param_1[8] <= param_3) goto LAB_00771544;
LAB_00771470:
      if (param_3 < 0) {
        puVar16 = (ulong *)0x0;
        goto LAB_00771568;
      }
    }
    else {
      if (param_3 < param_1[8]) goto LAB_00771470;
LAB_00771544:
      puVar16 = (ulong *)0x0;
      if ((param_3 < 0) || (param_3 < param_1[10])) goto LAB_00771568;
    }
    puVar16 = (ulong *)0x0;
    if (param_3 < param_1[0xb]) {
      puVar16 = (ulong *)(lVar8 + iVar12);
    }
LAB_00771568:
    uVar9 = *puVar16;
    uVar10 = -uVar9;
    if (-1 < (long)uVar9) {
      uVar10 = uVar9;
    }
    iVar12 = 1;
    if (-1 >= (long)uVar9 || param_4 == '+') {
      iVar12 = 2;
    }
    if (9 < uVar10) {
      do {
        iVar12 = iVar12 + 1;
        bVar1 = 99 < uVar10;
        uVar10 = uVar10 / 10;
      } while (bVar1);
    }
    iVar12 = param_5 - iVar12;
    iVar15 = iVar12;
    if ((param_4 != '-') && (iVar15 = iVar12 + -1, 0 < iVar12)) {
      do {
        (*param_9)(param_10,param_7);
        iVar12 = iVar12 + -1;
      } while (0 < iVar12);
      uVar9 = *puVar16;
      iVar15 = -1;
    }
    bVar1 = (long)uVar9 < 0;
    if (bVar1) {
      uVar10 = (ulong)local_b8 >> 8;
      local_b8 = CONCAT71((int7)uVar10,0x2d);
      uVar9 = -uVar9;
    }
    uVar10 = (ulong)bVar1;
    lVar8 = 0;
    lVar11 = uVar10 << 0x20;
    do {
      lVar11 = lVar11 + 0x100000000;
      *(char *)(((ulong)&local_b8 | uVar10) + lVar8) =
           (char)uVar9 + (char)((long)uVar9 / 10) * -10 + '0';
      lVar8 = lVar8 + 1;
      bVar2 = 9 < (long)uVar9;
      uVar9 = (long)uVar9 / 10;
    } while (bVar2);
    *(char *)((long)&local_b8 + (lVar11 >> 0x20)) = '\0';
    if (1 < (int)lVar8) {
      lVar11 = (long)(int)((uint)bVar1 + (int)lVar8);
      uVar9 = (ulong)&local_b8 | uVar10;
      pcVar13 = (char *)((long)&local_b8 + lVar11);
      lVar8 = 0;
      lVar11 = (-2 - uVar10) + lVar11;
      do {
        pcVar13 = pcVar13 + -1;
        cVar5 = *(char *)(uVar9 + lVar8);
        *(char *)(uVar9 + lVar8) = *pcVar13;
        lVar8 = lVar8 + 1;
        *pcVar13 = cVar5;
        bVar1 = lVar8 < lVar11;
        lVar11 = lVar11 + -1;
      } while (bVar1);
    }
    if ((param_4 == '+') && (-1 < (long)*puVar16)) {
      (*param_9)(param_10,0x2b);
    }
    (*param_8)(param_10,&local_b8);
    if (iVar15 < 1) {
      return 1;
    }
    iVar15 = iVar15 + 1;
    do {
      (*param_9)(param_10,param_7);
      iVar15 = iVar15 + -1;
    } while (1 < iVar15);
    return 1;
  case 0x66:
  case 0x72:
    uVar7 = param_6;
    if (0x18 < (int)param_6) {
      uVar7 = 0x19;
    }
    uVar4 = 5;
    if (param_6 != 0x7fffffff) {
      uVar4 = uVar7;
    }
    local_88[0] = '%';
    local_88[1] = '\0';
    if (param_4 != '\0') {
      sVar6 = strlen(local_88);
      local_88[sVar6] = param_4;
      local_88[sVar6 + 1] = '\0';
    }
    if (0 < (int)param_5) {
      sVar6 = strlen(local_88);
      sprintf(local_88 + sVar6,"%d",(ulong)param_5);
    }
    sVar6 = strlen(local_88);
    sprintf(local_88 + sVar6,".%df",(ulong)uVar4);
    lVar8 = param_1[2];
    if (lVar8 == 0) {
      lVar8 = *param_1 + (long)*(int *)(*param_1 + 0x10);
    }
    sprintf((char *)&local_b8,local_88,*(undefined8 *)(lVar8 + iVar12));
    (*param_8)(param_10,&local_b8);
    return 1;
  case 0x73:
    local_b0 = 0;
    local_b8 = 0;
    local_a8 = (ulong)param_6;
    local_90 = param_10;
    pcStack_98 = param_9;
    lVar8 = param_1[2];
    if (lVar8 == 0) {
      lVar8 = *param_1 + (long)*(int *)(*param_1 + 0x10);
      if (param_1[8] <= param_3) goto LAB_00771654;
LAB_007714a4:
      if (-1 < param_3) goto LAB_00771668;
    }
    else {
      if (param_3 < param_1[8]) goto LAB_007714a4;
LAB_00771654:
      lVar11 = 0;
      if ((param_3 < 0) || (param_3 < param_1[10])) goto LAB_00771680;
LAB_00771668:
      if (param_3 < param_1[0xb]) {
        lVar11 = lVar8 + iVar12;
        goto LAB_00771680;
      }
    }
    lVar11 = 0;
LAB_00771680:
    local_a0 = param_8;
    FUN_00770d60(param_1,lVar11,&local_b8);
    return 1;
  case 0x78:
    lVar8 = param_1[2];
    if (lVar8 == 0) {
      lVar8 = *param_1 + (long)*(int *)(*param_1 + 0x10);
      if (param_1[8] <= param_3) goto LAB_00771604;
LAB_007714c0:
      if (-1 < param_3) {
LAB_00771618:
        if (param_3 < param_1[0xb]) {
          puVar16 = (ulong *)(lVar8 + iVar12);
          uVar10 = *puVar16;
          goto joined_r0x00771634;
        }
      }
    }
    else {
      if (param_3 < param_1[8]) goto LAB_007714c0;
LAB_00771604:
      if ((-1 < param_3) && (param_1[10] <= param_3)) goto LAB_00771618;
    }
    puVar16 = (ulong *)0x0;
    uVar10 = uRam0000000000000000;
joined_r0x00771634:
    iVar12 = 1;
    if (0xf < uVar10) {
      iVar12 = 1;
      uVar9 = uVar10;
      do {
        iVar12 = iVar12 + 1;
        bVar1 = 0xff < uVar9;
        uVar9 = uVar9 >> 4;
      } while (bVar1);
    }
    iVar12 = param_5 - iVar12;
    iVar15 = iVar12;
    if ((param_4 != '-') && (iVar15 = iVar12 + -1, 0 < iVar12)) {
      do {
        (*param_9)(param_10,param_7);
        iVar12 = iVar12 + -1;
      } while (0 < iVar12);
      uVar10 = *puVar16;
      iVar15 = -1;
    }
    lVar8 = 0;
    do {
      lVar11 = lVar8;
      uVar7 = (uint)uVar10 & 0xf | 0x30;
      cVar5 = (char)uVar7;
      uVar10 = uVar10 >> 4;
      cVar3 = cVar5 + '\a';
      if (uVar7 < 0x3a) {
        cVar3 = cVar5;
      }
      *(char *)((long)&local_b8 + lVar11) = cVar3;
      lVar8 = lVar11 + 1;
    } while (uVar10 != 0);
    *(char *)((long)&local_b8 + lVar11 + 1) = '\0';
    if (1 < (int)(lVar11 + 1)) {
      lVar8 = 0;
      do {
        cVar5 = *(char *)((long)&local_b8 + lVar8);
        *(char *)((long)&local_b8 + lVar8) = *(char *)((long)&local_b8 + lVar11);
        lVar8 = lVar8 + 1;
        *(char *)((long)&local_b8 + lVar11) = cVar5;
        lVar11 = lVar11 + -1;
      } while (lVar8 < lVar11);
    }
    (*param_8)(param_10,&local_b8);
    if (iVar15 < 1) {
      return 1;
    }
    iVar15 = iVar15 + 1;
    do {
      (*param_9)(param_10,param_7);
      iVar15 = iVar15 + -1;
    } while (1 < iVar15);
    return 1;
  default:
    if (uVar7 == 0x25) {
      param_2 = 0x25;
    }
  case 0x65:
  case 0x67:
  case 0x68:
  case 0x69:
  case 0x6a:
  case 0x6b:
  case 0x6c:
  case 0x6d:
  case 0x6e:
  case 0x6f:
  case 0x70:
  case 0x71:
  case 0x74:
  case 0x75:
  case 0x76:
  case 0x77:
    (*param_9)(param_10,param_2);
    return 0;
  }
  lVar8 = param_1[2];
  if (lVar8 == 0) {
    lVar8 = *param_1 + (long)*(int *)(*param_1 + 0x10);
    if (param_1[8] <= param_3) goto LAB_007714f4;
LAB_00771440:
    if (param_3 < 0) {
      puVar14 = (undefined1 *)0x0;
      goto joined_r0x007716a0;
    }
LAB_00771508:
    if (param_3 < param_1[0xb]) {
      puVar14 = (undefined1 *)(lVar8 + iVar12);
      goto joined_r0x007716a0;
    }
  }
  else {
    if (param_3 < param_1[8]) goto LAB_00771440;
LAB_007714f4:
    if ((-1 < param_3) && (param_1[10] <= param_3)) goto LAB_00771508;
  }
  puVar14 = (undefined1 *)0x0;
joined_r0x007716a0:
  iVar12 = param_5 - 1;
  if (param_4 != '-') {
    iVar15 = param_5 - 1;
    iVar12 = param_5 - 2;
    if (1 < (int)param_5) {
      do {
        (*param_9)(param_10,param_7);
        iVar15 = iVar15 + -1;
      } while (0 < iVar15);
      iVar12 = -1;
    }
  }
  (*param_9)(param_10,*puVar14);
  if (0 < iVar12) {
    iVar12 = iVar12 + 1;
    do {
      (*param_9)(param_10,param_7);
      iVar12 = iVar12 + -1;
    } while (1 < iVar12);
  }
  return 1;
}


