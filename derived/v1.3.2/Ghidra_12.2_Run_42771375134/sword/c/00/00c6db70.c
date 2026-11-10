/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c6db70; name: FUN_00c6db70
 */


void FUN_00c6db70(long param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  lVar7 = *(long *)(*(long *)(param_1 + 0x118) + 0x350);
  uVar3 = FUN_00c7cc60(*(undefined8 *)(param_1 + 0xa0),0);
  iVar2 = FUN_00722fb0(lVar7,uVar3);
  if (iVar2 < 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = *(long *)(lVar7 + 0x1b8) + (long)iVar2 * 0x130;
  }
  lVar1 = *(long *)(param_1 + 0xa8);
  *(long *)(param_1 + 0x138) = lVar6;
  plVar4 = (long *)FUN_00c7cc60(*(undefined8 *)(param_1 + 0xa0),9);
  if ((lVar1 == *plVar4) ||
     (lVar6 = *(long *)(param_1 + 0xa8),
     plVar4 = (long *)FUN_00c7cc60(*(undefined8 *)(param_1 + 0xa0),10), lVar6 == *plVar4)) {
    uVar3 = *(undefined8 *)(param_1 + 0xa0);
    uVar5 = 5;
  }
  else {
    lVar6 = *(long *)(param_1 + 0xa8);
    plVar4 = (long *)FUN_00c7cc60(*(undefined8 *)(param_1 + 0xa0),0xb);
    if (lVar6 != *plVar4) {
      return;
    }
    uVar3 = *(undefined8 *)(param_1 + 0xa0);
    uVar5 = 8;
  }
  uVar3 = FUN_00c7cc60(uVar3,uVar5);
  iVar2 = FUN_00722fb0(lVar7,uVar3);
  if (iVar2 < 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = *(long *)(lVar7 + 0x1b8) + (long)iVar2 * 0x130;
  }
  *(long *)(param_1 + 0x140) = lVar7;
  return;
}


