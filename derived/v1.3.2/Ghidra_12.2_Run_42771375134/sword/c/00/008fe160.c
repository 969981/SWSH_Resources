/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008fe160; name: FUN_008fe160
 */


bool FUN_008fe160(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  ulong uVar4;
  
  iVar3 = FUN_008ec3f0(param_2,0x26);
  if ((iVar3 != 0) && (uVar4 = FUN_008e2f50(param_3,1,1), (uVar4 & 1) != 0)) {
    return true;
  }
  iVar3 = FUN_008ec3f0(param_2,0x27);
  if ((iVar3 != 0) && (uVar4 = FUN_008e2f50(param_3,2,1), (uVar4 & 1) != 0)) {
    return true;
  }
  iVar3 = FUN_008ec3f0(param_2,0x28);
  if ((iVar3 != 0) && (uVar4 = FUN_008e2f50(param_3,3,1), (uVar4 & 1) != 0)) {
    return true;
  }
  iVar3 = FUN_008ec3f0(param_2,0x29);
  if ((iVar3 != 0) && (uVar4 = FUN_008e2f50(param_3,4,1), (uVar4 & 1) != 0)) {
    return true;
  }
  iVar3 = FUN_008ec3f0(param_2,0x2a);
  if ((iVar3 != 0) && (uVar4 = FUN_008e2f50(param_3,5,1), (uVar4 & 1) != 0)) {
    return true;
  }
  iVar3 = FUN_008ec3f0(param_2,0x2b);
  if ((iVar3 != 0) && (uVar4 = FUN_008e2f50(param_3,6,1), (uVar4 & 1) != 0)) {
    return true;
  }
  iVar3 = FUN_008ec3f0(param_2,0x2c);
  if ((iVar3 == 0) || (cVar2 = FUN_008e3700(param_3), cVar2 != '\0')) {
    iVar3 = FUN_008ec3f0(param_2,0x21);
    bVar1 = iVar3 != 0;
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}


