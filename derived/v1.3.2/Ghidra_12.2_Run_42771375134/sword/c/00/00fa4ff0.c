/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fa4ff0; name: FUN_00fa4ff0
 */


bool FUN_00fa4ff0(long param_1,undefined8 param_2)

{
  short sVar1;
  short sVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x60);
  sVar1 = *(short *)(lVar3 + 0x180);
  if (sVar1 == 0) {
    FUN_01029710(lVar3);
    sVar1 = *(short *)(lVar3 + 0x180);
    sVar2 = FUN_0121c700(param_2);
    if (sVar1 != sVar2) {
      return false;
    }
  }
  else {
    sVar2 = FUN_0121c700(param_2);
    if (sVar1 != sVar2) {
      return false;
    }
  }
  lVar3 = *(long *)(param_1 + 0x78);
  sVar1 = *(short *)(lVar3 + 0x180);
  if (sVar1 == 0) {
    FUN_01029710(lVar3);
    sVar1 = *(short *)(lVar3 + 0x180);
    sVar2 = FUN_0121c710(param_2);
    if (sVar1 != sVar2) {
      return false;
    }
  }
  else {
    sVar2 = FUN_0121c710(param_2);
    if (sVar1 != sVar2) {
      return false;
    }
  }
  lVar3 = *(long *)(param_1 + 0x70);
  sVar1 = *(short *)(lVar3 + 0x180);
  if (sVar1 == 0) {
    FUN_01029710(lVar3);
    sVar1 = *(short *)(lVar3 + 0x180);
    sVar2 = FUN_0121c720(param_2);
    if (sVar1 != sVar2) {
      return false;
    }
  }
  else {
    sVar2 = FUN_0121c720(param_2);
    if (sVar1 != sVar2) {
      return false;
    }
  }
  lVar3 = *(long *)(param_1 + 0x68);
  sVar1 = *(short *)(lVar3 + 0x180);
  if (sVar1 == 0) {
    FUN_01029710(lVar3);
    sVar1 = *(short *)(lVar3 + 0x180);
  }
  sVar2 = FUN_0121c730(param_2);
  return sVar1 == sVar2;
}


