/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005c8a90; name: FUN_005c8a90
 */


void FUN_005c8a90(long *param_1)

{
  byte bVar1;
  long *plVar2;
  
  *param_1 = (long)(PTR_DAT_02713ef0 + 0x10);
  if ((*(byte *)(param_1 + 0x2e) & 1) == 0) {
    if (param_1[0x2a] != 0) {
      plVar2 = (long *)param_1[0x29];
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x48))
                  (plVar2,param_1[0x2a],"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
      }
      param_1[0x2a] = 0;
    }
    param_1[0x2a] = 0;
    bVar1 = *(byte *)(param_1 + 0x28);
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x28);
  }
  if ((bVar1 & 1) != 0) {
    FUN_005bf750(param_1 + 1);
    return;
  }
  if (param_1[0x24] != 0) {
    plVar2 = (long *)param_1[0x23];
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x48))
                (plVar2,param_1[0x24],"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
    }
    param_1[0x24] = 0;
  }
  param_1[0x24] = 0;
  FUN_005bf750(param_1 + 1);
  return;
}


