/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00861db0; name: FUN_00861db0
 */


undefined8 FUN_00861db0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  
  if (0 < *(int *)(param_2 + 0x58)) {
    lVar2 = 0;
    do {
      uVar1 = FUN_00861db0(param_1,*(undefined8 *)(*(long *)(param_2 + 0x60) + lVar2 * 8 + 8),
                           param_3,param_4);
      if ((uVar1 & 1) == 0) {
        return 0;
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(param_2 + 0x58));
  }
  if (0 < *(int *)(param_2 + 0x40)) {
    lVar2 = 0;
    do {
      uVar1 = FUN_00861e80(param_1,*(undefined8 *)(*(long *)(param_2 + 0x48) + lVar2 * 8 + 8),
                           param_3,param_4);
      if ((uVar1 & 1) == 0) {
        return 0;
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(param_2 + 0x40));
  }
  return 1;
}


