/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0080cff0; name: FUN_0080cff0
 */


undefined8 FUN_0080cff0(long *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  undefined8 uVar2;
  
  if (param_3 < 0) {
    return 0;
  }
  if ((int)param_1[1] - (int)*param_1 < param_3) {
    uVar2 = FUN_0080d0c0(param_1,param_2);
    return uVar2;
  }
  std::string::resize((ulong)param_2,(char)param_3);
  bVar1 = *param_2;
  if ((bVar1 & 1) == 0) {
    if (bVar1 >> 1 == 0) {
      return 1;
    }
  }
  else if (*(long *)(param_2 + 8) == 0) {
    return 1;
  }
  if ((bVar1 & 1) == 0) {
    param_2 = param_2 + 1;
  }
  else {
    param_2 = *(byte **)(param_2 + 0x10);
    if (param_2 == (byte *)0x0) {
      return 1;
    }
  }
  memcpy(param_2,(void *)*param_1,(long)param_3);
  *param_1 = *param_1 + (long)param_3;
  return 1;
}


