/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005ea110; name: FUN_005ea110
 */


void FUN_005ea110(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (0 < *(int *)(param_1 + 0x78)) {
    lVar2 = 0;
    lVar3 = 0x28;
    do {
      lVar4 = *(long *)(param_1 + 0x90);
      if (((*(long **)(lVar4 + lVar3) != (long *)0x0) &&
          (lVar1 = (**(code **)(**(long **)(lVar4 + lVar3) + 0x28))(), lVar1 == param_2)) &&
         (*(long **)(lVar4 + lVar3) != (long *)0x0)) {
        (**(code **)(**(long **)(lVar4 + lVar3) + 0x18))();
        *(undefined8 *)(lVar4 + lVar3) = 0;
      }
      lVar2 = lVar2 + 1;
      lVar3 = lVar3 + 0x30;
    } while (lVar2 < *(int *)(param_1 + 0x78));
  }
  return;
}


