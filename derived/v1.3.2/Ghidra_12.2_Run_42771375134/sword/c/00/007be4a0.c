/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007be4a0; name: FUN_007be4a0
 */


bool FUN_007be4a0(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar1 = *(long **)(param_1 + 0x110);
  lVar2 = *(long *)(param_1 + 0x118);
  plVar3 = plVar1;
  if (lVar2 != 0) {
    lVar4 = lVar2 << 4;
    do {
      if ((*plVar3 == *param_2) && (plVar3[1] == param_2[1])) goto LAB_007be4e4;
      lVar4 = lVar4 + -0x10;
      plVar3 = plVar3 + 2;
    } while (lVar4 != 0);
    plVar3 = plVar1 + lVar2 * 2;
  }
LAB_007be4e4:
  return plVar1 + lVar2 * 2 != plVar3;
}


