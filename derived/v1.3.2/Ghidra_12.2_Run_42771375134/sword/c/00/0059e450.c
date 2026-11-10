/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0059e450; name: FUN_0059e450
 */


uint FUN_0059e450(undefined8 param_1,uint param_2,uint param_3,undefined4 param_4,undefined8 param_5
                 ,undefined8 param_6,undefined4 param_7,undefined1 *param_8,undefined8 param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint unaff_w25;
  ulong uVar7;
  
  puVar3 = PTR_DAT_02713aa0;
  if (((param_3 >> 0x14 & 1) == 0) && (*PTR_DAT_02713aa0 != '\0')) {
    uVar4 = FUN_0059e130(param_1,param_6,param_7,param_8,param_9);
    return uVar4 & (int)uVar4 >> 0x1f;
  }
  puVar1 = PTR_DAT_02713ca0;
  puVar2 = PTR_DAT_02713ca8;
  if (((param_2 >> 4 & 1) != 0) &&
     (unaff_w25 = FUN_0059e340(param_1,param_4,param_5,param_7,param_9), puVar1 = PTR_DAT_02713ca0,
     puVar2 = PTR_DAT_02713ca8, (int)unaff_w25 < 0)) {
    return unaff_w25;
  }
  PTR_DAT_02713ca0 = puVar1;
  PTR_DAT_02713ca8 = puVar2;
  if ((param_3 >> 0x14 & 1) == 0) {
    uVar7 = 0;
    do {
      if ((1 << (ulong)((uint)uVar7 & 0x1f) & param_2) != 0) {
        if (*puVar3 == '\0') {
          if (param_8 != (undefined1 *)0x0) {
            *param_8 = 0;
          }
          if (*(long *)(puVar1 + uVar7 * 8) != 0) {
            uVar4 = FUN_0059d050(param_1,param_1,*(long *)(puVar1 + uVar7 * 8),uVar7 & 0xffffffff,
                                 *(undefined4 *)(puVar2 + uVar7 * 4),param_3,param_4,1,0,param_6,
                                 param_7,param_6,param_7,param_8);
            if ((int)uVar4 < 0) {
              return uVar4;
            }
            *(undefined8 *)(puVar1 + uVar7 * 8) = 0;
            *(undefined4 *)(puVar2 + uVar7 * 4) = 0;
          }
        }
        else {
          uVar4 = FUN_0059e130(param_1,param_6,param_7,param_8,0);
          if ((int)uVar4 < 0) {
            return uVar4;
          }
        }
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < 8);
  }
  else {
    uVar4 = unaff_w25;
    if ((param_2 & 1) != 0) {
      if (param_8 != (undefined1 *)0x0) {
        *param_8 = 0;
      }
      if (*(long *)PTR_DAT_02713ca0 != 0) {
        uVar5 = FUN_0059d050(param_1,param_1,*(long *)PTR_DAT_02713ca0,0,
                             *(undefined4 *)PTR_DAT_02713ca8,param_3,param_4,1,0,param_6,param_7,
                             param_6,param_7,param_8);
        uVar4 = uVar5;
        if (-1 < (int)uVar5) {
          uVar4 = unaff_w25;
        }
        if (((int)uVar5 < 0) && ((int)uVar5 < 0)) {
          return uVar4;
        }
      }
    }
    uVar5 = uVar4;
    if ((param_2 >> 1 & 1) != 0) {
      if (param_8 != (undefined1 *)0x0) {
        *param_8 = 0;
      }
      if (*(long *)(PTR_DAT_02713ca0 + 8) != 0) {
        uVar6 = FUN_0059d050(param_1,param_1,*(long *)(PTR_DAT_02713ca0 + 8),1,
                             *(undefined4 *)(PTR_DAT_02713ca8 + 4),param_3,param_4,1,0,param_6,
                             param_7,param_6,param_7,param_8);
        uVar5 = uVar6;
        if (-1 < (int)uVar6) {
          uVar5 = uVar4;
        }
        if (((int)uVar6 < 0) && ((int)uVar6 < 0)) {
          return uVar5;
        }
      }
    }
    uVar4 = uVar5;
    if ((param_2 >> 2 & 1) != 0) {
      if (param_8 != (undefined1 *)0x0) {
        *param_8 = 0;
      }
      if (*(long *)(PTR_DAT_02713ca0 + 0x10) != 0) {
        uVar6 = FUN_0059d050(param_1,param_1,*(long *)(PTR_DAT_02713ca0 + 0x10),2,
                             *(undefined4 *)(PTR_DAT_02713ca8 + 8),param_3,param_4,1,0,param_6,
                             param_7,param_6,param_7,param_8);
        uVar4 = uVar6;
        if (-1 < (int)uVar6) {
          uVar4 = uVar5;
        }
        if (((int)uVar6 < 0) && ((int)uVar6 < 0)) {
          return uVar4;
        }
      }
    }
    uVar5 = uVar4;
    if ((param_2 >> 3 & 1) != 0) {
      if (param_8 != (undefined1 *)0x0) {
        *param_8 = 0;
      }
      if (*(long *)(PTR_DAT_02713ca0 + 0x18) != 0) {
        uVar6 = FUN_0059d050(param_1,param_1,*(long *)(PTR_DAT_02713ca0 + 0x18),3,
                             *(undefined4 *)(PTR_DAT_02713ca8 + 0xc),param_3,param_4,1,0,param_6,
                             param_7,param_6,param_7,param_8);
        uVar5 = uVar6;
        if (-1 < (int)uVar6) {
          uVar5 = uVar4;
        }
        if (((int)uVar6 < 0) && ((int)uVar6 < 0)) {
          return uVar5;
        }
      }
    }
    uVar4 = uVar5;
    if ((param_2 >> 4 & 1) != 0) {
      if (param_8 != (undefined1 *)0x0) {
        *param_8 = 0;
      }
      if (*(long *)(PTR_DAT_02713ca0 + 0x20) != 0) {
        uVar6 = FUN_0059d050(param_1,param_1,*(long *)(PTR_DAT_02713ca0 + 0x20),4,
                             *(undefined4 *)(PTR_DAT_02713ca8 + 0x10),param_3,param_4,1,0,param_6,
                             param_7,param_6,param_7,param_8);
        uVar4 = uVar6;
        if (-1 < (int)uVar6) {
          uVar4 = uVar5;
        }
        if (((int)uVar6 < 0) && ((int)uVar6 < 0)) {
          return uVar4;
        }
      }
    }
    uVar5 = uVar4;
    if ((param_2 >> 5 & 1) != 0) {
      if (param_8 != (undefined1 *)0x0) {
        *param_8 = 0;
      }
      if (*(long *)(PTR_DAT_02713ca0 + 0x28) != 0) {
        uVar6 = FUN_0059d050(param_1,param_1,*(long *)(PTR_DAT_02713ca0 + 0x28),5,
                             *(undefined4 *)(PTR_DAT_02713ca8 + 0x14),param_3,param_4,1,0,param_6,
                             param_7,param_6,param_7,param_8);
        uVar5 = uVar6;
        if (-1 < (int)uVar6) {
          uVar5 = uVar4;
        }
        if (((int)uVar6 < 0) && ((int)uVar6 < 0)) {
          return uVar5;
        }
      }
    }
    uVar4 = uVar5;
    if ((param_2 >> 6 & 1) != 0) {
      if (param_8 != (undefined1 *)0x0) {
        *param_8 = 0;
      }
      if (*(long *)(PTR_DAT_02713ca0 + 0x30) != 0) {
        uVar6 = FUN_0059d050(param_1,param_1,*(long *)(PTR_DAT_02713ca0 + 0x30),6,
                             *(undefined4 *)(PTR_DAT_02713ca8 + 0x18),param_3,param_4,1,0,param_6,
                             param_7,param_6,param_7,param_8);
        uVar4 = uVar6;
        if (-1 < (int)uVar6) {
          uVar4 = uVar5;
        }
        if (((int)uVar6 < 0) && ((int)uVar6 < 0)) {
          return uVar4;
        }
      }
    }
    if ((param_2 >> 7 & 1) != 0) {
      if (param_8 != (undefined1 *)0x0) {
        *param_8 = 0;
      }
      if (*(long *)(PTR_DAT_02713ca0 + 0x38) != 0) {
        uVar6 = FUN_0059d050(param_1,param_1,*(long *)(PTR_DAT_02713ca0 + 0x38),7,
                             *(undefined4 *)(PTR_DAT_02713ca8 + 0x1c),param_3,param_4,1,0,param_6,
                             param_7,param_6,param_7,param_8);
        uVar5 = uVar6;
        if (-1 < (int)uVar6) {
          uVar5 = uVar4;
        }
        if (((int)uVar6 < 0) && ((int)uVar6 < 0)) {
          return uVar5;
        }
      }
    }
  }
  return 0;
}


