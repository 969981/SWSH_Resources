/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0013b9b0; name: FUN_0013b9b0
 */


void FUN_0013b9b0(long param_1)

{
  undefined8 uVar1;
  uint *puVar2;
  ulong uVar3;
  long *plVar4;
  
  puVar2 = *(uint **)(param_1 + 0x88);
  uVar1 = *(undefined8 *)(param_1 + 200);
  uVar3 = (ulong)*puVar2;
  *(undefined8 *)(puVar2 + 0x18) = *(undefined8 *)(param_1 + 0xc0);
  *(undefined8 *)(puVar2 + 0x1a) = *(undefined8 *)(puVar2 + 8);
  *(undefined8 *)(puVar2 + 0x1c) = uVar1;
  if (*puVar2 != 0) {
    plVar4 = (long *)(*(long *)(puVar2 + 4) + 0x20);
    do {
      if (*plVar4 != 0) {
        FUN_001380f0(*plVar4,puVar2 + 0xc);
      }
      uVar3 = uVar3 - 1;
      plVar4 = plVar4 + 7;
    } while (uVar3 != 0);
  }
  return;
}


