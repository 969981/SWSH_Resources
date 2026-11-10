/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00685d50; name: FUN_00685d50
 */


void FUN_00685d50(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0xe8);
  if (lVar3 == 0) {
    return;
  }
  uVar2 = *(ulong *)(param_2 + 0x10);
  uVar1 = *(ulong *)(param_2 + 0x18);
  if (uVar1 <= uVar2) {
    lVar3 = uVar1 * 2;
    if (lVar3 == 0) {
      lVar3 = 1;
    }
    if (*(long *)(param_2 + 0x40) != 0) {
      lVar3 = *(long *)(param_2 + 0x40) + uVar1;
    }
    uVar2 = FUN_006870f0(param_2,lVar3,1);
    if ((uVar2 & 1) == 0) {
      *(undefined8 *)(param_2 + 0x10) = 0;
      *(undefined8 *)(param_2 + 0x30) = 0;
      *(undefined8 *)(param_2 + 0x38) = 0;
      goto LAB_00685dd8;
    }
    uVar2 = *(ulong *)(param_2 + 0x10);
    lVar3 = *(long *)(param_1 + 0xe8);
  }
  *(long *)(*(long *)(param_2 + 0x28) + uVar2 * 8) = lVar3;
  lVar3 = *(long *)(param_2 + 0x10) + 1;
  *(long *)(param_2 + 0x10) = lVar3;
  *(long *)(param_2 + 0x30) = *(long *)(param_2 + 0x28);
  *(long *)(param_2 + 0x38) = *(long *)(param_2 + 0x28) + lVar3 * 8;
LAB_00685dd8:
  FUN_00686800(param_1,param_2,*(undefined8 *)(param_1 + 0xe8));
  if (0 < *(int *)(param_2 + 0x10)) {
    lVar3 = 0;
    do {
      *(long *)(*(long *)(*(long *)(param_2 + 0x28) + lVar3 * 8) + 0xb8) = lVar3;
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(param_2 + 0x10));
  }
  return;
}


