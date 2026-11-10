/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007f7570; name: FUN_007f7570
 */


long * FUN_007f7570(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  int iVar2;
  byte bVar3;
  byte *pbVar4;
  long *plVar5;
  byte *__s2;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  __s2 = (byte *)*param_2;
  bVar3 = *__s2;
  if (bVar3 == 0) {
    uVar6 = 0;
    uVar8 = param_1[1];
  }
  else {
    uVar6 = 0;
    pbVar4 = __s2;
    do {
      pbVar4 = pbVar4 + 1;
      uVar6 = uVar6 * 5 + (ulong)bVar3;
      bVar3 = *pbVar4;
    } while (bVar3 != 0);
    uVar8 = param_1[1];
  }
  if (uVar8 != 0) {
    uVar9 = uVar8 - 1;
    if ((uVar9 & uVar8) == 0) {
      uVar7 = uVar9 & uVar6;
      plVar5 = *(long **)(*param_1 + uVar7 * 8);
    }
    else {
      uVar7 = uVar6;
      if (uVar8 <= uVar6) {
        uVar7 = 0;
        if (uVar8 != 0) {
          uVar7 = uVar6 / uVar8;
        }
        uVar7 = uVar6 - uVar7 * uVar8;
      }
      plVar5 = *(long **)(*param_1 + uVar7 * 8);
    }
    if (plVar5 != (long *)0x0) {
      plVar5 = (long *)*plVar5;
      if (plVar5 == (long *)0x0) {
        return (long *)0x0;
      }
      if ((uVar9 & uVar8) != 0) {
        do {
          uVar9 = plVar5[1];
          if (uVar6 == uVar9) {
            iVar2 = strcmp((char *)plVar5[2],(char *)__s2);
            if (iVar2 == 0) {
              return plVar5;
            }
          }
          else {
            if (uVar8 <= uVar9) {
              uVar1 = 0;
              if (uVar8 != 0) {
                uVar1 = uVar9 / uVar8;
              }
              uVar9 = uVar9 - uVar1 * uVar8;
            }
            if (uVar9 != uVar7) {
              return (long *)0x0;
            }
          }
          plVar5 = (long *)*plVar5;
          if (plVar5 == (long *)0x0) {
            return (long *)0x0;
          }
        } while( true );
      }
      while (uVar8 = plVar5[1], uVar6 == uVar8 || (uVar8 & uVar9) == uVar7) {
        if ((uVar6 == uVar8) && (iVar2 = strcmp((char *)plVar5[2],(char *)__s2), iVar2 == 0)) {
          return plVar5;
        }
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) {
          return (long *)0x0;
        }
      }
    }
  }
  return (long *)0x0;
}


