/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01060f90; name: FUN_01060f90
 */


void FUN_01060f90(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = *(long **)(param_1 + 0x78);
  if (*plVar3 != 0) {
    if (*(int *)(*plVar3 + 0x54) != 0) {
      return;
    }
    plVar3 = *(long **)(param_1 + 0x78);
  }
  lVar4 = *param_2;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  lVar2 = *plVar3;
  *plVar3 = lVar4;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
  plVar3[1] = param_2[1];
  lVar1 = param_2[4];
  lVar4 = param_2[2];
  lVar2 = param_2[3];
  *(undefined1 *)((long)plVar3 + 0x22) = *(undefined1 *)((long)param_2 + 0x22);
  *(short *)(plVar3 + 4) = (short)lVar1;
  plVar3[2] = lVar4;
  plVar3[3] = lVar2;
  return;
}


