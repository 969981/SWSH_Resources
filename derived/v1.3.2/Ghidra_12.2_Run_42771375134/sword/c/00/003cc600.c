/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003cc600; name: FUN_003cc600
 */


void FUN_003cc600(ushort *param_1,long *param_2,long param_3,long param_4,uint param_5,uint *param_6
                 ,uint param_7)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  byte bVar5;
  ushort uVar6;
  long *plVar7;
  undefined8 uVar8;
  byte bVar9;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  char local_64 [4];
  
  uVar12 = (ulong)param_5;
  lVar2 = FUN_003fc7b0(param_3);
  lVar3 = FUN_003fc7b0(param_4);
  uVar10 = *(byte *)(*(long *)(param_3 + 0x40) + 0x40) & 4 |
           (*(byte *)(*(long *)(param_4 + 0x40) + 0x40) >> 2 & 1) << 3;
  *param_6 = uVar10;
  if (uVar10 != 0) {
    if (((*(byte *)(*param_2 + 0x110e) & 1) != 0) || (uVar10 != 0xc)) goto LAB_003cc85c;
LAB_003cc690:
    if (param_5 != 0xffffffff) {
      plVar7 = (long *)param_2[0x13];
      *(long *)(*plVar7 + uVar12 * 8) = plVar7[2];
      plVar7[2] = (ulong)param_5;
    }
    uVar8 = 0xffffffff00000001;
    goto LAB_003cc7e0;
  }
  if (lVar2 != 0) {
    bVar5 = *(byte *)(*(long *)(lVar2 + 0x50) + 0x2c) & 1;
    if (lVar3 == 0) goto LAB_003cc6f0;
LAB_003cc6cc:
    bVar9 = *(byte *)(*(long *)(lVar3 + 0x50) + 0x2c) & 1;
    if ((bVar5 | bVar9) != 1) goto LAB_003cc778;
LAB_003cc700:
    lVar13 = *param_2;
    uVar10 = *(uint *)(lVar13 + 0x110c);
    if (*(int *)(lVar13 + 0x1070) == 1) {
      uVar10 = uVar10 & 0xffffffbf;
      iVar11 = *(int *)(lVar13 + 0x1074);
      if (iVar11 != 1) goto LAB_003cc728;
LAB_003cc744:
      uVar10 = uVar10 & 0xffffffdf;
    }
    else {
      if (*(int *)(lVar13 + 0x1070) == 0) {
        uVar10 = uVar10 | 0x40;
      }
      iVar11 = *(int *)(lVar13 + 0x1074);
      if (iVar11 == 1) goto LAB_003cc744;
LAB_003cc728:
      if (iVar11 == 0) {
        uVar10 = uVar10 | 0x20;
      }
    }
    if (((lVar2 != 0 && lVar3 != 0) || ((uVar10 >> 5 & 1) != 0)) &&
       (((uVar10 >> 6 & 1) != 0 || ((bVar5 != 1 || (bVar9 != 1)))))) goto LAB_003cc778;
LAB_003cc7b8:
    if (param_5 != 0xffffffff) {
      plVar7 = (long *)param_2[0x13];
      *(long *)(*plVar7 + uVar12 * 8) = plVar7[2];
      plVar7[2] = uVar12;
    }
    uVar8 = 0xffffffff00000002;
LAB_003cc7e0:
    *(undefined8 *)param_1 = uVar8;
    return;
  }
  bVar5 = 0;
  if (lVar3 != 0) goto LAB_003cc6cc;
LAB_003cc6f0:
  bVar9 = 0;
  bVar1 = bVar5 == 1;
  bVar5 = 1;
  if (bVar1) goto LAB_003cc700;
LAB_003cc778:
  local_64[0] = '\0';
  lVar14 = *(long *)(param_3 + 0x10);
  lVar13 = *(long *)(param_4 + 0x10);
  if ((lVar2 == 0) || ((*(byte *)(lVar2 + 0xb5) & 1) == 0)) {
    if ((lVar3 != 0) && ((*(byte *)(lVar3 + 0xb5) & 1) != 0)) {
      uVar4 = FUN_003c0c20(lVar3,lVar14,local_64);
      goto joined_r0x003cc7fc;
    }
  }
  else {
    uVar4 = FUN_003c0c20(lVar2,lVar13,local_64);
joined_r0x003cc7fc:
    if ((local_64[0] != '\0') && ((uVar4 & 1) != 0)) goto LAB_003cc7b8;
  }
  if ((*(char *)(*(long *)(lVar14 + 0x50) + 0xd) == '\x04') &&
     ((*(char *)(*(long *)(lVar13 + 0x50) + 0xd) == '\x04' &&
      (iVar11 = *(int *)(lVar14 + 0x34), iVar11 != 0)))) {
    plVar7 = *(long **)(lVar14 + 0x28);
    do {
      lVar14 = *plVar7;
      if ((*(char *)(lVar14 + 0x24) == '\x06') &&
         ((*(long *)(lVar14 + 8) == lVar13 || (*(long *)(lVar14 + 0x10) == lVar13))))
      goto LAB_003cc690;
      iVar11 = iVar11 + -1;
      plVar7 = plVar7 + 1;
    } while (iVar11 != 0);
  }
LAB_003cc85c:
  FUN_003cce70(param_1,param_2,param_3,param_4,uVar12,param_7 & 1);
  if (((*param_1 >> 2 & 1) != 0) && ((param_7 & 1) == 0)) {
    return;
  }
  uVar6 = param_1[1];
  if ((((lVar2 != 0) && ((*param_1 & 3) == 0)) && (lVar3 != 0)) &&
     ((((*(byte *)(*(long *)(lVar2 + 0x50) + 0x2c) & 1) != 0 &&
       ((*(byte *)(*(long *)(lVar3 + 0x50) + 0x2c) & 1) != 0)) && ((uVar6 & 1) != 0)))) {
    uVar6 = uVar6 & 0xfffe;
  }
  param_1[1] = uVar6;
  return;
}


