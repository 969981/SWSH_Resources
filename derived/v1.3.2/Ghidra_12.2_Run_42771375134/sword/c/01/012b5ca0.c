/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012b5ca0; name: FUN_012b5ca0
 */


undefined8 FUN_012b5ca0(int *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  ushort *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  uVar8 = (long)param_1 - *param_2;
  if ((uVar8 & 3) != 0) {
    return 0;
  }
  uVar9 = param_2[1];
  uVar6 = 0;
  if ((4 < uVar9) && (uVar8 <= uVar9 - 4)) {
    lVar5 = param_2[2];
    iVar4 = *param_1;
    uVar1 = (int)lVar5 + 1;
    uVar2 = (int)param_2[3] + 1;
    *(uint *)(param_2 + 2) = uVar1;
    *(uint *)(param_2 + 3) = uVar2;
    if (*(uint *)((long)param_2 + 0x14) < uVar1) {
      return 0;
    }
    uVar10 = uVar8 - (long)iVar4;
    uVar6 = 0;
    if (((uVar10 <= uVar9 - 2) && ((uVar10 & 1) == 0)) && (uVar2 <= *(uint *)((long)param_2 + 0x1c))
       ) {
      uVar3 = *(ushort *)(*param_2 + uVar10);
      if ((uVar3 & 1) != 0) {
        return 0;
      }
      uVar6 = 0;
      if ((uVar3 < uVar9) && (uVar10 <= uVar9 - uVar3)) {
        puVar7 = (ushort *)((long)param_1 - (long)*param_1);
        if ((*puVar7 < 5) ||
           ((((ulong)puVar7[2] == 0 || ((uVar6 = 0, 8 < uVar9 && (uVar8 + puVar7[2] <= uVar9 - 8))))
            && ((*puVar7 < 7 ||
                (((ulong)puVar7[3] == 0 ||
                 ((uVar6 = 0, 8 < uVar9 && (uVar8 + puVar7[3] <= uVar9 - 8)))))))))) {
          uVar6 = 1;
          *(int *)(param_2 + 2) = (int)lVar5;
        }
      }
    }
  }
  return uVar6;
}


