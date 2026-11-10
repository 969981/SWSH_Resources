/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004e1650; name: FUN_004e1650
 */


undefined8
FUN_004e1650(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
            undefined4 param_9,undefined4 param_10,undefined4 param_11,long *param_12)

{
  long *plVar1;
  undefined8 uVar2;
  
  if (param_3 == 0) {
    uVar2 = 0x1f;
  }
  else {
    plVar1 = (long *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x188);
    if (plVar1 != (long *)0x0) {
      FUN_004e1df0(plVar1,param_2,param_1,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                   param_10,param_11);
      *param_12 = (long)plVar1;
      uVar2 = (**(code **)(*plVar1 + 0x10))(plVar1);
      if ((int)uVar2 == 1) {
        return uVar2;
      }
      FUN_004c2ce0(*param_12);
    }
    uVar2 = 2;
    *param_12 = 0;
  }
  return uVar2;
}


