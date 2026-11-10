/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01210e50; name: FUN_01210e50
 */


void FUN_01210e50(long param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  long lVar4;
  
  if (*(long *)(param_1 + 0xa8) != 0) {
    lVar4 = *(long *)(param_1 + 0xa8) * 0x260;
    puVar3 = *(undefined4 **)(param_1 + 0xa0);
    do {
      piVar1 = (int *)FUN_01225f00(puVar3);
      if (*piVar1 == 1) {
        *puVar3 = 4;
        puVar3[0x94] = 2;
        uVar2 = FUN_01225e50(puVar3);
        FUN_01219240(param_1 + 0xc0,uVar2);
      }
      puVar3 = puVar3 + 0x98;
      lVar4 = lVar4 + -0x260;
    } while (lVar4 != 0);
  }
  return;
}


