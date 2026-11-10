/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009ecaf0; name: FUN_009ecaf0
 */


void FUN_009ecaf0(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long local_58;
  long local_50;
  long lStack_48;
  
  lVar1 = FUN_009ed5e0(&local_50,*(undefined8 *)(*(long *)PTR_DAT_02710540 + 0x68),param_3,param_4);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  lVar3 = *(long *)(lVar1 + 0x70);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  lVar4 = *(long *)(lVar1 + 0x78);
  if (lVar4 != 0) {
    plVar2 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
  }
  local_50 = lVar3;
  lStack_48 = lVar4;
  FUN_00d885f0(param_2,&local_50);
  lVar3 = *(long *)(lVar1 + 0x58);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  local_58 = lVar1;
  FUN_01019670(param_2,&local_58);
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
  }
  *param_1 = lVar3;
  return;
}


