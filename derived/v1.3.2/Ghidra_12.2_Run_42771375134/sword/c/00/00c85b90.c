/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c85b90; name: FUN_00c85b90
 */


undefined8 FUN_00c85b90(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  iVar1 = *(int *)(param_1 + 0x160);
  if (iVar1 == 2) {
    uVar2 = FUN_014a3540(*(undefined8 *)(param_1 + 0x110));
    if ((uVar2 & 1) == 0) {
      return 0;
    }
    FUN_014a3750(*(undefined8 *)(param_1 + 0x110),*(undefined8 *)(param_1 + 0x68),param_1 + 0xa8);
    return 1;
  }
  if (iVar1 == 1) {
    uVar2 = FUN_014a2e00(*(undefined8 *)(param_1 + 0x110));
    if ((uVar2 & 1) == 0) {
      return 0;
    }
    FUN_014a2e20(*(undefined8 *)(param_1 + 0x110),*(undefined8 *)(param_1 + 0x68),param_1 + 0xa8);
  }
  else {
    if (iVar1 != 0) {
      return 1;
    }
    lVar3 = *(long *)(*(long *)(param_1 + 0x110) + 0x288);
    if ((lVar3 != 0) && (*(char *)(lVar3 + 0x170) == '\0')) {
      return 0;
    }
    FUN_014a2c80(*(long *)(param_1 + 0x110),*(undefined8 *)(param_1 + 0x68),param_1 + 0xa8);
  }
  *(int *)(param_1 + 0x160) = *(int *)(param_1 + 0x160) + 1;
  return 0;
}


