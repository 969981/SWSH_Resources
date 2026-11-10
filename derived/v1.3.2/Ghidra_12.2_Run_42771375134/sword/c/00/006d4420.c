/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006d4420; name: FUN_006d4420
 */


void FUN_006d4420(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  int iVar2;
  
  if ((*(byte *)(param_2 + 0x130) >> 1 & 1) != 0) {
    FUN_006d5e20(*(undefined8 *)(param_1 + 0x10));
    return;
  }
  uVar1 = FUN_006d5e20(*(undefined8 *)(param_1 + (long)*(int *)(param_3 + 0xc) * 8 + 0x10));
  if (((uVar1 & 1) != 0) && (iVar2 = *(int *)(param_1 + 0x158), iVar2 != 0)) {
    uVar1 = 0;
    do {
      if (uVar1 != *(uint *)(param_3 + 0xc)) {
        FUN_006d5da0(*(undefined8 *)(param_1 + 0x10 + uVar1 * 8));
        iVar2 = *(int *)(param_1 + 0x158);
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < (ulong)(long)iVar2);
  }
  return;
}


