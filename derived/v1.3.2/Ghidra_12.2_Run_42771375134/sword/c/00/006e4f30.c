/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006e4f30; name: FUN_006e4f30
 */


long * FUN_006e4f30(long *param_1,ulong *param_2)

{
  ulong *puVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  
  uVar8 = param_2[3];
  uVar7 = param_1[1];
  puVar1 = param_2;
  if (uVar8 != 0) {
    puVar1 = param_2 + 1;
  }
  if (uVar7 == 0) {
    return (long *)0x0;
  }
  uVar5 = *puVar1;
  uVar9 = uVar7 - 1;
  if ((uVar9 & uVar7) == 0) {
    uVar6 = uVar9 & uVar5;
    plVar10 = *(long **)(*param_1 + uVar6 * 8);
  }
  else {
    uVar6 = uVar5;
    if (uVar7 <= uVar5) {
      uVar6 = 0;
      if (uVar7 != 0) {
        uVar6 = uVar5 / uVar7;
      }
      uVar6 = uVar5 - uVar6 * uVar7;
    }
    plVar10 = *(long **)(*param_1 + uVar6 * 8);
  }
  if (plVar10 == (long *)0x0) {
    return (long *)0x0;
  }
  plVar10 = (long *)*plVar10;
  if (plVar10 != (long *)0x0) {
    if ((uVar9 & uVar7) == 0) {
      do {
        uVar7 = plVar10[1];
        if (uVar7 != uVar5 && (uVar7 & uVar9) != uVar6) {
          return (long *)0x0;
        }
        if ((uVar7 == uVar5) && ((int)plVar10[7] == (int)param_2[5])) {
          puVar1 = (ulong *)(plVar10 + 2);
          if (plVar10[5] != 0) {
            puVar1 = (ulong *)(plVar10 + 3);
          }
          if (((uVar8 == 0) || (plVar10[5] == 0)) || (*puVar1 != uVar5)) {
            if (*puVar1 == uVar5) {
              return plVar10;
            }
          }
          else {
            uVar7 = plVar10[2];
            plVar2 = (long *)PTR_DAT_02710920;
            if (uVar7 != 0) {
              plVar2 = (long *)(uVar7 + 0x58);
            }
            plVar3 = (long *)PTR_DAT_02710920;
            if (*param_2 != 0) {
              plVar3 = (long *)(*param_2 + 0x58);
            }
            if (*plVar2 == *plVar3) {
              return plVar10;
            }
          }
        }
        plVar10 = (long *)*plVar10;
      } while (plVar10 != (long *)0x0);
    }
    else if (uVar8 == 0) {
      do {
        uVar8 = plVar10[1];
        if (uVar8 == uVar5) {
          if ((int)plVar10[7] == (int)param_2[5]) {
            lVar4 = 0x10;
            if (plVar10[5] != 0) {
              lVar4 = 0x18;
            }
            if (*(ulong *)((long)plVar10 + lVar4) == uVar5) {
              return plVar10;
            }
          }
        }
        else {
          if (uVar7 <= uVar8) {
            uVar9 = 0;
            if (uVar7 != 0) {
              uVar9 = uVar8 / uVar7;
            }
            uVar8 = uVar8 - uVar9 * uVar7;
          }
          if (uVar8 != uVar6) {
            return (long *)0x0;
          }
        }
        plVar10 = (long *)*plVar10;
      } while (plVar10 != (long *)0x0);
    }
    else {
      do {
        uVar8 = plVar10[1];
        if (uVar8 == uVar5) {
          if ((int)plVar10[7] == (int)param_2[5]) {
            puVar1 = (ulong *)(plVar10 + 2);
            if (plVar10[5] != 0) {
              puVar1 = (ulong *)(plVar10 + 3);
            }
            if ((plVar10[5] == 0) || (*puVar1 != uVar5)) {
              if (*puVar1 == uVar5) {
                return plVar10;
              }
            }
            else {
              uVar8 = plVar10[2];
              plVar2 = (long *)PTR_DAT_02710920;
              if (uVar8 != 0) {
                plVar2 = (long *)(uVar8 + 0x58);
              }
              plVar3 = (long *)PTR_DAT_02710920;
              if (*param_2 != 0) {
                plVar3 = (long *)(*param_2 + 0x58);
              }
              if (*plVar2 == *plVar3) {
                return plVar10;
              }
            }
          }
        }
        else {
          if (uVar7 <= uVar8) {
            uVar9 = 0;
            if (uVar7 != 0) {
              uVar9 = uVar8 / uVar7;
            }
            uVar8 = uVar8 - uVar9 * uVar7;
          }
          if (uVar8 != uVar6) {
            return (long *)0x0;
          }
        }
        plVar10 = (long *)*plVar10;
      } while (plVar10 != (long *)0x0);
    }
  }
  return (long *)0x0;
}


