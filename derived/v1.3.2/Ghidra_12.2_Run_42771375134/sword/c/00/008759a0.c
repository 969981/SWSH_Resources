/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008759a0; name: FUN_008759a0
 */


void FUN_008759a0(long param_1,undefined1 param_2)

{
  char cVar1;
  short sVar2;
  short sVar3;
  undefined2 uVar4;
  uint *puVar5;
  
  if (*(char *)(param_1 + 0x18) != '\0') {
    FUN_00867850(*(undefined4 **)(param_1 + 0x10) + 2,0x140,**(undefined4 **)(param_1 + 0x10));
    if (*(long *)(param_1 + 8) != 0) {
      FUN_00867850(*(long *)(param_1 + 8),0x10,**(undefined4 **)(param_1 + 0x10));
    }
    *(undefined1 *)(param_1 + 0x18) = 0;
    sVar2 = *(short *)(*(long *)(param_1 + 0x10) + 6);
    sVar3 = FUN_00867720(*(long *)(param_1 + 0x10) + 8,0x140);
    if (sVar2 != sVar3) {
      *(ushort *)(*(long *)(param_1 + 0x10) + 4) = *(ushort *)(*(long *)(param_1 + 0x10) + 4) | 4;
    }
  }
  puVar5 = *(uint **)(param_1 + 0x10);
  if (((byte)puVar5[1] >> 2 & 1) == 0) {
    *(undefined1 *)
     ((long)puVar5 +
     (ulong)(byte)(&DAT_0214394a)[((ulong)(*puVar5 >> 0xd) & 0x1f) * 4] * 0x50 + 0x3f) = param_2;
    cVar1 = *(char *)(param_1 + 0x18);
  }
  else {
    PTR_DAT_027173b8[0x37] = param_2;
    cVar1 = *(char *)(param_1 + 0x18);
  }
  if ((cVar1 != '\0') || (*(char *)(param_1 + 0x19) != '\0')) {
    return;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar4 = FUN_00867720(*(long *)(param_1 + 0x10) + 8,0x140);
    *(undefined2 *)(*(long *)(param_1 + 0x10) + 6) = uVar4;
    FUN_008677c0(*(undefined4 **)(param_1 + 0x10) + 2,0x140,**(undefined4 **)(param_1 + 0x10));
  }
  if ((*(long *)(param_1 + 8) != 0) && (*(undefined4 **)(param_1 + 0x10) != (undefined4 *)0x0)) {
    FUN_008677c0(*(long *)(param_1 + 8),0x10,**(undefined4 **)(param_1 + 0x10));
  }
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}


