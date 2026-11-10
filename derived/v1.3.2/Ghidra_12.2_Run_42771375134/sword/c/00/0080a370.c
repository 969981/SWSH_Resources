/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0080a370; name: FUN_0080a370
 */


undefined8 FUN_0080a370(long *param_1,long *param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  
  lVar5 = *param_2;
  lVar4 = *param_1;
  if (*(char *)(lVar5 + 0x44) == '\0') {
    plVar3 = (long *)(*(long *)(lVar5 + 0x50) + 0x30);
  }
  else if (*(long *)(lVar5 + 0x60) == 0) {
    plVar3 = (long *)(*(long *)(lVar5 + 0x30) + 0x88);
  }
  else {
    plVar3 = (long *)(*(long *)(lVar5 + 0x60) + 0x80);
  }
  if (*(char *)(lVar4 + 0x44) == '\0') {
    plVar8 = (long *)(*(long *)(lVar4 + 0x50) + 0x30);
  }
  else if (*(long *)(lVar4 + 0x60) == 0) {
    plVar8 = (long *)(*(long *)(lVar4 + 0x30) + 0x88);
  }
  else {
    plVar8 = (long *)(*(long *)(lVar4 + 0x60) + 0x80);
  }
  lVar7 = *param_3;
  if (*(char *)(lVar7 + 0x44) == '\0') {
    plVar9 = (long *)(*(long *)(lVar7 + 0x50) + 0x30);
  }
  else if (*(long *)(lVar7 + 0x60) == 0) {
    plVar9 = (long *)(*(long *)(lVar7 + 0x30) + 0x88);
  }
  else {
    plVar9 = (long *)(*(long *)(lVar7 + 0x60) + 0x80);
  }
  if (*(char *)(lVar5 + 0x44) == '\0') {
    plVar6 = (long *)(*(long *)(lVar5 + 0x50) + 0x30);
  }
  else if (*(long *)(lVar5 + 0x60) == 0) {
    plVar6 = (long *)(*(long *)(lVar5 + 0x30) + 0x88);
  }
  else {
    plVar6 = (long *)(*(long *)(lVar5 + 0x60) + 0x80);
  }
  iVar1 = (int)((ulong)(lVar7 - *plVar9) >> 4) * 0x38e38e39;
  iVar2 = (int)((ulong)(lVar5 - *plVar6) >> 4) * 0x38e38e39;
  if ((int)((ulong)(lVar4 - *plVar8) >> 4) * 0x38e38e39 <=
      (int)((ulong)(lVar5 - *plVar3) >> 4) * 0x38e38e39) {
    if (iVar2 <= iVar1) {
      return 0;
    }
    *param_2 = lVar7;
    *param_3 = lVar5;
    lVar5 = *param_2;
    lVar4 = *param_1;
    if (*(char *)(lVar5 + 0x44) == '\0') {
      plVar3 = (long *)(*(long *)(lVar5 + 0x50) + 0x30);
    }
    else if (*(long *)(lVar5 + 0x60) == 0) {
      plVar3 = (long *)(*(long *)(lVar5 + 0x30) + 0x88);
    }
    else {
      plVar3 = (long *)(*(long *)(lVar5 + 0x60) + 0x80);
    }
    if (*(char *)(lVar4 + 0x44) == '\0') {
      plVar8 = (long *)(*(long *)(lVar4 + 0x50) + 0x30);
    }
    else if (*(long *)(lVar4 + 0x60) == 0) {
      plVar8 = (long *)(*(long *)(lVar4 + 0x30) + 0x88);
    }
    else {
      plVar8 = (long *)(*(long *)(lVar4 + 0x60) + 0x80);
    }
    if ((int)((ulong)(lVar5 - *plVar3) >> 4) * 0x38e38e39 <
        (int)((ulong)(lVar4 - *plVar8) >> 4) * 0x38e38e39) {
      *param_1 = lVar5;
      *param_2 = lVar4;
      return 2;
    }
    return 1;
  }
  if (iVar1 < iVar2) {
    *param_1 = lVar7;
    *param_3 = lVar4;
    return 1;
  }
  *param_1 = lVar5;
  *param_2 = lVar4;
  lVar5 = *param_3;
  if (*(char *)(lVar5 + 0x44) == '\0') {
    plVar3 = (long *)(*(long *)(lVar5 + 0x50) + 0x30);
  }
  else if (*(long *)(lVar5 + 0x60) == 0) {
    plVar3 = (long *)(*(long *)(lVar5 + 0x30) + 0x88);
  }
  else {
    plVar3 = (long *)(*(long *)(lVar5 + 0x60) + 0x80);
  }
  if (*(char *)(lVar4 + 0x44) == '\0') {
    plVar8 = (long *)(*(long *)(lVar4 + 0x50) + 0x30);
  }
  else if (*(long *)(lVar4 + 0x60) == 0) {
    plVar8 = (long *)(*(long *)(lVar4 + 0x30) + 0x88);
  }
  else {
    plVar8 = (long *)(*(long *)(lVar4 + 0x60) + 0x80);
  }
  if ((int)((ulong)(lVar5 - *plVar3) >> 4) * 0x38e38e39 <
      (int)((ulong)(lVar4 - *plVar8) >> 4) * 0x38e38e39) {
    *param_2 = lVar5;
    *param_3 = lVar4;
    return 2;
  }
  return 1;
}


