/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0108ff10; name: FUN_0108ff10
 */


void FUN_0108ff10(long param_1,uint param_2)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  ulong *puVar13;
  ulong uVar14;
  ulong uVar15;
  uint *puVar16;
  long *plVar17;
  
  if (2 < param_2) {
LAB_0109027c:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  puVar16 = *(uint **)(*(long *)(param_1 + (long)(int)param_2 * 0x120 + 0x88) + 400);
  if (param_2 == 2) {
    piVar2 = (int *)((long)puVar16 + (ulong)*puVar16);
    plVar17 = (long *)(param_1 + 0x530);
    *(int **)(param_1 + 0x588) = piVar2;
    puVar16 = (uint *)((long)piVar2 + (ulong)*(ushort *)((long)piVar2 + (4 - (long)*piVar2)));
    FUN_01090280(plVar17,*(undefined4 *)((long)puVar16 + (ulong)*puVar16));
    puVar6 = PTR_DAT_02710848;
    lVar7 = *(long *)(param_1 + 0x538) - *(long *)(param_1 + 0x530);
    if (lVar7 != 0) {
      uVar12 = 0;
      do {
        uVar11 = (uint)uVar12;
        uVar1 = uVar11 + 1;
        if (uVar11 == 0) {
          lVar8 = 0;
        }
        else {
          uVar14 = (0x20 - LZCOUNT(uVar1)) -
                   (ulong)((0xffffffffU >> (ulong)(0x21U - (int)(0x20 - LZCOUNT(uVar1)) & 0x1f) &
                           uVar1) == 0);
          uVar15 = uVar14 >> 6;
          if ((uVar14 & 0x3f) != 0) {
            uVar15 = uVar15 + 1;
          }
          uVar10 = 0;
          if (uVar15 != 0) {
            uVar10 = uVar14 / uVar15;
          }
          puVar13 = *(ulong **)(*(long *)puVar6 + 0x98);
          uVar3 = 0;
          if (uVar15 <= uVar14) {
            uVar3 = (uint)(0xffffffffffffffff >> (-uVar10 & 0x3f));
          }
          uVar15 = *puVar13;
          uVar14 = puVar13[1];
          do {
            uVar10 = uVar15 ^ uVar14;
            iVar4 = (int)uVar15;
            iVar5 = (int)uVar14;
            uVar14 = uVar10 >> 0x1b | uVar10 << 0x25;
            uVar15 = uVar10 ^ (uVar15 >> 0x28 | uVar15 << 0x18) ^ uVar10 << 0x10;
            uVar9 = iVar4 + iVar5 & uVar3;
          } while (uVar1 <= uVar9);
          *puVar13 = uVar15;
          puVar13[1] = uVar14;
          lVar8 = (long)(int)uVar9;
          if (uVar11 != uVar9) {
            *(undefined2 *)(*plVar17 + uVar12 * 2) = *(undefined2 *)(*plVar17 + lVar8 * 2);
          }
        }
        *(short *)(*plVar17 + lVar8 * 2) = (short)uVar12;
        uVar12 = (ulong)uVar1;
      } while (uVar12 < (ulong)(lVar7 >> 1));
    }
    *(undefined4 *)(param_1 + 0x560) = 0;
  }
  else if (param_2 == 1) {
    piVar2 = (int *)((long)puVar16 + (ulong)*puVar16);
    plVar17 = (long *)(param_1 + 0x4f8);
    *(int **)(param_1 + 0x580) = piVar2;
    puVar16 = (uint *)((long)piVar2 + (ulong)*(ushort *)((long)piVar2 + (4 - (long)*piVar2)));
    FUN_01090280(plVar17,*(undefined4 *)((long)puVar16 + (ulong)*puVar16));
    puVar6 = PTR_DAT_02710848;
    lVar7 = *(long *)(param_1 + 0x500) - *(long *)(param_1 + 0x4f8);
    if (lVar7 != 0) {
      uVar12 = 0;
      do {
        uVar11 = (uint)uVar12;
        uVar1 = uVar11 + 1;
        if (uVar11 == 0) {
          lVar8 = 0;
        }
        else {
          uVar14 = (0x20 - LZCOUNT(uVar1)) -
                   (ulong)((0xffffffffU >> (ulong)(0x21U - (int)(0x20 - LZCOUNT(uVar1)) & 0x1f) &
                           uVar1) == 0);
          uVar15 = uVar14 >> 6;
          if ((uVar14 & 0x3f) != 0) {
            uVar15 = uVar15 + 1;
          }
          uVar10 = 0;
          if (uVar15 != 0) {
            uVar10 = uVar14 / uVar15;
          }
          puVar13 = *(ulong **)(*(long *)puVar6 + 0x98);
          uVar3 = 0;
          if (uVar15 <= uVar14) {
            uVar3 = (uint)(0xffffffffffffffff >> (-uVar10 & 0x3f));
          }
          uVar15 = *puVar13;
          uVar14 = puVar13[1];
          do {
            uVar10 = uVar15 ^ uVar14;
            iVar4 = (int)uVar15;
            iVar5 = (int)uVar14;
            uVar14 = uVar10 >> 0x1b | uVar10 << 0x25;
            uVar15 = uVar10 ^ (uVar15 >> 0x28 | uVar15 << 0x18) ^ uVar10 << 0x10;
            uVar9 = iVar4 + iVar5 & uVar3;
          } while (uVar1 <= uVar9);
          *puVar13 = uVar15;
          puVar13[1] = uVar14;
          lVar8 = (long)(int)uVar9;
          if (uVar11 != uVar9) {
            *(undefined2 *)(*plVar17 + uVar12 * 2) = *(undefined2 *)(*plVar17 + lVar8 * 2);
          }
        }
        *(short *)(*plVar17 + lVar8 * 2) = (short)uVar12;
        uVar12 = (ulong)uVar1;
      } while (uVar12 < (ulong)(lVar7 >> 1));
    }
    *(undefined4 *)(param_1 + 0x528) = 0;
  }
  else if (param_2 == 0) {
    plVar17 = *(long **)(param_1 + 0x60);
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (*(ulong *)(lVar7 + 0x80) < 0x10) {
      *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = plVar17;
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
      lVar8 = (**(code **)(*plVar17 + 0x10))(plVar17,400,0x10);
      if (lVar8 == 0) {
        (**(code **)(*plVar17 + 0xb8))(plVar17);
      }
      FUN_009fe380(lVar8,plVar17);
      *(long **)(lVar8 + 8) = plVar17;
      *(long *)(lVar8 + 0x10) = lVar8;
      *(undefined8 *)(lVar8 + 0x18) = 400;
      *(undefined8 *)(lVar8 + 0x20) = 0x10;
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
      if (lVar8 != 0) {
        (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
      }
      if (*(long *)(param_1 + 0x4d0) != 0) {
        (**(code **)(*(long *)(*(long *)(param_1 + 0x4d0) + 0x48) + 0x18))();
        *(undefined8 *)(param_1 + 0x4d0) = 0;
      }
      *(long *)(param_1 + 0x4d0) = lVar8;
      FUN_009fe790(lVar8,puVar16);
      return;
    }
    goto LAB_0109027c;
  }
  return;
}


