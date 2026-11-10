/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01198db0; name: FUN_01198db0
 */


void FUN_01198db0(long param_1)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long local_40;
  long lStack_38;
  
  if ((*(long *)(param_1 + 0x88) != 0) &&
     (uVar1 = FUN_007d4b30(*(long *)(param_1 + 0x88) + 0xd0), (uVar1 & 1) != 0)) {
    FUN_01198e70(*(undefined8 *)(param_1 + 0x88));
  }
  lVar2 = *(long *)PTR_DAT_027104b0;
  if (lVar2 != 0) {
    lVar4 = *(long *)(param_1 + 0x58);
    if (lVar4 != 0) {
      plVar3 = (long *)(lVar4 + 0x48);
      (**(code **)(*plVar3 + 0x10))(plVar3);
      (**(code **)(*plVar3 + 0x10))(plVar3);
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
    lStack_38 = param_1 + 0x60;
    local_40 = lVar4;
    FUN_007b59f0(lVar2,&local_40);
    if (local_40 != 0) {
      (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
    }
  }
  return;
}


