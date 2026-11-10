/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003bb250; name: FUN_003bb250
 */


void FUN_003bb250(long param_1,long param_2,long param_3,long param_4)

{
  ulong uVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  ulong uVar5;
  float *pfVar6;
  uint uVar7;
  undefined8 *puVar8;
  ulong *puVar9;
  byte bVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  long local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  long local_58;
  
  uVar7 = *(uint *)(param_1 + 0x30);
  local_80 = param_2;
  local_58 = param_4;
  if (uVar7 < (*(uint *)(param_1 + 0x34) & 0x7fffffff)) {
    *(long *)(*(long *)(param_1 + 0x28) + (ulong)uVar7 * 8) = param_2;
    *(uint *)(param_1 + 0x30) = uVar7 + 1;
    uVar7 = *(uint *)(param_1 + 0x40);
    if ((*(uint *)(param_1 + 0x44) & 0x7fffffff) <= uVar7) goto LAB_003bb2b4;
LAB_003bb2e0:
    *(long *)(*(long *)(param_1 + 0x38) + (ulong)uVar7 * 8) = local_58;
    *(uint *)(param_1 + 0x40) = uVar7 + 1;
  }
  else {
    FUN_003bcf10(param_1 + 0x28,&local_80);
    uVar7 = *(uint *)(param_1 + 0x40);
    if (uVar7 < (*(uint *)(param_1 + 0x44) & 0x7fffffff)) goto LAB_003bb2e0;
LAB_003bb2b4:
    FUN_003bd0a0(param_1 + 0x38,&local_58);
  }
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  local_68 = 0;
  uVar7 = *(uint *)(param_1 + 0x108);
  if (uVar7 < (*(uint *)(param_1 + 0x10c) & 0x7fffffff)) {
    puVar8 = (undefined8 *)(*(long *)(param_1 + 0x100) + (ulong)uVar7 * 0x20);
    *puVar8 = 0;
    puVar8[1] = 0;
    *(undefined4 *)(puVar8 + 2) = 0;
    *(undefined4 *)((long)puVar8 + 0x14) = 0;
    *(undefined4 *)(puVar8 + 3) = 0;
    *(undefined4 *)((long)puVar8 + 0x1c) = 0;
    *(uint *)(param_1 + 0x108) = uVar7 + 1;
  }
  else {
                    /* try { // try from 003bb344 to 003bb34b has its CatchHandler @ 003bb6a0 */
    FUN_003bd230(param_1 + 0x100,&local_80);
  }
  uVar1 = (ulong)*(uint *)(param_1 + 0x20);
  uVar7 = *(uint *)(param_1 + 0x24) & 0x7fffffff;
  uVar13 = uVar1;
  if (uVar7 <= *(uint *)(param_1 + 0x20)) {
    iVar2 = *(uint *)(param_1 + 0x24) << 1;
    if (uVar7 == 0) {
      iVar2 = 1;
    }
    FUN_003bcb40((long *)(param_1 + 0x18),iVar2);
    uVar13 = (ulong)*(uint *)(param_1 + 0x20);
  }
  lVar12 = *(long *)(param_1 + 0x18);
  puVar8 = (undefined8 *)(lVar12 + uVar13 * 0x30);
  *(int *)(param_1 + 0x20) = (int)uVar13 + 1;
  puVar8[2] = param_2 + 0x60;
  lVar11 = *(long *)(param_2 + 0x50);
  *puVar8 = 0;
  puVar8[3] = lVar11 + 0x10;
  pfVar6 = (float *)0x0;
  if (*(long *)(lVar11 + 0xb0) == 0) {
LAB_003bb3c4:
    if (*(float *)(lVar11 + 0x50) != 0.0) goto LAB_003bb420;
LAB_003bb3d0:
    if ((((*(float *)(lVar11 + 0x54) != 0.0) || (*(float *)(lVar11 + 0x58) != 0.0)) ||
        (*(float *)(lVar11 + 0x60) != 0.0)) || (*(float *)(lVar11 + 100) != 0.0)) goto LAB_003bb420;
    bVar3 = *(float *)(lVar11 + 0x68) == 0.0;
  }
  else {
    uVar5 = FUN_003be9f0(lVar11,0);
    if ((uVar5 & 1) != 0) {
      pfVar6 = *(float **)(lVar11 + 0xb0);
      goto LAB_003bb3c4;
    }
    pfVar6 = (float *)0x0;
    if (*(float *)(lVar11 + 0x50) == 0.0) goto LAB_003bb3d0;
LAB_003bb420:
    bVar3 = false;
  }
  bVar10 = *(byte *)(param_2 + 0xb6);
  bVar4 = (bool)(bVar3 & (bVar10 & 2) == 0);
  if (((bVar10 >> 1 & 1) == 0) || (bVar3 == false)) {
LAB_003bb584:
    bVar3 = (bool)((bVar10 & 4) == 0 & bVar4);
joined_r0x003bb590:
    if (((bVar10 >> 2 & 1) == 0) || (bVar4 == false)) {
      uVar14 = FUN_003ba9c0(*(undefined8 *)(param_1 + 0x10));
    }
    else if (pfVar6 == (float *)0x0) {
      bVar3 = true;
      uVar14 = FUN_003ba9c0(*(undefined8 *)(param_1 + 0x10));
    }
    else {
      if ((((pfVar6[8] != 0.0) || (pfVar6[9] != 0.0)) || (pfVar6[10] != 0.0)) ||
         ((pfVar6[0xc] != 0.0 || (pfVar6[0xd] != 0.0)))) goto LAB_003bb500;
      bVar3 = pfVar6[0xe] == 0.0;
      uVar14 = FUN_003ba9c0(*(undefined8 *)(param_1 + 0x10));
    }
    if (param_3 != 0) goto LAB_003bb5a4;
LAB_003bb514:
    lVar12 = lVar12 + uVar13 * 0x30;
    bVar4 = (float)uVar14 == 0.0;
    *(undefined4 *)(lVar12 + 0x28) = 0xffffffff;
    *(undefined8 *)(lVar12 + 8) = 1;
    *(undefined8 *)(lVar12 + 0x20) = 0;
    bVar10 = bVar3 & bVar4;
    if (bVar3 != false || !bVar4) goto LAB_003bb648;
  }
  else {
    if (pfVar6 == (float *)0x0) {
      bVar4 = true;
      goto LAB_003bb584;
    }
    if (((*pfVar6 == 0.0) && (pfVar6[1] == 0.0)) &&
       ((pfVar6[2] == 0.0 && ((pfVar6[4] == 0.0 && (pfVar6[5] == 0.0)))))) {
      bVar4 = pfVar6[6] == 0.0;
      bVar3 = (bVar10 & 4) == 0 && bVar4;
      goto joined_r0x003bb590;
    }
LAB_003bb500:
    bVar3 = false;
    uVar14 = FUN_003ba9c0(*(undefined8 *)(param_1 + 0x10));
    if (param_3 == 0) goto LAB_003bb514;
LAB_003bb5a4:
    lVar11 = **(long **)(param_1 + 0x28);
    bVar4 = 0xfffffffd < *(uint *)(lVar11 + 0xb8);
    if (*(uint *)(param_1 + 0x30) == 0) {
LAB_003bb5e8:
      uVar7 = 0x80000000;
    }
    else if (lVar11 == param_3) {
      uVar7 = 0;
    }
    else {
      uVar7 = 0;
      do {
        uVar7 = uVar7 + 1;
        if (*(uint *)(param_1 + 0x30) <= uVar7) goto LAB_003bb5e8;
      } while ((*(long **)(param_1 + 0x28))[uVar7] != param_3);
    }
    lVar12 = lVar12 + uVar13 * 0x30;
    *(uint *)(lVar12 + 0x28) = uVar7;
    puVar9 = (ulong *)(*(long *)(param_1 + 0x18) + (ulong)uVar7 * 0x30);
    uVar13 = 1L << (uVar1 & 0x3f);
    *(ulong *)(lVar12 + 8) = puVar9[1] | uVar13;
    *(long *)(lVar12 + 0x20) = *(long *)(local_58 + 0x28) + 8;
    *puVar9 = *puVar9 | uVar13;
    bVar10 = bVar3 & bVar4;
    if (bVar3 != false || !bVar4) goto LAB_003bb648;
  }
  if (*(int *)(param_1 + 0x30) != 1) {
    uVar13 = 0;
    do {
      FUN_003c01f0(uVar14,*(undefined8 *)(*(long *)(param_1 + 0x28) + uVar13 * 8));
      uVar13 = uVar13 + 1;
    } while (uVar13 < *(int *)(param_1 + 0x30) - 1);
  }
LAB_003bb648:
  FUN_003c0d10(uVar14,param_2,param_1,bVar10,uVar1);
  *(undefined1 *)(param_1 + 0x110) = 1;
  return;
}


