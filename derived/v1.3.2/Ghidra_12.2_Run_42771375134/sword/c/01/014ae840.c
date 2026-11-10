/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014ae840; name: FUN_014ae840
 */


void FUN_014ae840(undefined8 param_1,undefined8 param_2)

{
  short sVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = FUN_0087d610(param_2,2);
  if (((uVar3 & 1) == 0) && (iVar2 = FUN_008783b0(param_2), iVar2 == 0x287)) {
    sVar1 = FUN_008783c0(param_2);
    if ((sVar1 == 1) && (uVar3 = FUN_0087b910(param_2,0x224), (uVar3 & 1) == 0)) {
      FUN_0087df30(param_2,0,0);
      return;
    }
    sVar1 = FUN_008783c0(param_2);
    if ((sVar1 == 0) && (uVar3 = FUN_0087b910(param_2,0x224), (uVar3 & 1) != 0)) {
      FUN_0087df30(param_2,1,0);
      return;
    }
  }
  return;
}


