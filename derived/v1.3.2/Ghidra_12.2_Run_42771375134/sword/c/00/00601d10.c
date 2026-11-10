/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00601d10; name: FUN_00601d10
 */


undefined8 FUN_00601d10(long param_1,undefined4 param_2,uint param_3)

{
  long *plVar1;
  undefined4 uVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  undefined8 uVar7;
  uint *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  int iVar21;
  long lVar22;
  long *plVar23;
  
  if (((param_1 == 0) || (*(long *)(param_1 + 0xa0) == 0)) ||
     (lVar22 = *(long *)(param_1 + 0x98), lVar22 == 0)) {
    return 0x23;
  }
  if ((*(long *)(lVar22 + 0x128) == 0) ||
     (puVar8 = (uint *)(*(long *)(lVar22 + 0x128) + 8), (*(byte *)puVar8 & 1) == 0)) {
    *(undefined8 *)(lVar22 + 0xa8) = 0;
  }
  else {
    if (*(long *)(lVar22 + 0xa8) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar22 + 8) + 0xb8) + 0x10))();
      puVar8 = (uint *)(*(long *)(lVar22 + 0x128) + 8);
    }
    *(undefined8 *)(lVar22 + 0xa8) = 0;
    *puVar8 = *puVar8 & 0xfffffffe;
  }
  *(undefined8 *)(lVar22 + 0x98) = 0;
  *(undefined4 *)(lVar22 + 0xa0) = 0;
  *(undefined1 *)(lVar22 + 0xb2) = 0;
  *(undefined4 *)(lVar22 + 0x90) = 0;
  *(undefined4 *)(lVar22 + 0xf0) = 0;
  *(undefined8 *)(lVar22 + 0x70) = 0;
  *(undefined8 *)(lVar22 + 0x78) = 0;
  *(undefined8 *)(lVar22 + 0x60) = 0;
  *(undefined8 *)(lVar22 + 0x68) = 0;
  *(undefined8 *)(lVar22 + 0x50) = 0;
  *(undefined8 *)(lVar22 + 0x58) = 0;
  *(undefined8 *)(lVar22 + 0x40) = 0;
  *(undefined8 *)(lVar22 + 0x48) = 0;
  *(undefined8 *)(lVar22 + 0x30) = 0;
  *(undefined8 *)(lVar22 + 0x38) = 0;
  *(undefined8 *)(lVar22 + 0xe0) = 0;
  *(undefined8 *)(lVar22 + 0xe8) = 0;
  *(undefined8 *)(lVar22 + 0xd0) = 0;
  *(undefined8 *)(lVar22 + 0xd8) = 0;
  *(undefined8 *)(lVar22 + 0xc0) = 0;
  *(undefined8 *)(lVar22 + 200) = 0;
  *(undefined8 *)(lVar22 + 0x118) = 0;
  *(undefined8 *)(lVar22 + 0x120) = 0;
  *(undefined8 *)(lVar22 + 0x108) = 0;
  *(undefined8 *)(lVar22 + 0x110) = 0;
  *(undefined8 *)(lVar22 + 0xf8) = 0;
  *(undefined8 *)(lVar22 + 0x100) = 0;
  puVar9 = *(undefined8 **)(param_1 + 0xb0);
  plVar23 = *(long **)(puVar9[1] + 0x130);
  if ((param_3 & 0x400) != 0) {
    param_3 = param_3 | 0x801;
  }
  if ((param_3 & 1) != 0) {
    param_3 = param_3 & 0xfffffff0 | param_3 & 1 | 10;
  }
  if ((param_3 & 0x400000) != 0) {
    param_3 = param_3 & 0xfffffffb;
  }
  if (((plVar23 == (long *)0x0) || ((param_3 & 0x8002) != 0)) ||
     (((*(ulong *)*puVar9 & 0x300) != 0x100 ||
      (uVar12 = (uint)*(undefined8 *)(param_1 + 0x10), (uVar12 >> 0xd & 1) != 0))))
  goto LAB_00601f34;
  if ((param_3 >> 0xb & 1) == 0) {
    lVar20 = (*(long **)(param_1 + 0xf0))[2];
    lVar19 = **(long **)(param_1 + 0xf0);
    if (lVar20 == 0) {
      if (lVar19 != 0) goto LAB_00601e7c;
    }
    else if ((lVar20 != 0) && (lVar19 == 0)) goto LAB_00601e7c;
LAB_00601f34:
    uVar7 = (**(code **)(puVar9[3] + 0x90))(lVar22,*(undefined8 *)(param_1 + 0xa0),param_2,param_3);
    if ((int)uVar7 != 0) {
      return uVar7;
    }
    if (*(int *)(lVar22 + 0x90) == 0x6f75746c) {
      sVar3 = *(short *)(lVar22 + 0xca);
      sVar4 = *(short *)(lVar22 + 200);
      if (sVar4 != 0 || sVar3 != 0) {
        if (sVar3 < 1) {
          return 6;
        }
        if (sVar4 < 1) {
          return 6;
        }
        lVar19 = 0;
        iVar6 = -1;
        do {
          sVar5 = *(short *)(*(long *)(lVar22 + 0xe0) + lVar19 * 2);
          iVar21 = (int)sVar5;
          if ((int)sVar3 <= (int)sVar5 || iVar21 <= iVar6) {
            return 6;
          }
          lVar19 = lVar19 + 1;
          iVar6 = iVar21;
        } while (lVar19 < sVar4);
        if (sVar3 + -1 != iVar21) {
          return 6;
        }
      }
      if ((param_3 >> 1 & 1) == 0) {
        if ((param_3 >> 4 & 1) == 0) {
          *(ulong *)(lVar22 + 0x58) = *(ulong *)(lVar22 + 0x58) & 0xffffffffffffffc0;
          *(ulong *)(lVar22 + 0x60) = *(ulong *)(lVar22 + 0x60) & 0xffffffffffffffc0;
          uVar14 = *(ulong *)(lVar22 + 0x40) & 0xffffffffffffffc0;
          uVar16 = *(long *)(lVar22 + 0x48) + 0x3fU & 0xffffffffffffffc0;
          *(ulong *)(lVar22 + 0x30) =
               (*(ulong *)(lVar22 + 0x40) + *(long *)(lVar22 + 0x30) + 0x3f & 0xffffffffffffffc0) -
               uVar14;
          lVar19 = uVar16 - (*(long *)(lVar22 + 0x48) - *(long *)(lVar22 + 0x38) &
                            0xffffffffffffffc0U);
          *(ulong *)(lVar22 + 0x40) = uVar14;
          *(ulong *)(lVar22 + 0x48) = uVar16;
        }
        else {
          *(ulong *)(lVar22 + 0x40) = *(ulong *)(lVar22 + 0x40) & 0xffffffffffffffc0;
          uVar14 = *(ulong *)(lVar22 + 0x60);
          *(ulong *)(lVar22 + 0x48) = *(long *)(lVar22 + 0x48) + 0x3fU & 0xffffffffffffffc0;
          uVar17 = uVar14 & 0xffffffffffffffc0;
          uVar16 = *(ulong *)(lVar22 + 0x58) & 0xffffffffffffffc0;
          *(ulong *)(lVar22 + 0x30) =
               (*(ulong *)(lVar22 + 0x58) + *(long *)(lVar22 + 0x30) + 0x3f & 0xffffffffffffffc0) -
               uVar16;
          *(ulong *)(lVar22 + 0x58) = uVar16;
          *(ulong *)(lVar22 + 0x60) = uVar17;
          lVar19 = (uVar14 + *(long *)(lVar22 + 0x38) + 0x3f & 0xffffffffffffffc0) - uVar17;
        }
        *(long *)(lVar22 + 0x38) = lVar19;
        *(ulong *)(lVar22 + 0x50) = *(long *)(lVar22 + 0x50) + 0x20U & 0xffffffffffffffc0;
        *(ulong *)(lVar22 + 0x68) = *(long *)(lVar22 + 0x68) + 0x20U & 0xffffffffffffffc0;
      }
    }
joined_r0x0060201c:
    uVar7 = 0;
    if ((param_3 >> 4 & 1) != 0) goto LAB_006020bc;
LAB_00602020:
    *(undefined8 *)(lVar22 + 0x80) = *(undefined8 *)(lVar22 + 0x50);
    *(undefined8 *)(lVar22 + 0x88) = 0;
  }
  else {
LAB_00601e7c:
    if (((((param_3 >> 5 & 1) == 0) && (uVar13 = (uint)*(ulong *)*puVar9, (uVar13 >> 10 & 1) != 0))
        && (((param_3 & 0xf0000) != 0x10000 || ((uVar13 >> 0xb & 1) != 0)))) &&
       (((uVar12 >> 3 & 1) == 0 ||
        ((((*(long *)(param_1 + 0x4a8) == 0 || (*(short *)(param_1 + 0x1e6) != 0)) ||
          (*(long *)(param_1 + 0x410) != 0)) || (*(long *)(param_1 + 0x420) != 0))))))
    goto LAB_00601f34;
    if ((((param_3 >> 3 & 1) == 0) && ((uVar12 >> 1 & 1) != 0)) &&
       ((iVar6 = (**(code **)(puVar9[3] + 0x90))
                           (lVar22,*(undefined8 *)(param_1 + 0xa0),param_2,param_3 | 0x4000),
        iVar6 == 0 && (*(int *)(lVar22 + 0x90) == 0x62697473)))) goto joined_r0x0060201c;
    lVar19 = *(long *)(param_1 + 0xf0);
    uVar2 = *(undefined4 *)(lVar19 + 0x30);
    *(undefined4 *)(lVar19 + 0x30) = 0;
    uVar7 = (**(code **)(*(long *)(*plVar23 + 0x28) + 0x18))
                      (plVar23,lVar22,*(undefined8 *)(param_1 + 0xa0),param_2,param_3);
    *(undefined4 *)(lVar19 + 0x30) = uVar2;
    if ((param_3 >> 4 & 1) == 0) goto LAB_00602020;
LAB_006020bc:
    *(undefined8 *)(lVar22 + 0x80) = 0;
    *(undefined8 *)(lVar22 + 0x88) = *(undefined8 *)(lVar22 + 0x68);
  }
  if (((param_3 >> 0xd & 1) == 0) && ((*(byte *)(param_1 + 0x10) & 1) != 0)) {
    lVar10 = *(long *)(param_1 + 0xa0);
    lVar20 = *(long *)(lVar22 + 0x70);
    lVar15 = *(long *)(lVar22 + 0x78);
    lVar18 = *(long *)(lVar10 + 0x20);
    lVar19 = -lVar20;
    if (-1 < lVar20) {
      lVar19 = lVar20;
    }
    iVar6 = 1;
    if (-1 >= lVar20) {
      iVar6 = -1;
    }
    lVar20 = -lVar18;
    if (-1 < lVar18) {
      lVar20 = lVar18;
    }
    iVar21 = -iVar6;
    if (-1 < lVar18) {
      iVar21 = iVar6;
    }
    uVar16 = lVar20 * lVar19 + 0x20U >> 6;
    uVar14 = -uVar16;
    if (-1 < iVar21) {
      uVar14 = uVar16;
    }
    *(ulong *)(lVar22 + 0x70) = uVar14;
    lVar20 = *(long *)(lVar10 + 0x28);
    lVar19 = -lVar15;
    if (-1 < lVar15) {
      lVar19 = lVar15;
    }
    iVar6 = 1;
    if (-1 >= lVar15) {
      iVar6 = -1;
    }
    lVar15 = -lVar20;
    if (-1 < lVar20) {
      lVar15 = lVar20;
    }
    iVar21 = -iVar6;
    if (-1 < lVar20) {
      iVar21 = iVar6;
    }
    uVar16 = lVar15 * lVar19 + 0x20U >> 6;
    uVar14 = -uVar16;
    if (-1 < iVar21) {
      uVar14 = uVar16;
    }
    *(ulong *)(lVar22 + 0x78) = uVar14;
  }
  if ((param_3 >> 0xb & 1) != 0) goto LAB_006022fc;
  plVar23 = *(long **)(param_1 + 0xf0);
  uVar12 = *(uint *)(plVar23 + 6);
  if (uVar12 == 0) goto LAB_006022fc;
  lVar20 = *(long *)(*(long *)(*(long *)(lVar22 + 8) + 0xb0) + 8);
  lVar19 = *(long *)(lVar20 + 0x128);
  if (lVar19 == 0) {
    iVar6 = *(int *)(lVar22 + 0x90);
LAB_00602180:
    if (lVar20 != 0) {
      for (lVar20 = *(long *)(lVar20 + 0x118); lVar20 != 0; lVar20 = *(long *)(lVar20 + 8)) {
        lVar19 = *(long *)(lVar20 + 0x10);
        if (*(int *)(lVar19 + 0x20) == iVar6) {
          if (lVar19 != 0) goto LAB_006021ac;
          break;
        }
      }
    }
    if (iVar6 != 0x6f75746c) goto joined_r0x006022a8;
    if (((plVar23 != (long *)0x0) && ((uVar12 & 1) != 0)) && (0 < (long)*(short *)(lVar22 + 0xca)))
    {
      plVar11 = *(long **)(lVar22 + 0xd0);
      plVar1 = plVar11 + (long)*(short *)(lVar22 + 0xca) * 2;
      do {
        if (plVar11 != (long *)0x0) {
          lVar10 = plVar23[1] * plVar11[1];
          lVar20 = plVar23[3] * plVar11[1];
          lVar15 = *plVar23 * *plVar11;
          lVar19 = plVar23[2] * *plVar11;
          *plVar11 = (lVar10 + (lVar10 >> 0x3f) + 0x8000 >> 0x10) +
                     (lVar15 + (lVar15 >> 0x3f) + 0x8000 >> 0x10);
          plVar11[1] = (lVar20 + (lVar20 >> 0x3f) + 0x8000 >> 0x10) +
                       (lVar19 + (lVar19 >> 0x3f) + 0x8000 >> 0x10);
        }
        plVar11 = plVar11 + 2;
      } while (plVar11 < plVar1);
      uVar12 = *(uint *)(plVar23 + 6);
    }
    if ((uVar12 >> 1 & 1) == 0) goto joined_r0x006022a8;
    if (0 < *(short *)(lVar22 + 0xca)) {
      lVar19 = plVar23[4];
      lVar20 = plVar23[5];
      plVar11 = *(long **)(lVar22 + 0xd0);
      uVar12 = 0;
      do {
        *plVar11 = *plVar11 + lVar19;
        plVar11[1] = plVar11[1] + lVar20;
        uVar12 = uVar12 + 1;
        plVar11 = plVar11 + 2;
      } while ((int)(uVar12 & 0xffff) < (int)*(short *)(lVar22 + 0xca));
      goto joined_r0x006022a8;
    }
  }
  else {
    iVar6 = *(int *)(lVar22 + 0x90);
    if (*(int *)(lVar19 + 0x20) != iVar6) goto LAB_00602180;
LAB_006021ac:
    uVar7 = (**(code **)(*(long *)(lVar19 + 0x18) + 0x58))(lVar19,lVar22,plVar23,plVar23 + 4);
joined_r0x006022a8:
    if (plVar23 == (long *)0x0) goto LAB_006022fc;
  }
  lVar10 = plVar23[1] * *(long *)(lVar22 + 0x88);
  lVar20 = plVar23[3] * *(long *)(lVar22 + 0x88);
  lVar15 = *plVar23 * *(long *)(lVar22 + 0x80);
  lVar19 = plVar23[2] * *(long *)(lVar22 + 0x80);
  *(long *)(lVar22 + 0x80) =
       (lVar10 + (lVar10 >> 0x3f) + 0x8000 >> 0x10) + (lVar15 + (lVar15 >> 0x3f) + 0x8000 >> 0x10);
  *(long *)(lVar22 + 0x88) =
       (lVar20 + (lVar20 >> 0x3f) + 0x8000 >> 0x10) + (lVar19 + (lVar19 >> 0x3f) + 0x8000 >> 0x10);
LAB_006022fc:
  if ((((int)uVar7 == 0) && (*(int *)(lVar22 + 0x90) != 0x62697473)) &&
     (*(int *)(lVar22 + 0x90) != 0x636f6d70)) {
    if ((param_3 >> 2 & 1) != 0) {
      uVar12 = param_3 >> 0x10 & 0xf;
      if ((param_3 & 0x1000) != 0 && uVar12 == 0) {
        uVar12 = 2;
      }
      uVar7 = FUN_00603920(lVar22,uVar12);
      return uVar7;
    }
    uVar7 = 0;
  }
  return uVar7;
}


