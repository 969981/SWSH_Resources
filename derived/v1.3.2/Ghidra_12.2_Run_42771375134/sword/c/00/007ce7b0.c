/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007ce7b0; name: FUN_007ce7b0
 */


/* WARNING: Removing unreachable block (ram,0x007ce8cc) */
/* WARNING: Removing unreachable block (ram,0x007ce9f4) */

void FUN_007ce7b0(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  
  plVar6 = *(long **)(param_1 + 0x20);
  plVar1 = *(long **)(param_1 + 0x28);
  if (plVar6 != plVar1) {
    lVar3 = *plVar6;
    while (lVar3 != *param_2) {
      plVar6 = plVar6 + 1;
      if (plVar1 == plVar6) goto LAB_007ce8dc;
      lVar3 = *plVar6;
    }
  }
  if ((plVar6 != plVar1) && (plVar2 = plVar6 + 1, plVar2 != plVar1)) {
    uVar5 = (long)plVar1 + (-0x10 - (long)plVar6);
    if (((uint)uVar5 >> 3 & 1) == 0) {
      plVar7 = plVar6;
      if (*plVar2 != *param_2) {
        plVar7 = plVar6 + 1;
        *plVar6 = *plVar2;
      }
      plVar2 = plVar6 + 2;
      plVar6 = plVar7;
    }
    if (7 < uVar5) {
      do {
        while (*plVar2 != *param_2) {
          plVar7 = plVar6 + 1;
          *plVar6 = *plVar2;
          lVar3 = plVar2[1];
          plVar6 = plVar7;
          if (lVar3 != *param_2) goto LAB_007ce89c;
LAB_007ce878:
          plVar2 = plVar2 + 2;
          if (plVar2 == plVar1) goto LAB_007ce8ac;
        }
        lVar3 = plVar2[1];
        plVar7 = plVar6;
        if (lVar3 == *param_2) goto LAB_007ce878;
LAB_007ce89c:
        plVar6 = plVar7 + 1;
        *plVar7 = lVar3;
        plVar2 = plVar2 + 2;
      } while (plVar2 != plVar1);
    }
LAB_007ce8ac:
    plVar1 = *(long **)(param_1 + 0x28);
  }
  if (plVar1 != plVar6) {
    *(long **)(param_1 + 0x28) = plVar6;
  }
LAB_007ce8dc:
  plVar6 = *(long **)(param_1 + 0x50);
  plVar1 = *(long **)(param_1 + 0x58);
  lVar3 = *param_2;
  if (plVar6 != plVar1) {
    lVar4 = *plVar6;
    while (lVar4 != lVar3) {
      plVar6 = plVar6 + 2;
      if (plVar1 == plVar6) {
        return;
      }
      lVar4 = *plVar6;
    }
  }
  if ((plVar6 != plVar1) && (plVar2 = plVar6 + 2, plVar2 != plVar1)) {
    uVar5 = (long)plVar1 + (-0x20 - (long)plVar6);
    if (((uint)uVar5 >> 4 & 1) == 0) {
      plVar7 = plVar6;
      if (*plVar2 != lVar3) {
        *(undefined8 *)((long)plVar6 + 6) = *(undefined8 *)((long)plVar6 + 0x16);
        plVar7 = plVar6 + 2;
        *plVar6 = *plVar2;
      }
      plVar2 = plVar6 + 4;
      plVar6 = plVar7;
    }
    if (0xf < uVar5) {
      do {
        while (*plVar2 != lVar3) {
          lVar4 = *plVar2;
          *(undefined8 *)((long)plVar6 + 6) = *(undefined8 *)((long)plVar2 + 6);
          plVar7 = plVar6 + 2;
          *plVar6 = lVar4;
          plVar6 = plVar7;
          if (plVar2[2] != lVar3) goto LAB_007ce9b8;
LAB_007ce98c:
          plVar2 = plVar2 + 4;
          if (plVar2 == plVar1) goto LAB_007ce9d4;
        }
        plVar7 = plVar6;
        if (plVar2[2] == lVar3) goto LAB_007ce98c;
LAB_007ce9b8:
        lVar4 = plVar2[2];
        *(undefined8 *)((long)plVar7 + 6) = *(undefined8 *)((long)plVar2 + 0x16);
        plVar6 = plVar7 + 2;
        *plVar7 = lVar4;
        plVar2 = plVar2 + 4;
      } while (plVar2 != plVar1);
    }
LAB_007ce9d4:
    plVar1 = *(long **)(param_1 + 0x58);
  }
  if (plVar1 != plVar6) {
    *(long **)(param_1 + 0x58) = plVar6;
  }
  return;
}


