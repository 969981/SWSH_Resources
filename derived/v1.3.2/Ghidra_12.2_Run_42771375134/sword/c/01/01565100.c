/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01565100; name: FUN_01565100
 */


bool FUN_01565100(long param_1)

{
  int iVar1;
  short sVar2;
  int iVar3;
  
  iVar3 = FUN_0076cd40();
  if (iVar3 < 0) {
    return false;
  }
  if (*(long *)(param_1 + 0xe4) == 0) {
    return false;
  }
  iVar1 = -2;
  if (*(short *)(param_1 + 0x368) != 0xc) {
    iVar1 = iVar3;
  }
  sVar2 = FUN_0076e0b0(param_1 + 0x60,0,iVar1);
  *(short *)(param_1 + 0x368) = sVar2;
  return sVar2 == 0xc;
}


