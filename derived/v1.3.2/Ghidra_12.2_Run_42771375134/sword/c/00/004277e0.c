/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004277e0; name: FUN_004277e0
 */


undefined8 FUN_004277e0(long param_1,long param_2)

{
  void *__dest;
  int *piVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  bool bVar7;
  void *__src;
  undefined8 uVar8;
  byte bVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  byte bVar14;
  long lVar15;
  undefined1 auStack_a8 [8];
  
  __src = (void *)(**(code **)(**(long **)(param_1 + 0x160) + 0x10))
                            (*(long **)(param_1 + 0x160),
                             (ulong)*(byte *)(param_1 + 0x138) * 0x800 + 0x2000);
  if (__src == (void *)0x0) {
    uVar8 = 0x34;
  }
  else {
    bVar7 = *(char *)(param_1 + 0x138) != '\0';
    lVar12 = 0;
    if (bVar7) {
      lVar12 = (long)__src + 0x2000;
    }
    lVar3 = 0;
    if (bVar7) {
      lVar3 = (long)__src + 0x2400;
    }
    lVar4 = 0;
    if (bVar7) {
      lVar4 = (long)__src + 0x2800;
    }
    lVar5 = 0;
    if (bVar7) {
      lVar5 = (long)__src + 0x2c00;
    }
    if (*(ushort *)(param_2 + 0x12) != 0) {
      __dest = (void *)((long)__src + 0x400);
      piVar1 = (int *)(param_1 + 0xb8);
      uVar11 = (uint)*(ushort *)(param_2 + 0x12);
      if (0xff < uVar11) {
        uVar11 = 0x100;
      }
      FUN_0042ae90(*(undefined4 *)(*(long *)(param_1 + 0x158) + 0x78),
                   *(undefined4 *)(*(long *)(param_1 + 0x158) + 0x7c),param_2,uVar11,0);
      if ((*(char *)(*(long *)(param_1 + 0x158) + 0x98) != '\0') &&
         (uVar10 = (ulong)*(byte *)(param_1 + 0x134), *(byte *)(param_1 + 0x134) != 0)) {
        lVar15 = 0;
        uVar13 = 0;
        do {
          lVar2 = *(long *)(param_1 + 0x148) + lVar15;
          if (*(int *)(lVar2 + 0xb0) == 3) {
            FUN_00428580(lVar2,__src,uVar11,0,auStack_a8);
            uVar10 = (ulong)*(byte *)(param_1 + 0x134);
          }
          uVar13 = uVar13 + 1;
          lVar15 = lVar15 + 0xc0;
        } while (uVar13 < uVar10);
      }
      if (*(int *)(param_1 + 0xd0) == 0) {
        memcpy(__dest,__src,(ulong)(uVar11 << 2));
        iVar6 = *piVar1;
      }
      else {
        FUN_0042b380((int *)(param_1 + 0xd0),__src,__dest,uVar11);
        iVar6 = *piVar1;
      }
      if (iVar6 != 0) {
        FUN_0042b210(piVar1,__src,uVar11);
      }
      if (*(char *)(param_1 + 0x138) != '\0') {
        FUN_00428a50(*(undefined8 *)(param_1 + 0x150),__src,lVar12,lVar3,uVar11);
        if ((*(char *)(*(long *)(param_1 + 0x158) + 0x98) != '\0') &&
           (bVar9 = *(byte *)(param_1 + 0x134), bVar9 != 0)) {
          uVar10 = 0;
          bVar14 = 0;
          do {
            if (*(int *)(*(long *)(param_1 + 0x148) + uVar10 * 0xc0 + 0xb0) == 1) {
              FUN_00428580(*(long *)(param_1 + 0x148) + uVar10 * 0xc0,lVar12,uVar11,0,auStack_a8);
              FUN_00428580(*(long *)(param_1 + 0x148) + uVar10 * 0xc0 + 0xc0,lVar3,uVar11,0,
                           auStack_a8);
              bVar9 = *(byte *)(param_1 + 0x134);
              bVar14 = bVar14 + 1;
            }
            bVar14 = bVar14 + 1;
            uVar10 = (ulong)bVar14;
          } while (bVar14 < bVar9);
        }
        if (*(int *)(param_1 + 0xe8) != 0) {
          FUN_0042b380((int *)(param_1 + 0xe8),lVar12,lVar4,uVar11);
          FUN_0042b380(param_1 + 0x100,lVar3,lVar5,uVar11);
        }
      }
      FUN_0042ad20(param_1 + 8,__dest,uVar11);
      FUN_0042ad20(param_1 + 0x20,__dest,uVar11);
      FUN_0042ad20(param_1 + 0x38,__dest,uVar11);
      FUN_0042ad20(param_1 + 0x50,__dest,uVar11);
      if ((*(char *)(*(long *)(param_1 + 0x158) + 0x98) != '\0') &&
         (uVar10 = (ulong)*(byte *)(param_1 + 0x134), *(byte *)(param_1 + 0x134) != 0)) {
        lVar12 = 0;
        uVar13 = 0;
        do {
          lVar3 = *(long *)(param_1 + 0x148) + lVar12;
          if (*(int *)(lVar3 + 0xb0) == 2) {
            FUN_00428580(lVar3,__dest,uVar11,0,auStack_a8);
            uVar10 = (ulong)*(byte *)(param_1 + 0x134);
          }
          uVar13 = uVar13 + 1;
          lVar12 = lVar12 + 0xc0;
        } while (uVar13 < uVar10);
      }
                    /* WARNING: Subroutine does not return */
      memset((void *)((long)__src + 0x800),0,0x1800);
    }
    (**(code **)(**(long **)(param_1 + 0x160) + 0x18))(*(long **)(param_1 + 0x160),__src);
    uVar8 = 1;
  }
  return uVar8;
}


