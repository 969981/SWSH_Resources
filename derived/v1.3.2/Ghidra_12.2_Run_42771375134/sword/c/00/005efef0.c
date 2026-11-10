/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005efef0; name: FUN_005efef0
 */


void FUN_005efef0(long *param_1)

{
  byte bVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  
  plVar5 = param_1 + 0x40;
  if (((*(byte *)(param_1 + 0x44) & 1) == 0) && (lVar6 = *plVar5, lVar6 != 0)) {
    plVar7 = (long *)param_1[0x3c];
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x50))(plVar7,lVar6);
      (**(code **)(*plVar7 + 0x48))(plVar7,lVar6,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2)
      ;
    }
    *plVar5 = 0;
  }
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  plVar7 = param_1 + 1;
  param_1[0x44] = 0;
  *plVar5 = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  if (((*(byte *)(param_1 + 5) & 1) == 0) && (*plVar7 != 0)) {
    plVar2 = (long *)*param_1;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x48))
                (plVar2,*plVar7,"../../../../Include\\SiCore/SiCore_String.inl",0x158);
    }
    *plVar7 = 0;
  }
  *plVar7 = 0;
  param_1[2] = 0;
  plVar2 = param_1 + 0x36;
  param_1[4] = 0;
  param_1[5] = 0;
  if (((*(byte *)(param_1 + 0x3a) & 1) == 0) && (*plVar2 != 0)) {
    plVar3 = (long *)param_1[0x32];
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x48))
                (plVar3,*plVar2,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar2 = 0;
  }
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  plVar3 = param_1 + 0x46;
  param_1[0x3a] = 0;
  *plVar2 = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  if (((*(byte *)(param_1 + 0x4a) & 1) == 0) && (*plVar3 != 0)) {
    plVar4 = (long *)param_1[0x45];
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x48))
                (plVar4,*plVar3,"../../../../Include\\SiCore/SiCore_String.inl",0x158);
    }
    *plVar3 = 0;
  }
  *plVar3 = 0;
  param_1[0x47] = 0;
  param_1[0x4a] = 0;
  param_1[0x49] = 0;
  if (((*(byte *)(param_1 + 0x60) & 1) == 0) && (param_1[0x5c] != 0)) {
    plVar4 = (long *)param_1[0x5b];
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x48))
                (plVar4,param_1[0x5c],"../../../../Include\\SiCore/SiCore_String.inl",0x158);
    }
    param_1[0x5c] = 0;
  }
  param_1[0x5d] = 0;
  param_1[0x60] = 0;
  param_1[0x5f] = 0;
  param_1[0x5c] = 0;
  if ((*(byte *)(param_1 + 0x4a) & 1) == 0) {
    if (*plVar3 != 0) {
      plVar4 = (long *)param_1[0x45];
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x48))
                  (plVar4,*plVar3,"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
      }
      *plVar3 = 0;
    }
    *plVar3 = 0;
  }
  param_1[0x3b] = (long)(PTR_DAT_02714340 + 0x10);
  if (((*(byte *)(param_1 + 0x44) & 1) == 0) && (lVar6 = *plVar5, lVar6 != 0)) {
    plVar3 = (long *)param_1[0x3c];
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x50))(plVar3,lVar6);
      (**(code **)(*plVar3 + 0x48))(plVar3,lVar6,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2)
      ;
    }
    *plVar5 = 0;
  }
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x44] = 0;
  *plVar5 = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x31] = (long)(PTR_DAT_02714328 + 0x10);
  if (((*(byte *)(param_1 + 0x3a) & 1) == 0) && (*plVar2 != 0)) {
    plVar5 = (long *)param_1[0x32];
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x48))
                (plVar5,*plVar2,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar2 = 0;
  }
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x3a] = 0;
  *plVar2 = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  if ((*(byte *)(param_1 + 0x2b) & 1) == 0) {
    if (param_1[0x27] != 0) {
      plVar5 = (long *)param_1[0x26];
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x48))
                  (plVar5,param_1[0x27],"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
      }
      param_1[0x27] = 0;
    }
    param_1[0x27] = 0;
    bVar1 = *(byte *)(param_1 + 0x25);
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x25);
  }
  if ((bVar1 & 1) == 0) {
    if (param_1[0x21] != 0) {
      plVar5 = (long *)param_1[0x20];
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x48))
                  (plVar5,param_1[0x21],"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
      }
      param_1[0x21] = 0;
    }
    param_1[0x21] = 0;
    bVar1 = *(byte *)(param_1 + 5);
  }
  else {
    bVar1 = *(byte *)(param_1 + 5);
  }
  if ((bVar1 & 1) == 0) {
    if (*plVar7 != 0) {
      param_1 = (long *)*param_1;
      if (param_1 != (long *)0x0) {
        (**(code **)(*param_1 + 0x48))
                  (param_1,*plVar7,"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
      }
      *plVar7 = 0;
    }
    *plVar7 = 0;
  }
  return;
}


