/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0080aa90; name: FUN_0080aa90
 */


bool FUN_0080aa90(long *param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  
  switch((long)param_2 - (long)param_1 >> 3) {
  case 0:
  case 1:
    return true;
  case 2:
    lVar5 = param_2[-1];
    lVar1 = *param_1;
    if (*(char *)(lVar5 + 0x44) == '\0') {
      plVar3 = (long *)(*(long *)(lVar5 + 0x50) + 0x30);
    }
    else if (*(long *)(lVar5 + 0x60) == 0) {
      plVar3 = (long *)(*(long *)(lVar5 + 0x30) + 0x88);
    }
    else {
      plVar3 = (long *)(*(long *)(lVar5 + 0x60) + 0x80);
    }
    if (*(char *)(lVar1 + 0x44) == '\0') {
      plVar8 = (long *)(*(long *)(lVar1 + 0x50) + 0x30);
    }
    else if (*(long *)(lVar1 + 0x60) == 0) {
      plVar8 = (long *)(*(long *)(lVar1 + 0x30) + 0x88);
    }
    else {
      plVar8 = (long *)(*(long *)(lVar1 + 0x60) + 0x80);
    }
    if ((int)((ulong)(lVar5 - *plVar3) >> 4) * 0x38e38e39 <
        (int)((ulong)(lVar1 - *plVar8) >> 4) * 0x38e38e39) {
      *param_1 = lVar5;
      param_2[-1] = lVar1;
      return true;
    }
    return true;
  case 3:
    FUN_0080a370(param_1,param_1 + 1,param_2 + -1);
    return true;
  case 4:
    FUN_0080a5f0(param_1,param_1 + 1,param_1 + 2,param_2 + -1);
    return true;
  case 5:
    FUN_0080a7f0(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1);
    return true;
  default:
    FUN_0080a370(param_1,param_1 + 1,param_1 + 2);
    if (param_1 + 3 == param_2) {
      return true;
    }
    lVar1 = 0;
    iVar2 = 0;
    plVar3 = param_1 + 3;
    plVar8 = param_1 + 2;
  }
  do {
    plVar4 = plVar3;
    lVar6 = *plVar8;
    lVar5 = *plVar4;
    if (*(char *)(lVar5 + 0x44) == '\0') {
      plVar3 = (long *)(*(long *)(lVar5 + 0x50) + 0x30);
    }
    else if (*(long *)(lVar5 + 0x60) == 0) {
      plVar3 = (long *)(*(long *)(lVar5 + 0x30) + 0x88);
    }
    else {
      plVar3 = (long *)(*(long *)(lVar5 + 0x60) + 0x80);
    }
    if (*(char *)(lVar6 + 0x44) == '\0') {
      plVar8 = (long *)(*(long *)(lVar6 + 0x50) + 0x30);
    }
    else if (*(long *)(lVar6 + 0x60) == 0) {
      plVar8 = (long *)(*(long *)(lVar6 + 0x30) + 0x88);
    }
    else {
      plVar8 = (long *)(*(long *)(lVar6 + 0x60) + 0x80);
    }
    if ((int)((ulong)(lVar5 - *plVar3) >> 4) * 0x38e38e39 <
        (int)((ulong)(lVar6 - *plVar8) >> 4) * 0x38e38e39) {
      lVar6 = lVar1;
      do {
        lVar7 = lVar6;
        *(undefined8 *)((long)param_1 + lVar7 + 0x18) =
             *(undefined8 *)((long)param_1 + lVar7 + 0x10);
        if (lVar7 == -0x10) {
          *param_1 = lVar5;
          goto joined_r0x0080ac68;
        }
        lVar9 = *(long *)((long)param_1 + lVar7 + 8);
        if (*(char *)(lVar5 + 0x44) == '\0') {
          plVar3 = (long *)(*(long *)(lVar5 + 0x50) + 0x30);
        }
        else if (*(long *)(lVar5 + 0x60) == 0) {
          plVar3 = (long *)(*(long *)(lVar5 + 0x30) + 0x88);
        }
        else {
          plVar3 = (long *)(*(long *)(lVar5 + 0x60) + 0x80);
        }
        if (*(char *)(lVar9 + 0x44) == '\0') {
          plVar8 = (long *)(*(long *)(lVar9 + 0x50) + 0x30);
        }
        else if (*(long *)(lVar9 + 0x60) == 0) {
          plVar8 = (long *)(*(long *)(lVar9 + 0x30) + 0x88);
        }
        else {
          plVar8 = (long *)(*(long *)(lVar9 + 0x60) + 0x80);
        }
        lVar6 = lVar7 + -8;
      } while ((int)((ulong)(lVar5 - *plVar3) >> 4) * 0x38e38e39 <
               (int)((ulong)(lVar9 - *plVar8) >> 4) * 0x38e38e39);
      *(long *)((long)param_1 + lVar7 + 0x10) = lVar5;
joined_r0x0080ac68:
      iVar2 = iVar2 + 1;
      if (iVar2 == 8) {
        return plVar4 + 1 == param_2;
      }
    }
    lVar1 = lVar1 + 8;
    plVar3 = plVar4 + 1;
    plVar8 = plVar4;
    if (plVar4 + 1 == param_2) {
      return true;
    }
  } while( true );
}


