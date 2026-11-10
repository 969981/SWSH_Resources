/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d7b930; name: FUN_00d7b930
 */


void FUN_00d7b930(undefined8 param_1,int *param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long local_38;
  
  if ((*(ushort *)((long)param_2 - (long)*param_2) < 0x1f) ||
     (uVar2 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0xf], uVar2 == 0)) {
    local_38 = 0;
    plVar1 = (long *)FUN_00cbd3c0();
    if (*plVar1 != 0) goto LAB_00d7b9b0;
  }
  else {
    lVar3 = *(long *)((long)param_2 + uVar2);
    if ((lVar3 != -0x340d631b7bddd9bb) &&
       (local_38 = lVar3, plVar1 = (long *)FUN_00cbd3c0(), *plVar1 != lVar3)) {
LAB_00d7b9b0:
      lVar3 = *(long *)(*(long *)PTR_DAT_02710798 + 0x218);
      if (lVar3 == 0) {
        FUN_0153a470(0,9,&local_38,1);
      }
      else {
        plVar1 = (long *)(lVar3 + 0x48);
        (**(code **)(*plVar1 + 0x10))(plVar1);
        FUN_0153a470(lVar3,9,&local_38,1);
        (**(code **)(*plVar1 + 0x18))(plVar1);
      }
    }
  }
  if ((*(ushort *)((long)param_2 - (long)*param_2) < 0x1d) ||
     (uVar2 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0xe], uVar2 == 0)) {
    local_38 = 0;
    plVar1 = (long *)FUN_00cbd3c0();
    if (*plVar1 != 0) goto LAB_00d7ba6c;
  }
  else {
    lVar3 = *(long *)((long)param_2 + uVar2);
    if ((lVar3 != -0x340d631b7bddd9bb) &&
       (local_38 = lVar3, plVar1 = (long *)FUN_00cbd3c0(), *plVar1 != lVar3)) {
LAB_00d7ba6c:
      lVar3 = *(long *)(*(long *)PTR_DAT_02710798 + 0x218);
      if (lVar3 == 0) {
        FUN_0153a470(0,8,&local_38,1);
      }
      else {
        plVar1 = (long *)(lVar3 + 0x48);
        (**(code **)(*plVar1 + 0x10))(plVar1);
        FUN_0153a470(lVar3,8,&local_38,1);
        (**(code **)(*plVar1 + 0x18))(plVar1);
      }
    }
  }
  if ((*(ushort *)((long)param_2 - (long)*param_2) < 0x25) ||
     (uVar2 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0x12], uVar2 == 0)) {
    local_38 = 0;
    plVar1 = (long *)FUN_00cbd3c0();
    if (*plVar1 != 0) goto LAB_00d7bb28;
  }
  else {
    lVar3 = *(long *)((long)param_2 + uVar2);
    if ((lVar3 != -0x340d631b7bddd9bb) &&
       (local_38 = lVar3, plVar1 = (long *)FUN_00cbd3c0(), *plVar1 != lVar3)) {
LAB_00d7bb28:
      lVar3 = *(long *)(*(long *)PTR_DAT_02710798 + 0x218);
      if (lVar3 == 0) {
        FUN_0153a470(0,0xc,&local_38,1);
      }
      else {
        plVar1 = (long *)(lVar3 + 0x48);
        (**(code **)(*plVar1 + 0x10))(plVar1);
        FUN_0153a470(lVar3,0xc,&local_38,1);
        (**(code **)(*plVar1 + 0x18))(plVar1);
      }
    }
  }
  if ((*(ushort *)((long)param_2 - (long)*param_2) < 0x27) ||
     (uVar2 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0x13], uVar2 == 0)) {
    local_38 = 0;
    plVar1 = (long *)FUN_00cbd3c0();
    if (*plVar1 != 0) goto LAB_00d7bbe4;
  }
  else {
    lVar3 = *(long *)((long)param_2 + uVar2);
    if ((lVar3 != -0x340d631b7bddd9bb) &&
       (local_38 = lVar3, plVar1 = (long *)FUN_00cbd3c0(), *plVar1 != lVar3)) {
LAB_00d7bbe4:
      lVar3 = *(long *)(*(long *)PTR_DAT_02710798 + 0x218);
      if (lVar3 == 0) {
        FUN_0153a470(0,0xd,&local_38,1);
      }
      else {
        plVar1 = (long *)(lVar3 + 0x48);
        (**(code **)(*plVar1 + 0x10))(plVar1);
        FUN_0153a470(lVar3,0xd,&local_38,1);
        (**(code **)(*plVar1 + 0x18))(plVar1);
      }
    }
  }
  if ((*(ushort *)((long)param_2 - (long)*param_2) < 0x29) ||
     (uVar2 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0x14], uVar2 == 0)) {
    local_38 = 0;
    plVar1 = (long *)FUN_00cbd3c0();
    if (*plVar1 != 0) goto LAB_00d7bca0;
  }
  else {
    lVar3 = *(long *)((long)param_2 + uVar2);
    if ((lVar3 != -0x340d631b7bddd9bb) &&
       (local_38 = lVar3, plVar1 = (long *)FUN_00cbd3c0(), *plVar1 != lVar3)) {
LAB_00d7bca0:
      lVar3 = *(long *)(*(long *)PTR_DAT_02710798 + 0x218);
      if (lVar3 == 0) {
        FUN_0153a470(0,0xe,&local_38,1);
      }
      else {
        plVar1 = (long *)(lVar3 + 0x48);
        (**(code **)(*plVar1 + 0x10))(plVar1);
        FUN_0153a470(lVar3,0xe,&local_38,1);
        (**(code **)(*plVar1 + 0x18))(plVar1);
      }
    }
  }
  if ((*(ushort *)((long)param_2 - (long)*param_2) < 0x21) ||
     (uVar2 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0x10], uVar2 == 0)) {
    local_38 = 0;
    plVar1 = (long *)FUN_00cbd3c0();
    if (*plVar1 != 0) goto LAB_00d7bd5c;
  }
  else {
    lVar3 = *(long *)((long)param_2 + uVar2);
    if ((lVar3 != -0x340d631b7bddd9bb) &&
       (local_38 = lVar3, plVar1 = (long *)FUN_00cbd3c0(), *plVar1 != lVar3)) {
LAB_00d7bd5c:
      lVar3 = *(long *)(*(long *)PTR_DAT_02710798 + 0x218);
      if (lVar3 == 0) {
        FUN_0153a470(0,10,&local_38,1);
      }
      else {
        plVar1 = (long *)(lVar3 + 0x48);
        (**(code **)(*plVar1 + 0x10))(plVar1);
        FUN_0153a470(lVar3,10,&local_38,1);
        (**(code **)(*plVar1 + 0x18))(plVar1);
      }
    }
  }
  if ((*(ushort *)((long)param_2 - (long)*param_2) < 0x1b) ||
     (uVar2 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0xd], uVar2 == 0)) {
    local_38 = 0;
    plVar1 = (long *)FUN_00cbd3c0();
    if (*plVar1 != 0) goto LAB_00d7be18;
  }
  else {
    lVar3 = *(long *)((long)param_2 + uVar2);
    if ((lVar3 != -0x340d631b7bddd9bb) &&
       (local_38 = lVar3, plVar1 = (long *)FUN_00cbd3c0(), *plVar1 != lVar3)) {
LAB_00d7be18:
      lVar3 = *(long *)(*(long *)PTR_DAT_02710798 + 0x218);
      if (lVar3 == 0) {
        FUN_0153a470(0,7,&local_38,1);
      }
      else {
        plVar1 = (long *)(lVar3 + 0x48);
        (**(code **)(*plVar1 + 0x10))(plVar1);
        FUN_0153a470(lVar3,7,&local_38,1);
        (**(code **)(*plVar1 + 0x18))(plVar1);
      }
    }
  }
  if ((*(ushort *)((long)param_2 - (long)*param_2) < 0x17) ||
     (uVar2 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0xb], uVar2 == 0)) {
    local_38 = 0;
    plVar1 = (long *)FUN_00cbd3c0();
    if (*plVar1 == 0) goto LAB_00d7bf38;
  }
  else {
    lVar3 = *(long *)((long)param_2 + uVar2);
    if ((lVar3 == -0x340d631b7bddd9bb) ||
       (local_38 = lVar3, plVar1 = (long *)FUN_00cbd3c0(), *plVar1 == lVar3)) goto LAB_00d7bf38;
  }
  lVar3 = *(long *)(*(long *)PTR_DAT_02710798 + 0x218);
  if (lVar3 == 0) {
    FUN_0153a470(0,6,&local_38,1);
  }
  else {
    plVar1 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar1 + 0x10))(plVar1);
    FUN_0153a470(lVar3,6,&local_38,1);
    (**(code **)(*plVar1 + 0x18))(plVar1);
  }
LAB_00d7bf38:
  if ((*(ushort *)((long)param_2 - (long)*param_2) < 0x23) ||
     (uVar2 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0x11], uVar2 == 0)) {
    local_38 = 0;
    plVar1 = (long *)FUN_00cbd3c0();
    if (*plVar1 == 0) {
      return;
    }
  }
  else {
    lVar3 = *(long *)((long)param_2 + uVar2);
    if (lVar3 == -0x340d631b7bddd9bb) {
      return;
    }
    local_38 = lVar3;
    plVar1 = (long *)FUN_00cbd3c0();
    if (*plVar1 == lVar3) {
      return;
    }
  }
  lVar3 = *(long *)(*(long *)PTR_DAT_02710798 + 0x218);
  if (lVar3 == 0) {
    FUN_0153a470(0,0xb,&local_38,1);
  }
  else {
    plVar1 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar1 + 0x10))(plVar1);
    FUN_0153a470(lVar3,0xb,&local_38,1);
    (**(code **)(*plVar1 + 0x18))(plVar1);
  }
  return;
}


