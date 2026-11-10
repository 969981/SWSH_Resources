/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006000c0; name: FUN_006000c0
 */


void FUN_006000c0(long *param_1)

{
  long *plVar1;
  
  *param_1 = (long)(PTR_DAT_027144e0 + 0x10);
  if ((long *)param_1[0x38] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x38] + 0x18))();
    param_1[0x38] = 0;
  }
  if (param_1[0x11] != 0) {
    FUN_00601c50();
    param_1[0x11] = 0;
  }
  param_1[0x10] = 0;
  FUN_00600190(param_1 + 0x13);
  FUN_006003b0(param_1 + 0x13);
  param_1[0xe] = (long)(PTR_DAT_027144e8 + 0x10);
  if (param_1[0x11] != 0) {
    FUN_00601c50();
    param_1[0x11] = 0;
  }
  param_1[0x10] = 0;
  if ((*(byte *)(param_1 + 9) & 1) == 0) {
    if (param_1[5] != 0) {
      plVar1 = (long *)param_1[4];
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x48))
                  (plVar1,param_1[5],"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
      }
      param_1[5] = 0;
    }
    param_1[5] = 0;
  }
  FUN_005bf750(param_1 + 1);
  return;
}


