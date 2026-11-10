/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008ef530; name: FUN_008ef530
 */


bool FUN_008ef530(int param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined *puVar2;
  char cVar3;
  char cVar4;
  
  uVar1 = FUN_008ee550();
  if (param_1 == 2) {
    if ((int)uVar1 < 5) {
      cVar3 = (&DAT_02149ce6)[uVar1];
    }
    else {
      cVar3 = '\x02';
    }
    cVar4 = '\x02';
    uVar1 = FUN_008ee550(2,param_2,param_4);
    if (4 < (int)uVar1) goto LAB_008ef63c;
    puVar2 = &DAT_02149ce6;
LAB_008ef638:
    cVar4 = puVar2[uVar1];
  }
  else {
    if (param_1 == 1) {
      if ((int)uVar1 < 5) {
        cVar3 = (&DAT_02149ce1)[uVar1];
      }
      else {
        cVar3 = '\x02';
      }
      uVar1 = FUN_008ee550(1,param_2,param_4);
      if ((int)uVar1 < 5) {
        puVar2 = &DAT_02149ce1;
        goto LAB_008ef638;
      }
    }
    else {
      if (param_1 != 0) {
        cVar3 = '\x02';
        cVar4 = '\x02';
        goto LAB_008ef63c;
      }
      if ((int)uVar1 < 5) {
        cVar3 = (&DAT_02149cdc)[uVar1];
      }
      else {
        cVar3 = '\x02';
      }
      uVar1 = FUN_008ee550(0,param_2,param_4);
      if ((int)uVar1 < 5) {
        puVar2 = &DAT_02149cdc;
        goto LAB_008ef638;
      }
    }
    cVar4 = '\x02';
  }
LAB_008ef63c:
  return cVar3 == cVar4;
}


