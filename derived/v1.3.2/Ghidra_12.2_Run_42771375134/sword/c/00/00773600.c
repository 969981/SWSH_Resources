/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00773600; name: FUN_00773600
 */


float FUN_00773600(long param_1)

{
  ushort uVar1;
  uint *puVar2;
  int *piVar3;
  ulong uVar4;
  ushort *puVar5;
  float fVar6;
  float fVar7;
  
  if (*(char *)(param_1 + 0x1f0) == '\0') {
    if (*(int *)(param_1 + 0x1d8) == 2) {
      if (*(long *)(param_1 + 0x88) == 0) {
        return 1.0;
      }
      puVar2 = *(uint **)(*(long *)(param_1 + 0x88) + 400);
      piVar3 = (int *)((long)puVar2 + (ulong)*puVar2);
      puVar5 = (ushort *)((long)piVar3 - (long)*piVar3);
      uVar1 = *puVar5;
      if (uVar1 < 0x19) goto LAB_00773700;
      uVar4 = (ulong)puVar5[0xc];
      if (uVar4 == 0) goto LAB_00773688;
LAB_007736d4:
      fVar6 = *(float *)((long)piVar3 + uVar4);
      uVar1 = puVar5[10];
    }
    else {
      if (*(int *)(param_1 + 0x1d8) != 1) {
        return 1.0;
      }
      if (*(long *)(param_1 + 0x88) == 0) {
        return 1.0;
      }
      puVar2 = *(uint **)(*(long *)(param_1 + 0x88) + 400);
      piVar3 = (int *)((long)puVar2 + (ulong)*puVar2);
      puVar5 = (ushort *)((long)piVar3 - (long)*piVar3);
      uVar1 = *puVar5;
      if (uVar1 < 0x17) {
LAB_00773700:
        fVar6 = 0.0;
        fVar7 = 0.0;
        if (uVar1 < 0x15) goto LAB_0077371c;
        uVar1 = puVar5[10];
      }
      else {
        uVar4 = (ulong)puVar5[0xb];
        if (uVar4 != 0) goto LAB_007736d4;
LAB_00773688:
        fVar6 = 0.0;
        uVar1 = puVar5[10];
      }
    }
    uVar4 = (ulong)uVar1;
    if (uVar4 == 0) {
      return fVar6 / 0.0;
    }
  }
  else {
    fVar6 = *(float *)(param_1 + 0x1fc);
    if (*(long *)(param_1 + 0x88) == 0) {
      return fVar6 / 1.0;
    }
    puVar2 = *(uint **)(*(long *)(param_1 + 0x88) + 400);
    piVar3 = (int *)((long)puVar2 + (ulong)*puVar2);
    fVar7 = 0.0;
    if ((*(ushort *)((long)piVar3 - (long)*piVar3) < 0x15) ||
       (uVar4 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[10], uVar4 == 0))
    goto LAB_0077371c;
  }
  fVar7 = *(float *)((long)piVar3 + uVar4);
LAB_0077371c:
  return fVar6 / fVar7;
}


