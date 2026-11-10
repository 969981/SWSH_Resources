/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008ef010; name: FUN_008ef010
 */


char FUN_008ef010(ulong param_1,undefined4 param_2,char param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  undefined *puVar5;
  
  iVar2 = (int)param_1;
  if (iVar2 == 0) {
    uVar3 = FUN_008ee550(param_1,param_2,0);
    cVar1 = false;
    if (uVar3 != 5) {
      if ((int)uVar3 < 5) {
        cVar1 = (&DAT_02149cdc)[uVar3];
      }
      else {
        cVar1 = '\x02';
      }
      cVar1 = cVar1 == param_3;
    }
    uVar3 = FUN_008ee550(0,param_2,1);
    if (uVar3 != 5) {
      if ((int)uVar3 < 5) {
        cVar4 = (&DAT_02149cdc)[uVar3];
      }
      else {
        cVar4 = '\x02';
      }
      if (cVar4 == param_3) {
        cVar1 = cVar1 + '\x01';
      }
    }
    uVar3 = FUN_008ee550(0,param_2,2);
    if (uVar3 != 5) {
      if ((int)uVar3 < 5) {
        cVar4 = (&DAT_02149cdc)[uVar3];
      }
      else {
        cVar4 = '\x02';
      }
      if (cVar4 == param_3) {
        cVar1 = cVar1 + '\x01';
      }
    }
    uVar3 = FUN_008ee550(0,param_2,3);
    if (uVar3 != 5) {
      if ((int)uVar3 < 5) {
        cVar4 = (&DAT_02149cdc)[uVar3];
      }
      else {
        cVar4 = '\x02';
      }
      if (cVar4 == param_3) {
        cVar1 = cVar1 + '\x01';
      }
    }
    uVar3 = FUN_008ee550(0,param_2,4);
    if (uVar3 == 5) {
      return cVar1;
    }
    if (4 < (int)uVar3) {
LAB_008ef3a4:
      cVar4 = '\x02';
      goto LAB_008ef3b8;
    }
    puVar5 = &DAT_02149cdc;
  }
  else {
    param_1 = param_1 & 0xffffffff;
    if (iVar2 == 1) {
      uVar3 = FUN_008ee550(1,param_2,0);
      cVar1 = false;
      if (uVar3 != 5) {
        if ((int)uVar3 < 5) {
          cVar1 = (&DAT_02149ce1)[uVar3];
        }
        else {
          cVar1 = '\x02';
        }
        cVar1 = cVar1 == param_3;
      }
      uVar3 = FUN_008ee550(1,param_2,1);
      if (uVar3 != 5) {
        if ((int)uVar3 < 5) {
          cVar4 = (&DAT_02149ce1)[uVar3];
        }
        else {
          cVar4 = '\x02';
        }
        if (cVar4 == param_3) {
          cVar1 = cVar1 + '\x01';
        }
      }
      uVar3 = FUN_008ee550(1,param_2,2);
      if (uVar3 != 5) {
        if ((int)uVar3 < 5) {
          cVar4 = (&DAT_02149ce1)[uVar3];
        }
        else {
          cVar4 = '\x02';
        }
        if (cVar4 == param_3) {
          cVar1 = cVar1 + '\x01';
        }
      }
      uVar3 = FUN_008ee550(1,param_2,3);
      if (uVar3 != 5) {
        if ((int)uVar3 < 5) {
          cVar4 = (&DAT_02149ce1)[uVar3];
        }
        else {
          cVar4 = '\x02';
        }
        if (cVar4 == param_3) {
          cVar1 = cVar1 + '\x01';
        }
      }
      uVar3 = FUN_008ee550(1,param_2,4);
      if (uVar3 == 5) {
        return cVar1;
      }
      if (4 < (int)uVar3) goto LAB_008ef3a4;
      puVar5 = &DAT_02149ce1;
    }
    else {
      uVar3 = FUN_008ee550(param_1,param_2,0);
      cVar1 = false;
      if (uVar3 != 5) {
        cVar1 = '\x02';
        if ((iVar2 == 2) && ((int)uVar3 < 5)) {
          cVar1 = (&DAT_02149ce6)[uVar3];
        }
        cVar1 = cVar1 == param_3;
      }
      uVar3 = FUN_008ee550(param_1,param_2,1);
      if (uVar3 != 5) {
        cVar4 = '\x02';
        if ((iVar2 == 2) && ((int)uVar3 < 5)) {
          cVar4 = (&DAT_02149ce6)[uVar3];
        }
        if (cVar4 == param_3) {
          cVar1 = cVar1 + '\x01';
        }
      }
      uVar3 = FUN_008ee550(param_1,param_2,2);
      if (uVar3 != 5) {
        cVar4 = '\x02';
        if ((iVar2 == 2) && ((int)uVar3 < 5)) {
          cVar4 = (&DAT_02149ce6)[uVar3];
        }
        if (cVar4 == param_3) {
          cVar1 = cVar1 + '\x01';
        }
      }
      uVar3 = FUN_008ee550(param_1,param_2,3);
      if (uVar3 != 5) {
        cVar4 = '\x02';
        if ((iVar2 == 2) && ((int)uVar3 < 5)) {
          cVar4 = (&DAT_02149ce6)[uVar3];
        }
        if (cVar4 == param_3) {
          cVar1 = cVar1 + '\x01';
        }
      }
      uVar3 = FUN_008ee550(param_1,param_2,4);
      if (uVar3 == 5) {
        return cVar1;
      }
      cVar4 = '\x02';
      if ((iVar2 != 2) || (4 < (int)uVar3)) goto LAB_008ef3b8;
      puVar5 = &DAT_02149ce6;
    }
  }
  cVar4 = puVar5[uVar3];
LAB_008ef3b8:
  if (cVar4 == param_3) {
    cVar1 = cVar1 + '\x01';
  }
  return cVar1;
}


