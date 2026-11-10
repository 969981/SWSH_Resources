/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0117f030; name: FUN_0117f030
 */


void FUN_0117f030(long param_1,byte param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long local_40;
  long lStack_38;
  
  *(byte *)(param_1 + 0x185) = param_2 & 1;
  *(undefined8 *)(param_1 + 0x68) = 100;
  *(undefined8 *)(param_1 + 0x70) = 0x200000008;
  *(undefined2 *)(param_1 + 0x78) = 0xea89;
  *(undefined4 *)(param_1 + 0x7c) = 0x18;
  FUN_01211c90(*(undefined8 *)PTR_DAT_02710958);
  lVar1 = *(long *)PTR_DAT_02718f20;
  if (lVar1 != 0) {
    lVar3 = *(long *)(param_1 + 0x58);
    if (lVar3 != 0) {
      plVar2 = (long *)(lVar3 + 0x48);
      (**(code **)(*plVar2 + 0x10))(plVar2);
      (**(code **)(*plVar2 + 0x10))(plVar2);
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
    lStack_38 = param_1 + 0x60;
    local_40 = lVar3;
    FUN_011fcf30(lVar1,&local_40);
    if (local_40 != 0) {
      (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
    }
  }
  return;
}


