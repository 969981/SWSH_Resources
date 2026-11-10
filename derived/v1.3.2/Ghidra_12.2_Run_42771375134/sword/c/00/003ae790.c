/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003ae790; name: FUN_003ae790
 */


void FUN_003ae790(float param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  
  if (DAT_01d4bbb0 < param_1) {
                    /* WARNING: Could not recover jumptable at 0x003ae7dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_2 + 0x20) + 0x310))(*(long **)(param_2 + 0x20),0xffffffff);
    return;
  }
  uVar3 = (uint)(int)(param_1 * DAT_01d4bec0) / 5;
  if (199 < uVar3) {
    uVar3 = 200;
  }
  if (uVar3 < 2) {
    uVar3 = 1;
  }
  uVar1 = 0;
  if (uVar3 != 0) {
    uVar1 = (uint)(int)(param_1 * DAT_01d4bec0) / uVar3;
  }
  uVar2 = (**(code **)(**(long **)(param_2 + 0x20) + 0x338))();
  (**(code **)(**(long **)(param_2 + 0x20) + 0x310))(*(long **)(param_2 + 0x20),uVar3);
  (**(code **)(**(long **)(param_2 + 0x20) + 800))(*(long **)(param_2 + 0x20),uVar1);
  if ((param_1 == 0.0) && ((uVar2 & 1) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x003ae87c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_2 + 0x20) + 0x340))();
    return;
  }
  return;
}


