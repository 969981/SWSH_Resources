/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011d7800; name: FUN_011d7800
 */


undefined8 FUN_011d7800(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 auStack_40 [20];
  int local_2c;
  undefined1 local_28;
  
  lVar9 = *param_1;
  FUN_007a3db0(auStack_40);
  local_2c = (int)*(short *)(lVar9 + 0x84);
  local_28 = 1;
  lVar4 = FUN_007a2480(*(undefined8 *)(lVar9 + 0x2a0));
  plVar2 = *(long **)(lVar4 + 0x40);
  lVar4 = *(long *)(lVar4 + 0x48);
  if ((lVar4 == 0) || (*plVar2 == param_1[2])) {
    plVar7 = plVar2;
  }
  else {
    lVar6 = lVar4 * 8;
    plVar3 = plVar2;
    do {
      lVar6 = lVar6 + -8;
      if (lVar6 == 0) goto LAB_011d78ac;
      plVar7 = plVar3 + 1;
      plVar1 = plVar3 + 1;
      plVar3 = plVar7;
    } while (*plVar1 != param_1[2]);
  }
  if (plVar2 + lVar4 != plVar7) {
    uVar5 = FUN_009b7230(*(undefined8 *)(lVar9 + 0x2b8),auStack_40,param_1[2]);
    if ((uVar5 & 1) == 0) {
      uVar8 = 0;
      goto LAB_011d78b8;
    }
    FUN_007a2760(*(undefined8 *)(lVar9 + 0x2a0));
  }
LAB_011d78ac:
  uVar8 = 1;
LAB_011d78b8:
  FUN_007a3e20(auStack_40);
  return uVar8;
}


