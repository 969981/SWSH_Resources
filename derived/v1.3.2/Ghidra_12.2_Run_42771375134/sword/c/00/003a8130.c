/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003a8130; name: FUN_003a8130
 */


void FUN_003a8130(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  
  FUN_00397c30(*(undefined8 *)(param_1 + 0x1ee0));
  if (*(int *)(param_1 + 0x1f18) != 0) {
    lVar1 = 0;
    uVar2 = 0;
    do {
      FUN_00397c30(*(undefined8 *)(*(long *)(param_1 + 0x1f10) + lVar1),param_2);
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 0x10;
    } while (uVar2 < *(uint *)(param_1 + 0x1f18));
  }
  FUN_003a5130(param_1 + 0x10,param_2);
  return;
}


