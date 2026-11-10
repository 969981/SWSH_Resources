/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e31e70; name: FUN_00e31e70
 */


undefined8 FUN_00e31e70(undefined8 param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  short sVar3;
  undefined *puVar4;
  ulong *puVar5;
  int iVar6;
  ulong uVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  
  puVar4 = PTR_DAT_02710848;
  lVar11 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
  }
  lVar12 = *(long *)(lVar11 + 0x7b0);
  if (lVar12 != 0) {
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
  }
  uVar2 = *(uint *)(lVar12 + 0x98);
  if (uVar2 != 0) {
    puVar5 = *(ulong **)(*(long *)puVar4 + 0x98);
    sVar3 = *(short *)(lVar12 + 0x9c);
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
    if (uVar1 < 0x32) {
      if ((uVar2 == *(ushort *)(param_2 + 2)) && (sVar3 == *(short *)(param_2 + 4))) {
        uVar13 = 0;
        goto joined_r0x00e3201c;
      }
      if ((uVar2 == *(ushort *)(param_2 + 8)) && (sVar3 == *(short *)(param_2 + 10))) {
        uVar13 = 1;
        goto joined_r0x00e3201c;
      }
      if ((uVar2 == *(ushort *)(param_2 + 0xe)) && (sVar3 == *(short *)(param_2 + 0x10))) {
        uVar13 = 2;
        goto joined_r0x00e3201c;
      }
      if ((uVar2 == *(ushort *)(param_2 + 0x14)) && (sVar3 == *(short *)(param_2 + 0x16))) {
        uVar13 = 3;
        goto joined_r0x00e3201c;
      }
      if ((uVar2 == *(ushort *)(param_2 + 0x1a)) && (sVar3 == *(short *)(param_2 + 0x1c))) {
        uVar13 = 4;
        goto joined_r0x00e3201c;
      }
      if ((uVar2 == *(ushort *)(param_2 + 0x20)) && (sVar3 == *(short *)(param_2 + 0x22))) {
        uVar13 = 5;
        goto joined_r0x00e3201c;
      }
      if ((uVar2 == *(ushort *)(param_2 + 0x26)) && (sVar3 == *(short *)(param_2 + 0x28))) {
        uVar13 = 6;
        goto joined_r0x00e3201c;
      }
      if ((uVar2 == *(ushort *)(param_2 + 0x2c)) && (sVar3 == *(short *)(param_2 + 0x2e))) {
        uVar13 = 7;
        goto joined_r0x00e3201c;
      }
      if ((uVar2 == *(ushort *)(param_2 + 0x32)) && (sVar3 == *(short *)(param_2 + 0x34))) {
        uVar13 = 8;
        goto joined_r0x00e3201c;
      }
      if ((uVar2 == *(ushort *)(param_2 + 0x38)) && (sVar3 == *(short *)(param_2 + 0x3a))) {
        uVar13 = 9;
        goto joined_r0x00e3201c;
      }
    }
  }
  uVar13 = 0xffffffff;
joined_r0x00e3201c:
  if (lVar12 != 0) {
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
  }
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
  }
  return uVar13;
}


