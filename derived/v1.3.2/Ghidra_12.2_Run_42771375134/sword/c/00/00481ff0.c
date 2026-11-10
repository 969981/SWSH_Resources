/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00481ff0; name: FUN_00481ff0
 */


void FUN_00481ff0(long param_1)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  
  if (*(long *)(param_1 + 0x70) != 0) {
    if (((((*(long *)(param_1 + 0x78) != 0) &&
          (lVar4 = *(long *)(*(long *)(param_1 + 0x78) + 0x70), lVar4 != 0)) &&
         (*(short *)(lVar4 + 0x90) < 1)) &&
        ((*(short *)(lVar4 + 0x94) < 1 && (*(short *)(lVar4 + 0x88) == 0)))) &&
       ((*(short *)(lVar4 + 0x8a) == 0 &&
        ((*(long *)(lVar4 + 0x10) == 0 && (*(int *)(lVar4 + 8) == 0)))))) {
      FUN_00481ff0();
    }
    if ((((*(long *)(param_1 + 0x80) != 0) &&
         (lVar4 = *(long *)(*(long *)(param_1 + 0x80) + 0x70), lVar4 != 0)) &&
        (*(short *)(lVar4 + 0x90) < 1)) &&
       (((*(short *)(lVar4 + 0x94) < 1 && (*(short *)(lVar4 + 0x88) == 0)) &&
        ((*(short *)(lVar4 + 0x8a) == 0 &&
         ((*(long *)(lVar4 + 0x10) == 0 && (*(int *)(lVar4 + 8) == 0)))))))) {
      FUN_00481ff0();
    }
  }
  plVar6 = *(long **)(param_1 + 0x70);
  FUN_00488fb0(plVar6);
  if (DAT_02738fd0 == (long *)0x0) {
    plVar5 = (long *)0x0;
  }
  else {
    plVar5 = (long *)0x0;
    plVar2 = DAT_02738fd0;
    do {
      plVar3 = plVar2;
      if ((plVar3 <= plVar6) && (plVar6 < plVar3 + 0xa00)) goto LAB_004820f0;
      plVar5 = plVar3;
      plVar2 = (long *)plVar3[0xa00];
    } while ((long *)plVar3[0xa00] != (long *)0x0);
  }
  plVar3 = (long *)0x0;
LAB_004820f0:
  if (plVar3[0xa02] == 0) {
    plVar3[0xa02] = (long)plVar6;
    *plVar6 = 0;
  }
  else {
    *plVar6 = plVar3[0xa02];
    plVar3[0xa02] = (long)plVar6;
  }
  iVar1 = (int)plVar3[0xa01] + 1;
  *(int *)(plVar3 + 0xa01) = iVar1;
  if (iVar1 == 0x80) {
    plVar6 = (long *)&DAT_02738fd0;
    if (DAT_02738fd0 != plVar3) {
      plVar6 = plVar5 + 0xa00;
    }
    *plVar6 = plVar3[0xa00];
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
  }
  *(undefined8 *)(param_1 + 0x70) = 0;
  return;
}


