/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e32500; name: FUN_00e32500
 */


undefined4 FUN_00e32500(undefined8 param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  uint *puVar3;
  undefined4 uVar4;
  ulong *puVar5;
  int iVar6;
  ulong uVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  
  puVar2 = PTR_DAT_02710848;
  puVar5 = *(ulong **)(*(long *)PTR_DAT_02710848 + 0x98);
  uVar7 = *puVar5;
  uVar9 = puVar5[1];
  do {
    uVar10 = uVar7 ^ uVar9;
    iVar8 = (int)uVar9;
    iVar6 = (int)uVar7;
    uVar9 = uVar10 >> 0x1b | uVar10 << 0x25;
    uVar7 = uVar10 ^ (uVar7 >> 0x28 | uVar7 << 0x18) ^ uVar10 << 0x10;
    uVar1 = iVar6 + iVar8 & 0x7f;
  } while (99 < uVar1);
  *puVar5 = uVar7;
  puVar5[1] = uVar9;
  if (0x31 < uVar1) {
    return 0xffffffff;
  }
  lVar12 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1f8);
  if (lVar12 != 0) {
    plVar11 = (long *)(lVar12 + 0x48);
    (**(code **)(*plVar11 + 0x10))(plVar11);
    (**(code **)(*plVar11 + 0x18))(plVar11);
  }
  uVar7 = FUN_01536280(lVar12);
  if ((uVar7 & 1) == 0) {
    return 0xffffffff;
  }
  puVar5 = *(ulong **)(*(long *)puVar2 + 0x98);
  uVar7 = *puVar5;
  uVar9 = puVar5[1];
  uVar10 = uVar9 ^ uVar7;
  *puVar5 = uVar10 ^ (uVar7 >> 0x28 | uVar7 << 0x18) ^ uVar10 << 0x10;
  puVar5[1] = uVar10 >> 0x1b | uVar10 << 0x25;
  puVar3 = (uint *)FUN_015362a0(lVar12,(int)uVar9 + (int)uVar7 & 3);
  uVar1 = *puVar3;
  if (uVar1 == 0) {
    return 0xffffffff;
  }
  uVar7 = FUN_015359e0(lVar12);
  if ((uVar7 & 1) == 0) {
    uVar7 = FUN_01534f60(lVar12,uVar1);
    if ((uVar7 & 1) != 0) {
      return 0xffffffff;
    }
    if (uVar1 == *(ushort *)(param_2 + 2)) {
      return 0;
    }
    if (uVar1 == *(ushort *)(param_2 + 8)) {
      return 1;
    }
    if (uVar1 == *(ushort *)(param_2 + 0xe)) {
      return 2;
    }
    if (uVar1 == *(ushort *)(param_2 + 0x14)) {
      return 3;
    }
    if (uVar1 == *(ushort *)(param_2 + 0x1a)) {
      return 4;
    }
    if (uVar1 == *(ushort *)(param_2 + 0x20)) {
      return 5;
    }
    if (uVar1 == *(ushort *)(param_2 + 0x26)) {
      return 6;
    }
    if (uVar1 == *(ushort *)(param_2 + 0x2c)) {
      return 7;
    }
    if (uVar1 == *(ushort *)(param_2 + 0x32)) {
      return 8;
    }
  }
  else {
    if (uVar1 == *(ushort *)(param_2 + 2)) {
      return 0;
    }
    if (uVar1 == *(ushort *)(param_2 + 8)) {
      return 1;
    }
    if (uVar1 == *(ushort *)(param_2 + 0xe)) {
      return 2;
    }
    if (uVar1 == *(ushort *)(param_2 + 0x14)) {
      return 3;
    }
    if (uVar1 == *(ushort *)(param_2 + 0x1a)) {
      return 4;
    }
    if (uVar1 == *(ushort *)(param_2 + 0x20)) {
      return 5;
    }
    if (uVar1 == *(ushort *)(param_2 + 0x26)) {
      return 6;
    }
    if (uVar1 == *(ushort *)(param_2 + 0x2c)) {
      return 7;
    }
    if (uVar1 == *(ushort *)(param_2 + 0x32)) {
      return 8;
    }
  }
  uVar4 = 9;
  if (uVar1 != *(ushort *)(param_2 + 0x38)) {
    uVar4 = 0xffffffff;
  }
  return uVar4;
}


