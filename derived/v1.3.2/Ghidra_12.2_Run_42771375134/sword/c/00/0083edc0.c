/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0083edc0; name: FUN_0083edc0
 */


bool FUN_0083edc0(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  int *piVar4;
  long lVar5;
  int iVar6;
  int *piVar7;
  long lVar8;
  
  switch((long)param_2 - (long)param_1 >> 3) {
  case 0:
  case 1:
    return true;
  case 2:
    lVar5 = *param_1;
    if (*(int *)(param_2[-1] + 0x38) < *(int *)(lVar5 + 0x38)) {
      *param_1 = param_2[-1];
      param_2[-1] = lVar5;
      return true;
    }
    return true;
  case 3:
    lVar5 = *param_1;
    lVar8 = param_1[1];
    lVar2 = param_2[-1];
    iVar6 = *(int *)(lVar8 + 0x38);
    if (*(int *)(lVar5 + 0x38) <= iVar6) {
      if (iVar6 <= *(int *)(lVar2 + 0x38)) {
        return true;
      }
      param_1[1] = lVar2;
      param_2[-1] = lVar8;
      lVar5 = *param_1;
      if (*(int *)(param_1[1] + 0x38) < *(int *)(lVar5 + 0x38)) {
        *param_1 = param_1[1];
        param_1[1] = lVar5;
        return true;
      }
      return true;
    }
    if (*(int *)(lVar2 + 0x38) < iVar6) {
      *param_1 = lVar2;
      param_2[-1] = lVar5;
      return true;
    }
    *param_1 = lVar8;
    param_1[1] = lVar5;
    if (*(int *)(param_2[-1] + 0x38) < *(int *)(lVar5 + 0x38)) {
      param_1[1] = param_2[-1];
      param_2[-1] = lVar5;
      return true;
    }
    return true;
  case 4:
    lVar5 = *param_1;
    lVar8 = param_1[1];
    iVar6 = *(int *)(lVar8 + 0x38);
    piVar4 = (int *)(lVar5 + 0x38);
    lVar2 = param_1[2];
    piVar7 = (int *)(lVar2 + 0x38);
    if (iVar6 < *piVar4) {
      if (*piVar7 < iVar6) {
        *param_1 = lVar2;
        param_1[2] = lVar5;
        lVar2 = lVar5;
        piVar7 = piVar4;
      }
      else {
        *param_1 = lVar8;
        param_1[1] = lVar5;
        if (*(int *)(lVar2 + 0x38) < *(int *)(lVar5 + 0x38)) {
          param_1[1] = lVar2;
          param_1[2] = lVar5;
          lVar2 = lVar5;
          piVar7 = piVar4;
        }
      }
    }
    else if (*piVar7 < iVar6) {
      param_1[1] = lVar2;
      param_1[2] = lVar8;
      if (*(int *)(lVar2 + 0x38) < *piVar4) {
        *param_1 = lVar2;
        param_1[1] = lVar5;
      }
      lVar2 = lVar8;
      piVar7 = (int *)(lVar8 + 0x38);
    }
    if (*piVar7 <= *(int *)(param_2[-1] + 0x38)) {
      return true;
    }
    param_1[2] = param_2[-1];
    param_2[-1] = lVar2;
    lVar5 = param_1[1];
    lVar8 = param_1[2];
    if (*(int *)(lVar5 + 0x38) <= *(int *)(lVar8 + 0x38)) {
      return true;
    }
    lVar2 = *param_1;
    param_1[1] = lVar8;
    param_1[2] = lVar5;
    if (*(int *)(lVar8 + 0x38) < *(int *)(lVar2 + 0x38)) {
      *param_1 = lVar8;
      param_1[1] = lVar2;
      return true;
    }
    return true;
  case 5:
    FUN_0083ebc0(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1);
    return true;
  }
  lVar5 = *param_1;
  lVar8 = param_1[1];
  lVar3 = param_1[2];
  iVar6 = *(int *)(lVar8 + 0x38);
  lVar2 = lVar3;
  if (iVar6 < *(int *)(lVar5 + 0x38)) {
    if (*(int *)(lVar3 + 0x38) < iVar6) {
      *param_1 = lVar3;
    }
    else {
      *param_1 = lVar8;
      param_1[1] = lVar5;
      if (*(int *)(lVar5 + 0x38) <= *(int *)(lVar3 + 0x38)) goto joined_r0x0083ef20;
      param_1[1] = lVar3;
    }
    param_1[2] = lVar5;
    lVar2 = lVar5;
  }
  else if (*(int *)(lVar3 + 0x38) < iVar6) {
    param_1[1] = lVar3;
    param_1[2] = lVar8;
    lVar2 = lVar8;
    if (*(int *)(lVar3 + 0x38) < *(int *)(lVar5 + 0x38)) {
      *param_1 = lVar3;
      param_1[1] = lVar5;
    }
  }
joined_r0x0083ef20:
  if (param_1 + 3 == param_2) {
    return true;
  }
  lVar5 = 0;
  iVar6 = 0;
  plVar1 = param_1 + 3;
  do {
    lVar8 = *plVar1;
    if (*(int *)(lVar8 + 0x38) < *(int *)(lVar2 + 0x38)) {
      lVar2 = lVar5;
      do {
        lVar3 = lVar2;
        *(undefined8 *)((long)param_1 + lVar3 + 0x18) =
             *(undefined8 *)((long)param_1 + lVar3 + 0x10);
        if (lVar3 == -0x10) {
          *param_1 = lVar8;
          goto joined_r0x0083f050;
        }
        lVar2 = lVar3 + -8;
      } while (*(int *)(lVar8 + 0x38) < *(int *)(*(long *)((long)param_1 + lVar3 + 8) + 0x38));
      *(long *)((long)param_1 + lVar3 + 0x10) = lVar8;
joined_r0x0083f050:
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


