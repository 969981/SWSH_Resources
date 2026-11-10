/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a08bb0; name: FUN_00a08bb0
 */


void FUN_00a08bb0(long param_1,undefined4 param_2)

{
  ulong uVar1;
  long *plVar2;
  
  plVar2 = *(long **)(*(long *)(param_1 + 0x10) + 0x380);
  uVar1 = (**(code **)(*plVar2 + 0x8b0))(plVar2);
  if ((uVar1 & 1) == 0) {
    FUN_00a24630(*(undefined8 *)(param_1 + 0x20),plVar2,param_2);
    FUN_00a0e3b0(*(undefined8 *)(param_1 + 0x28),plVar2,param_2);
    return;
  }
  FUN_00a187b0(*(undefined8 *)(param_1 + 0x38),plVar2,
               *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x390));
  return;
}


