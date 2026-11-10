/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01219240; name: FUN_01219240
 */


void FUN_01219240(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  FUN_0121b1a0("add offline record");
  lVar3 = *(long *)(param_1 + 0x1c0);
  lVar2 = *(long *)(param_1 + 0x1c8);
  if ((lVar2 != 0) && (uVar1 = FUN_0121b130(param_2,lVar3), (uVar1 & 1) == 0)) {
    lVar4 = lVar3 + lVar2 * 0x28;
    lVar2 = lVar2 * 0x28;
    do {
      lVar2 = lVar2 + -0x28;
      if (lVar2 == 0) {
        lVar3 = lVar4;
        break;
      }
      lVar3 = lVar3 + 0x28;
      uVar1 = FUN_0121b130(param_2,lVar3);
    } while ((uVar1 & 1) == 0);
  }
  if ((*(long *)(param_1 + 0x1c0) + *(ulong *)(param_1 + 0x1c8) * 0x28 == lVar3) &&
     (*(ulong *)(param_1 + 0x1c8) < *(ulong *)(param_1 + 0x1d0))) {
    FUN_01219330(param_1 + 0x180,param_2);
    return;
  }
  return;
}


