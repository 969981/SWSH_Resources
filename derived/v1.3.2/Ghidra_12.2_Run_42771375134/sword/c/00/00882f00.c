/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00882f00; name: FUN_00882f00
 */


bool FUN_00882f00(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulong uVar5;
  
  uVar5 = FUN_00879860(param_2);
  if ((uVar5 & 1) != 0) {
    iVar2 = FUN_008783b0(param_2);
    if (iVar2 == 0x19) {
      return false;
    }
    if (iVar2 == 0x34) {
      return false;
    }
    if (iVar2 == 0x85) {
      return false;
    }
  }
  uVar3 = FUN_008783b0(param_2);
  uVar4 = FUN_008783c0(param_2);
  FUN_00864d20(uVar3,uVar4);
  cVar1 = FUN_00864d90();
  return cVar1 != '\0';
}


