/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00635270; name: FUN_00635270
 */


void FUN_00635270(long *param_1)

{
  long *plVar1;
  long *plVar2;
  
  *param_1 = (long)(PTR_DAT_027145f8 + 0x10);
  FUN_00635430(param_1 + 0x3d);
  if ((long *)param_1[0x48] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x48] + 0x18))();
    param_1[0x48] = 0;
  }
  FUN_00634510(param_1);
  plVar1 = param_1 + 9;
  FUN_00634630(plVar1);
  if ((long *)param_1[0x48] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x48] + 0x18))();
    param_1[0x48] = 0;
  }
  FUN_00635430(param_1 + 0x3d);
  if ((*(byte *)(param_1 + 0x3c) & 1) == 0) {
    if (param_1[0x38] != 0) {
      plVar2 = (long *)param_1[0x37];
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x48))
                  (plVar2,param_1[0x38],"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
      }
      param_1[0x38] = 0;
    }
    param_1[0x38] = 0;
  }
  if ((*(byte *)(param_1 + 0x36) & 1) == 0) {
    if (param_1[0x32] != 0) {
      plVar2 = (long *)param_1[0x31];
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x48))
                  (plVar2,param_1[0x32],"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
      }
      param_1[0x32] = 0;
    }
    param_1[0x32] = 0;
  }
  *param_1 = (long)(PTR_DAT_027145d0 + 0x10);
  FUN_00634510(param_1);
  FUN_00634630(plVar1);
  FUN_006342c0(plVar1);
  FUN_00696510(param_1 + 3);
  FUN_005bf750(param_1 + 1);
  return;
}


