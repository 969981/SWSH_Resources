/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00424b60; name: FUN_00424b60
 */


undefined8 FUN_00424b60(long param_1,long param_2)

{
  int *piVar1;
  void *__dest;
  long lVar2;
  uint uVar3;
  int iVar4;
  void *__src;
  byte bVar5;
  ulong uVar6;
  uint uVar7;
  byte bVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  float fVar13;
  long local_d8;
  long local_d0;
  undefined1 auStack_a8 [8];
  
  uVar7 = *(uint *)(param_2 + 8);
  uVar3 = 0;
  if (*(char *)(*(long *)(param_1 + 0x158) + 0x99) != '\0') {
    uVar3 = (uint)((uVar7 & 0x210000) != 0) << 1;
  }
  __src = (void *)(**(code **)(**(long **)(param_1 + 0x160) + 0x10))
                            (*(long **)(param_1 + 0x160),
                             ((ulong)*(byte *)(param_1 + 0x138) + (ulong)uVar3) * 0x400 + 0x1800);
  if (__src == (void *)0x0) {
    return 0x34;
  }
  if (*(char *)(param_1 + 0x138) == '\0') {
    local_d8 = 0;
    local_d0 = 0;
  }
  else {
    local_d0 = (long)__src + 0x1800;
    local_d8 = (long)__src + 0x1c00;
    if (uVar3 == 2) {
      lVar10 = (long)__src + 0x2000;
      lVar11 = (long)__src + 0x2400;
      goto LAB_00424c74;
    }
  }
  lVar10 = 0;
  lVar11 = 0;
LAB_00424c74:
  fVar13 = DAT_01d4bf30 + DAT_01d4bb44 * *(float *)(*(long *)(param_1 + 0x158) + 0x14);
  fVar13 = 1.0 - fVar13 * fVar13;
  if ((uVar7 & 0x210000) == 0) {
    *(undefined4 *)(*(long *)(param_1 + 0x158) + 0x3c) = 0x3f800000;
    *(undefined4 *)(*(long *)(param_1 + 0x158) + 0x40) = 0x3f800000;
  }
  if (*(ushort *)(param_2 + 0x12) == 0) {
    (**(code **)(**(long **)(param_1 + 0x160) + 0x18))
              (fVar13,SQRT(fVar13),0,*(long **)(param_1 + 0x160),__src);
    return 1;
  }
  piVar1 = (int *)(param_1 + 0xb8);
  __dest = (void *)((long)__src + 0x400);
  uVar7 = (uint)*(ushort *)(param_2 + 0x12);
  if (0xff < uVar7) {
    uVar7 = 0x100;
  }
  FUN_0042ae90(*(undefined4 *)(*(long *)(param_1 + 0x158) + 0x78),
               *(undefined4 *)(*(long *)(param_1 + 0x158) + 0x7c),param_2,uVar7,0,__src);
  if ((*(char *)(*(long *)(param_1 + 0x158) + 0x98) != '\0') &&
     (uVar6 = (ulong)*(byte *)(param_1 + 0x134), *(byte *)(param_1 + 0x134) != 0)) {
    lVar9 = 0;
    uVar12 = 0;
    do {
      lVar2 = *(long *)(param_1 + 0x148) + lVar9;
      if (*(int *)(lVar2 + 0xb0) == 3) {
        FUN_00428580(lVar2,__src,uVar7,0,auStack_a8);
        uVar6 = (ulong)*(byte *)(param_1 + 0x134);
      }
      uVar12 = uVar12 + 1;
      lVar9 = lVar9 + 0xc0;
    } while (uVar12 < uVar6);
  }
  if (*(int *)(param_1 + 0xd0) == 0) {
    memcpy(__dest,__src,(ulong)(uVar7 << 2));
    iVar4 = *piVar1;
  }
  else {
    FUN_0042b380((int *)(param_1 + 0xd0),__src,__dest,uVar7);
    iVar4 = *piVar1;
  }
  if (iVar4 != 0) {
    FUN_0042b210(piVar1,__src,uVar7);
  }
  if (*(char *)(param_1 + 0x138) != '\0') {
    FUN_00428a50(*(undefined8 *)(param_1 + 0x150),__src,local_d0,local_d8,uVar7);
    if ((*(char *)(*(long *)(param_1 + 0x158) + 0x98) != '\0') &&
       (bVar5 = *(byte *)(param_1 + 0x134), bVar5 != 0)) {
      uVar6 = 0;
      bVar8 = 0;
      do {
        if (*(int *)(*(long *)(param_1 + 0x148) + uVar6 * 0xc0 + 0xb0) == 1) {
          FUN_00428580(*(long *)(param_1 + 0x148) + uVar6 * 0xc0,local_d0,uVar7,0,auStack_a8);
          FUN_00428580(*(long *)(param_1 + 0x148) + uVar6 * 0xc0 + 0xc0,local_d8,uVar7,0,auStack_a8)
          ;
          bVar5 = *(byte *)(param_1 + 0x134);
          bVar8 = bVar8 + 1;
        }
        bVar8 = bVar8 + 1;
        uVar6 = (ulong)bVar8;
      } while (bVar8 < bVar5);
    }
    if ((uVar3 == 2) && (*(int *)(param_1 + 0xe8) != 0)) {
      FUN_0042b380((int *)(param_1 + 0xe8),local_d0,lVar10,uVar7);
      FUN_0042b380(param_1 + 0x100,local_d8,lVar11,uVar7);
    }
  }
  FUN_0042ad20(param_1 + 8,__dest,uVar7);
  FUN_0042ad20(param_1 + 0x20,__dest,uVar7);
  FUN_0042ad20(param_1 + 0x38,__dest,uVar7);
  FUN_0042ad20(param_1 + 0x50,__dest,uVar7);
  if ((*(char *)(*(long *)(param_1 + 0x158) + 0x98) != '\0') &&
     (uVar6 = (ulong)*(byte *)(param_1 + 0x134), *(byte *)(param_1 + 0x134) != 0)) {
    lVar10 = 0;
    uVar12 = 0;
    do {
      lVar11 = *(long *)(param_1 + 0x148) + lVar10;
      if (*(int *)(lVar11 + 0xb0) == 2) {
        FUN_00428580(lVar11,__dest,uVar7,0,auStack_a8);
        uVar6 = (ulong)*(byte *)(param_1 + 0x134);
      }
      uVar12 = uVar12 + 1;
      lVar10 = lVar10 + 0xc0;
    } while (uVar12 < uVar6);
  }
                    /* WARNING: Subroutine does not return */
  memset((void *)((long)__src + 0x800),0,0x1000);
}


