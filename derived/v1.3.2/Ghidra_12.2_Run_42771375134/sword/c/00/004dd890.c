/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004dd890; name: FUN_004dd890
 */


long FUN_004dd890(int param_1,uint param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  if (param_1 == 2) {
    lVar2 = FUN_00404690(*(undefined4 *)PTR_DAT_02712e28,0xf8);
    if (lVar2 != 0) {
      FUN_004df910(lVar2,param_3);
      return lVar2;
    }
  }
  else {
    uVar1 = param_2 >> 0x10;
    if (uVar1 == 0) {
      return 0;
    }
    if (uVar1 == 1) {
      if (param_1 == 3) {
        lVar2 = FUN_00404690(*(undefined4 *)PTR_DAT_02712e28,0x60);
        if (lVar2 != 0) {
          FUN_004dde40(lVar2,param_3);
          return lVar2;
        }
      }
      else if ((param_1 == 1) &&
              (lVar2 = FUN_00404690(*(undefined4 *)PTR_DAT_02712e28,0x98), lVar2 != 0)) {
        FUN_004de210(lVar2,param_3);
        return lVar2;
      }
    }
    else {
      if (uVar1 != 2) {
        lVar2 = FUN_0045f240(param_3,param_1,param_2);
        return lVar2;
      }
      if (param_1 == 3) {
        lVar2 = FUN_00404690(*(undefined4 *)PTR_DAT_02712e28,0x70);
        if (lVar2 != 0) {
          FUN_004de8e0(lVar2,param_3);
          return lVar2;
        }
      }
      else {
        if (param_1 != 1) {
          return 0;
        }
        lVar2 = FUN_00404690(*(undefined4 *)PTR_DAT_02712e28,0xa0);
        if (lVar2 != 0) {
          FUN_004df0e0(lVar2,param_3);
          return lVar2;
        }
      }
    }
  }
  return 0;
}


