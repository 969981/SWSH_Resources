/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01026e40; name: FUN_01026e40
 */


undefined8 FUN_01026e40(long param_1,uint param_2)

{
  PalmaConnectionHandle *pPVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  uint local_24;
  
  piVar4 = *(int **)(param_1 + 0x58);
  if (*piVar4 != -1) {
    return 0;
  }
  pPVar1 = (PalmaConnectionHandle *)(piVar4 + 0x58);
  local_24 = param_2;
  iVar2 = nn::hid::GetPalmaConnectionHandle(pPVar1,&local_24);
  if (iVar2 != 0) {
    return 0x80000000;
  }
  iVar2 = nn::hid::InitializePalma(pPVar1);
  if (iVar2 != 0) {
    return 0x80000000;
  }
  uVar3 = nn::hid::BindPalmaOperationCompleteEvent(pPVar1,piVar4 + 0x4c,0);
  if ((int)uVar3 == 0) {
    *piVar4 = 1;
    piVar4[0x5a] = local_24;
    return uVar3;
  }
  return 0x80000000;
}


