/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006b6750; name: FUN_006b6750
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006b6750(undefined8 param_1,long param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  
  uVar2 = FUN_006b9b40(*(undefined8 *)(param_2 + 0xf0));
  if ((uVar2 & 1) != 0) {
    FUN_006b9e50(param_1,*(undefined8 *)(param_2 + 0xf0));
  }
  if (((*(long *)(param_2 + 0x118) != 0) && (FUN_006b8160(param_1), *(long *)(param_2 + 0x118) != 0)
      ) && (uVar2 = FUN_006b81e0(), (uVar2 & 1) == 0)) {
    *(undefined8 *)(param_2 + 0x118) = 0;
  }
  if ((param_3 & 1) == 0) {
    return;
  }
  if (*(long *)(param_2 + 0x88) == 0) {
    return;
  }
  if (*(char *)(param_2 + 0x120) != '\0') {
    return;
  }
  uVar12 = *(undefined4 *)(param_2 + 0x124);
  uVar2 = FUN_006b9b40(*(undefined8 *)(param_2 + 0xf0));
  if ((uVar2 & 1) == 0) {
    if ((*(long *)(param_2 + 0x110) == 0) || (*(char *)(*(long *)(param_2 + 0x110) + 0x120) == '\0')
       ) {
      uVar11 = 0;
      plVar3 = *(long **)(param_2 + 0xc0);
      plVar7 = *(long **)(param_2 + 200);
      *(undefined4 *)(param_2 + 0x124) = 0;
      if (plVar7 == plVar3) goto LAB_006b68e4;
    }
    else {
      uVar11 = 0x3f800000;
      plVar3 = *(long **)(param_2 + 0xc0);
      plVar7 = *(long **)(param_2 + 200);
      *(undefined4 *)(param_2 + 0x124) = 0x3f800000;
      if (plVar7 == plVar3) goto LAB_006b68e4;
    }
  }
  else {
    uVar11 = FUN_006b9b90(*(undefined8 *)(param_2 + 0xf0));
    plVar3 = *(long **)(param_2 + 0xc0);
    plVar7 = *(long **)(param_2 + 200);
    *(int *)(param_2 + 0x124) = (int)uVar11;
    if (plVar7 == plVar3) goto LAB_006b68e4;
  }
  piVar5 = *(int **)(param_2 + 0x10);
  if ((*(ushort *)((long)piVar5 - (long)*piVar5) < 7) ||
     (uVar2 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[3], uVar2 == 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = *(int *)((long)piVar5 + uVar2) == 1;
  }
  if (plVar3 == plVar7) {
LAB_006b68e4:
    plVar3 = *(long **)(*(long *)(param_2 + 0x88) + 0x90);
    plVar7 = *(long **)(*(long *)(param_2 + 0x88) + 0x98);
    if (plVar7 != plVar3 && plVar3 != plVar7) {
      do {
        lVar6 = *plVar3;
        piVar5 = *(int **)(lVar6 + 0x10);
        if (((6 < *(ushort *)((long)piVar5 - (long)*piVar5)) &&
            (uVar2 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[3], uVar2 != 0)) &&
           (*(int *)((long)piVar5 + uVar2) == 3)) {
          if (lVar6 == 0) {
            return;
          }
          plVar3 = *(long **)(lVar6 + 0xc0);
          plVar7 = *(long **)(lVar6 + 200);
          if (plVar7 == plVar3) {
            return;
          }
          if (plVar3 == plVar7) {
            return;
          }
          lVar9 = *(long *)(*(long *)(lVar6 + 0x88) + 0x118);
          plVar10 = plVar3 + 4;
          lVar4 = *plVar3;
          plVar3 = plVar10;
          if (lVar4 == lVar9) goto joined_r0x006b6a1c;
          while( true ) {
            uVar2 = FUN_006b7aa0(uVar12,uVar11,lVar4,0,lVar9 != 0);
            lVar4 = plVar10[-4];
            if ((uVar2 & 1) != 0) break;
            FUN_006b8240(lVar4);
            plVar3 = plVar10;
joined_r0x006b6a1c:
            do {
              if (plVar7 == plVar3) {
                return;
              }
              plVar10 = plVar3 + 4;
              lVar4 = *plVar3;
              plVar3 = plVar10;
            } while (lVar4 == *(long *)(*(long *)(lVar6 + 0x88) + 0x118));
          }
          if (lVar4 == 0) {
            return;
          }
          goto LAB_006b6954;
        }
        plVar3 = plVar3 + 4;
      } while (plVar7 != plVar3);
    }
    return;
  }
  lVar6 = *(long *)(*(long *)(param_2 + 0x88) + 0x118);
  plVar10 = plVar3 + 4;
  lVar4 = *plVar3;
  plVar3 = plVar10;
  if (lVar4 == lVar6) goto joined_r0x006b68c0;
  while( true ) {
    uVar2 = FUN_006b7aa0(uVar12,uVar11,lVar4,bVar1,lVar6 != 0);
    lVar4 = plVar10[-4];
    if ((uVar2 & 1) != 0) break;
    FUN_006b8240(lVar4);
    plVar3 = plVar10;
joined_r0x006b68c0:
    do {
      if (plVar7 == plVar3) goto LAB_006b68e4;
      plVar10 = plVar3 + 4;
      lVar4 = *plVar3;
      plVar3 = plVar10;
    } while (lVar4 == *(long *)(*(long *)(param_2 + 0x88) + 0x118));
  }
  if (lVar4 == 0) goto LAB_006b68e4;
LAB_006b6954:
  plVar3 = (long *)FUN_006b7a50(lVar4);
  lVar9 = *plVar3;
  lVar6 = plVar3[3];
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  plVar3 = *(long **)(*(long *)(param_2 + 0x88) + 0x90);
  plVar7 = *(long **)(*(long *)(param_2 + 0x88) + 0x98);
  if (plVar7 == plVar3) {
LAB_006b69a8:
    lVar8 = 0;
    uVar2 = FUN_006b9b40(_DAT_000000f0);
  }
  else {
    if (plVar3 != plVar7) {
      do {
        plVar10 = plVar3 + 4;
        lVar8 = *plVar3;
        if (*(long *)(lVar8 + 0x28) == lVar9) goto LAB_006b6a48;
        plVar3 = plVar10;
      } while (plVar7 != plVar10);
      goto LAB_006b69a8;
    }
    lVar8 = 0;
LAB_006b6a48:
    uVar2 = FUN_006b9b40(*(undefined8 *)(lVar8 + 0xf0));
  }
  if ((((uVar2 & 1) != 0) && (uVar2 = FUN_006b9b50(*(undefined8 *)(lVar8 + 0xf0)), (uVar2 & 1) == 0)
      ) || ((uVar2 = FUN_006b7a60(lVar4), lVar8 == param_2 && ((uVar2 & 1) == 0))))
  goto joined_r0x006b6abc;
  piVar5 = *(int **)(lVar8 + 0x10);
  if ((*(ushort *)((long)piVar5 - (long)*piVar5) < 7) ||
     (uVar2 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[3], uVar2 == 0)) {
    lVar9 = *(long *)(lVar8 + 0x98) - *(long *)(lVar8 + 0x90);
LAB_006b6ad4:
    if (lVar9 == 0) {
      FUN_006b8230(lVar4);
    }
  }
  else {
    if (*(int *)((long)piVar5 + uVar2) == 2) {
      lVar4 = *(long *)(*(long *)(param_2 + 0x88) + 0x88);
      if ((lVar4 == 0) || (*(long *)(lVar4 + 0x118) == 0)) {
        *(undefined1 *)(param_2 + 0x120) = 1;
      }
      goto joined_r0x006b6abc;
    }
    lVar9 = *(long *)(lVar8 + 0x98) - *(long *)(lVar8 + 0x90);
    if (*(int *)((long)piVar5 + uVar2) == 0) goto LAB_006b6ad4;
  }
  *(undefined1 *)(lVar8 + 0x120) = 0;
  *(long *)(*(long *)(param_2 + 0x88) + 0x118) = lVar4;
  FUN_006b7dc0(param_1,lVar4,param_2,lVar8);
joined_r0x006b6abc:
  if (lVar6 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x006b6b28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  return;
}


