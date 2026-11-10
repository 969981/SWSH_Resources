/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cc2080; name: FUN_00cc2080
 */


undefined8 FUN_00cc2080(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined1 local_bc [4];
  undefined1 local_b8 [4];
  undefined2 local_b4;
  undefined1 local_b2;
  undefined1 local_b1;
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
  long local_40;
  long local_38;
  long lStack_30;
  undefined8 local_28;
  
  local_28 = 0x82d8cab73205e2a4;
  local_b8[0] = 0;
  local_b1 = 0;
  plVar1 = (long *)FUN_00cbd3c0();
  local_b0 = *plVar1;
  local_b2 = 0;
  local_b4 = 0;
  local_bc[0] = 0;
  local_a8 = local_b0;
  local_a0 = local_b0;
  local_98 = local_b0;
  local_90 = local_b0;
  local_88 = local_b0;
  local_80 = local_b0;
  local_78 = local_b0;
  local_70 = local_b0;
  local_68 = local_b0;
  local_60 = local_b0;
  local_58 = local_b0;
  local_50 = local_b0;
  local_48 = local_b0;
  local_40 = local_b0;
  local_38 = local_b0;
  lStack_30 = local_b0;
  FUN_00cc1c90(local_b8,&local_28,param_1,local_bc);
  plVar1 = (long *)FUN_00cbd3c0();
  lVar2 = *plVar1;
  if (local_a8 != -0x340d631b7bddd9bb) {
    if (local_a8 == -0x519ad049a3ede465) {
      if (*(long *)(param_1 + 0x10) != lVar2) {
        return 0;
      }
    }
    else if (*(long *)(param_1 + 0x10) != local_a8) {
      return 0;
    }
  }
  if (local_a0 == -0x519ad049a3ede465) {
    if (*(long *)(param_1 + 0x18) != lVar2) {
      return 0;
    }
  }
  else if ((local_a0 != -0x340d631b7bddd9bb) && (*(long *)(param_1 + 0x18) != local_a0)) {
    return 0;
  }
  if (local_98 != -0x340d631b7bddd9bb) {
    if (local_98 == -0x519ad049a3ede465) {
      if (*(long *)(param_1 + 0x20) != lVar2) {
        return 0;
      }
    }
    else if (*(long *)(param_1 + 0x20) != local_98) {
      return 0;
    }
  }
  if (local_90 != -0x340d631b7bddd9bb) {
    if (local_90 == -0x519ad049a3ede465) {
      if (*(long *)(param_1 + 0x28) != lVar2) {
        return 0;
      }
    }
    else if (*(long *)(param_1 + 0x28) != local_90) {
      return 0;
    }
  }
  if (local_88 != -0x340d631b7bddd9bb) {
    if (local_88 == -0x519ad049a3ede465) {
      if (*(long *)(param_1 + 0x30) != lVar2) {
        return 0;
      }
    }
    else if (*(long *)(param_1 + 0x30) != local_88) {
      return 0;
    }
  }
  if (local_80 != -0x340d631b7bddd9bb) {
    if (local_80 == -0x519ad049a3ede465) {
      if (*(long *)(param_1 + 0x38) != lVar2) {
        return 0;
      }
    }
    else if (*(long *)(param_1 + 0x38) != local_80) {
      return 0;
    }
  }
  if (local_78 != -0x340d631b7bddd9bb) {
    if (local_78 == -0x519ad049a3ede465) {
      if (*(long *)(param_1 + 0x40) != lVar2) {
        return 0;
      }
    }
    else if (*(long *)(param_1 + 0x40) != local_78) {
      return 0;
    }
  }
  if (local_70 != -0x340d631b7bddd9bb) {
    if (local_70 == -0x519ad049a3ede465) {
      if (*(long *)(param_1 + 0x48) != lVar2) {
        return 0;
      }
    }
    else if (*(long *)(param_1 + 0x48) != local_70) {
      return 0;
    }
  }
  if (local_68 != -0x340d631b7bddd9bb) {
    if (local_68 == -0x519ad049a3ede465) {
      if (*(long *)(param_1 + 0x50) != lVar2) {
        return 0;
      }
    }
    else if (*(long *)(param_1 + 0x50) != local_68) {
      return 0;
    }
  }
  if (local_60 != -0x340d631b7bddd9bb) {
    if (local_60 == -0x519ad049a3ede465) {
      if (*(long *)(param_1 + 0x58) != lVar2) {
        return 0;
      }
    }
    else if (*(long *)(param_1 + 0x58) != local_60) {
      return 0;
    }
  }
  if (local_58 != -0x340d631b7bddd9bb) {
    if (local_58 == -0x519ad049a3ede465) {
      if (*(long *)(param_1 + 0x60) != lVar2) {
        return 0;
      }
    }
    else if (*(long *)(param_1 + 0x60) != local_58) {
      return 0;
    }
  }
  if (local_50 != -0x340d631b7bddd9bb) {
    if (local_50 == -0x519ad049a3ede465) {
      if (*(long *)(param_1 + 0x68) != lVar2) {
        return 0;
      }
    }
    else if (*(long *)(param_1 + 0x68) != local_50) {
      return 0;
    }
  }
  if (local_48 != -0x340d631b7bddd9bb) {
    if (local_48 == -0x519ad049a3ede465) {
      if (*(long *)(param_1 + 0x70) != lVar2) {
        return 0;
      }
    }
    else if (*(long *)(param_1 + 0x70) != local_48) {
      return 0;
    }
  }
  if (local_40 != -0x340d631b7bddd9bb) {
    if (local_40 == -0x519ad049a3ede465) {
      if (*(long *)(param_1 + 0x78) != lVar2) {
        return 0;
      }
    }
    else if (*(long *)(param_1 + 0x78) != local_40) {
      return 0;
    }
  }
  return 1;
}


