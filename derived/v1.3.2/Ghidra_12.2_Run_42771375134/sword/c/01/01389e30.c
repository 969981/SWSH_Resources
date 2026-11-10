/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01389e30; name: FUN_01389e30
 */


char FUN_01389e30(long param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  float *pfVar7;
  long *plVar8;
  
  plVar8 = (long *)(param_1 + 0x90);
  lVar4 = *plVar8;
  plVar5 = plVar8;
  if (lVar4 == 0) {
    if (*param_2 == 0) {
      cVar1 = false;
      pfVar7 = (float *)(param_1 + 0x98);
      lVar4 = *(long *)(param_1 + 0xa0);
      goto joined_r0x01389f7c;
    }
LAB_01389ea8:
    plVar5 = (long *)(param_1 + 0xa0);
    lVar4 = *plVar5;
    if (lVar4 == 0) {
      if (*param_2 != 0) goto LAB_01389ee4;
    }
    else {
      plVar3 = (long *)(lVar4 + 0x48);
      (**(code **)(*plVar3 + 0x10))(plVar3);
      lVar6 = *param_2;
      (**(code **)(*plVar3 + 0x18))(plVar3);
      if (lVar4 != lVar6) {
LAB_01389ee4:
        plVar5 = (long *)(param_1 + 0xb0);
        lVar4 = *plVar5;
        if (lVar4 == 0) {
          if (*param_2 != 0) goto LAB_01389f20;
        }
        else {
          plVar3 = (long *)(lVar4 + 0x48);
          (**(code **)(*plVar3 + 0x10))(plVar3);
          lVar6 = *param_2;
          (**(code **)(*plVar3 + 0x18))(plVar3);
          if (lVar4 != lVar6) {
LAB_01389f20:
            plVar5 = (long *)(param_1 + 0xc0);
            lVar4 = *plVar5;
            if (lVar4 == 0) {
              if (*param_2 != 0) goto LAB_01389f98;
            }
            else {
              plVar3 = (long *)(lVar4 + 0x48);
              (**(code **)(*plVar3 + 0x10))(plVar3);
              lVar6 = *param_2;
              (**(code **)(*plVar3 + 0x18))(plVar3);
              if (lVar4 != lVar6) {
LAB_01389f98:
                plVar5 = (long *)(param_1 + 0xd0);
              }
            }
          }
        }
      }
    }
    lVar4 = *plVar8;
    pfVar7 = (float *)(plVar5 + 1);
    cVar1 = false;
    if (lVar4 != 0) {
LAB_01389fa8:
      plVar8 = (long *)(lVar4 + 0x48);
      (**(code **)(*plVar8 + 0x10))(plVar8);
      if (lVar4 == *plVar5) {
        cVar1 = false;
      }
      else {
        cVar1 = ABS(*(float *)(param_1 + 0x98) - *pfVar7) < DAT_01d4c554;
      }
      (**(code **)(*plVar8 + 0x18))(plVar8);
    }
  }
  else {
    plVar3 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    lVar6 = *param_2;
    (**(code **)(*plVar3 + 0x18))(plVar3);
    if (lVar4 != lVar6) goto LAB_01389ea8;
    lVar4 = *plVar8;
    pfVar7 = (float *)(param_1 + 0x98);
    if (lVar4 != 0) goto LAB_01389fa8;
    cVar1 = false;
  }
  lVar4 = *(long *)(param_1 + 0xa0);
joined_r0x01389f7c:
  if (lVar4 != 0) {
    plVar8 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar8 + 0x10))(plVar8);
    if (lVar4 == *plVar5) {
      bVar2 = false;
    }
    else {
      bVar2 = ABS(*(float *)(param_1 + 0xa8) - *pfVar7) < DAT_01d4c554;
    }
    (**(code **)(*plVar8 + 0x18))(plVar8);
    cVar1 = cVar1 + bVar2;
  }
  lVar4 = *(long *)(param_1 + 0xb0);
  if (lVar4 != 0) {
    plVar8 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar8 + 0x10))(plVar8);
    if (lVar4 == *plVar5) {
      bVar2 = false;
    }
    else {
      bVar2 = ABS(*(float *)(param_1 + 0xb8) - *pfVar7) < DAT_01d4c554;
    }
    (**(code **)(*plVar8 + 0x18))(plVar8);
    cVar1 = cVar1 + bVar2;
  }
  lVar4 = *(long *)(param_1 + 0xc0);
  if (lVar4 != 0) {
    plVar8 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar8 + 0x10))(plVar8);
    if (lVar4 == *plVar5) {
      bVar2 = false;
    }
    else {
      bVar2 = ABS(*(float *)(param_1 + 200) - *pfVar7) < DAT_01d4c554;
    }
    (**(code **)(*plVar8 + 0x18))(plVar8);
    cVar1 = cVar1 + bVar2;
  }
  return cVar1;
}


