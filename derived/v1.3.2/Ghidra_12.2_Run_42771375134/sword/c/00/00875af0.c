/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00875af0; name: FUN_00875af0
 */


bool FUN_00875af0(long param_1,uint param_2)

{
  char cVar1;
  short sVar2;
  bool bVar3;
  short sVar4;
  undefined2 uVar5;
  uint *puVar6;
  
  if (*(char *)(param_1 + 0x18) != '\0') {
    FUN_00867850(*(undefined4 **)(param_1 + 0x10) + 2,0x140,**(undefined4 **)(param_1 + 0x10));
    if (*(long *)(param_1 + 8) != 0) {
      FUN_00867850(*(long *)(param_1 + 8),0x10,**(undefined4 **)(param_1 + 0x10));
    }
    *(undefined1 *)(param_1 + 0x18) = 0;
    sVar2 = *(short *)(*(long *)(param_1 + 0x10) + 6);
    sVar4 = FUN_00867720(*(long *)(param_1 + 0x10) + 8,0x140);
    if (sVar2 != sVar4) {
      *(ushort *)(*(long *)(param_1 + 0x10) + 4) = *(ushort *)(*(long *)(param_1 + 0x10) + 4) | 4;
    }
  }
  if (param_2 < 0x20) {
    puVar6 = *(uint **)(param_1 + 0x10);
    if (((byte)puVar6[1] >> 2 & 1) == 0) {
      puVar6 = puVar6 + (ulong)(byte)(&DAT_02143948)[((ulong)(*puVar6 >> 0xd) & 0x1f) * 4] * 0x14 +
                        0xd;
    }
    else {
      puVar6 = (uint *)(PTR_DAT_02717390 + 0x2c);
    }
  }
  else if (param_2 < 0x40) {
    puVar6 = *(uint **)(param_1 + 0x10);
    param_2 = param_2 - 0x20;
    if (((byte)puVar6[1] >> 2 & 1) == 0) {
      puVar6 = puVar6 + (ulong)(byte)(&DAT_02143948)[((ulong)(*puVar6 >> 0xd) & 0x1f) * 4] * 0x14 +
                        0xe;
    }
    else {
      puVar6 = (uint *)(PTR_DAT_02717390 + 0x30);
    }
  }
  else if (param_2 < 0x60) {
    puVar6 = *(uint **)(param_1 + 0x10);
    param_2 = param_2 - 0x40;
    if (((byte)puVar6[1] >> 2 & 1) == 0) {
      puVar6 = puVar6 + (ulong)(byte)(&DAT_02143948)[((ulong)(*puVar6 >> 0xd) & 0x1f) * 4] * 0x14 +
                        0x10;
    }
    else {
      puVar6 = (uint *)(PTR_DAT_02717390 + 0x38);
    }
  }
  else {
    if (0x7f < param_2) {
      bVar3 = false;
      cVar1 = *(char *)(param_1 + 0x18);
      goto joined_r0x00875ca8;
    }
    puVar6 = *(uint **)(param_1 + 0x10);
    param_2 = param_2 - 0x60;
    if (((byte)puVar6[1] >> 2 & 1) == 0) {
      puVar6 = puVar6 + (ulong)(byte)(&DAT_02143948)[((ulong)(*puVar6 >> 0xd) & 0x1f) * 4] * 0x14 +
                        2;
    }
    else {
      puVar6 = (uint *)PTR_DAT_02717390;
    }
    puVar6 = puVar6 + 0xf;
  }
  bVar3 = (1L << ((ulong)param_2 & 0x3f) & (ulong)*puVar6) != 0;
  cVar1 = *(char *)(param_1 + 0x18);
joined_r0x00875ca8:
  if ((cVar1 == '\0') && (*(char *)(param_1 + 0x19) == '\0')) {
    if (*(long *)(param_1 + 0x10) != 0) {
      uVar5 = FUN_00867720(*(long *)(param_1 + 0x10) + 8,0x140);
      *(undefined2 *)(*(long *)(param_1 + 0x10) + 6) = uVar5;
      FUN_008677c0(*(undefined4 **)(param_1 + 0x10) + 2,0x140,**(undefined4 **)(param_1 + 0x10));
    }
    if ((*(long *)(param_1 + 8) != 0) && (*(undefined4 **)(param_1 + 0x10) != (undefined4 *)0x0)) {
      FUN_008677c0(*(long *)(param_1 + 8),0x10,**(undefined4 **)(param_1 + 0x10));
    }
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  return bVar3;
}


