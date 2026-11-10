/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0100a5e0; name: FUN_0100a5e0
 */


void FUN_0100a5e0(undefined8 param_1,int param_2,int *param_3,undefined8 param_4,ulong *param_5,
                 uint param_6)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  ulong local_68;
  ulong local_60;
  undefined8 uStack_58;
  ulong local_48;
  
  lVar15 = *(long *)(*(long *)PTR_DAT_02710798 + 0x248);
  if (lVar15 != 0) {
    (**(code **)(*(long *)(lVar15 + 0x48) + 0x10))();
  }
  if (((param_6 & 1) == 0) &&
     ((iVar5 = FUN_015261d0(lVar15,param_2,param_3), iVar5 == 4 ||
      (iVar5 = FUN_015261d0(lVar15,param_2,param_3), iVar5 == 3)))) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  local_68 = 0xf4b17a579f18960;
  local_60 = 0x82a2b175229d6a5b;
  uStack_58 = 0;
  FUN_01028fc0(&local_68,
               *(undefined8 *)(lVar15 + (long)param_2 * 0xa68 + (long)*param_3 * 0x18 + 0x68));
  uVar10 = local_60 ^ local_68;
  local_48 = local_60 + local_68;
  local_68 = uVar10 ^ (local_68 >> 0x28 | local_68 << 0x18) ^ uVar10 << 0x10;
  local_60 = uVar10 >> 0x1b | uVar10 << 0x25;
  FUN_015260f0(lVar15,param_2,param_3,&local_48);
  if ((param_6 & 1) != 0) goto joined_r0x0100a920;
  iVar5 = FUN_01526310(lVar15,param_4);
  iVar6 = FUN_015260b0(lVar15,param_4);
  if (param_5 == (ulong *)0x0) {
    do {
      uVar10 = local_68 ^ local_60;
      iVar9 = (int)local_60;
      iVar8 = (int)local_68;
      local_60 = uVar10 >> 0x1b | uVar10 << 0x25;
      local_68 = uVar10 ^ (local_68 >> 0x28 | local_68 << 0x18) ^ uVar10 << 0x10;
      uVar1 = iVar8 + iVar9 & 0x7f;
      cVar7 = (char)uVar1;
    } while (99 < uVar1);
    if (iVar6 - iVar5 == 0) goto LAB_0100a8a0;
    uVar1 = (iVar6 - iVar5) + 1;
    if (uVar1 == 0) {
      local_60 = local_68 ^ local_60;
      uVar12 = (int)local_68 + (int)(uVar10 >> 0x1b);
      local_68 = local_60 ^ (local_68 >> 0x28 | local_68 << 0x18) ^ local_60 << 0x10;
      local_60 = local_60 >> 0x1b | local_60 << 0x25;
    }
    else {
      uVar11 = (0x20 - LZCOUNT(uVar1)) -
               (ulong)((0xffffffffU >> (ulong)(0x21U - (int)(0x20 - LZCOUNT(uVar1)) & 0x1f) & uVar1)
                      == 0);
      uVar10 = uVar11 >> 6;
      if ((uVar11 & 0x3f) != 0) {
        uVar10 = uVar10 + 1;
      }
      uVar13 = 0;
      if (uVar10 != 0) {
        uVar13 = uVar11 / uVar10;
      }
      uVar2 = 0;
      if (uVar10 <= uVar11) {
        uVar2 = (uint)(0xffffffffffffffff >> (-uVar13 & 0x3f));
      }
      do {
        uVar10 = local_68 ^ local_60;
        iVar6 = (int)local_68;
        iVar8 = (int)local_60;
        local_60 = uVar10 >> 0x1b | uVar10 << 0x25;
        local_68 = uVar10 ^ (local_68 >> 0x28 | local_68 << 0x18) ^ uVar10 << 0x10;
        uVar12 = iVar6 + iVar8 & uVar2;
      } while (uVar1 <= uVar12);
    }
  }
  else {
    uVar10 = *param_5;
    uVar11 = param_5[1];
    do {
      uVar13 = uVar10 ^ uVar11;
      iVar9 = (int)uVar11;
      iVar8 = (int)uVar10;
      uVar11 = uVar13 >> 0x1b | uVar13 << 0x25;
      uVar10 = uVar13 ^ (uVar10 >> 0x28 | uVar10 << 0x18) ^ uVar13 << 0x10;
      uVar1 = iVar8 + iVar9 & 0x7f;
      cVar7 = (char)uVar1;
    } while (99 < uVar1);
    *param_5 = uVar10;
    param_5[1] = uVar11;
    if (iVar6 - iVar5 == 0) {
LAB_0100a8a0:
      uVar12 = 0;
    }
    else {
      uVar1 = (iVar6 - iVar5) + 1;
      if (uVar1 == 0) {
        uVar11 = uVar10 ^ uVar11;
        uVar12 = (int)uVar10 + (int)(uVar13 >> 0x1b);
        *param_5 = uVar11 ^ (uVar10 >> 0x28 | uVar10 << 0x18) ^ uVar11 << 0x10;
        param_5[1] = uVar11 >> 0x1b | uVar11 << 0x25;
      }
      else {
        uVar14 = (0x20 - LZCOUNT(uVar1)) -
                 (ulong)((0xffffffffU >> (ulong)(0x21U - (int)(0x20 - LZCOUNT(uVar1)) & 0x1f) &
                         uVar1) == 0);
        uVar13 = uVar14 >> 6;
        if ((uVar14 & 0x3f) != 0) {
          uVar13 = uVar13 + 1;
        }
        uVar3 = 0;
        if (uVar13 != 0) {
          uVar3 = uVar14 / uVar13;
        }
        uVar2 = 0;
        if (uVar13 <= uVar14) {
          uVar2 = (uint)(0xffffffffffffffff >> (-uVar3 & 0x3f));
        }
        do {
          uVar13 = uVar10 ^ uVar11;
          iVar6 = (int)uVar10;
          iVar8 = (int)uVar11;
          uVar11 = uVar13 >> 0x1b | uVar13 << 0x25;
          uVar10 = uVar13 ^ (uVar10 >> 0x28 | uVar10 << 0x18) ^ uVar13 << 0x10;
          uVar12 = iVar6 + iVar8 & uVar2;
        } while (uVar1 <= uVar12);
        *param_5 = uVar10;
        param_5[1] = uVar11;
      }
    }
  }
  local_48._0_1_ = cVar7 + '\x01';
  FUN_01526130(lVar15,param_2,param_3,&local_48);
  local_48 = CONCAT71(local_48._1_7_,(char)uVar12 + (char)iVar5);
  FUN_01526110(lVar15,param_2,param_3,&local_48);
joined_r0x0100a920:
  if (!bVar4) {
    local_48 = local_48 & 0xffffffff00000000;
    FUN_01526150(lVar15,param_2,param_3,&local_48);
  }
  if (lVar15 != 0) {
    (**(code **)(*(long *)(lVar15 + 0x48) + 0x18))((long *)(lVar15 + 0x48));
  }
  return;
}


