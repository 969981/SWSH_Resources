/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014b7d00; name: FUN_014b7d00
 */


void FUN_014b7d00(undefined8 param_1)

{
  short sVar1;
  int iVar2;
  
  iVar2 = FUN_008783b0();
  if ((iVar2 == 0x1ec) && (sVar1 = FUN_008783c0(param_1), sVar1 != 0)) {
    FUN_0087df30(param_1,0,0);
  }
  iVar2 = FUN_008783b0(param_1);
  if ((iVar2 == 0x2a4) && (sVar1 = FUN_008783c0(param_1), sVar1 != 0)) {
    FUN_014ae8f0(param_1,0);
  }
  iVar2 = FUN_008783b0(param_1);
  if ((iVar2 == 0x2d0) && (sVar1 = FUN_008783c0(param_1), sVar1 != 0)) {
    FUN_014ae970(param_1,0);
    return;
  }
  return;
}


