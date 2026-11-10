/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0048cb60; name: FUN_0048cb60
 */


void FUN_0048cb60(float param_1,ulong *param_2,long *param_3,ulong param_4)

{
  byte bVar1;
  long *plVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  float local_14;
  
  if ((param_4 & 1) != 0) {
    plVar2 = (long *)*param_2;
    uVar3 = (uint)param_2[1];
    bVar1 = *(byte *)(param_3 + 1) & 1 ^ 1;
    plVar5 = plVar2;
    if (uVar3 == 0) {
LAB_0048cbd4:
      plVar4 = plVar2 + (ulong)uVar3 * 3;
      if (plVar5 != plVar4) {
        if ((*(byte *)(param_3 + 1) & 1) != 0) {
          return;
        }
        if (uVar3 != 0) {
          lVar6 = (ulong)uVar3 * 0x18;
          do {
            if ((*plVar2 == *param_3) && ((*(byte *)(plVar2 + 1) & 1) == bVar1)) goto LAB_0048cc28;
            lVar6 = lVar6 + -0x18;
            plVar2 = plVar2 + 3;
          } while (lVar6 != 0);
          plVar2 = plVar4;
        }
LAB_0048cc28:
        if (plVar4 != plVar2) {
          if (plVar2 < plVar4 + -3) {
            do {
              plVar5 = plVar2 + 3;
              *plVar2 = *plVar5;
              plVar2[1] = plVar2[4];
              plVar2[2] = plVar2[5];
              plVar2 = plVar5;
            } while (plVar5 < plVar4 + -3);
            uVar3 = (uint)param_2[1];
          }
          *(uint *)(param_2 + 1) = uVar3 - 1;
        }
      }
    }
    else {
      lVar6 = (ulong)uVar3 * 0x18;
      do {
        if ((*plVar5 == *param_3) && ((*(byte *)(plVar5 + 1) & 1) == bVar1)) goto LAB_0048cbd4;
        lVar6 = lVar6 + -0x18;
        plVar5 = plVar5 + 3;
      } while (lVar6 != 0);
    }
  }
  if ((param_1 != 1.0) || (((param_4 & 1) != 0 && ((*(byte *)(param_3 + 1) & 1) == 0)))) {
    local_14 = param_1;
    FUN_00483f70(param_2,*param_3,param_3[1],&local_14);
    return;
  }
  plVar2 = (long *)*param_2;
  uVar3 = (uint)param_2[1];
  plVar5 = plVar2 + (ulong)uVar3 * 3;
  if (uVar3 != 0) {
    lVar6 = (ulong)uVar3 * 0x18;
    do {
      if ((*plVar2 == *param_3) && (((*(byte *)(plVar2 + 1) ^ *(byte *)(param_3 + 1)) & 1) == 0))
      goto LAB_0048ccd8;
      lVar6 = lVar6 + -0x18;
      plVar2 = plVar2 + 3;
    } while (lVar6 != 0);
    plVar2 = plVar5;
  }
LAB_0048ccd8:
  if (plVar5 != plVar2) {
    if (plVar2 < plVar5 + -3) {
      do {
        plVar4 = plVar2 + 3;
        *plVar2 = *plVar4;
        plVar2[1] = plVar2[4];
        plVar2[2] = plVar2[5];
        plVar2 = plVar4;
      } while (plVar4 < plVar5 + -3);
      uVar3 = (uint)param_2[1];
    }
    *(uint *)(param_2 + 1) = uVar3 - 1;
  }
  return;
}


