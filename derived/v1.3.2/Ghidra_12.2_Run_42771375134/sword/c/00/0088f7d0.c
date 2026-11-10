/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0088f7d0; name: FUN_0088f7d0
 */


uint FUN_0088f7d0(undefined8 param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  
  iVar2 = param_3[1] - *param_3;
  if (iVar2 == 0) {
    return *param_3;
  }
  uVar10 = iVar2 + 1;
  if (uVar10 == 0) {
    uVar10 = *param_2;
    do {
      uVar6 = (uVar10 % 0xadc8) * 0xbc8f;
      iVar2 = 0x7fffffff;
      if ((uVar10 / 0xadc8) * 0xd47 <= uVar6) {
        iVar2 = 0;
      }
      uVar10 = iVar2 + uVar6 + (uVar10 / 0xadc8) * -0xd47;
      uVar6 = uVar10 - 1;
    } while (0x7ffeffff < uVar6);
    do {
      uVar9 = (uVar10 % 0xadc8) * 0xbc8f;
      iVar2 = 0x7fffffff;
      if ((uVar10 / 0xadc8) * 0xd47 <= uVar9) {
        iVar2 = 0;
      }
      uVar10 = iVar2 + uVar9 + (uVar10 / 0xadc8) * -0xd47;
    } while (0x7ffeffff < uVar10 - 1);
    *param_2 = uVar10;
    return uVar10 - 1 & 0xffff | uVar6 * 0x10000;
  }
  uVar6 = 0xffffffff;
  uVar11 = (0x20 - LZCOUNT(uVar10)) -
           (ulong)((0xffffffffU >> (ulong)(0x21U - (int)(0x20 - LZCOUNT(uVar10)) & 0x1f) & uVar10)
                  == 0);
  uVar7 = uVar11 / 0x1e;
  if (uVar11 % 0x1e != 0) {
    uVar7 = uVar7 + 1;
  }
  uVar8 = 0;
  if (uVar7 != 0) {
    uVar8 = uVar11 / uVar7;
  }
  uVar9 = -1 << (ulong)((uint)uVar8 & 0x1f) & 0x7ffffffe;
  if (0x1f < uVar8) {
    uVar9 = 0;
  }
  uVar5 = 0;
  if (uVar7 != 0) {
    uVar5 = uVar9 / uVar7;
  }
  if (uVar5 < 0x7ffffffe - uVar9) {
    uVar7 = uVar7 + 1;
    uVar8 = 0;
    if (uVar7 != 0) {
      uVar8 = uVar11 / uVar7;
    }
    if (uVar8 < 0x20) {
      uVar9 = -1 << (ulong)((uint)uVar8 & 0x1f) & 0x7ffffffe;
      goto LAB_0088f86c;
    }
    uVar9 = 0;
    uVar11 = uVar7 + (uVar8 * uVar7 - uVar11);
  }
  else {
LAB_0088f86c:
    uVar5 = 0;
    if (uVar7 != 0) {
      uVar5 = uVar11 / uVar7;
    }
    uVar11 = uVar7 + (uVar5 * uVar7 - uVar11);
    if (uVar8 < 0x1f) {
      iVar2 = (int)uVar8;
      uVar13 = iVar2 + 1;
      uVar12 = -1 << (ulong)(uVar13 & 0x1f) & 0x7ffffffe;
      uVar14 = 0;
      if (uVar8 != 0) {
        uVar14 = 0xffffffff >> (ulong)(-iVar2 & 0x1f);
      }
      uVar6 = 0xffffffff >> (ulong)(0x1fU - iVar2 & 0x1f);
      goto LAB_0088f97c;
    }
  }
  uVar12 = 0;
  uVar14 = 0;
  if (uVar8 != 0) {
    uVar14 = 0xffffffff >> (ulong)(-(int)uVar8 & 0x1f);
  }
  uVar13 = (int)uVar8 + 1;
LAB_0088f97c:
  do {
    while (uVar11 == 0) {
      uVar3 = 0;
      if (uVar7 != 0) goto LAB_0088f9e8;
LAB_0088fa8c:
      if (uVar3 < uVar10) goto LAB_0088fae4;
    }
    uVar4 = *param_2;
    if (uVar8 < 0x20) {
      uVar3 = 0;
      uVar5 = 0;
      do {
        do {
          uVar1 = (uVar4 % 0xadc8) * 0xbc8f;
          iVar2 = 0x7fffffff;
          if ((uVar4 / 0xadc8) * 0xd47 <= uVar1) {
            iVar2 = 0;
          }
          uVar4 = iVar2 + uVar1 + (uVar4 / 0xadc8) * -0xd47;
        } while (uVar9 <= uVar4 - 1);
        uVar5 = uVar5 + 1;
        uVar3 = (uVar4 - 1 & uVar14) + (uVar3 << (ulong)((uint)uVar8 & 0x1f));
      } while (uVar5 != uVar11);
    }
    else {
      uVar5 = 0;
      do {
        uVar3 = (uVar4 % 0xadc8) * 0xbc8f;
        iVar2 = 0x7fffffff;
        if ((uVar4 / 0xadc8) * 0xd47 <= uVar3) {
          iVar2 = 0;
        }
        uVar4 = iVar2 + uVar3 + (uVar4 / 0xadc8) * -0xd47;
      } while ((uVar9 <= uVar4 - 1) || (uVar5 = uVar5 + 1, uVar5 != uVar11));
      uVar3 = uVar4 - 1 & uVar14;
    }
    *param_2 = uVar4;
    if (uVar7 <= uVar11) goto LAB_0088fa8c;
LAB_0088f9e8:
    uVar4 = *param_2;
    if (uVar8 < 0x1f) {
      uVar5 = uVar11;
      do {
        do {
          uVar1 = (uVar4 % 0xadc8) * 0xbc8f;
          iVar2 = 0x7fffffff;
          if ((uVar4 / 0xadc8) * 0xd47 <= uVar1) {
            iVar2 = 0;
          }
          uVar4 = iVar2 + uVar1 + (uVar4 / 0xadc8) * -0xd47;
        } while (uVar12 <= uVar4 - 1);
        uVar5 = uVar5 + 1;
        uVar3 = (uVar4 - 1 & uVar6) + (uVar3 << (ulong)(uVar13 & 0x1f));
      } while (uVar5 != uVar7);
    }
    else {
      uVar5 = uVar11;
      do {
        uVar3 = (uVar4 % 0xadc8) * 0xbc8f;
        iVar2 = 0x7fffffff;
        if ((uVar4 / 0xadc8) * 0xd47 <= uVar3) {
          iVar2 = 0;
        }
        uVar4 = iVar2 + uVar3 + (uVar4 / 0xadc8) * -0xd47;
      } while ((uVar12 <= uVar4 - 1) || (uVar5 = uVar5 + 1, uVar5 != uVar7));
      uVar3 = uVar4 - 1 & uVar6;
    }
    *param_2 = uVar4;
  } while (uVar10 <= uVar3);
LAB_0088fae4:
  return *param_3 + uVar3;
}


