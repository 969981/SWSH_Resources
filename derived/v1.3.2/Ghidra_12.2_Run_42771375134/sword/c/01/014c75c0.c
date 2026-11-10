/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014c75c0; name: FUN_014c75c0
 */


void FUN_014c75c0(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  if (*(int *)(param_1 + 0x198) != 0) {
    lVar2 = 0;
    uVar3 = 0;
    do {
      *(undefined8 *)(*(long *)(param_1 + 0x1a0) + lVar2 + 8) = 0;
      FUN_0077d660(*(undefined8 *)(*(long *)(param_1 + 0x1a0) + lVar2));
      lVar1 = *(long *)(param_1 + 0x1a0) + lVar2;
      lVar2 = lVar2 + 0x18;
      *(ushort *)(lVar1 + 0x12) = *(ushort *)(lVar1 + 0x12) & 0xfffe;
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0x198));
  }
  return;
}


