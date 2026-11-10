/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007fcba0; name: FUN_007fcba0
 */


long * FUN_007fcba0(long *param_1,byte *param_2)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  ulong uVar3;
  int iVar4;
  byte bVar5;
  byte *__s2;
  byte *pbVar6;
  long *plVar7;
  void *pvVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  
  bVar2 = *param_2;
  __s2 = *(byte **)(param_2 + 0x10);
  if ((bVar2 & 1) == 0) {
    __s2 = param_2 + 1;
  }
  bVar5 = *__s2;
  if (bVar5 == 0) {
    uVar9 = 0;
    uVar11 = param_1[1];
  }
  else {
    uVar9 = 0;
    pbVar6 = __s2;
    do {
      pbVar6 = pbVar6 + 1;
      uVar9 = uVar9 * 5 + (ulong)bVar5;
      bVar5 = *pbVar6;
    } while (bVar5 != 0);
    uVar11 = param_1[1];
  }
  if (uVar11 != 0) {
    uVar12 = uVar11 - 1;
    if ((uVar12 & uVar11) == 0) {
      uVar10 = uVar12 & uVar9;
      plVar7 = *(long **)(*param_1 + uVar10 * 8);
    }
    else {
      uVar10 = uVar9;
      if (uVar11 <= uVar9) {
        uVar10 = 0;
        if (uVar11 != 0) {
          uVar10 = uVar9 / uVar11;
        }
        uVar10 = uVar9 - uVar10 * uVar11;
      }
      plVar7 = *(long **)(*param_1 + uVar10 * 8);
    }
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      __n = (ulong)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        __n = *(size_t *)(param_2 + 8);
      }
      if ((uVar12 & uVar11) == 0) {
        while (uVar11 = plVar7[1], uVar11 == uVar9 || (uVar11 & uVar12) == uVar10) {
          if (uVar11 == uVar9) {
            bVar2 = *(byte *)(plVar7 + 2);
            sVar1 = (ulong)(bVar2 >> 1);
            if ((bVar2 & 1) != 0) {
              sVar1 = plVar7[3];
            }
            if (sVar1 == __n) {
              pvVar8 = (void *)plVar7[4];
              if ((bVar2 & 1) == 0) {
                pvVar8 = (void *)((long)plVar7 + 0x11);
              }
              if ((bVar2 & 1) == 0) {
                if (__n == 0) {
                  return plVar7;
                }
                uVar11 = 0;
                while (*(byte *)((long)plVar7 + uVar11 + 0x11) == __s2[uVar11]) {
                  uVar11 = uVar11 + 1;
                  if (bVar2 >> 1 == uVar11) {
                    return plVar7;
                  }
                }
              }
              else {
                if (__n == 0) {
                  return plVar7;
                }
                iVar4 = memcmp(pvVar8,__s2,__n);
                if (iVar4 == 0) {
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
          uVar12 = plVar7[1];
          if (uVar12 == uVar9) {
            bVar2 = *(byte *)(plVar7 + 2);
            sVar1 = (ulong)(bVar2 >> 1);
            if ((bVar2 & 1) != 0) {
              sVar1 = plVar7[3];
            }
            if (sVar1 == __n) {
              pvVar8 = (void *)plVar7[4];
              if ((bVar2 & 1) == 0) {
                pvVar8 = (void *)((long)plVar7 + 0x11);
              }
              if ((bVar2 & 1) == 0) {
                if (__n == 0) {
                  return plVar7;
                }
                uVar12 = 0;
                while (*(byte *)((long)plVar7 + uVar12 + 0x11) == __s2[uVar12]) {
                  uVar12 = uVar12 + 1;
                  if (bVar2 >> 1 == uVar12) {
                    return plVar7;
                  }
                }
              }
              else {
                if (__n == 0) {
                  return plVar7;
                }
                iVar4 = memcmp(pvVar8,__s2,__n);
                if (iVar4 == 0) {
                  return plVar7;
                }
              }
            }
          }
          else {
            if (uVar11 <= uVar12) {
              uVar3 = 0;
              if (uVar11 != 0) {
                uVar3 = uVar12 / uVar11;
              }
              uVar12 = uVar12 - uVar3 * uVar11;
            }
            if (uVar12 != uVar10) {
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


