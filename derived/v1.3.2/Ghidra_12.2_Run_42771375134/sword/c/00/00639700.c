/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00639700; name: FUN_00639700
 */


void FUN_00639700(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = (**(code **)(**(long **)(param_1 + 0x18) + 0x80))();
  if ((iVar1 < 0xc000) &&
     (iVar1 = (**(code **)(**(long **)(param_1 + 0x18) + 0x80))(), iVar1 < 0xb000)) {
    iVar1 = (**(code **)(**(long **)(param_1 + 0x18) + 0x80))();
    if (iVar1 < 0xa100) {
      iVar1 = (**(code **)(**(long **)(param_1 + 0x18) + 0x80))();
      if (iVar1 < 0xa000) {
        return;
      }
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
    uVar3 = 4;
  }
  else {
    uVar2 = 0;
    uVar3 = 5;
  }
  *(undefined4 *)(param_1 + 0x50) = uVar3;
  *(undefined4 *)(param_1 + 0x54) = uVar2;
  *(undefined4 *)(param_1 + 0x58) = uVar3;
  *(undefined4 *)(param_1 + 0x5c) = uVar2;
  return;
}


