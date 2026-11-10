/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00205820; name: FUN_00205820
 */


long FUN_00205820(long *param_1,undefined8 param_2)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  undefined1 local_40 [8];
  undefined4 local_38 [2];
  
  if (*(uint *)(param_1 + 1) >> 0x1e == 2) {
    lVar3 = *param_1;
    if (*(char *)(lVar3 + 0x1fb9) == '\0') goto LAB_002058b0;
  }
  else {
    if (*(uint *)(param_1 + 1) >> 0x1e != 3) {
      lVar3 = *param_1;
LAB_002058b0:
      if (lVar3 == 0) {
        FUN_003f8b40(param_1 + 4,param_2);
        lVar3 = param_1[-1];
      }
      else {
        plVar1 = param_1 + 4;
        FUN_003e85d0(lVar3 + 0x10,plVar1);
        FUN_003f8b40(plVar1,param_2);
        FUN_003e85b0(lVar3 + 0x10,plVar1);
        lVar3 = param_1[-1];
      }
      if (lVar3 != 0) {
        local_38[0] = 1;
        local_40[0] = 0;
        FUN_003d9690(lVar3 + 0x80,param_1 + 4,local_38,local_40,0);
      }
      return 0;
    }
    lVar3 = *param_1;
  }
  FUN_001d1850(lVar3,param_1);
  uVar2 = *(uint *)(param_1 + 1);
  lVar3 = param_1[2];
  *(uint *)(param_1 + 1) = uVar2 | 1;
  if (lVar3 == 0) {
    lVar3 = FUN_001d1a00(*param_1,uVar2 >> 0x18 & 0xf);
    param_1[2] = lVar3;
  }
  FUN_0029a430(lVar3 + 0x38,param_2);
  return lVar3;
}


