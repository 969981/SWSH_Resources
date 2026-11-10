/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0061db10; name: FUN_0061db10
 */


ulong FUN_0061db10(long param_1)

{
  ulong uVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  ushort *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  ushort *puVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  long local_70;
  uint local_64;
  
  lVar13 = *(long *)(param_1 + 0xc0);
  uVar6 = (**(code **)(param_1 + 0x340))(param_1,0x706f7374,lVar13,&local_70);
  if ((int)uVar6 != 0) {
    return uVar6;
  }
  lVar7 = FUN_00607fe0(lVar13);
  lVar14 = *(long *)(param_1 + 0x2f0);
  uVar6 = FUN_00606b00(lVar13,0x20);
  if ((int)uVar6 != 0) {
    return uVar6;
  }
  if (lVar14 != 0x25000) {
    if (lVar14 != 0x20000) {
      uVar6 = 3;
      goto LAB_0061dd80;
    }
    uVar15 = *(undefined8 *)(lVar13 + 0x38);
    uVar2 = FUN_00606b90(lVar13,&local_64);
    uVar6 = (ulong)local_64;
    if (local_64 != 0) goto LAB_0061dd80;
    if (*(ushort *)(param_1 + 0x1d0) < uVar2) goto LAB_0061dcb8;
    uVar6 = (ulong)uVar2;
    puVar8 = (ushort *)FUN_006029c0(uVar15,2,0,uVar6,0,&local_64);
    lVar14 = 0;
    if (local_64 == 0) {
      local_64 = FUN_006081f0(lVar13,uVar6 << 1);
      if (local_64 == 0) {
        if (uVar2 == 0) {
          FUN_00608390(lVar13);
          uVar18 = 0;
        }
        else {
          puVar12 = puVar8;
          uVar18 = uVar6;
          do {
            uVar3 = FUN_00608400(lVar13);
            uVar18 = uVar18 - 1;
            *puVar12 = uVar3;
            puVar12 = puVar12 + 1;
          } while (uVar18 != 0);
          FUN_00608390(lVar13);
          uVar18 = 0;
          puVar12 = puVar8;
          do {
            uVar4 = *puVar12 - 0x101;
            uVar17 = (uint)uVar18;
            if ((int)uVar4 <= (int)(uVar17 & 0xffff)) {
              uVar4 = uVar17;
            }
            if (0x101 < *puVar12) {
              uVar17 = uVar4;
            }
            uVar18 = (ulong)uVar17;
            uVar6 = uVar6 - 1;
            puVar12 = puVar12 + 1;
          } while (uVar6 != 0);
        }
        uVar6 = uVar18 & 0xffff;
        lVar14 = FUN_006029c0(uVar15,8,0,uVar6,0,&local_64);
        if (local_64 == 0) {
          if ((uVar18 & 0xffff) != 0) {
            uVar16 = 0;
            uVar1 = local_70 + lVar7;
            do {
              uVar9 = FUN_00607fe0(lVar13);
              if (uVar1 <= uVar9) {
                if (((uint)uVar16 & 0xffff) < ((uint)uVar18 & 0xffff)) goto LAB_0061de88;
                break;
              }
              uVar4 = FUN_00608490(lVar13,&local_64);
              if (local_64 != 0) goto LAB_0061dedc;
              uVar4 = uVar4 & 0xff;
              if ((uVar1 < uVar4) || (uVar9 = FUN_00607fe0(lVar13), uVar1 - uVar4 < uVar9)) {
                iVar5 = FUN_00607fe0(lVar13);
                uVar4 = (int)uVar1 - iVar5;
                uVar4 = uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU);
              }
              uVar10 = FUN_006029c0(uVar15,1,0,uVar4 + 1,0,&local_64);
              *(undefined8 *)(lVar14 + uVar16 * 8) = uVar10;
              if (local_64 != 0) goto LAB_0061dedc;
              local_64 = FUN_00606a60(lVar13,uVar10,(ulong)uVar4);
              if (local_64 != 0) goto LAB_0061dedc;
              lVar7 = uVar16 * 8;
              uVar16 = uVar16 + 1;
              *(undefined1 *)(*(long *)(lVar14 + lVar7) + (ulong)uVar4) = 0;
            } while (uVar16 < uVar6);
          }
          goto LAB_0061dec4;
        }
      }
      else {
        lVar14 = 0;
      }
    }
    goto LAB_0061dd64;
  }
  uVar15 = *(undefined8 *)(lVar13 + 0x38);
  uVar2 = FUN_00606b90(lVar13,&local_64);
  uVar6 = (ulong)local_64;
  if (local_64 != 0) goto LAB_0061dd80;
  if ((0x102 < uVar2) || (*(ushort *)(param_1 + 0x1d0) <= (ushort)(uVar2 - 1))) {
LAB_0061dcb8:
    uVar6 = 3;
    goto LAB_0061dd80;
  }
  uVar6 = (ulong)uVar2;
  puVar8 = (ushort *)FUN_006029c0(uVar15,1,0,uVar6,0,&local_64);
  if ((local_64 == 0) && (local_64 = FUN_00606a60(lVar13,puVar8,uVar6), local_64 == 0)) {
    uVar18 = 0;
    do {
      if (uVar6 < uVar18 + (long)*(char *)((long)puVar8 + uVar18)) {
        local_64 = 3;
        goto LAB_0061dd78;
      }
      uVar18 = uVar18 + 1;
    } while (uVar18 < uVar6);
    uVar6 = 0;
    *(ushort *)(param_1 + 0x3f8) = uVar2;
    *(ushort **)(param_1 + 0x400) = puVar8;
    goto LAB_0061dd80;
  }
LAB_0061dd78:
  FUN_006028c0(uVar15,puVar8);
  uVar6 = (ulong)local_64;
LAB_0061dd80:
  *(undefined1 *)(param_1 + 0x3f0) = 1;
  return uVar6;
  while( true ) {
    uVar16 = uVar16 + 1;
    *puVar11 = 0;
    if (uVar6 <= uVar16) break;
LAB_0061de88:
    puVar11 = (undefined1 *)FUN_006029c0(uVar15,1,0,1,0,&local_64);
    *(undefined1 **)(lVar14 + uVar16 * 8) = puVar11;
    if (local_64 != 0) goto LAB_0061dedc;
  }
LAB_0061dec4:
  uVar6 = 0;
  *(ushort *)(param_1 + 0x3f8) = uVar2;
  *(short *)(param_1 + 0x3fa) = (short)uVar18;
  *(ushort **)(param_1 + 0x400) = puVar8;
  *(long *)(param_1 + 0x408) = lVar14;
  goto LAB_0061dd80;
LAB_0061dedc:
  uVar18 = 0;
  do {
    lVar13 = uVar18 * 8;
    FUN_006028c0(uVar15,*(undefined8 *)(lVar14 + lVar13));
    uVar18 = uVar18 + 1;
    *(undefined8 *)(lVar14 + lVar13) = 0;
  } while (uVar6 != uVar18);
LAB_0061dd64:
  FUN_006028c0(uVar15,lVar14);
  goto LAB_0061dd78;
}


