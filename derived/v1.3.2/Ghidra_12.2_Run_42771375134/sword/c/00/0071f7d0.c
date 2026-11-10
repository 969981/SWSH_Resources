/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0071f7d0; name: FUN_0071f7d0
 */


ulong FUN_0071f7d0(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  int *piVar10;
  undefined8 uVar11;
  long *plVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  
  lVar8 = (long)param_2 - (long)param_1 >> 3;
  if ((ulong)(lVar8 * -0x5555555555555555) < 6) {
                    /* WARNING: Could not recover jumptable at 0x0071f824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*(code *)(&DAT_0213f088 + *(int *)(&DAT_0213f088 + lVar8 * -0x5555555555555554)))(1);
    return uVar3;
  }
  FUN_0071ec50(param_1,param_1 + 3,param_1 + 6);
  if (param_1 + 9 == param_2) {
    return 1;
  }
  lVar8 = 0;
  iVar13 = 0;
  plVar1 = param_1 + 9;
  plVar12 = param_1 + 6;
LAB_0071f87c:
  plVar9 = plVar1;
  lVar14 = plVar9[2];
  piVar10 = *(int **)(lVar14 + 0x40);
  if ((*(ushort *)((long)piVar10 - (long)*piVar10) < 9) ||
     (uVar3 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[4], uVar3 == 0)) {
    iVar7 = 0;
  }
  else {
    iVar7 = *(int *)((long)piVar10 + uVar3);
  }
  piVar10 = *(int **)(plVar12[2] + 0x40);
  if ((*(ushort *)((long)piVar10 - (long)*piVar10) < 9) ||
     (uVar3 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[4], uVar3 == 0)) {
    if (iVar7 < 0) goto LAB_0071f8f0;
  }
  else if (iVar7 < *(int *)((long)piVar10 + uVar3)) {
LAB_0071f8f0:
    lVar6 = *plVar9;
    lVar2 = plVar9[1];
    *plVar9 = 0;
    plVar9[1] = 0;
    lVar5 = lVar8;
LAB_0071f928:
    lVar15 = lVar5;
    uVar11 = *(undefined8 *)((long)param_1 + lVar15 + 0x30);
    lVar5 = *(long *)((long)param_1 + lVar15 + 0x50);
    *(undefined8 *)((long)param_1 + lVar15 + 0x30) = 0;
    *(undefined8 *)((long)param_1 + lVar15 + 0x48) = uVar11;
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
      *(undefined8 *)((long)param_1 + lVar15 + 0x50) = 0;
    }
    uVar11 = *(undefined8 *)((long)param_1 + lVar15 + 0x38);
    *(undefined8 *)((long)param_1 + lVar15 + 0x38) = 0;
    *(undefined8 *)((long)param_1 + lVar15 + 0x50) = uVar11;
    *(undefined8 *)((long)param_1 + lVar15 + 0x58) = *(undefined8 *)((long)param_1 + lVar15 + 0x40);
    if (lVar15 == -0x30) {
      lVar5 = *param_1;
      plVar1 = param_1;
      goto joined_r0x0071f9e8;
    }
    piVar10 = *(int **)(lVar14 + 0x40);
    if ((*(ushort *)((long)piVar10 - (long)*piVar10) < 9) ||
       (uVar3 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[4], uVar3 == 0)) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)((long)piVar10 + uVar3);
    }
    piVar10 = *(int **)(*(long *)((long)param_1 + lVar15 + 0x28) + 0x40);
    if ((*(ushort *)((long)piVar10 - (long)*piVar10) < 9) ||
       (uVar3 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[4], uVar3 == 0)) {
      if (-1 < iVar7) goto LAB_0071f9d0;
    }
    else if (*(int *)((long)piVar10 + uVar3) <= iVar7) goto LAB_0071f9d0;
    lVar4 = *(long *)((long)param_1 + lVar15 + 0x30);
    lVar5 = lVar15 + -0x18;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
      *(undefined8 *)((long)param_1 + lVar15 + 0x30) = 0;
    }
    goto LAB_0071f928;
  }
  goto LAB_0071fa28;
LAB_0071f9d0:
  plVar1 = (long *)((long)param_1 + lVar15 + 0x30);
  lVar5 = *plVar1;
joined_r0x0071f9e8:
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
    *plVar1 = 0;
  }
  *plVar1 = lVar6;
  lVar6 = *(long *)((long)param_1 + lVar15 + 0x38);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
    *(undefined8 *)((long)param_1 + lVar15 + 0x38) = 0;
  }
  iVar13 = iVar13 + 1;
  *(long *)((long)param_1 + lVar15 + 0x38) = lVar2;
  *(long *)((long)param_1 + lVar15 + 0x40) = lVar14;
  if (iVar13 == 8) {
    return (ulong)(plVar9 + 3 == param_2);
  }
LAB_0071fa28:
  lVar8 = lVar8 + 0x18;
  plVar1 = plVar9 + 3;
  plVar12 = plVar9;
  if (plVar9 + 3 == param_2) {
    return 1;
  }
  goto LAB_0071f87c;
}


