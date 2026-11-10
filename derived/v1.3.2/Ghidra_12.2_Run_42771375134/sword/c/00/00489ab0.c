/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00489ab0; name: FUN_00489ab0
 */


void FUN_00489ab0(long param_1)

{
  long *plVar2;
  long *plVar1;
  long lVar3;
  float fVar4;
  float fVar5;
  
  if (*(int *)(param_1 + 0x38) != 0) {
    plVar1 = *(long **)(param_1 + 0x30);
    do {
      plVar2 = plVar1 + 1;
      lVar3 = *(long *)(*plVar1 + 0x140);
      fVar4 = *(float *)(param_1 + 0x60);
      fVar5 = *(float *)(param_1 + 100);
      *(float *)(lVar3 + 0x1c) = *(float *)(param_1 + 0x5c) + *(float *)(lVar3 + 0x1c);
      *(float *)(lVar3 + 0x20) = fVar4 + *(float *)(lVar3 + 0x20);
      *(float *)(lVar3 + 0x24) = fVar5 + *(float *)(lVar3 + 0x24);
      plVar1 = plVar2;
    } while (plVar2 != (long *)(*(long *)(param_1 + 0x30) + (ulong)*(uint *)(param_1 + 0x38) * 8));
  }
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 100);
  *(undefined8 *)(param_1 + 0x74) = *(undefined8 *)(param_1 + 0x5c);
  return;
}


