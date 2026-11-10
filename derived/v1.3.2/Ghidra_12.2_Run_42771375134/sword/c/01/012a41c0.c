/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012a41c0; name: FUN_012a41c0
 */


void FUN_012a41c0(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  
  puVar1 = PTR_DAT_02727290;
  FUN_012a84b0(*(undefined8 *)PTR_DAT_02727290);
  uVar2 = FUN_012a88c0(*(undefined8 *)puVar1);
  if ((uVar2 & 1) == 0) {
    return;
  }
  FUN_012a4270(param_1);
  if (0 < *(int *)(param_1 + 0x1a4)) {
    *(int *)(param_1 + 0x1a4) = *(int *)(param_1 + 0x1a4) + -1;
    FUN_012a4c80(param_1);
    return;
  }
  if (*(long *)(param_1 + 0x1a8) != *(long *)(param_1 + 0x1b0)) {
    FUN_012a9580(*(undefined8 *)puVar1,param_1 + 0x1a8);
    *(undefined4 *)(param_1 + 0x1a4) = 0x1e;
    *(undefined8 *)(param_1 + 0x1b0) = *(undefined8 *)(param_1 + 0x1a8);
  }
  FUN_012a4c80(param_1);
  return;
}


