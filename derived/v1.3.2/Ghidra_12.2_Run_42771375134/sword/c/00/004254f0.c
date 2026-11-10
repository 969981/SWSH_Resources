/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004254f0; name: FUN_004254f0
 */


undefined8 FUN_004254f0(long param_1,long param_2)

{
  int *piVar1;
  void *__dest;
  long lVar2;
  int iVar3;
  void *__src;
  undefined8 uVar4;
  byte bVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  byte bVar12;
  float fVar13;
  long local_e8;
  long local_e0;
  undefined1 auStack_a8 [8];
  
  __src = (void *)(**(code **)(**(long **)(param_1 + 0x160) + 0x10))
                            (*(long **)(param_1 + 0x160),
                             (ulong)*(byte *)(param_1 + 0x138) * 0x800 + 0x2000);
  if (__src == (void *)0x0) {
    uVar4 = 0x34;
  }
  else {
    if (*(char *)(param_1 + 0x138) == '\0') {
      local_e0 = 0;
      local_e8 = 0;
      lVar9 = 0;
      lVar11 = 0;
    }
    else {
      local_e0 = (long)__src + 0x2000;
      local_e8 = (long)__src + 0x2400;
      lVar9 = (long)__src + 0x2800;
      lVar11 = (long)__src + 0x2c00;
    }
    lVar6 = *(long *)(param_1 + 0x158);
    fVar13 = DAT_01d4bf30 + DAT_01d4bb44 * *(float *)(lVar6 + 0x14);
    if (*(ushort *)(param_2 + 0x12) != 0) {
      piVar1 = (int *)(param_1 + 0xb8);
      __dest = (void *)((long)__src + 0x400);
      uVar8 = (uint)*(ushort *)(param_2 + 0x12);
      if (0xff < uVar8) {
        uVar8 = 0x100;
      }
      FUN_0042ae90(*(undefined4 *)(lVar6 + 0x78),*(undefined4 *)(lVar6 + 0x7c),param_2,uVar8,0,__src
                  );
      if ((*(char *)(*(long *)(param_1 + 0x158) + 0x98) != '\0') &&
         (uVar7 = (ulong)*(byte *)(param_1 + 0x134), *(byte *)(param_1 + 0x134) != 0)) {
        lVar6 = 0;
        uVar10 = 0;
        do {
          lVar2 = *(long *)(param_1 + 0x148) + lVar6;
          if (*(int *)(lVar2 + 0xb0) == 3) {
            FUN_00428580(lVar2,__src,uVar8,0,auStack_a8);
            uVar7 = (ulong)*(byte *)(param_1 + 0x134);
          }
          uVar10 = uVar10 + 1;
          lVar6 = lVar6 + 0xc0;
        } while (uVar10 < uVar7);
      }
      if (*(int *)(param_1 + 0xd0) == 0) {
        memcpy(__dest,__src,(ulong)(uVar8 << 2));
        iVar3 = *piVar1;
      }
      else {
        FUN_0042b380((int *)(param_1 + 0xd0),__src,__dest,uVar8);
        iVar3 = *piVar1;
      }
      if (iVar3 != 0) {
        FUN_0042b210(piVar1,__src,uVar8);
      }
      if (*(char *)(param_1 + 0x138) != '\0') {
        FUN_00428a50(*(undefined8 *)(param_1 + 0x150),__src,local_e0,local_e8,uVar8);
        if ((*(char *)(*(long *)(param_1 + 0x158) + 0x98) != '\0') &&
           (bVar5 = *(byte *)(param_1 + 0x134), bVar5 != 0)) {
          uVar7 = 0;
          bVar12 = 0;
          do {
            if (*(int *)(*(long *)(param_1 + 0x148) + uVar7 * 0xc0 + 0xb0) == 1) {
              FUN_00428580(*(long *)(param_1 + 0x148) + uVar7 * 0xc0,local_e0,uVar8,0,auStack_a8);
              FUN_00428580(*(long *)(param_1 + 0x148) + uVar7 * 0xc0 + 0xc0,local_e8,uVar8,0,
                           auStack_a8);
              bVar5 = *(byte *)(param_1 + 0x134);
              bVar12 = bVar12 + 1;
            }
            bVar12 = bVar12 + 1;
            uVar7 = (ulong)bVar12;
          } while (bVar12 < bVar5);
        }
        if (*(int *)(param_1 + 0xe8) != 0) {
          FUN_0042b380((int *)(param_1 + 0xe8),local_e0,lVar9,uVar8);
          FUN_0042b380(param_1 + 0x100,local_e8,lVar11,uVar8);
        }
      }
      FUN_0042ad20(param_1 + 8,__dest,uVar8);
      FUN_0042ad20(param_1 + 0x20,__dest,uVar8);
      FUN_0042ad20(param_1 + 0x38,__dest,uVar8);
      FUN_0042ad20(param_1 + 0x50,__dest,uVar8);
      if ((*(char *)(*(long *)(param_1 + 0x158) + 0x98) != '\0') &&
         (uVar7 = (ulong)*(byte *)(param_1 + 0x134), *(byte *)(param_1 + 0x134) != 0)) {
        lVar9 = 0;
        uVar10 = 0;
        do {
          lVar11 = *(long *)(param_1 + 0x148) + lVar9;
          if (*(int *)(lVar11 + 0xb0) == 2) {
            FUN_00428580(lVar11,__dest,uVar8,0,auStack_a8);
            uVar7 = (ulong)*(byte *)(param_1 + 0x134);
          }
          uVar10 = uVar10 + 1;
          lVar9 = lVar9 + 0xc0;
        } while (uVar10 < uVar7);
      }
                    /* WARNING: Subroutine does not return */
      memset((void *)((long)__src + 0x800),0,0x1800);
    }
    (**(code **)(**(long **)(param_1 + 0x160) + 0x18))
              (DAT_01d4bb44,0x3f800000,0,SQRT(1.0 - fVar13 * fVar13),*(long **)(param_1 + 0x160),
               __src);
    uVar4 = 1;
  }
  return uVar4;
}


