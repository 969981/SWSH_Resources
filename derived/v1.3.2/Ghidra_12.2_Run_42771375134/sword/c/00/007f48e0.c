/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007f48e0; name: FUN_007f48e0
 */


void FUN_007f48e0(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  if (0 < *(int *)(param_2 + 0x78)) {
    lVar3 = 0;
    lVar4 = 0;
    do {
      FUN_007f4a20(param_1,*(long *)(param_2 + 0x88) + lVar3,
                   *(undefined8 *)(*(long *)(param_3 + 0xb8) + lVar4 * 8 + 8));
      lVar4 = lVar4 + 1;
      lVar3 = lVar3 + 0x90;
    } while (lVar4 < *(int *)(param_2 + 0x78));
  }
  if (0 < *(int *)(param_2 + 0x48)) {
    lVar3 = 0;
    lVar4 = 0;
    do {
      FUN_007f4cc0(param_1,*(long *)(param_2 + 0x50) + lVar3,
                   *(undefined8 *)(*(long *)(param_3 + 0x70) + lVar4 * 8 + 8));
      lVar4 = lVar4 + 1;
      lVar3 = lVar3 + 0xa8;
    } while (lVar4 < *(int *)(param_2 + 0x48));
  }
  iVar2 = *(int *)(param_2 + 0x58);
  if (0 < iVar2) {
    lVar3 = 0;
    lVar4 = 0;
    do {
      lVar1 = *(long *)(param_2 + 0x60) + lVar3;
      if ((0 < *(int *)(lVar1 + 0x2c)) && (*(int *)(*(long *)(lVar1 + 0x30) + 0x10) != 0)) {
        FUN_007eac10(param_1,*(undefined8 *)(lVar1 + 8),
                     *(undefined8 *)(*(long *)(param_3 + 0x88) + lVar4 * 8 + 8),9,
                     "The first enum value must be zero in proto3.");
        iVar2 = *(int *)(param_2 + 0x58);
      }
      lVar4 = lVar4 + 1;
      lVar3 = lVar3 + 0x38;
    } while (lVar4 < iVar2);
  }
  return;
}


