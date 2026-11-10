/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01126f90; name: FUN_01126f90
 */


void FUN_01126f90(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (*(long *)(param_1 + 0x98) != 0) {
    uVar1 = FUN_01128b40(*(long *)(param_1 + 0x98),4);
    uVar2 = FUN_01128b40(*(undefined8 *)(param_1 + 0x98),5);
    if ((((uVar1 & 1) != 0) || ((uVar2 & 1) != 0)) && (*(long *)(param_1 + 0xb0) != 0)) {
      FUN_011ba720();
      FUN_011ba990(*(undefined8 *)(param_1 + 0xb0),0);
      FUN_011bad90(*(undefined8 *)(param_1 + 0xb0));
      uVar4 = *(undefined8 *)(param_1 + 0xb0);
      uVar3 = FUN_01128b50(*(undefined8 *)(param_1 + 0x98));
      FUN_011ba3f0(uVar4,uVar3);
      return;
    }
  }
  return;
}


