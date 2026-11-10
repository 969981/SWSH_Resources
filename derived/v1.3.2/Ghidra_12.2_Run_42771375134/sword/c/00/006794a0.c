/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006794a0; name: FUN_006794a0
 */


void FUN_006794a0(long *param_1)

{
  undefined *puVar1;
  byte bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  *param_1 = (long)(PTR_DAT_02714db0 + 0x10);
  if ((*(byte *)(param_1 + 0x6a) & 1) == 0) {
    if (param_1[0x66] != 0) {
      plVar3 = (long *)param_1[0x65];
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x48))
                  (plVar3,param_1[0x66],"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
      }
      param_1[0x66] = 0;
    }
    param_1[0x66] = 0;
  }
  param_1[0x58] = (long)(PTR_DAT_02714328 + 0x10);
  plVar3 = param_1 + 0x5d;
  if (((*(byte *)(param_1 + 0x61) & 1) == 0) && (*plVar3 != 0)) {
    plVar4 = (long *)param_1[0x59];
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x48))
                (plVar4,*plVar3,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar3 = 0;
  }
  param_1[0x5b] = 0;
  param_1[0x5a] = 0;
  param_1[0x61] = 0;
  *plVar3 = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  if ((*(byte *)(param_1 + 0x57) & 1) == 0) {
    if (param_1[0x53] != 0) {
      plVar3 = (long *)param_1[0x52];
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x48))
                  (plVar3,param_1[0x53],"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
      }
      param_1[0x53] = 0;
    }
    param_1[0x53] = 0;
    bVar2 = *(byte *)(param_1 + 0x51);
  }
  else {
    bVar2 = *(byte *)(param_1 + 0x51);
  }
  if ((bVar2 & 1) == 0) {
    if (param_1[0x4d] != 0) {
      plVar3 = (long *)param_1[0x4c];
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x48))
                  (plVar3,param_1[0x4d],"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
      }
      param_1[0x4d] = 0;
    }
    param_1[0x4d] = 0;
    bVar2 = *(byte *)(param_1 + 0x4b);
  }
  else {
    bVar2 = *(byte *)(param_1 + 0x4b);
  }
  if ((bVar2 & 1) == 0) {
    if (param_1[0x47] != 0) {
      plVar3 = (long *)param_1[0x46];
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x48))
                  (plVar3,param_1[0x47],"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
      }
      param_1[0x47] = 0;
    }
    param_1[0x47] = 0;
  }
  puVar1 = PTR_DAT_02713f98 + 0x10;
  plVar3 = param_1 + 0x40;
  param_1[0x3b] = (long)puVar1;
  if (((*(byte *)(param_1 + 0x44) & 1) == 0) && (plVar4 = (long *)*plVar3, plVar4 != (long *)0x0)) {
    plVar7 = (long *)param_1[0x3c];
    if (plVar7 != (long *)0x0) {
      lVar5 = (**(code **)(*plVar7 + 0x50))(plVar7,plVar4);
      if (lVar5 != 0) {
        plVar8 = plVar4;
        do {
          if ((*(byte *)(plVar8 + 5) & 1) == 0) {
            if (plVar8[1] != 0) {
              plVar6 = (long *)*plVar8;
              if (plVar6 != (long *)0x0) {
                (**(code **)(*plVar6 + 0x48))
                          (plVar6,plVar8[1],"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
              }
              plVar8[1] = 0;
            }
            plVar8[1] = 0;
          }
          plVar8 = plVar8 + 6;
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
      }
      (**(code **)(*plVar7 + 0x48))
                (plVar7,plVar4,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar3 = 0;
  }
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x44] = 0;
  *plVar3 = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  plVar3 = param_1 + 0x36;
  param_1[0x31] = (long)puVar1;
  if (((*(byte *)(param_1 + 0x3a) & 1) == 0) && (plVar4 = (long *)*plVar3, plVar4 != (long *)0x0)) {
    plVar7 = (long *)param_1[0x32];
    if (plVar7 != (long *)0x0) {
      lVar5 = (**(code **)(*plVar7 + 0x50))(plVar7,plVar4);
      if (lVar5 != 0) {
        plVar8 = plVar4;
        do {
          if ((*(byte *)(plVar8 + 5) & 1) == 0) {
            if (plVar8[1] != 0) {
              plVar6 = (long *)*plVar8;
              if (plVar6 != (long *)0x0) {
                (**(code **)(*plVar6 + 0x48))
                          (plVar6,plVar8[1],"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
              }
              plVar8[1] = 0;
            }
            plVar8[1] = 0;
          }
          plVar8 = plVar8 + 6;
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
      }
      (**(code **)(*plVar7 + 0x48))
                (plVar7,plVar4,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar3 = 0;
  }
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x3a] = 0;
  *plVar3 = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
    if (param_1[0x2c] != 0) {
      plVar3 = (long *)param_1[0x2b];
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x48))
                  (plVar3,param_1[0x2c],"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
      }
      param_1[0x2c] = 0;
    }
    param_1[0x2c] = 0;
    bVar2 = *(byte *)(param_1 + 0x2a);
  }
  else {
    bVar2 = *(byte *)(param_1 + 0x2a);
  }
  if ((bVar2 & 1) == 0) {
    if (param_1[0x26] != 0) {
      plVar3 = (long *)param_1[0x25];
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x48))
                  (plVar3,param_1[0x26],"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
      }
      param_1[0x26] = 0;
    }
    param_1[0x26] = 0;
    bVar2 = *(byte *)(param_1 + 0x24);
  }
  else {
    bVar2 = *(byte *)(param_1 + 0x24);
  }
  if ((bVar2 & 1) == 0) {
    if (param_1[0x20] != 0) {
      plVar3 = (long *)param_1[0x1f];
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x48))
                  (plVar3,param_1[0x20],"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
      }
      param_1[0x20] = 0;
    }
    param_1[0x20] = 0;
    bVar2 = *(byte *)(param_1 + 0x1e);
  }
  else {
    bVar2 = *(byte *)(param_1 + 0x1e);
  }
  if ((bVar2 & 1) == 0) {
    if (param_1[0x1a] != 0) {
      plVar3 = (long *)param_1[0x19];
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x48))
                  (plVar3,param_1[0x1a],"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
      }
      param_1[0x1a] = 0;
    }
    param_1[0x1a] = 0;
    bVar2 = *(byte *)(param_1 + 0x18);
  }
  else {
    bVar2 = *(byte *)(param_1 + 0x18);
  }
  if ((bVar2 & 1) == 0) {
    if (param_1[0x14] != 0) {
      plVar3 = (long *)param_1[0x13];
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x48))
                  (plVar3,param_1[0x14],"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
      }
      param_1[0x14] = 0;
    }
    param_1[0x14] = 0;
    bVar2 = *(byte *)(param_1 + 0x12);
  }
  else {
    bVar2 = *(byte *)(param_1 + 0x12);
  }
  if ((bVar2 & 1) == 0) {
    if (param_1[0xe] != 0) {
      plVar3 = (long *)param_1[0xd];
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x48))
                  (plVar3,param_1[0xe],"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
      }
      param_1[0xe] = 0;
    }
    param_1[0xe] = 0;
  }
  FUN_005bf750(param_1 + 1);
  return;
}


