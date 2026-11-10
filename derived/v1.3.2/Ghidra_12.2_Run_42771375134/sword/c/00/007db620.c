/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007db620; name: FUN_007db620
 */


void FUN_007db620(long param_1,long param_2,short *param_3,int param_4,char param_5)

{
  long *plVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *local_78 [2];
  undefined1 local_64 [4];
  
  if ((param_2 == 0) || (lVar5 = *(long *)(param_1 + 0xd8), lVar5 == 0)) {
    return;
  }
  sVar3 = param_3[1];
  plVar7 = *(long **)(param_1 + 0xd0);
  sVar2 = *param_3;
  plVar8 = plVar7;
LAB_007db684:
  plVar1 = plVar8 + 2;
  do {
    if (*plVar8 != 0) {
      if (*(int *)(*plVar8 + 0x54) != 0) break;
      plVar7 = *(long **)(param_1 + 0xd0);
      lVar5 = *(long *)(param_1 + 0xd8);
    }
    plVar9 = plVar1;
    if (plVar1 != plVar7 + lVar5 * 2) {
      do {
        if (plVar9[-2] != 0) {
          (**(code **)(*(long *)(plVar9[-2] + 0x48) + 0x18))();
          plVar9[-2] = 0;
        }
        lVar6 = *plVar9;
        *plVar9 = 0;
        plVar9[-2] = lVar6;
        *(short *)(plVar9 + -1) = (short)plVar9[1];
        plVar9 = plVar9 + 2;
      } while (plVar7 + lVar5 * 2 != plVar9);
      plVar7 = *(long **)(param_1 + 0xd0);
      lVar5 = *(long *)(param_1 + 0xd8);
      plVar9 = plVar7 + lVar5 * 2;
    }
    if (plVar9[-2] != 0) {
      (**(code **)(*(long *)(plVar9[-2] + 0x48) + 0x18))();
      plVar9[-2] = 0;
      plVar7 = *(long **)(param_1 + 0xd0);
      lVar5 = *(long *)(param_1 + 0xd8);
    }
    lVar5 = lVar5 + -1;
    *(long *)(param_1 + 0xd8) = lVar5;
    if (plVar7 + lVar5 * 2 == plVar8) {
      return;
    }
  } while( true );
  FUN_007dbe40(local_78,*plVar8);
  sVar4 = (**(code **)(*local_78[0] + 0x38))();
  if (sVar4 == sVar2) {
    lVar5 = plVar8[1];
    if (local_78[0] != (long *)0x0) {
      (**(code **)(local_78[0][9] + 0x18))();
      local_78[0] = (long *)0x0;
    }
    if ((char)lVar5 == param_5) {
      if ((*(char *)((long)plVar8 + 9) == '\0') || ((char)sVar3 == *(char *)(param_1 + 0x480f0))) {
        FUN_007dbe40(local_78,*plVar8);
        (**(code **)(*local_78[0] + 0x40))(local_78[0],param_3 + 2,param_4 + -4,param_2);
        goto LAB_007db7b8;
      }
      if (*(long *)PTR_DAT_02716710 != 0) {
        local_64[0] = 0xfd;
        FUN_01962a60(local_78,*(long *)PTR_DAT_02716710,local_64,param_2);
        plVar7 = *(long **)(param_1 + 0xd0);
        lVar5 = *(long *)(param_1 + 0xd8);
        plVar9 = plVar7 + lVar5 * 2;
        goto joined_r0x007db818;
      }
    }
  }
  else {
LAB_007db7b8:
    if (local_78[0] != (long *)0x0) {
      (**(code **)(local_78[0][9] + 0x18))();
      local_78[0] = (long *)0x0;
    }
  }
  plVar7 = *(long **)(param_1 + 0xd0);
  lVar5 = *(long *)(param_1 + 0xd8);
  plVar9 = plVar7 + lVar5 * 2;
joined_r0x007db818:
  plVar8 = plVar1;
  if (plVar9 == plVar1) {
    return;
  }
  goto LAB_007db684;
}


