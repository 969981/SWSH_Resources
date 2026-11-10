/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e32cd0; name: FUN_00e32cd0
 */


undefined2 FUN_00e32cd0(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined *puVar7;
  undefined2 uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined1 auStack_68 [8];
  undefined4 local_60;
  
  puVar7 = PTR_DAT_02710848;
  puVar12 = *(ulong **)(*(long *)PTR_DAT_02710848 + 0x98);
  uVar13 = *puVar12;
  uVar14 = puVar12[1];
  do {
    uVar15 = uVar13 ^ uVar14;
    iVar11 = (int)uVar14;
    iVar10 = (int)uVar13;
    uVar14 = uVar15 >> 0x1b | uVar15 << 0x25;
    uVar13 = uVar15 ^ (uVar13 >> 0x28 | uVar13 << 0x18) ^ uVar15 << 0x10;
    uVar1 = iVar10 + iVar11 & 0x3ff;
  } while (999 < uVar1);
  *puVar12 = uVar13;
  puVar12[1] = uVar14;
  puVar12 = *(ulong **)(*(long *)puVar7 + 0x98);
  uVar13 = *puVar12;
  uVar14 = puVar12[1];
  do {
    uVar15 = uVar13 ^ uVar14;
    iVar11 = (int)uVar14;
    iVar10 = (int)uVar13;
    uVar14 = uVar15 >> 0x1b | uVar15 << 0x25;
    uVar13 = uVar15 ^ (uVar13 >> 0x28 | uVar13 << 0x18) ^ uVar15 << 0x10;
    uVar2 = iVar10 + iVar11 & 0x7f;
  } while (99 < uVar2);
  *puVar12 = uVar13;
  puVar12[1] = uVar14;
  puVar12 = *(ulong **)(*(long *)puVar7 + 0x98);
  uVar13 = *puVar12;
  uVar14 = puVar12[1];
  do {
    uVar15 = uVar13 ^ uVar14;
    iVar11 = (int)uVar14;
    iVar10 = (int)uVar13;
    uVar14 = uVar15 >> 0x1b | uVar15 << 0x25;
    uVar13 = uVar15 ^ (uVar13 >> 0x28 | uVar13 << 0x18) ^ uVar15 << 0x10;
    uVar3 = iVar10 + iVar11 & 0x3f;
  } while (0x31 < uVar3);
  *puVar12 = uVar13;
  puVar12[1] = uVar14;
  puVar12 = *(ulong **)(*(long *)puVar7 + 0x98);
  uVar13 = *puVar12;
  uVar14 = puVar12[1];
  do {
    uVar15 = uVar13 ^ uVar14;
    iVar11 = (int)uVar14;
    iVar10 = (int)uVar13;
    uVar14 = uVar15 >> 0x1b | uVar15 << 0x25;
    uVar13 = uVar15 ^ (uVar13 >> 0x28 | uVar13 << 0x18) ^ uVar15 << 0x10;
    uVar4 = iVar10 + iVar11 & 0x3f;
  } while (0x31 < uVar4);
  *puVar12 = uVar13;
  puVar12[1] = uVar14;
  puVar12 = *(ulong **)(*(long *)puVar7 + 0x98);
  uVar13 = *puVar12;
  uVar14 = puVar12[1];
  do {
    uVar15 = uVar13 ^ uVar14;
    iVar11 = (int)uVar14;
    iVar10 = (int)uVar13;
    uVar14 = uVar15 >> 0x1b | uVar15 << 0x25;
    uVar13 = uVar15 ^ (uVar13 >> 0x28 | uVar13 << 0x18) ^ uVar15 << 0x10;
    uVar5 = iVar10 + iVar11 & 0x3f;
  } while (0x31 < uVar5);
  *puVar12 = uVar13;
  puVar12[1] = uVar14;
  puVar12 = *(ulong **)(*(long *)puVar7 + 0x98);
  uVar13 = *puVar12;
  uVar14 = puVar12[1];
  do {
    uVar15 = uVar13 ^ uVar14;
    iVar11 = (int)uVar14;
    iVar10 = (int)uVar13;
    uVar14 = uVar15 >> 0x1b | uVar15 << 0x25;
    uVar13 = uVar15 ^ (uVar13 >> 0x28 | uVar13 << 0x18) ^ uVar15 << 0x10;
    uVar6 = iVar10 + iVar11 & 0x1f;
  } while (0x18 < uVar6);
  *puVar12 = uVar13;
  puVar12[1] = uVar14;
  if (uVar1 == 0) {
    return 0x45;
  }
  if (uVar2 == 0) {
    puVar12 = *(ulong **)(*(long *)puVar7 + 0x98);
    uVar13 = *puVar12;
    uVar14 = puVar12[1];
    do {
      uVar15 = uVar13 ^ uVar14;
      iVar11 = (int)uVar14;
      iVar10 = (int)uVar13;
      uVar14 = uVar15 >> 0x1b | uVar15 << 0x25;
      uVar13 = uVar15 ^ (uVar13 >> 0x28 | uVar13 << 0x18) ^ uVar15 << 0x10;
      uVar1 = iVar10 + iVar11 & 0x1f;
    } while (0x1b < uVar1);
    *puVar12 = uVar13;
    puVar12[1] = uVar14;
    return *(undefined2 *)(&DAT_02160b24 + (ulong)uVar1 * 2);
  }
  if (uVar3 == 0) {
    return 0x44;
  }
  if (uVar4 == 0) {
    uVar9 = FUN_00ecec10();
    switch(uVar9) {
    case 1:
      return 0x39;
    case 2:
      return 0x3a;
    case 3:
      return 0x3b;
    case 4:
      return 0x3c;
    case 5:
      return 0x3d;
    case 6:
      return 0x3e;
    case 7:
      return 0x3f;
    case 8:
      return 0x40;
    }
  }
  if (uVar5 == 0) {
    FUN_0102ac40(auStack_68);
    uVar8 = 0x36;
    switch(local_60) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
      break;
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 0xb:
      uVar8 = 0x38;
      break;
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x12:
      uVar8 = 0x35;
      break;
    case 0x13:
      uVar8 = 0x37;
      break;
    default:
      goto switchD_00e32eec_default;
    }
  }
  else {
switchD_00e32eec_default:
    if ((uVar6 == 0) && (*(int *)(param_1 + 0x278) == 1)) {
      uVar8 = 0x42;
    }
    else {
      uVar8 = 0xff;
    }
  }
  return uVar8;
}


