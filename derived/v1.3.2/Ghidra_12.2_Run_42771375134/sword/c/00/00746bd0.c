/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00746bd0; name: FUN_00746bd0
 */


bool FUN_00746bd0(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  ulong *puVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  ulong *puVar8;
  long lVar9;
  
  switch((long)param_2 - (long)param_1 >> 3) {
  case 0:
  case 1:
    return true;
  case 2:
    lVar5 = *param_1;
    if (*(ulong *)(param_2[-1] + 0xa0) < *(ulong *)(lVar5 + 0xa0)) {
      *param_1 = param_2[-1];
      param_2[-1] = lVar5;
      return true;
    }
    return true;
  case 3:
    lVar5 = *param_1;
    lVar9 = param_1[1];
    lVar2 = param_2[-1];
    uVar7 = *(ulong *)(lVar9 + 0xa0);
    if (*(ulong *)(lVar5 + 0xa0) <= uVar7) {
      if (uVar7 <= *(ulong *)(lVar2 + 0xa0)) {
        return true;
      }
      param_1[1] = lVar2;
      param_2[-1] = lVar9;
      lVar5 = *param_1;
      if (*(ulong *)(param_1[1] + 0xa0) < *(ulong *)(lVar5 + 0xa0)) {
        *param_1 = param_1[1];
        param_1[1] = lVar5;
        return true;
      }
      return true;
    }
    if (*(ulong *)(lVar2 + 0xa0) < uVar7) {
      *param_1 = lVar2;
      param_2[-1] = lVar5;
      return true;
    }
    *param_1 = lVar9;
    param_1[1] = lVar5;
    if (*(ulong *)(param_2[-1] + 0xa0) < *(ulong *)(lVar5 + 0xa0)) {
      param_1[1] = param_2[-1];
      param_2[-1] = lVar5;
      return true;
    }
    return true;
  case 4:
    lVar5 = *param_1;
    lVar9 = param_1[1];
    uVar7 = *(ulong *)(lVar9 + 0xa0);
    puVar4 = (ulong *)(lVar5 + 0xa0);
    lVar2 = param_1[2];
    puVar8 = (ulong *)(lVar2 + 0xa0);
    if (uVar7 < *puVar4) {
      if (*puVar8 < uVar7) {
        *param_1 = lVar2;
        param_1[2] = lVar5;
        lVar2 = lVar5;
        puVar8 = puVar4;
      }
      else {
        *param_1 = lVar9;
        param_1[1] = lVar5;
        if (*(ulong *)(lVar2 + 0xa0) < *(ulong *)(lVar5 + 0xa0)) {
          param_1[1] = lVar2;
          param_1[2] = lVar5;
          lVar2 = lVar5;
          puVar8 = puVar4;
        }
      }
    }
    else if (*puVar8 < uVar7) {
      param_1[1] = lVar2;
      param_1[2] = lVar9;
      if (*(ulong *)(lVar2 + 0xa0) < *puVar4) {
        *param_1 = lVar2;
        param_1[1] = lVar5;
      }
      lVar2 = lVar9;
      puVar8 = (ulong *)(lVar9 + 0xa0);
    }
    if (*puVar8 <= *(ulong *)(param_2[-1] + 0xa0)) {
      return true;
    }
    param_1[2] = param_2[-1];
    param_2[-1] = lVar2;
    lVar5 = param_1[1];
    lVar9 = param_1[2];
    if (*(ulong *)(lVar5 + 0xa0) <= *(ulong *)(lVar9 + 0xa0)) {
      return true;
    }
    lVar2 = *param_1;
    param_1[1] = lVar9;
    param_1[2] = lVar5;
    if (*(ulong *)(lVar9 + 0xa0) < *(ulong *)(lVar2 + 0xa0)) {
      *param_1 = lVar9;
      param_1[1] = lVar2;
      return true;
    }
    return true;
  case 5:
    FUN_007469d0(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1);
    return true;
  }
  lVar5 = *param_1;
  lVar9 = param_1[1];
  lVar3 = param_1[2];
  uVar7 = *(ulong *)(lVar9 + 0xa0);
  lVar2 = lVar3;
  if (uVar7 < *(ulong *)(lVar5 + 0xa0)) {
    if (*(ulong *)(lVar3 + 0xa0) < uVar7) {
      *param_1 = lVar3;
    }
    else {
      *param_1 = lVar9;
      param_1[1] = lVar5;
      if (*(ulong *)(lVar5 + 0xa0) <= *(ulong *)(lVar3 + 0xa0)) goto joined_r0x00746d30;
      param_1[1] = lVar3;
    }
    param_1[2] = lVar5;
    lVar2 = lVar5;
  }
  else if (*(ulong *)(lVar3 + 0xa0) < uVar7) {
    param_1[1] = lVar3;
    param_1[2] = lVar9;
    lVar2 = lVar9;
    if (*(ulong *)(lVar3 + 0xa0) < *(ulong *)(lVar5 + 0xa0)) {
      *param_1 = lVar3;
      param_1[1] = lVar5;
    }
  }
joined_r0x00746d30:
  if (param_1 + 3 == param_2) {
    return true;
  }
  lVar5 = 0;
  iVar6 = 0;
  plVar1 = param_1 + 3;
  do {
    lVar9 = *plVar1;
    if (*(ulong *)(lVar9 + 0xa0) < *(ulong *)(lVar2 + 0xa0)) {
      lVar2 = lVar5;
      do {
        lVar3 = lVar2;
        *(undefined8 *)((long)param_1 + lVar3 + 0x18) =
             *(undefined8 *)((long)param_1 + lVar3 + 0x10);
        if (lVar3 == -0x10) {
          *param_1 = lVar9;
          goto joined_r0x00746e60;
        }
        lVar2 = lVar3 + -8;
      } while (*(ulong *)(lVar9 + 0xa0) < *(ulong *)(*(long *)((long)param_1 + lVar3 + 8) + 0xa0));
      *(long *)((long)param_1 + lVar3 + 0x10) = lVar9;
joined_r0x00746e60:
      iVar6 = iVar6 + 1;
      if (iVar6 == 8) {
        return plVar1 + 1 == param_2;
      }
    }
    if (plVar1 + 1 == param_2) {
      return true;
    }
    lVar2 = *plVar1;
    lVar5 = lVar5 + 8;
    plVar1 = plVar1 + 1;
  } while( true );
}


