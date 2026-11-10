/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011f75e0; name: FUN_011f75e0
 */


undefined8 FUN_011f75e0(long param_1)

{
  ulong *puVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  ulong *puVar6;
  
  uVar3 = *(ulong *)(param_1 + 0x60);
  if (uVar3 >> 6 != 0 || (uVar3 & 0x3f) != 0) {
    uVar5 = 0;
    puVar6 = *(ulong **)(param_1 + 0x58);
    do {
      if ((*puVar6 & 1L << (uVar5 & 0x3f)) == 0) {
        return 0;
      }
      iVar4 = (int)uVar5;
      uVar2 = 0;
      if (iVar4 != 0x3f) {
        uVar2 = iVar4 + 1;
      }
      uVar5 = (ulong)uVar2;
      puVar1 = puVar6 + 1;
      if (iVar4 != 0x3f) {
        puVar1 = puVar6;
      }
      puVar6 = puVar1;
    } while ((uVar2 != ((uint)uVar3 & 0x3f)) ||
            (*(ulong **)(param_1 + 0x58) + (uVar3 >> 6) != puVar1));
  }
  return 1;
}


