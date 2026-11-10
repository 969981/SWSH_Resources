/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dfa430; name: FUN_00dfa430
 */


void FUN_00dfa430(long param_1,ulong param_2)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  
  if (*(char *)(param_1 + 0x750) == '\0') {
    return;
  }
  lVar7 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  lVar6 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1b8);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  }
  plVar8 = (long *)(param_1 + 0x70);
  plVar9 = (long *)(param_1 + 0xa0);
  bVar2 = *(int *)(param_1 + 0x758) != 2;
  if ((param_2 & 1) == 0) {
    if (bVar2) {
      bVar3 = FUN_01510f00(lVar6,*(undefined8 *)(param_1 + 0x760));
      if ((bVar3 & 1) != *(byte *)(param_1 + 0x8a8)) {
        *(byte *)(param_1 + 0x8a8) = bVar3 & 1;
        plVar5 = plVar8;
        if (*(int *)(param_1 + 0x758) != 0) {
          if (*(int *)(param_1 + 0x758) != 1) goto LAB_00dfa754;
          plVar5 = plVar9;
        }
        lVar7 = *plVar5;
        if ((lVar7 != 0) && (*(char *)(lVar7 + 0x291) != '\0')) {
          if ((bVar3 & 1) == 0) {
            FUN_00e015d0(lVar7,param_1 + 0x768,0x14);
            lVar4 = param_1 + 0x808;
          }
          else {
            FUN_00e015d0(lVar7,param_1 + 0x808,0x14);
            lVar4 = param_1 + 0x768;
          }
          FUN_00e01490(lVar7,lVar4,0x14);
        }
      }
    }
LAB_00dfa754:
    if (*(int *)(param_1 + 0x8b0) != 2) {
      bVar3 = FUN_01510f00(lVar6,*(undefined8 *)(param_1 + 0x8b8));
      if ((bVar3 & 1) != *(byte *)(param_1 + 0xa00)) {
        *(byte *)(param_1 + 0xa00) = bVar3 & 1;
        plVar5 = plVar8;
        if (*(int *)(param_1 + 0x8b0) != 0) {
          if (*(int *)(param_1 + 0x8b0) != 1) goto LAB_00dfa7ec;
          plVar5 = plVar9;
        }
        lVar7 = *plVar5;
        if ((lVar7 != 0) && (*(char *)(lVar7 + 0x291) != '\0')) {
          if ((bVar3 & 1) == 0) {
            FUN_00e015d0(lVar7,param_1 + 0x8c0,0x14);
            lVar4 = param_1 + 0x960;
          }
          else {
            FUN_00e015d0(lVar7,param_1 + 0x960,0x14);
            lVar4 = param_1 + 0x8c0;
          }
          FUN_00e01490(lVar7,lVar4,0x14);
        }
      }
    }
LAB_00dfa7ec:
    if (*(int *)(param_1 + 0xa08) != 2) {
      bVar3 = FUN_01510f00(lVar6,*(undefined8 *)(param_1 + 0xa10));
      if ((bVar3 & 1) != *(byte *)(param_1 + 0xb58)) {
        *(byte *)(param_1 + 0xb58) = bVar3 & 1;
        plVar5 = plVar8;
        if (*(int *)(param_1 + 0xa08) != 0) {
          if (*(int *)(param_1 + 0xa08) != 1) goto LAB_00dfa884;
          plVar5 = plVar9;
        }
        lVar7 = *plVar5;
        if ((lVar7 != 0) && (*(char *)(lVar7 + 0x291) != '\0')) {
          if ((bVar3 & 1) == 0) {
            FUN_00e015d0(lVar7,param_1 + 0xa18,0x14);
            lVar4 = param_1 + 0xab8;
          }
          else {
            FUN_00e015d0(lVar7,param_1 + 0xab8,0x14);
            lVar4 = param_1 + 0xa18;
          }
          FUN_00e01490(lVar7,lVar4,0x14);
        }
      }
    }
LAB_00dfa884:
    if (*(int *)(param_1 + 0xb60) == 2) goto LAB_00dfa8fc;
    bVar3 = FUN_01510f00(lVar6,*(undefined8 *)(param_1 + 0xb68));
    if ((bVar3 & 1) == *(byte *)(param_1 + 0xcb0)) goto LAB_00dfa8fc;
    *(byte *)(param_1 + 0xcb0) = bVar3 & 1;
    if (*(int *)(param_1 + 0xb60) != 0) {
      if (*(int *)(param_1 + 0xb60) != 1) goto LAB_00dfa8fc;
      plVar8 = plVar9;
    }
    lVar7 = *plVar8;
    if (lVar7 == 0) goto LAB_00dfa8fc;
    cVar1 = *(char *)(lVar7 + 0x291);
  }
  else {
    if (bVar2) {
      bVar3 = FUN_01510f00(lVar6,*(undefined8 *)(param_1 + 0x760));
      *(byte *)(param_1 + 0x8a8) = bVar3 & 1;
      plVar5 = plVar9;
      if (*(int *)(param_1 + 0x758) != 1) {
        if (*(int *)(param_1 + 0x758) != 0) goto LAB_00dfa5b4;
        plVar5 = plVar8;
      }
      lVar7 = *plVar5;
      if ((lVar7 != 0) && (*(char *)(lVar7 + 0x291) != '\0')) {
        if ((bVar3 & 1) == 0) {
          FUN_00e015d0(lVar7,param_1 + 0x768,0x14);
          lVar4 = param_1 + 0x808;
        }
        else {
          FUN_00e015d0(lVar7,param_1 + 0x808,0x14);
          lVar4 = param_1 + 0x768;
        }
        FUN_00e01490(lVar7,lVar4,0x14);
      }
    }
LAB_00dfa5b4:
    if (*(int *)(param_1 + 0x8b0) != 2) {
      bVar3 = FUN_01510f00(lVar6,*(undefined8 *)(param_1 + 0x8b8));
      *(byte *)(param_1 + 0xa00) = bVar3 & 1;
      plVar5 = plVar9;
      if (*(int *)(param_1 + 0x8b0) != 1) {
        if (*(int *)(param_1 + 0x8b0) != 0) goto LAB_00dfa640;
        plVar5 = plVar8;
      }
      lVar7 = *plVar5;
      if ((lVar7 != 0) && (*(char *)(lVar7 + 0x291) != '\0')) {
        if ((bVar3 & 1) == 0) {
          FUN_00e015d0(lVar7,param_1 + 0x8c0,0x14);
          lVar4 = param_1 + 0x960;
        }
        else {
          FUN_00e015d0(lVar7,param_1 + 0x960,0x14);
          lVar4 = param_1 + 0x8c0;
        }
        FUN_00e01490(lVar7,lVar4,0x14);
      }
    }
LAB_00dfa640:
    if (*(int *)(param_1 + 0xa08) != 2) {
      bVar3 = FUN_01510f00(lVar6,*(undefined8 *)(param_1 + 0xa10));
      *(byte *)(param_1 + 0xb58) = bVar3 & 1;
      plVar5 = plVar9;
      if (*(int *)(param_1 + 0xa08) != 1) {
        if (*(int *)(param_1 + 0xa08) != 0) goto LAB_00dfa6cc;
        plVar5 = plVar8;
      }
      lVar7 = *plVar5;
      if ((lVar7 != 0) && (*(char *)(lVar7 + 0x291) != '\0')) {
        if ((bVar3 & 1) == 0) {
          FUN_00e015d0(lVar7,param_1 + 0xa18,0x14);
          lVar4 = param_1 + 0xab8;
        }
        else {
          FUN_00e015d0(lVar7,param_1 + 0xab8,0x14);
          lVar4 = param_1 + 0xa18;
        }
        FUN_00e01490(lVar7,lVar4,0x14);
      }
    }
LAB_00dfa6cc:
    if (*(int *)(param_1 + 0xb60) == 2) goto LAB_00dfa8fc;
    bVar3 = FUN_01510f00(lVar6,*(undefined8 *)(param_1 + 0xb68));
    *(byte *)(param_1 + 0xcb0) = bVar3 & 1;
    if (*(int *)(param_1 + 0xb60) != 1) {
      if (*(int *)(param_1 + 0xb60) != 0) goto LAB_00dfa8fc;
      plVar9 = plVar8;
    }
    lVar7 = *plVar9;
    if (lVar7 == 0) goto LAB_00dfa8fc;
    cVar1 = *(char *)(lVar7 + 0x291);
  }
  if (cVar1 != '\0') {
    if ((bVar3 & 1) == 0) {
      FUN_00e015d0(lVar7,param_1 + 0xb70,0x14);
      param_1 = param_1 + 0xc10;
    }
    else {
      FUN_00e015d0(lVar7,param_1 + 0xc10,0x14);
      param_1 = param_1 + 0xb70;
    }
    FUN_00e01490(lVar7,param_1,0x14);
  }
LAB_00dfa8fc:
  if (lVar6 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00dfa91c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  return;
}


