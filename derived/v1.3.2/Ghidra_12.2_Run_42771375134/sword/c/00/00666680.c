/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00666680; name: FUN_00666680
 */


void FUN_00666680(undefined8 *param_1)

{
  undefined *puVar1;
  byte bVar2;
  long *plVar3;
  long *plVar4;
  
  plVar4 = param_1 + 0x15d;
  if (((*(byte *)(param_1 + 0x161) & 1) == 0) && (*plVar4 != 0)) {
    plVar3 = (long *)param_1[0x159];
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x48))
                (plVar3,*plVar4,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar4 = 0;
  }
  param_1[0x15b] = 0;
  param_1[0x15a] = 0;
  param_1[0x161] = 0;
  param_1[0x15e] = 0;
  param_1[0x15f] = 0;
  *plVar4 = 0;
  FUN_00666ab0(*param_1,param_1 + 0x14e,0);
  puVar1 = PTR_DAT_02714ce8 + 0x10;
  param_1[0x158] = puVar1;
  if (((*(byte *)(param_1 + 0x161) & 1) == 0) && (*plVar4 != 0)) {
    plVar3 = (long *)param_1[0x159];
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x48))
                (plVar3,*plVar4,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar4 = 0;
  }
  param_1[0x15a] = 0;
  param_1[0x15b] = 0;
  param_1[0x161] = 0;
  *plVar4 = 0;
  param_1[0x15e] = 0;
  param_1[0x15f] = 0;
  plVar4 = param_1 + 0x153;
  param_1[0x14e] = puVar1;
  if (((*(byte *)(param_1 + 0x157) & 1) == 0) && (*plVar4 != 0)) {
    plVar3 = (long *)param_1[0x14f];
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x48))
                (plVar3,*plVar4,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar4 = 0;
  }
  param_1[0x151] = 0;
  param_1[0x150] = 0;
  param_1[0x157] = 0;
  *plVar4 = 0;
  param_1[0x154] = 0;
  param_1[0x155] = 0;
  if ((*(byte *)(param_1 + 0x49) & 1) == 0) {
    if (param_1[0x45] != 0) {
      plVar4 = (long *)param_1[0x44];
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x48))
                  (plVar4,param_1[0x45],"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
      }
      param_1[0x45] = 0;
    }
    param_1[0x45] = 0;
    bVar2 = *(byte *)(param_1 + 0x43);
  }
  else {
    bVar2 = *(byte *)(param_1 + 0x43);
  }
  if ((bVar2 & 1) == 0) {
    if (param_1[0x3f] != 0) {
      plVar4 = (long *)param_1[0x3e];
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x48))
                  (plVar4,param_1[0x3f],"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
      }
      param_1[0x3f] = 0;
    }
    param_1[0x3f] = 0;
    bVar2 = *(byte *)(param_1 + 0x3d);
  }
  else {
    bVar2 = *(byte *)(param_1 + 0x3d);
  }
  if ((bVar2 & 1) == 0) {
    if (param_1[0x39] != 0) {
      plVar4 = (long *)param_1[0x38];
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x48))
                  (plVar4,param_1[0x39],"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
      }
      param_1[0x39] = 0;
    }
    param_1[0x39] = 0;
    bVar2 = *(byte *)(param_1 + 0x37);
  }
  else {
    bVar2 = *(byte *)(param_1 + 0x37);
  }
  if ((bVar2 & 1) == 0) {
    if (param_1[0x33] != 0) {
      plVar4 = (long *)param_1[0x32];
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x48))
                  (plVar4,param_1[0x33],"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
      }
      param_1[0x33] = 0;
    }
    param_1[0x33] = 0;
    bVar2 = *(byte *)(param_1 + 0x31);
  }
  else {
    bVar2 = *(byte *)(param_1 + 0x31);
  }
  if ((bVar2 & 1) == 0) {
    if (param_1[0x2d] != 0) {
      plVar4 = (long *)param_1[0x2c];
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x48))
                  (plVar4,param_1[0x2d],"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
      }
      param_1[0x2d] = 0;
    }
    param_1[0x2d] = 0;
    bVar2 = *(byte *)(param_1 + 0x2b);
  }
  else {
    bVar2 = *(byte *)(param_1 + 0x2b);
  }
  if ((bVar2 & 1) == 0) {
    if (param_1[0x27] != 0) {
      plVar4 = (long *)param_1[0x26];
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x48))
                  (plVar4,param_1[0x27],"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
      }
      param_1[0x27] = 0;
    }
    param_1[0x27] = 0;
    bVar2 = *(byte *)(param_1 + 0x25);
  }
  else {
    bVar2 = *(byte *)(param_1 + 0x25);
  }
  if ((bVar2 & 1) == 0) {
    if (param_1[0x21] != 0) {
      plVar4 = (long *)param_1[0x20];
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x48))
                  (plVar4,param_1[0x21],"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
      }
      param_1[0x21] = 0;
    }
    param_1[0x21] = 0;
    bVar2 = *(byte *)(param_1 + 0x1f);
  }
  else {
    bVar2 = *(byte *)(param_1 + 0x1f);
  }
  if ((bVar2 & 1) == 0) {
    if (param_1[0x1b] != 0) {
      plVar4 = (long *)param_1[0x1a];
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x48))
                  (plVar4,param_1[0x1b],"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
      }
      param_1[0x1b] = 0;
    }
    param_1[0x1b] = 0;
    bVar2 = *(byte *)(param_1 + 0x19);
  }
  else {
    bVar2 = *(byte *)(param_1 + 0x19);
  }
  if ((bVar2 & 1) == 0) {
    if (param_1[0x15] != 0) {
      plVar4 = (long *)param_1[0x14];
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x48))
                  (plVar4,param_1[0x15],"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
      }
      param_1[0x15] = 0;
    }
    param_1[0x15] = 0;
    bVar2 = *(byte *)(param_1 + 0x13);
  }
  else {
    bVar2 = *(byte *)(param_1 + 0x13);
  }
  if ((bVar2 & 1) == 0) {
    if (param_1[0xf] != 0) {
      plVar4 = (long *)param_1[0xe];
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x48))
                  (plVar4,param_1[0xf],"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
      }
      param_1[0xf] = 0;
    }
    param_1[0xf] = 0;
    bVar2 = *(byte *)(param_1 + 0xd);
  }
  else {
    bVar2 = *(byte *)(param_1 + 0xd);
  }
  if ((bVar2 & 1) == 0) {
    if (param_1[9] != 0) {
      plVar4 = (long *)param_1[8];
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x48))
                  (plVar4,param_1[9],"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
      }
      param_1[9] = 0;
    }
    param_1[9] = 0;
    bVar2 = *(byte *)(param_1 + 7);
  }
  else {
    bVar2 = *(byte *)(param_1 + 7);
  }
  if ((bVar2 & 1) != 0) {
    return;
  }
  if (param_1[3] != 0) {
    plVar4 = (long *)param_1[2];
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x48))
                (plVar4,param_1[3],"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
    }
    param_1[3] = 0;
  }
  param_1[3] = 0;
  return;
}


