/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00eda020; name: FUN_00eda020
 */


void FUN_00eda020(long *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long local_58;
  long local_50;
  long lStack_48;
  
  uVar1 = *param_2;
  lVar2 = FUN_00edafb0(&local_50,*(undefined8 *)(*(long *)PTR_DAT_02710540 + 0x68));
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  lVar4 = *(long *)(lVar2 + 0x70);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  lVar5 = *(long *)(lVar2 + 0x78);
  if (lVar5 != 0) {
    plVar3 = (long *)(lVar5 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
  }
  local_50 = lVar4;
  lStack_48 = lVar5;
  FUN_00d885f0(uVar1,&local_50);
  lVar4 = *(long *)(lVar2 + 0x58);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  local_58 = lVar2;
  FUN_01019670(uVar1,&local_58);
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
  }
  *param_1 = lVar4;
  return;
}


