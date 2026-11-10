/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00424460; name: FUN_00424460
 */


undefined8 FUN_00424460(long param_1,long param_2)

{
  int *piVar1;
  void *__dest;
  long lVar2;
  long lVar3;
  int iVar4;
  bool bVar5;
  void *__src;
  undefined8 uVar6;
  byte bVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  byte bVar11;
  long lVar12;
  ulong uVar13;
  float fVar14;
  undefined1 auStack_a8 [8];
  
  __src = (void *)(**(code **)(**(long **)(param_1 + 0x160) + 0x10))
                            (*(long **)(param_1 + 0x160),
                             (ulong)*(byte *)(param_1 + 0x138) * 0x400 + 0x1000);
  if (__src == (void *)0x0) {
    uVar6 = 0x34;
  }
  else {
    bVar5 = *(char *)(param_1 + 0x138) != '\0';
    lVar8 = *(long *)(param_1 + 0x158);
    fVar14 = DAT_01d4bf30 + DAT_01d4bb44 * *(float *)(lVar8 + 0x14);
    lVar12 = 0;
    if (bVar5) {
      lVar12 = (long)__src + 0x1400;
    }
    lVar3 = 0;
    if (bVar5) {
      lVar3 = (long)__src + 0x1000;
    }
    if (*(ushort *)(param_2 + 0x12) != 0) {
      piVar1 = (int *)(param_1 + 0xb8);
      __dest = (void *)((long)__src + 0x400);
      uVar10 = (uint)*(ushort *)(param_2 + 0x12);
      if (0xff < uVar10) {
        uVar10 = 0x100;
      }
      FUN_0042ae90(*(undefined4 *)(lVar8 + 0x78),*(undefined4 *)(lVar8 + 0x7c),param_2,uVar10,0,
                   __src);
      if ((*(char *)(*(long *)(param_1 + 0x158) + 0x98) != '\0') &&
         (uVar9 = (ulong)*(byte *)(param_1 + 0x134), *(byte *)(param_1 + 0x134) != 0)) {
        lVar8 = 0;
        uVar13 = 0;
        do {
          lVar2 = *(long *)(param_1 + 0x148) + lVar8;
          if (*(int *)(lVar2 + 0xb0) == 3) {
            FUN_00428580(lVar2,__src,uVar10,0,auStack_a8);
            uVar9 = (ulong)*(byte *)(param_1 + 0x134);
          }
          uVar13 = uVar13 + 1;
          lVar8 = lVar8 + 0xc0;
        } while (uVar13 < uVar9);
      }
      if (*(int *)(param_1 + 0xd0) == 0) {
        memcpy(__dest,__src,(ulong)(uVar10 << 2));
        iVar4 = *piVar1;
      }
      else {
        FUN_0042b380((int *)(param_1 + 0xd0),__src,__dest,uVar10);
        iVar4 = *piVar1;
      }
      if (iVar4 != 0) {
        FUN_0042b210(piVar1,__src,uVar10);
      }
      if (((*(char *)(param_1 + 0x138) != '\0') &&
          (FUN_00428a50(*(undefined8 *)(param_1 + 0x150),__src,lVar3,lVar12,uVar10),
          *(char *)(*(long *)(param_1 + 0x158) + 0x98) != '\0')) &&
         (bVar7 = *(byte *)(param_1 + 0x134), bVar7 != 0)) {
        uVar9 = 0;
        bVar11 = 0;
        do {
          if (*(int *)(*(long *)(param_1 + 0x148) + uVar9 * 0xc0 + 0xb0) == 1) {
            FUN_00428580(*(long *)(param_1 + 0x148) + uVar9 * 0xc0,lVar3,uVar10,0,auStack_a8);
            FUN_00428580(*(long *)(param_1 + 0x148) + uVar9 * 0xc0 + 0xc0,lVar12,uVar10,0,auStack_a8
                        );
            bVar7 = *(byte *)(param_1 + 0x134);
            bVar11 = bVar11 + 1;
          }
          bVar11 = bVar11 + 1;
          uVar9 = (ulong)bVar11;
        } while (bVar11 < bVar7);
      }
      FUN_0042ad20(param_1 + 8,__dest,uVar10);
      FUN_0042ad20(param_1 + 0x20,__dest,uVar10);
      FUN_0042ad20(param_1 + 0x38,__dest,uVar10);
      FUN_0042ad20(param_1 + 0x50,__dest,uVar10);
      if ((*(char *)(*(long *)(param_1 + 0x158) + 0x98) != '\0') &&
         (uVar9 = (ulong)*(byte *)(param_1 + 0x134), *(byte *)(param_1 + 0x134) != 0)) {
        lVar12 = 0;
        uVar13 = 0;
        do {
          lVar8 = *(long *)(param_1 + 0x148) + lVar12;
          if (*(int *)(lVar8 + 0xb0) == 2) {
            FUN_00428580(lVar8,__dest,uVar10,0,auStack_a8);
            uVar9 = (ulong)*(byte *)(param_1 + 0x134);
          }
          uVar13 = uVar13 + 1;
          lVar12 = lVar12 + 0xc0;
        } while (uVar13 < uVar9);
      }
                    /* WARNING: Subroutine does not return */
      memset((void *)((long)__src + 0x800),0,0x800);
    }
    (**(code **)(**(long **)(param_1 + 0x160) + 0x18))
              (DAT_01d4bb44,0x3f800000,0,SQRT(1.0 - fVar14 * fVar14),*(long **)(param_1 + 0x160),
               __src);
    uVar6 = 1;
  }
  return uVar6;
}


