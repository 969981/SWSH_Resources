/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001916b0; name: FUN_001916b0
 */


void FUN_001916b0(long param_1)

{
  long lVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (*(int *)(param_1 + 0x2238) != 0) {
    lVar1 = 0;
    do {
      for (puVar2 = *(undefined4 **)(param_1 + lVar1 * 8); puVar2 != (undefined4 *)0x0;
          puVar2 = *(undefined4 **)(puVar2 + 10)) {
        puVar3 = *(undefined4 **)(puVar2 + 8);
        *puVar2 = *puVar3;
        puVar2[1] = puVar3[1];
        puVar2[2] = puVar3[2];
        puVar2[3] = puVar3[3];
        puVar2[4] = puVar3[4];
        puVar2[5] = puVar3[5];
        puVar2[6] = puVar3[6];
      }
      lVar1 = lVar1 + 1;
    } while (lVar1 != 0x400);
  }
  return;
}


