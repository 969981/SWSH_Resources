/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004a54c0; name: FUN_004a54c0
 */


void FUN_004a54c0(long param_1,uint param_2,undefined8 param_3)

{
  long lVar1;
  
  if (*(int *)(*(long *)(param_1 + 8) + 0x18) != 0) {
    lVar1 = *(long *)(*(long *)(param_1 + 8) + 0x10);
    do {
      (**(code **)(**(long **)(lVar1 + 0x38) + 0x20))(*(long **)(lVar1 + 0x38),param_2 & 1,param_3);
      lVar1 = lVar1 + 0x40;
    } while (lVar1 != *(long *)(*(long *)(param_1 + 8) + 0x10) +
                      (ulong)*(uint *)(*(long *)(param_1 + 8) + 0x18) * 0x40);
  }
  return;
}


