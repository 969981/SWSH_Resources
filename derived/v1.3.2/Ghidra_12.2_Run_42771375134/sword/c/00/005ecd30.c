/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005ecd30; name: FUN_005ecd30
 */


void FUN_005ecd30(long *param_1)

{
  byte bVar1;
  long *plVar2;
  
  if ((*(byte *)(param_1 + 0xb) & 1) == 0) {
    if (param_1[7] != 0) {
      plVar2 = (long *)param_1[6];
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x48))
                  (plVar2,param_1[7],"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
      }
      param_1[7] = 0;
    }
    param_1[7] = 0;
    bVar1 = *(byte *)(param_1 + 5);
  }
  else {
    bVar1 = *(byte *)(param_1 + 5);
  }
  if ((bVar1 & 1) != 0) {
    return;
  }
  if (param_1[1] != 0) {
    plVar2 = (long *)*param_1;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x48))
                (plVar2,param_1[1],"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
    }
    param_1[1] = 0;
  }
  param_1[1] = 0;
  return;
}


