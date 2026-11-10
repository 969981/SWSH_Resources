/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008a6a40; name: FUN_008a6a40
 */


void FUN_008a6a40(long param_1,undefined8 param_2,long *param_3,long *param_4,long *param_5)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  *(undefined8 *)(param_1 + 0x148) = param_2;
  lVar3 = *param_3;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  lVar1 = *(long *)(param_1 + 0x158);
  *(long *)(param_1 + 0x158) = lVar3;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  lVar3 = *param_4;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  lVar1 = *(long *)(param_1 + 0x160);
  *(long *)(param_1 + 0x160) = lVar3;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  lVar3 = *param_5;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  lVar1 = *(long *)(param_1 + 0x168);
  *(long *)(param_1 + 0x168) = lVar3;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    lVar3 = *(long *)(param_1 + 0x168);
  }
  *(undefined8 *)(param_1 + 0x150) = *(undefined8 *)(param_1 + 0x148);
  if (lVar3 != 0) {
    plVar2 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  lVar1 = *(long *)(param_1 + 0x170);
  *(long *)(param_1 + 0x170) = lVar3;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  if (lVar3 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x008a6b58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  return;
}


