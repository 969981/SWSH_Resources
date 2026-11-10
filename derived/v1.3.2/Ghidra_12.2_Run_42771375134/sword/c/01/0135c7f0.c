/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0135c7f0; name: FUN_0135c7f0
 */


long FUN_0135c7f0(float param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  uint *puVar5;
  long lVar6;
  ulong uVar7;
  float fVar8;
  
  uVar3 = FUN_0131acf0();
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  piVar4 = *(int **)(param_2 + 0x130);
  if (piVar4 == (int *)0x0) {
    return 0;
  }
  if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 5) ||
     (uVar3 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[2], uVar3 == 0)) {
    puVar5 = (uint *)0x0;
    uVar1 = uRam0000000000000000;
  }
  else {
    puVar5 = (uint *)((long)piVar4 + uVar3);
    puVar5 = (uint *)((long)puVar5 + (ulong)*puVar5);
    uVar1 = *puVar5;
  }
  if (uVar1 == 0) {
    return 0;
  }
  lVar6 = 0;
  while( true ) {
    uVar3 = (ulong)*(uint *)((long)puVar5 + lVar6 + 4);
    lVar2 = lVar6 + (uVar3 - (long)*(int *)((long)puVar5 + lVar6 + uVar3 + 4));
    fVar8 = 0.0;
    if (8 < *(ushort *)((long)puVar5 + lVar2 + 4)) {
      uVar7 = (ulong)*(ushort *)((long)puVar5 + lVar2 + 0xc);
      fVar8 = 0.0;
      if (uVar7 != 0) {
        fVar8 = *(float *)((long)puVar5 + lVar6 + uVar3 + uVar7 + 4);
      }
    }
    if ((int)(fVar8 + 0.5) == (int)(param_1 + param_1 + 0.5)) break;
    lVar6 = lVar6 + 4;
    if ((ulong)uVar1 * 4 == lVar6) {
      return 0;
    }
  }
  return (long)puVar5 + lVar6 + uVar3 + 4;
}


