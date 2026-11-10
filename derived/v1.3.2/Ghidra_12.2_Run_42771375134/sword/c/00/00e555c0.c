/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e555c0; name: FUN_00e555c0
 */


undefined8 FUN_00e555c0(long param_1,int param_2)

{
  uint uVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulong *puVar6;
  uint uVar7;
  ulong uVar8;
  int *piVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  
  *(undefined8 *)(param_1 + 0x6a0) = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0x6a8) = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0x6b0) = 0xcbf29ce484222645;
  param_2 = *(int *)(param_1 + 0x6b8) + param_2;
  *(int *)(param_1 + 0x6b8) = param_2;
  puVar2 = PTR_DAT_02710848;
  if (99 < param_2) {
    return 0;
  }
  bVar3 = *(long *)(param_1 + 0x570) != -0x340d631b7bddd9bb;
  uVar7 = 2;
  if (!bVar3) {
    uVar7 = 1;
  }
  uVar1 = (uint)bVar3;
  if (*(long *)(param_1 + 0x560) != -0x340d631b7bddd9bb) {
    uVar1 = uVar7;
  }
  if (*(long *)(param_1 + 0x580) != -0x340d631b7bddd9bb) {
    uVar1 = uVar1 + 1;
  }
  if (*(long *)(param_1 + 0x590) != -0x340d631b7bddd9bb) {
    uVar1 = uVar1 + 1;
  }
  if (*(long *)(param_1 + 0x5a0) != -0x340d631b7bddd9bb) {
    uVar1 = uVar1 + 1;
  }
  if (*(long *)(param_1 + 0x5b0) != -0x340d631b7bddd9bb) {
    uVar1 = uVar1 + 1;
  }
  if (*(long *)(param_1 + 0x5c0) != -0x340d631b7bddd9bb) {
    uVar1 = uVar1 + 1;
  }
  if (*(long *)(param_1 + 0x5d0) != -0x340d631b7bddd9bb) {
    uVar1 = uVar1 + 1;
  }
  if (*(long *)(param_1 + 0x5e0) != -0x340d631b7bddd9bb) {
    uVar1 = uVar1 + 1;
  }
  puVar6 = *(ulong **)(*(long *)PTR_DAT_02710848 + 0x98);
  if (*(long *)(param_1 + 0x5f0) != -0x340d631b7bddd9bb) {
    uVar1 = uVar1 + 1;
  }
  uVar8 = *puVar6;
  uVar10 = puVar6[1];
  do {
    uVar12 = uVar8 ^ uVar10;
    iVar5 = (int)uVar10;
    iVar4 = (int)uVar8;
    uVar10 = uVar12 >> 0x1b | uVar12 << 0x25;
    uVar8 = uVar12 ^ (uVar8 >> 0x28 | uVar8 << 0x18) ^ uVar12 << 0x10;
    uVar7 = iVar4 + iVar5 & 3;
  } while (uVar7 == 3);
  *puVar6 = uVar8;
  puVar6[1] = uVar10;
  if (uVar1 == 0) {
    puVar6 = *(ulong **)(*(long *)puVar2 + 0x98);
    uVar8 = *puVar6;
    uVar10 = puVar6[1];
    do {
      uVar12 = uVar8 ^ uVar10;
      iVar5 = (int)uVar10;
      iVar4 = (int)uVar8;
      uVar10 = uVar12 >> 0x1b | uVar12 << 0x25;
      uVar8 = uVar12 ^ (uVar8 >> 0x28 | uVar8 << 0x18) ^ uVar12 << 0x10;
    } while (99 < (iVar4 + iVar5 & 0x7cU));
    *puVar6 = uVar8;
    puVar6[1] = uVar10;
    *(undefined8 *)(param_1 + 0x6a0) = *(undefined8 *)(param_1 + 0x560);
    if (uVar7 != 0) {
      puVar6 = *(ulong **)(*(long *)puVar2 + 0x98);
      uVar8 = *puVar6;
      uVar10 = puVar6[1];
      do {
        uVar12 = uVar8 ^ uVar10;
        iVar5 = (int)uVar10;
        iVar4 = (int)uVar8;
        uVar10 = uVar12 >> 0x1b | uVar12 << 0x25;
        uVar8 = uVar12 ^ (uVar8 >> 0x28 | uVar8 << 0x18) ^ uVar12 << 0x10;
      } while (99 < (iVar4 + iVar5 & 0x7cU));
      *puVar6 = uVar8;
      puVar6[1] = uVar10;
      *(undefined8 *)(param_1 + 0x6a8) = *(undefined8 *)(param_1 + 0x560);
      if (uVar7 != 1) {
        puVar6 = *(ulong **)(*(long *)puVar2 + 0x98);
        uVar8 = *puVar6;
        uVar10 = puVar6[1];
        do {
          uVar12 = uVar8 ^ uVar10;
          iVar5 = (int)uVar10;
          iVar4 = (int)uVar8;
          uVar10 = uVar12 >> 0x1b | uVar12 << 0x25;
          uVar8 = uVar12 ^ (uVar8 >> 0x28 | uVar8 << 0x18) ^ uVar12 << 0x10;
        } while (99 < (iVar4 + iVar5 & 0x7cU));
        *puVar6 = uVar8;
        puVar6[1] = uVar10;
        *(undefined8 *)(param_1 + 0x6b0) = *(undefined8 *)(param_1 + 0x560);
        if (uVar7 != 2) {
          puVar6 = *(ulong **)(*(long *)puVar2 + 0x98);
          uVar8 = *puVar6;
          uVar10 = puVar6[1];
          do {
            uVar12 = uVar8 ^ uVar10;
            iVar5 = (int)uVar10;
            iVar4 = (int)uVar8;
            uVar10 = uVar12 >> 0x1b | uVar12 << 0x25;
            uVar8 = uVar12 ^ (uVar8 >> 0x28 | uVar8 << 0x18) ^ uVar12 << 0x10;
          } while (99 < (iVar4 + iVar5 & 0x7cU));
          *puVar6 = uVar8;
          puVar6[1] = uVar10;
          *(undefined8 *)(param_1 + 0x6b8) = *(undefined8 *)(param_1 + 0x560);
          return 1;
        }
      }
    }
  }
  else {
    puVar6 = *(ulong **)(*(long *)puVar2 + 0x98);
    uVar12 = (ulong)uVar1;
    uVar8 = *puVar6;
    uVar10 = puVar6[1];
    do {
      uVar11 = uVar8 ^ uVar10;
      iVar5 = (int)uVar10;
      iVar4 = (int)uVar8;
      uVar10 = uVar11 >> 0x1b | uVar11 << 0x25;
      uVar8 = uVar11 ^ (uVar8 >> 0x28 | uVar8 << 0x18) ^ uVar11 << 0x10;
      uVar1 = iVar4 + iVar5 & 0x7f;
    } while (99 < uVar1);
    uVar11 = 0;
    iVar4 = 0;
    piVar9 = (int *)(param_1 + 0x568);
    *puVar6 = uVar8;
    puVar6[1] = uVar10;
    do {
      iVar4 = *piVar9 + iVar4;
      if ((int)uVar1 < iVar4) goto LAB_00e55714;
      uVar11 = uVar11 + 1;
      piVar9 = piVar9 + 4;
    } while (uVar11 < uVar12);
    uVar11 = 0;
LAB_00e55714:
    *(undefined8 *)(param_1 + 0x6a0) =
         *(undefined8 *)(param_1 + (uVar11 & 0xffffffff) * 0x10 + 0x560);
    if (uVar7 != 0) {
      puVar6 = *(ulong **)(*(long *)puVar2 + 0x98);
      uVar8 = *puVar6;
      uVar10 = puVar6[1];
      do {
        uVar11 = uVar8 ^ uVar10;
        iVar5 = (int)uVar10;
        iVar4 = (int)uVar8;
        uVar10 = uVar11 >> 0x1b | uVar11 << 0x25;
        uVar8 = uVar11 ^ (uVar8 >> 0x28 | uVar8 << 0x18) ^ uVar11 << 0x10;
        uVar1 = iVar4 + iVar5 & 0x7f;
      } while (99 < uVar1);
      uVar11 = 0;
      iVar4 = 0;
      piVar9 = (int *)(param_1 + 0x568);
      *puVar6 = uVar8;
      puVar6[1] = uVar10;
      do {
        iVar4 = *piVar9 + iVar4;
        if ((int)uVar1 < iVar4) goto LAB_00e55784;
        uVar11 = uVar11 + 1;
        piVar9 = piVar9 + 4;
      } while (uVar11 < uVar12);
      uVar11 = 0;
LAB_00e55784:
      *(undefined8 *)(param_1 + 0x6a8) =
           *(undefined8 *)(param_1 + (uVar11 & 0xffffffff) * 0x10 + 0x560);
      if (uVar7 != 1) {
        puVar6 = *(ulong **)(*(long *)puVar2 + 0x98);
        uVar8 = *puVar6;
        uVar10 = puVar6[1];
        do {
          uVar11 = uVar8 ^ uVar10;
          iVar5 = (int)uVar10;
          iVar4 = (int)uVar8;
          uVar10 = uVar11 >> 0x1b | uVar11 << 0x25;
          uVar8 = uVar11 ^ (uVar8 >> 0x28 | uVar8 << 0x18) ^ uVar11 << 0x10;
          uVar1 = iVar4 + iVar5 & 0x7f;
        } while (99 < uVar1);
        uVar11 = 0;
        iVar4 = 0;
        piVar9 = (int *)(param_1 + 0x568);
        *puVar6 = uVar8;
        puVar6[1] = uVar10;
        do {
          iVar4 = *piVar9 + iVar4;
          if ((int)uVar1 < iVar4) goto LAB_00e557f8;
          uVar11 = uVar11 + 1;
          piVar9 = piVar9 + 4;
        } while (uVar11 < uVar12);
        uVar11 = 0;
LAB_00e557f8:
        *(undefined8 *)(param_1 + 0x6b0) =
             *(undefined8 *)(param_1 + (uVar11 & 0xffffffff) * 0x10 + 0x560);
        if (uVar7 != 2) {
          puVar6 = *(ulong **)(*(long *)puVar2 + 0x98);
          uVar8 = *puVar6;
          uVar10 = puVar6[1];
          do {
            uVar11 = uVar8 ^ uVar10;
            iVar5 = (int)uVar10;
            iVar4 = (int)uVar8;
            uVar10 = uVar11 >> 0x1b | uVar11 << 0x25;
            uVar8 = uVar11 ^ (uVar8 >> 0x28 | uVar8 << 0x18) ^ uVar11 << 0x10;
            uVar7 = iVar4 + iVar5 & 0x7f;
          } while (99 < uVar7);
          uVar11 = 0;
          iVar4 = 0;
          piVar9 = (int *)(param_1 + 0x568);
          *puVar6 = uVar8;
          puVar6[1] = uVar10;
          do {
            iVar4 = *piVar9 + iVar4;
            if ((int)uVar7 < iVar4) goto LAB_00e5586c;
            uVar11 = uVar11 + 1;
            piVar9 = piVar9 + 4;
          } while (uVar11 < uVar12);
          uVar11 = 0;
LAB_00e5586c:
          *(undefined8 *)(param_1 + 0x6b8) =
               *(undefined8 *)(param_1 + (uVar11 & 0xffffffff) * 0x10 + 0x560);
          return 1;
        }
      }
    }
  }
  return 1;
}


