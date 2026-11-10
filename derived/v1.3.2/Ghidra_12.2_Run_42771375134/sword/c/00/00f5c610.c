/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f5c610; name: FUN_00f5c610
 */


long * FUN_00f5c610(long *param_1,byte *param_2)

{
  size_t sVar1;
  byte *pbVar2;
  byte bVar3;
  ulong uVar4;
  size_t __n;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  void *pvVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auStack_48 [8];
  
  uVar6 = *(ulong *)(param_2 + 8);
  pbVar2 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar2 = param_2 + 1;
    uVar6 = (ulong)(*param_2 >> 1);
  }
  uVar6 = FUN_00f5c830(auStack_48,pbVar2,uVar6);
  uVar10 = param_1[1];
  if (uVar10 != 0) {
    uVar11 = uVar10 - 1;
    if ((uVar11 & uVar10) == 0) {
      uVar9 = uVar11 & uVar6;
      plVar7 = *(long **)(*param_1 + uVar9 * 8);
    }
    else {
      uVar9 = uVar6;
      if (uVar10 <= uVar6) {
        uVar9 = 0;
        if (uVar10 != 0) {
          uVar9 = uVar6 / uVar10;
        }
        uVar9 = uVar6 - uVar9 * uVar10;
      }
      plVar7 = *(long **)(*param_1 + uVar9 * 8);
    }
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      pbVar2 = param_2 + 1;
      __n = (ulong)(*param_2 >> 1);
      if ((*param_2 & 1) != 0) {
        pbVar2 = *(byte **)(param_2 + 0x10);
        __n = *(size_t *)(param_2 + 8);
      }
      if ((uVar11 & uVar10) == 0) {
        while (uVar10 = plVar7[1], uVar10 == uVar6 || (uVar10 & uVar11) == uVar9) {
          if (uVar10 == uVar6) {
            bVar3 = *(byte *)(plVar7 + 2);
            sVar1 = (ulong)(bVar3 >> 1);
            if ((bVar3 & 1) != 0) {
              sVar1 = plVar7[3];
            }
            if (sVar1 == __n) {
              pvVar8 = (void *)plVar7[4];
              if ((bVar3 & 1) == 0) {
                pvVar8 = (void *)((long)plVar7 + 0x11);
              }
              if ((bVar3 & 1) == 0) {
                if (__n == 0) {
                  return plVar7;
                }
                uVar10 = 0;
                while (*(byte *)((long)plVar7 + uVar10 + 0x11) == pbVar2[uVar10]) {
                  uVar10 = uVar10 + 1;
                  if (bVar3 >> 1 == uVar10) {
                    return plVar7;
                  }
                }
              }
              else {
                if (__n == 0) {
                  return plVar7;
                }
                iVar5 = memcmp(pvVar8,pbVar2,__n);
                if (iVar5 == 0) {
                  return plVar7;
                }
              }
            }
          }
          plVar7 = (long *)*plVar7;
          if (plVar7 == (long *)0x0) {
            return (long *)0x0;
          }
        }
      }
      else {
        do {
          uVar11 = plVar7[1];
          if (uVar11 == uVar6) {
            bVar3 = *(byte *)(plVar7 + 2);
            sVar1 = (ulong)(bVar3 >> 1);
            if ((bVar3 & 1) != 0) {
              sVar1 = plVar7[3];
            }
            if (sVar1 == __n) {
              pvVar8 = (void *)plVar7[4];
              if ((bVar3 & 1) == 0) {
                pvVar8 = (void *)((long)plVar7 + 0x11);
              }
              if ((bVar3 & 1) == 0) {
                if (__n == 0) {
                  return plVar7;
                }
                uVar11 = 0;
                while (*(byte *)((long)plVar7 + uVar11 + 0x11) == pbVar2[uVar11]) {
                  uVar11 = uVar11 + 1;
                  if (bVar3 >> 1 == uVar11) {
                    return plVar7;
                  }
                }
              }
              else {
                if (__n == 0) {
                  return plVar7;
                }
                iVar5 = memcmp(pvVar8,pbVar2,__n);
                if (iVar5 == 0) {
                  return plVar7;
                }
              }
            }
          }
          else {
            if (uVar10 <= uVar11) {
              uVar4 = 0;
              if (uVar10 != 0) {
                uVar4 = uVar11 / uVar10;
              }
              uVar11 = uVar11 - uVar4 * uVar10;
            }
            if (uVar11 != uVar9) {
              return (long *)0x0;
            }
          }
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
      }
    }
  }
  return (long *)0x0;
}


