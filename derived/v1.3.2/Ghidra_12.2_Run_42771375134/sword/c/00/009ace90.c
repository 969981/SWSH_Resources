/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009ace90; name: FUN_009ace90
 */


undefined8 FUN_009ace90(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  
  uVar4 = FUN_00942670(param_1,0x800);
  if ((uVar4 & 1) != 0) {
    return 0;
  }
  iVar3 = FUN_00942620(param_1);
  if (iVar3 != 2) {
    return 0;
  }
  uVar4 = FUN_008e0b50(param_2);
  if ((uVar4 & 1) == 0) {
    return 0;
  }
  FUN_008e0b60(param_2);
  cVar1 = FUN_008e5f00();
  if (cVar1 != '\0') {
    return 0;
  }
  uVar4 = FUN_008e2df0(param_2,0x16);
  if ((uVar4 & 1) != 0) {
    return 0;
  }
  uVar4 = FUN_008e2df0(param_2,0x15);
  if ((uVar4 & 1) != 0) {
    return 0;
  }
  FUN_008e0b60(param_2);
  FUN_008e5ed0();
  uVar4 = FUN_0093db90();
  if (((uVar4 & 1) == 0) || (bVar2 = FUN_008e2ef0(param_2,5), 1 < bVar2)) {
    return 1;
  }
  return 0;
}


