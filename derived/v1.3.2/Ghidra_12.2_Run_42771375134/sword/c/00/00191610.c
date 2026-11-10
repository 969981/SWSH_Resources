/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00191610; name: FUN_00191610
 */


long FUN_00191610(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  uVar3 = (param_2 << 0x20 ^ 0xffffffffffffffffU) + param_2;
  uVar3 = uVar3 ^ uVar3 >> 0x16;
  uVar3 = uVar3 + (uVar3 << 0xd ^ 0xffffffffffffffff);
  uVar3 = (uVar3 ^ uVar3 >> 8) * 9;
  uVar3 = uVar3 ^ uVar3 >> 0xf;
  uVar3 = uVar3 + (uVar3 << 0x1b ^ 0xffffffffffffffff);
  lVar2 = *(long *)(param_1 + ((ulong)((uint)(uVar3 >> 0x1f) ^ (uint)uVar3) & 0x3ff) * 8);
  if (lVar2 == 0) {
    return 0;
  }
  lVar4 = *(long *)(lVar2 + 0x28);
  if (*(long *)(lVar2 + 0x28) == 0) {
    if (*(long *)(lVar2 + 0x20) != param_2) {
      lVar2 = 0;
    }
    return lVar2;
  }
  do {
    if (*(long *)(lVar2 + 0x20) == param_2) break;
    plVar1 = (long *)(lVar4 + 0x28);
    lVar2 = lVar4;
    lVar4 = *plVar1;
  } while (*plVar1 != 0);
  if (*(long *)(lVar2 + 0x20) != param_2) {
    lVar2 = 0;
  }
  return lVar2;
}


