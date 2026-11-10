/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004edde0; name: FUN_004edde0
 */


undefined8 FUN_004edde0(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  uVar1 = *(uint *)(param_1 + 0x20);
  if (uVar1 == 0) {
    return 0xf;
  }
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = (uint)param_2 / uVar1;
  }
  uVar1 = (uint)param_2 - uVar2 * uVar1;
  lVar4 = *(long *)(*(long *)(param_1 + 0x18) + (ulong)uVar1 * 8);
  if (lVar4 == 0) {
    return 0xf;
  }
  lVar6 = 0;
  do {
    lVar5 = lVar4;
    if (*(long *)(lVar5 + 0x38) == param_2) {
      if (lVar6 == 0) {
        puVar3 = (undefined8 *)(*(long *)(param_1 + 0x18) + (ulong)uVar1 * 8);
      }
      else {
        puVar3 = (undefined8 *)(lVar6 + 0x40);
      }
      *puVar3 = *(undefined8 *)(lVar5 + 0x40);
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
      FUN_004ed690(param_1 + 0x78);
      return 1;
    }
    lVar4 = *(long *)(lVar5 + 0x40);
    lVar6 = lVar5;
  } while (*(long *)(lVar5 + 0x40) != 0);
  return 0xf;
}


