/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01061490; name: FUN_01061490
 */


void FUN_01061490(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  if ((**(long **)(param_2 + 0x78) != 0) && (*(int *)(**(long **)(param_2 + 0x78) + 0x54) != 0)) {
    FUN_010503f0(param_1,*(undefined8 *)(*(long *)(param_2 + 0x78) + 0x10),param_3);
  }
  lVar3 = 0;
  param_2 = param_2 + 0x98;
  do {
    if ((**(long **)(param_2 + lVar3) != 0) && (*(int *)(**(long **)(param_2 + lVar3) + 0x54) != 0))
    {
      lVar1 = *(long *)(*(long *)(param_2 + lVar3) + 0x18);
      if (lVar1 == 0) {
        if ((*(long *)(*(long *)(param_2 + lVar3) + 0x10) != 0) &&
           (uVar2 = FUN_0069d0c0(), (uVar2 & 1) != 0)) {
          FUN_010503f0(param_1,*(undefined8 *)(*(long *)(param_2 + lVar3) + 0x10),param_3);
        }
      }
      else {
        FUN_01061490(param_1,lVar1,param_3);
      }
    }
    lVar3 = lVar3 + 0x20;
  } while (lVar3 != 0x200);
  return;
}


