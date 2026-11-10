/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001fdbe0; name: FUN_001fdbe0
 */


void FUN_001fdbe0(long param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  
  uVar1 = *(uint *)(param_1 + 0x26a8);
  if (uVar1 != 0) {
    lVar4 = *(long *)(param_1 + 0x26a0);
    uVar3 = 0;
    do {
      uVar2 = (uint)uVar3;
      if (*(long **)(lVar4 + uVar3 * 8) == param_2) break;
      uVar2 = uVar2 + 1;
      uVar3 = (ulong)uVar2;
    } while (uVar2 < uVar1);
    if (uVar2 != uVar1) {
      *(uint *)(param_1 + 0x26a8) = uVar1 - 1;
      *(undefined8 *)(lVar4 + (ulong)uVar2 * 8) = *(undefined8 *)(lVar4 + (ulong)(uVar1 - 1) * 8);
    }
  }
  if (param_2 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x001fdc30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x68))(param_2);
  return;
}


