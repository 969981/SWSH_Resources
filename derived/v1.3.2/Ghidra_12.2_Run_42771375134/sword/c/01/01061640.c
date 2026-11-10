/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01061640; name: FUN_01061640
 */


void FUN_01061640(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  if ((**(long **)(param_1 + 0x78) != 0) && (*(int *)(**(long **)(param_1 + 0x78) + 0x54) != 0)) {
    FUN_010504b0(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x10),param_2);
  }
  lVar3 = 0;
  param_1 = param_1 + 0x98;
  do {
    if ((**(long **)(param_1 + lVar3) != 0) && (*(int *)(**(long **)(param_1 + lVar3) + 0x54) != 0))
    {
      lVar1 = *(long *)(*(long *)(param_1 + lVar3) + 0x18);
      if (lVar1 == 0) {
        if ((*(long *)(*(long *)(param_1 + lVar3) + 0x10) != 0) &&
           (uVar2 = FUN_0069d0c0(), (uVar2 & 1) != 0)) {
          FUN_010504b0(*(undefined8 *)(*(long *)(param_1 + lVar3) + 0x10),param_2);
        }
      }
      else {
        FUN_01061640(lVar1,param_2);
      }
    }
    lVar3 = lVar3 + 0x20;
  } while (lVar3 != 0x200);
  return;
}


