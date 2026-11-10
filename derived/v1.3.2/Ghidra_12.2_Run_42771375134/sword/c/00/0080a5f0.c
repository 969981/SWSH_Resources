/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0080a5f0; name: FUN_0080a5f0
 */


int FUN_0080a5f0(long *param_1,long *param_2,long *param_3,long *param_4)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  iVar1 = FUN_0080a370();
  lVar4 = *param_4;
  lVar5 = *param_3;
  if (*(char *)(lVar4 + 0x44) == '\0') {
    plVar3 = (long *)(*(long *)(lVar4 + 0x50) + 0x30);
  }
  else if (*(long *)(lVar4 + 0x60) == 0) {
    plVar3 = (long *)(*(long *)(lVar4 + 0x30) + 0x88);
  }
  else {
    plVar3 = (long *)(*(long *)(lVar4 + 0x60) + 0x80);
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
  iVar2 = iVar1;
  if ((int)((ulong)(lVar4 - *plVar3) >> 4) * 0x38e38e39 <
      (int)((ulong)(lVar5 - *plVar6) >> 4) * 0x38e38e39) {
    *param_3 = lVar4;
    *param_4 = lVar5;
    lVar4 = *param_3;
    lVar5 = *param_2;
    if (*(char *)(lVar4 + 0x44) == '\0') {
      plVar3 = (long *)(*(long *)(lVar4 + 0x50) + 0x30);
    }
    else if (*(long *)(lVar4 + 0x60) == 0) {
      plVar3 = (long *)(*(long *)(lVar4 + 0x30) + 0x88);
    }
    else {
      plVar3 = (long *)(*(long *)(lVar4 + 0x60) + 0x80);
    }
    iVar2 = iVar1 + 1;
    if (*(char *)(lVar5 + 0x44) == '\0') {
      plVar6 = (long *)(*(long *)(lVar5 + 0x50) + 0x30);
    }
    else if (*(long *)(lVar5 + 0x60) == 0) {
      plVar6 = (long *)(*(long *)(lVar5 + 0x30) + 0x88);
    }
    else {
      plVar6 = (long *)(*(long *)(lVar5 + 0x60) + 0x80);
    }
    if ((int)((ulong)(lVar4 - *plVar3) >> 4) * 0x38e38e39 <
        (int)((ulong)(lVar5 - *plVar6) >> 4) * 0x38e38e39) {
      *param_2 = lVar4;
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
      iVar2 = iVar1 + 2;
      if (*(char *)(lVar4 + 0x44) == '\0') {
        plVar6 = (long *)(*(long *)(lVar4 + 0x50) + 0x30);
      }
      else if (*(long *)(lVar4 + 0x60) == 0) {
        plVar6 = (long *)(*(long *)(lVar4 + 0x30) + 0x88);
      }
      else {
        plVar6 = (long *)(*(long *)(lVar4 + 0x60) + 0x80);
      }
      if ((int)((ulong)(lVar5 - *plVar3) >> 4) * 0x38e38e39 <
          (int)((ulong)(lVar4 - *plVar6) >> 4) * 0x38e38e39) {
        iVar2 = iVar1 + 3;
        *param_1 = lVar5;
        *param_2 = lVar4;
      }
    }
  }
  return iVar2;
}


