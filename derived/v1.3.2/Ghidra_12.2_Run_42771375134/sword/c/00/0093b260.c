/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0093b260; name: FUN_0093b260
 */


void FUN_0093b260(long param_1,long param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  long lVar3;
  
  bVar2 = *(byte *)(param_1 + 0x4c);
  if (bVar2 != 0) {
    lVar3 = 0;
    do {
      if (*(long *)(param_1 + lVar3 * 8) == param_2) {
        for (; (int)lVar3 + 1U < (uint)bVar2; lVar3 = lVar3 + 1) {
          puVar1 = (undefined8 *)(param_1 + lVar3 * 8);
          *puVar1 = puVar1[1];
          bVar2 = *(byte *)(param_1 + 0x4c);
        }
        *(byte *)(param_1 + 0x4c) = bVar2 - 1;
        *(char *)(param_1 + 0x4e) = *(char *)(param_1 + 0x4e) + -1;
        return;
      }
      lVar3 = lVar3 + 1;
    } while ((uint)lVar3 < (uint)bVar2);
  }
  return;
}


