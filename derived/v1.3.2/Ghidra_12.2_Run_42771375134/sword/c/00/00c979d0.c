/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c979d0; name: FUN_00c979d0
 */


long FUN_00c979d0(long param_1,long *param_2,int param_3)

{
  int *piVar1;
  uint *puVar2;
  long lVar3;
  ushort uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  uint *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  
  puVar8 = *(uint **)(*(long *)(param_1 + 0x68) + 400);
  piVar1 = (int *)((long)puVar8 + (ulong)*puVar8);
  uVar9 = (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1));
  puVar2 = (uint *)((long)piVar1 + uVar9);
  uVar10 = (ulong)*puVar2;
  puVar2 = (uint *)((long)puVar2 + uVar10);
  uVar6 = (ulong)*puVar2;
  if (uVar6 == 0) {
    return 0;
  }
  lVar3 = *puVar8 + uVar10 + uVar9;
  lVar7 = 0;
  do {
    uVar9 = (ulong)*(uint *)((long)puVar8 + lVar7 + lVar3 + 4);
    lVar5 = lVar7 + (uVar9 - (long)*(int *)((long)puVar8 + lVar7 + uVar9 + lVar3 + 4)) + lVar3;
    uVar4 = *(ushort *)((long)puVar8 + lVar5 + 4);
    if (uVar4 < 5) {
      if (*param_2 == 0) goto LAB_00c97a68;
    }
    else {
      uVar10 = (ulong)*(ushort *)((long)puVar8 + lVar5 + 8);
      lVar11 = 0;
      if (uVar10 != 0) {
        lVar11 = *(long *)((long)puVar8 + lVar7 + uVar9 + uVar10 + lVar3 + 4);
      }
      if (lVar11 == *param_2) {
LAB_00c97a68:
        if ((uVar4 < 0xb) || (uVar10 = (ulong)*(ushort *)((long)puVar8 + lVar5 + 0xe), uVar10 == 0))
        {
          if (param_3 == 0) goto LAB_00c97ae0;
        }
        else if (*(int *)((long)puVar8 + lVar7 + uVar9 + uVar10 + lVar3 + 4) == param_3) {
LAB_00c97ae0:
          puVar8 = (uint *)((long)puVar2 + lVar7 + 4);
          if (puVar8 == puVar2 + uVar6 + 1) {
            return 0;
          }
          return (long)puVar8 + (ulong)*puVar8;
        }
      }
    }
    lVar7 = lVar7 + 4;
    if (uVar6 * 4 == lVar7) {
      return 0;
    }
  } while( true );
}


