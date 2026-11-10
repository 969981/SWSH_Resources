/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00146bc0; name: FUN_00146bc0
 */


void FUN_00146bc0(float param_1,ulong *param_2,uint param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  bool bVar4;
  int *piVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  int *piVar11;
  uint local_28;
  float fStack_24;
  
  uVar8 = *(uint *)((long)param_2 + 0x14);
  uVar3 = (uint)param_2[1];
  if (uVar8 <= param_3) {
    param_3 = uVar8;
  }
  if (uVar3 != 0) {
    piVar5 = (int *)*param_2;
    uVar9 = (ulong)(uVar3 - 1);
    if ((float)piVar5[uVar9 * 2 + 1] == param_1) {
      piVar5[uVar9 * 2] = piVar5[uVar9 * 2] + param_3;
      goto LAB_00146c5c;
    }
  }
  local_28 = param_3;
  fStack_24 = param_1;
  if (uVar3 < (*(uint *)((long)param_2 + 0xc) & 0x7fffffff)) {
    *(ulong *)(*param_2 + (ulong)uVar3 * 8) = CONCAT44(param_1,param_3);
    *(int *)(param_2 + 1) = (int)param_2[1] + 1;
  }
  else {
    FUN_00146d70(param_2,&local_28);
  }
  piVar5 = (int *)*param_2;
  uVar8 = *(uint *)((long)param_2 + 0x14);
LAB_00146c5c:
  param_3 = (int)param_2[2] + param_3;
  *(uint *)(param_2 + 2) = param_3;
  if (uVar8 < param_3) {
    uVar8 = *piVar5 + uVar8;
    bVar4 = uVar8 < param_3;
    *piVar5 = uVar8 - param_3;
    piVar11 = piVar5 + (ulong)(bVar4 || uVar8 - param_3 == 0) * 2;
    while (bVar4) {
      uVar8 = *piVar11 + uVar8;
      bVar4 = uVar8 < param_3;
      *piVar11 = uVar8 - param_3;
      piVar11 = piVar11 + (ulong)(bVar4 || uVar8 - param_3 == 0) * 2;
    }
    if (piVar11 != piVar5) {
      FUN_00146ee0(param_2,(long)piVar5 + ((ulong)(uint)param_2[1] * 8 - (long)piVar11) >> 3);
      if ((uint)param_2[1] != 0) {
        puVar6 = (undefined8 *)*param_2;
        puVar1 = puVar6 + (uint)param_2[1];
        puVar2 = puVar1;
        if (puVar1 <= puVar6 + 1) {
          puVar2 = puVar6 + 1;
        }
        uVar9 = ~(ulong)puVar6;
        uVar8 = ((uint)((long)puVar2 + uVar9 >> 3) & 0x1fffffff) + 1;
        if ((uVar8 & 3) != 0) {
          lVar10 = -((ulong)uVar8 & 3);
          puVar7 = puVar6;
          piVar5 = piVar11;
          do {
            piVar11 = piVar5 + 2;
            lVar10 = lVar10 + 1;
            puVar6 = puVar7 + 1;
            *puVar7 = *(undefined8 *)piVar5;
            puVar7 = puVar6;
            piVar5 = piVar11;
          } while (lVar10 != 0);
        }
        if (0x17 < (long)puVar2 + uVar9) {
          do {
            *puVar6 = *(undefined8 *)piVar11;
            puVar6[1] = *(undefined8 *)(piVar11 + 2);
            puVar6[2] = *(undefined8 *)(piVar11 + 4);
            puVar6[3] = *(undefined8 *)(piVar11 + 6);
            puVar6 = puVar6 + 4;
            piVar11 = piVar11 + 8;
          } while (puVar6 < puVar1);
        }
      }
    }
  }
  uVar8 = (uint)param_2[2];
  if (*(uint *)((long)param_2 + 0x14) <= (uint)param_2[2]) {
    uVar8 = *(uint *)((long)param_2 + 0x14);
  }
  *(uint *)(param_2 + 2) = uVar8;
  return;
}


