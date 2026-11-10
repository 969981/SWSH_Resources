/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00871530; name: FUN_00871530
 */


void FUN_00871530(long param_1,uint param_2)

{
  short sVar1;
  short sVar2;
  undefined2 uVar3;
  uint *puVar4;
  
  if (*(char *)(param_1 + 0x18) != '\0') {
    FUN_00867850(*(undefined4 **)(param_1 + 0x10) + 2,0x140,**(undefined4 **)(param_1 + 0x10));
    if (*(long *)(param_1 + 8) != 0) {
      FUN_00867850(*(long *)(param_1 + 8),0x10,**(undefined4 **)(param_1 + 0x10));
    }
    *(undefined1 *)(param_1 + 0x18) = 0;
    sVar1 = *(short *)(*(long *)(param_1 + 0x10) + 6);
    sVar2 = FUN_00867720(*(long *)(param_1 + 0x10) + 8,0x140);
    if (sVar1 != sVar2) {
      *(ushort *)(*(long *)(param_1 + 0x10) + 4) = *(ushort *)(*(long *)(param_1 + 0x10) + 4) | 4;
    }
  }
  puVar4 = *(uint **)(param_1 + 0x10);
  if (((byte)puVar4[1] >> 2 & 1) == 0) {
    puVar4 = puVar4 + (ulong)(byte)(&DAT_02143949)[((ulong)(*puVar4 >> 0xd) & 0x1f) * 4] * 0x14 + 2;
  }
  else {
    puVar4 = (uint *)PTR_DAT_027173a8;
  }
  puVar4[0xd] = puVar4[0xd] & 0xfe000000 | puVar4[0xd] & 0xfffff | (param_2 & 0x1f) << 0x14;
  if ((*(char *)(param_1 + 0x18) != '\0') || (*(char *)(param_1 + 0x19) != '\0')) {
    return;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar3 = FUN_00867720(*(long *)(param_1 + 0x10) + 8,0x140);
    *(undefined2 *)(*(long *)(param_1 + 0x10) + 6) = uVar3;
    FUN_008677c0(*(undefined4 **)(param_1 + 0x10) + 2,0x140,**(undefined4 **)(param_1 + 0x10));
  }
  if ((*(long *)(param_1 + 8) != 0) && (*(undefined4 **)(param_1 + 0x10) != (undefined4 *)0x0)) {
    FUN_008677c0(*(long *)(param_1 + 8),0x10,**(undefined4 **)(param_1 + 0x10));
  }
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}


