/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0093b0b0; name: FUN_0093b0b0
 */


void FUN_0093b0b0(long param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  
  if (param_2 != 0) {
    bVar1 = *(byte *)(param_1 + 0x4c);
    if ((ulong)bVar1 < 5) {
      if (bVar1 != 0) {
        lVar2 = 0;
        do {
          if (*(long *)(param_1 + lVar2 * 8) == param_2) {
            return;
          }
          lVar2 = lVar2 + 1;
        } while ((uint)lVar2 < (uint)bVar1);
      }
      *(long *)(param_1 + (ulong)bVar1 * 8) = param_2;
      *(undefined1 *)(param_1 + (ulong)*(byte *)(param_1 + 0x4c) + 0x3c) = 0;
      *(undefined2 *)(param_1 + (ulong)*(byte *)(param_1 + 0x4c) * 2 + 0x28) = 0;
      *(undefined2 *)(param_1 + (ulong)*(byte *)(param_1 + 0x4c) * 2 + 0x32) = 0;
      bVar1 = *(char *)(param_1 + 0x4c) + 1;
      *(byte *)(param_1 + 0x4c) = bVar1;
      if (*(byte *)(param_1 + 0x4d) < bVar1) {
        *(byte *)(param_1 + 0x4d) = bVar1;
      }
    }
  }
  return;
}


