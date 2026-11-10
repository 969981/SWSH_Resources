/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cc17e0; name: FUN_00cc17e0
 */


void FUN_00cc17e0(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 local_cc [4];
  undefined1 local_c8 [4];
  undefined2 local_c4;
  undefined1 local_c2;
  undefined1 local_c1;
  long local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  long lStack_40;
  undefined8 local_38;
  
  local_38 = 0x82d8cab73205e2a4;
  local_c8[0] = 0;
  local_c1 = 0;
  plVar1 = (long *)FUN_00cbd3c0();
  local_c0 = *plVar1;
  local_c2 = 0;
  local_c4 = 0;
  local_cc[0] = 0;
  local_b8 = local_c0;
  local_b0 = local_c0;
  local_a8 = local_c0;
  local_a0 = local_c0;
  local_98 = local_c0;
  local_90 = local_c0;
  local_88 = local_c0;
  local_80 = local_c0;
  local_78 = local_c0;
  local_70 = local_c0;
  local_68 = local_c0;
  local_60 = local_c0;
  local_58 = local_c0;
  local_50 = local_c0;
  local_48 = local_c0;
  lStack_40 = local_c0;
  FUN_00cc1c90(local_c8,&local_38,param_1,local_cc);
  lVar2 = param_1 + 0x88;
  if (local_b8 != -0x340d631b7bddd9bb) {
    lVar3 = local_b8;
    if (local_b8 == -0x519ad049a3ede465) {
      plVar1 = (long *)FUN_00cbd3c0();
      lVar3 = *plVar1;
      plVar1 = (long *)FUN_00cbd3c0();
      if (*plVar1 == lVar3) {
        lVar3 = FUN_00cc1430(lVar2,param_1,1);
      }
    }
    *(long *)(param_1 + 0x10) = lVar3;
  }
  if (local_b0 != -0x340d631b7bddd9bb) {
    lVar3 = local_b0;
    if (local_b0 == -0x519ad049a3ede465) {
      plVar1 = (long *)FUN_00cbd3c0();
      lVar3 = *plVar1;
      plVar1 = (long *)FUN_00cbd3c0();
      if (*plVar1 == lVar3) {
        lVar3 = FUN_00cc1430(lVar2,param_1,2);
      }
    }
    *(long *)(param_1 + 0x18) = lVar3;
  }
  if (local_a8 != -0x340d631b7bddd9bb) {
    lVar3 = local_a8;
    if (local_a8 == -0x519ad049a3ede465) {
      plVar1 = (long *)FUN_00cbd3c0();
      lVar3 = *plVar1;
      plVar1 = (long *)FUN_00cbd3c0();
      if (*plVar1 == lVar3) {
        lVar3 = FUN_00cc1430(lVar2,param_1,3);
      }
    }
    *(long *)(param_1 + 0x20) = lVar3;
  }
  if (local_a0 != -0x340d631b7bddd9bb) {
    lVar3 = local_a0;
    if (local_a0 == -0x519ad049a3ede465) {
      plVar1 = (long *)FUN_00cbd3c0();
      lVar3 = *plVar1;
      plVar1 = (long *)FUN_00cbd3c0();
      if (*plVar1 == lVar3) {
        lVar3 = FUN_00cc1430(lVar2,param_1,4);
      }
    }
    *(long *)(param_1 + 0x28) = lVar3;
  }
  if (local_98 != -0x340d631b7bddd9bb) {
    lVar3 = local_98;
    if (local_98 == -0x519ad049a3ede465) {
      plVar1 = (long *)FUN_00cbd3c0();
      lVar3 = *plVar1;
      plVar1 = (long *)FUN_00cbd3c0();
      if (*plVar1 == lVar3) {
        lVar3 = FUN_00cc1430(lVar2,param_1,5);
      }
    }
    *(long *)(param_1 + 0x30) = lVar3;
  }
  if (local_90 != -0x340d631b7bddd9bb) {
    lVar3 = local_90;
    if (local_90 == -0x519ad049a3ede465) {
      plVar1 = (long *)FUN_00cbd3c0();
      lVar3 = *plVar1;
      FUN_00cbd3c0();
    }
    *(long *)(param_1 + 0x38) = lVar3;
  }
  if (local_88 != -0x340d631b7bddd9bb) {
    lVar3 = local_88;
    if (local_88 == -0x519ad049a3ede465) {
      plVar1 = (long *)FUN_00cbd3c0();
      lVar3 = *plVar1;
      FUN_00cbd3c0();
    }
    *(long *)(param_1 + 0x40) = lVar3;
  }
  if (local_80 != -0x340d631b7bddd9bb) {
    lVar3 = local_80;
    if (local_80 == -0x519ad049a3ede465) {
      plVar1 = (long *)FUN_00cbd3c0();
      lVar3 = *plVar1;
      FUN_00cbd3c0();
    }
    *(long *)(param_1 + 0x48) = lVar3;
  }
  if (local_78 != -0x340d631b7bddd9bb) {
    lVar3 = local_78;
    if (local_78 == -0x519ad049a3ede465) {
      plVar1 = (long *)FUN_00cbd3c0();
      lVar3 = *plVar1;
      plVar1 = (long *)FUN_00cbd3c0();
      if (*plVar1 == lVar3) {
        lVar3 = FUN_00cc1430(lVar2,param_1,9);
      }
    }
    *(long *)(param_1 + 0x50) = lVar3;
  }
  if (local_70 != -0x340d631b7bddd9bb) {
    lVar3 = local_70;
    if (local_70 == -0x519ad049a3ede465) {
      plVar1 = (long *)FUN_00cbd3c0();
      lVar3 = *plVar1;
      FUN_00cbd3c0();
    }
    *(long *)(param_1 + 0x58) = lVar3;
  }
  if (local_68 != -0x340d631b7bddd9bb) {
    lVar3 = local_68;
    if (local_68 == -0x519ad049a3ede465) {
      plVar1 = (long *)FUN_00cbd3c0();
      lVar3 = *plVar1;
      plVar1 = (long *)FUN_00cbd3c0();
      if (*plVar1 == lVar3) {
        lVar3 = FUN_00cc1430(lVar2,param_1,0xb);
      }
    }
    *(long *)(param_1 + 0x60) = lVar3;
  }
  if (local_60 != -0x340d631b7bddd9bb) {
    lVar3 = local_60;
    if (local_60 == -0x519ad049a3ede465) {
      plVar1 = (long *)FUN_00cbd3c0();
      lVar3 = *plVar1;
      plVar1 = (long *)FUN_00cbd3c0();
      if (*plVar1 == lVar3) {
        lVar3 = FUN_00cc1430(lVar2,param_1,0xc);
      }
    }
    *(long *)(param_1 + 0x68) = lVar3;
  }
  if (local_58 != -0x340d631b7bddd9bb) {
    lVar3 = local_58;
    if (local_58 == -0x519ad049a3ede465) {
      plVar1 = (long *)FUN_00cbd3c0();
      lVar3 = *plVar1;
      plVar1 = (long *)FUN_00cbd3c0();
      if (*plVar1 == lVar3) {
        lVar3 = FUN_00cc1430(lVar2,param_1,0xd);
      }
    }
    *(long *)(param_1 + 0x70) = lVar3;
  }
  if (local_50 != -0x340d631b7bddd9bb) {
    lVar2 = local_50;
    if (local_50 == -0x519ad049a3ede465) {
      plVar1 = (long *)FUN_00cbd3c0();
      lVar2 = *plVar1;
      FUN_00cbd3c0();
    }
    *(long *)(param_1 + 0x78) = lVar2;
  }
  return;
}


