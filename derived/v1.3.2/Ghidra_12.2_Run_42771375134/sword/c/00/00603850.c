/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00603850; name: FUN_00603850
 */


void FUN_00603850(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  if (((param_1 != 0) && (param_2 != (long *)0x0)) && (0 < (long)*(short *)(param_1 + 2))) {
    plVar2 = *(long **)(param_1 + 8);
    plVar1 = plVar2 + (long)*(short *)(param_1 + 2) * 2;
    do {
      if (plVar2 != (long *)0x0) {
        lVar6 = param_2[1] * plVar2[1];
        lVar4 = param_2[3] * plVar2[1];
        lVar5 = *param_2 * *plVar2;
        lVar3 = param_2[2] * *plVar2;
        *plVar2 = (lVar6 + (lVar6 >> 0x3f) + 0x8000 >> 0x10) +
                  (lVar5 + (lVar5 >> 0x3f) + 0x8000 >> 0x10);
        plVar2[1] = (lVar4 + (lVar4 >> 0x3f) + 0x8000 >> 0x10) +
                    (lVar3 + (lVar3 >> 0x3f) + 0x8000 >> 0x10);
      }
      plVar2 = plVar2 + 2;
    } while (plVar2 < plVar1);
  }
  return;
}


