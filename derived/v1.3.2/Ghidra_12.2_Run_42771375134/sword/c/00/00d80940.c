/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d80940; name: FUN_00d80940
 */


void FUN_00d80940(undefined8 param_1,int *param_2)

{
  long *plVar1;
  ushort *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 local_38;
  
  lVar4 = *(long *)(*(long *)PTR_DAT_02710798 + 0x218);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  plVar1 = (long *)FUN_00cbd3c0();
  puVar2 = (ushort *)((long)param_2 - (long)*param_2);
  lVar5 = *plVar1;
  if ((*puVar2 < 0x1f) || (uVar3 = (ulong)puVar2[0xf], uVar3 == 0)) {
    if (lVar5 != 0) goto LAB_00d809d8;
  }
  else if ((*(long *)((long)param_2 + uVar3) != -0x340d631b7bddd9bb) &&
          (*(long *)((long)param_2 + uVar3) != lVar5)) {
LAB_00d809d8:
    if (*puVar2 < 0x1f) {
      local_38 = 0;
    }
    else {
      local_38 = 0;
      if ((ulong)puVar2[0xf] != 0) {
        local_38 = *(undefined8 *)((long)param_2 + (ulong)puVar2[0xf]);
      }
    }
    FUN_0153a630(lVar4,9,&local_38,0);
    puVar2 = (ushort *)((long)param_2 - (long)*param_2);
  }
  if ((*puVar2 < 0x1d) || (uVar3 = (ulong)puVar2[0xe], uVar3 == 0)) {
    if (lVar5 != 0) goto LAB_00d80a50;
  }
  else if ((*(long *)((long)param_2 + uVar3) != -0x340d631b7bddd9bb) &&
          (*(long *)((long)param_2 + uVar3) != lVar5)) {
LAB_00d80a50:
    if (*puVar2 < 0x1d) {
      local_38 = 0;
    }
    else {
      local_38 = 0;
      if ((ulong)puVar2[0xe] != 0) {
        local_38 = *(undefined8 *)((long)param_2 + (ulong)puVar2[0xe]);
      }
    }
    FUN_0153a630(lVar4,8,&local_38,0);
    puVar2 = (ushort *)((long)param_2 - (long)*param_2);
  }
  if ((*puVar2 < 0x25) || (uVar3 = (ulong)puVar2[0x12], uVar3 == 0)) {
    if (lVar5 != 0) goto LAB_00d80ac8;
  }
  else if ((*(long *)((long)param_2 + uVar3) != -0x340d631b7bddd9bb) &&
          (*(long *)((long)param_2 + uVar3) != lVar5)) {
LAB_00d80ac8:
    if (*puVar2 < 0x25) {
      local_38 = 0;
    }
    else {
      local_38 = 0;
      if ((ulong)puVar2[0x12] != 0) {
        local_38 = *(undefined8 *)((long)param_2 + (ulong)puVar2[0x12]);
      }
    }
    FUN_0153a630(lVar4,0xc,&local_38,0);
    puVar2 = (ushort *)((long)param_2 - (long)*param_2);
  }
  if ((*puVar2 < 0x21) || (uVar3 = (ulong)puVar2[0x10], uVar3 == 0)) {
    if (lVar5 != 0) goto LAB_00d80b40;
  }
  else if ((*(long *)((long)param_2 + uVar3) != -0x340d631b7bddd9bb) &&
          (*(long *)((long)param_2 + uVar3) != lVar5)) {
LAB_00d80b40:
    if (*puVar2 < 0x21) {
      local_38 = 0;
    }
    else {
      local_38 = 0;
      if ((ulong)puVar2[0x10] != 0) {
        local_38 = *(undefined8 *)((long)param_2 + (ulong)puVar2[0x10]);
      }
    }
    FUN_0153a630(lVar4,10,&local_38,0);
    puVar2 = (ushort *)((long)param_2 - (long)*param_2);
  }
  if ((*puVar2 < 0x27) || (uVar3 = (ulong)puVar2[0x13], uVar3 == 0)) {
    if (lVar5 != 0) goto LAB_00d80bb8;
  }
  else if ((*(long *)((long)param_2 + uVar3) != -0x340d631b7bddd9bb) &&
          (*(long *)((long)param_2 + uVar3) != lVar5)) {
LAB_00d80bb8:
    if (*puVar2 < 0x27) {
      local_38 = 0;
    }
    else {
      local_38 = 0;
      if ((ulong)puVar2[0x13] != 0) {
        local_38 = *(undefined8 *)((long)param_2 + (ulong)puVar2[0x13]);
      }
    }
    FUN_0153a630(lVar4,0xd,&local_38,0);
    puVar2 = (ushort *)((long)param_2 - (long)*param_2);
  }
  if ((*puVar2 < 0x29) || (uVar3 = (ulong)puVar2[0x14], uVar3 == 0)) {
    if (lVar5 != 0) goto LAB_00d80c30;
  }
  else if ((*(long *)((long)param_2 + uVar3) != -0x340d631b7bddd9bb) &&
          (*(long *)((long)param_2 + uVar3) != lVar5)) {
LAB_00d80c30:
    if (*puVar2 < 0x29) {
      local_38 = 0;
    }
    else {
      local_38 = 0;
      if ((ulong)puVar2[0x14] != 0) {
        local_38 = *(undefined8 *)((long)param_2 + (ulong)puVar2[0x14]);
      }
    }
    FUN_0153a630(lVar4,0xe,&local_38,0);
    puVar2 = (ushort *)((long)param_2 - (long)*param_2);
  }
  if ((*puVar2 < 0x23) || (uVar3 = (ulong)puVar2[0x11], uVar3 == 0)) {
    if (lVar5 != 0) goto LAB_00d80ca8;
  }
  else if ((*(long *)((long)param_2 + uVar3) != -0x340d631b7bddd9bb) &&
          (*(long *)((long)param_2 + uVar3) != lVar5)) {
LAB_00d80ca8:
    if (*puVar2 < 0x23) {
      local_38 = 0;
    }
    else {
      local_38 = 0;
      if ((ulong)puVar2[0x11] != 0) {
        local_38 = *(undefined8 *)((long)param_2 + (ulong)puVar2[0x11]);
      }
    }
    FUN_0153a630(lVar4,0xb,&local_38,0);
    puVar2 = (ushort *)((long)param_2 - (long)*param_2);
  }
  if ((*puVar2 < 0x1b) || (uVar3 = (ulong)puVar2[0xd], uVar3 == 0)) {
    if (lVar5 != 0) goto LAB_00d80d20;
  }
  else if ((*(long *)((long)param_2 + uVar3) != -0x340d631b7bddd9bb) &&
          (*(long *)((long)param_2 + uVar3) != lVar5)) {
LAB_00d80d20:
    if (*puVar2 < 0x1b) {
      local_38 = 0;
    }
    else {
      local_38 = 0;
      if ((ulong)puVar2[0xd] != 0) {
        local_38 = *(undefined8 *)((long)param_2 + (ulong)puVar2[0xd]);
      }
    }
    FUN_0153a630(lVar4,7,&local_38,0);
    puVar2 = (ushort *)((long)param_2 - (long)*param_2);
  }
  if ((*puVar2 < 0x17) || (uVar3 = (ulong)puVar2[0xb], uVar3 == 0)) {
    if (lVar5 == 0) goto LAB_00d80dcc;
  }
  else if ((*(long *)((long)param_2 + uVar3) == -0x340d631b7bddd9bb) ||
          (*(long *)((long)param_2 + uVar3) == lVar5)) goto LAB_00d80dcc;
  if (*puVar2 < 0x17) {
    local_38 = 0;
  }
  else {
    local_38 = 0;
    if ((ulong)puVar2[0xb] != 0) {
      local_38 = *(undefined8 *)((long)param_2 + (ulong)puVar2[0xb]);
    }
  }
  FUN_0153a630(lVar4,6,&local_38,0);
LAB_00d80dcc:
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  return;
}


