/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008ee8b0; name: FUN_008ee8b0
 */


uint FUN_008ee8b0(int param_1,undefined4 param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  undefined *puVar6;
  char cVar7;
  uint uVar8;
  
  uVar1 = FUN_008ee550();
  if (param_1 == 2) {
    if ((int)uVar1 < 5) {
      puVar6 = &DAT_02149ce6;
      goto LAB_008ee934;
    }
LAB_008ee924:
    cVar7 = '\x02';
  }
  else {
    if (param_1 == 1) {
      if ((int)uVar1 < 5) {
        puVar6 = &DAT_02149ce1;
        goto LAB_008ee934;
      }
      goto LAB_008ee924;
    }
    if ((param_1 != 0) || (4 < (int)uVar1)) goto LAB_008ee924;
    puVar6 = &DAT_02149cdc;
LAB_008ee934:
    cVar7 = puVar6[uVar1];
  }
  uVar1 = FUN_008ef010(param_1,param_2,cVar7);
  if (uVar1 == 0) {
    return param_3;
  }
  param_4 = param_4 & 0xff;
  uVar8 = 0;
  if (uVar1 != 0) {
    uVar8 = param_4 / uVar1;
  }
  uVar8 = uVar8 * uVar1;
  uVar1 = param_4 - uVar8;
  if (param_1 == 0) {
    uVar3 = (param_3 & 0xff) % 5;
    uVar4 = FUN_008ee550(0,param_2,uVar3);
    uVar2 = 0;
    if (uVar4 != 5) {
      if ((int)uVar4 < 5) {
        if ((&DAT_02149cdc)[uVar4] != cVar7) goto LAB_008eea68;
      }
      else if (cVar7 != '\x02') {
LAB_008eea68:
        uVar2 = 0;
        goto LAB_008eecb8;
      }
      uVar2 = (uint)(param_4 != uVar8);
      if (param_4 == uVar8) {
        return uVar3;
      }
    }
LAB_008eecb8:
    uVar8 = ((param_3 & 0xff) + 1) % 5;
    uVar3 = FUN_008ee550(0,param_2,uVar8);
    if (uVar3 != 5) {
      if ((int)uVar3 < 5) {
        if ((&DAT_02149cdc)[uVar3] == cVar7) goto LAB_008eedac;
      }
      else if (cVar7 == '\x02') {
LAB_008eedac:
        if (uVar2 == uVar1) {
          return uVar8;
        }
        uVar2 = uVar2 + 1;
      }
    }
    uVar8 = ((param_3 & 0xff) + 2) % 5;
    uVar3 = FUN_008ee550(0,param_2,uVar8);
    if (uVar3 != 5) {
      if ((int)uVar3 < 5) {
        if ((&DAT_02149cdc)[uVar3] == cVar7) goto LAB_008eed28;
      }
      else if (cVar7 == '\x02') {
LAB_008eed28:
        if (uVar2 == uVar1) {
          return uVar8;
        }
        uVar2 = uVar2 + 1;
      }
    }
    uVar8 = ((param_3 & 0xff) + 3) % 5;
    uVar3 = FUN_008ee550(0,param_2,uVar8);
    if (uVar3 != 5) {
      if ((int)uVar3 < 5) {
        if ((&DAT_02149cdc)[uVar3] == cVar7) goto LAB_008eef40;
      }
      else if (cVar7 == '\x02') {
LAB_008eef40:
        if (uVar2 == uVar1) {
          return uVar8;
        }
        uVar2 = uVar2 + 1;
      }
    }
    uVar8 = ((param_3 & 0xff) + 4) % 5;
    uVar3 = FUN_008ee550(0,param_2,uVar8);
    if (uVar3 == 5) {
      return param_3;
    }
    if ((int)uVar3 < 5) {
      cVar5 = (&DAT_02149cdc)[uVar3];
      goto joined_r0x008eee9c;
    }
  }
  else {
    if (param_1 != 1) {
      uVar2 = (param_3 & 0xff) % 5;
      uVar3 = FUN_008ee550(param_1,param_2,uVar2);
      if (uVar3 != 5) {
        cVar5 = '\x02';
        if ((param_1 == 2) && ((int)uVar3 < 5)) {
          cVar5 = (&DAT_02149ce6)[uVar3];
        }
        if (cVar5 == cVar7) {
          uVar3 = (uint)(param_4 != uVar8);
          if (param_4 == uVar8) {
            return uVar2;
          }
          goto LAB_008eeae0;
        }
      }
      uVar3 = 0;
LAB_008eeae0:
      uVar8 = ((param_3 & 0xff) + 1) % 5;
      uVar2 = FUN_008ee550(param_1,param_2,uVar8);
      if (uVar2 != 5) {
        cVar5 = '\x02';
        if ((param_1 == 2) && ((int)uVar2 < 5)) {
          cVar5 = (&DAT_02149ce6)[uVar2];
        }
        if (cVar5 == cVar7) {
          if (uVar3 == uVar1) {
            return uVar8;
          }
          uVar3 = uVar3 + 1;
        }
      }
      uVar8 = ((param_3 & 0xff) + 2) % 5;
      uVar2 = FUN_008ee550(param_1,param_2,uVar8);
      if (uVar2 != 5) {
        cVar5 = '\x02';
        if ((param_1 == 2) && ((int)uVar2 < 5)) {
          cVar5 = (&DAT_02149ce6)[uVar2];
        }
        if (cVar5 == cVar7) {
          if (uVar3 == uVar1) {
            return uVar8;
          }
          uVar3 = uVar3 + 1;
        }
      }
      uVar8 = ((param_3 & 0xff) + 3) % 5;
      uVar2 = FUN_008ee550(param_1,param_2,uVar8);
      if (uVar2 != 5) {
        cVar5 = '\x02';
        if ((param_1 == 2) && ((int)uVar2 < 5)) {
          cVar5 = (&DAT_02149ce6)[uVar2];
        }
        if (cVar5 == cVar7) {
          if (uVar3 == uVar1) {
            return uVar8;
          }
          uVar3 = uVar3 + 1;
        }
      }
      uVar8 = ((param_3 & 0xff) + 4) % 5;
      uVar2 = FUN_008ee550(param_1,param_2,uVar8);
      if (uVar2 == 5) {
        return param_3;
      }
      cVar5 = '\x02';
      if ((param_1 == 2) && ((int)uVar2 < 5)) {
        cVar5 = (&DAT_02149ce6)[uVar2];
      }
      if (cVar5 != cVar7) {
        return param_3;
      }
      if (uVar3 == uVar1) {
        return uVar8;
      }
      return param_3;
    }
    uVar3 = (param_3 & 0xff) % 5;
    uVar2 = FUN_008ee550(1,param_2,uVar3);
    if (uVar2 == 5) {
LAB_008ee99c:
      uVar2 = 0;
    }
    else {
      if ((int)uVar2 < 5) {
        if ((&DAT_02149ce1)[uVar2] == cVar7) goto LAB_008eed64;
        goto LAB_008ee99c;
      }
      if (cVar7 != '\x02') goto LAB_008ee99c;
LAB_008eed64:
      uVar2 = (uint)(param_4 != uVar8);
      if (param_4 == uVar8) {
        return uVar3;
      }
    }
    uVar8 = ((param_3 & 0xff) + 1) % 5;
    uVar3 = FUN_008ee550(1,param_2,uVar8);
    if (uVar3 != 5) {
      if ((int)uVar3 < 5) {
        if ((&DAT_02149ce1)[uVar3] == cVar7) goto LAB_008eed88;
      }
      else if (cVar7 == '\x02') {
LAB_008eed88:
        if (uVar2 == uVar1) {
          return uVar8;
        }
        uVar2 = uVar2 + 1;
      }
    }
    uVar8 = ((param_3 & 0xff) + 2) % 5;
    uVar3 = FUN_008ee550(1,param_2,uVar8);
    if (uVar3 != 5) {
      if ((int)uVar3 < 5) {
        if ((&DAT_02149ce1)[uVar3] == cVar7) goto LAB_008eea10;
      }
      else if (cVar7 == '\x02') {
LAB_008eea10:
        if (uVar2 == uVar1) {
          return uVar8;
        }
        uVar2 = uVar2 + 1;
      }
    }
    uVar8 = ((param_3 & 0xff) + 3) % 5;
    uVar3 = FUN_008ee550(1,param_2,uVar8);
    if (uVar3 != 5) {
      if ((int)uVar3 < 5) {
        if ((&DAT_02149ce1)[uVar3] == cVar7) goto LAB_008eeed0;
      }
      else if (cVar7 == '\x02') {
LAB_008eeed0:
        if (uVar2 == uVar1) {
          return uVar8;
        }
        uVar2 = uVar2 + 1;
      }
    }
    uVar8 = ((param_3 & 0xff) + 4) % 5;
    uVar3 = FUN_008ee550(1,param_2,uVar8);
    if (uVar3 == 5) {
      return param_3;
    }
    if ((int)uVar3 < 5) {
      cVar5 = (&DAT_02149ce1)[uVar3];
joined_r0x008eee9c:
      if (cVar5 != cVar7) {
        return param_3;
      }
      goto LAB_008eef20;
    }
  }
  if (cVar7 != '\x02') {
    return param_3;
  }
LAB_008eef20:
  if (uVar2 == uVar1) {
    return uVar8;
  }
  return param_3;
}


