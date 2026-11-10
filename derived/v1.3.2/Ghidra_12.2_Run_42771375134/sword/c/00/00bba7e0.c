/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bba7e0; name: FUN_00bba7e0
 */


void FUN_00bba7e0(long param_1,undefined4 param_2,ulong param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  lVar2 = *(long *)(param_1 + 0x2b0);
  uVar1 = 0x799f4c3e65f8060a;
  if ((param_3 & 1) == 0) {
    uVar1 = 0x799f4d3e65f807bd;
  }
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  lVar3 = *(long *)(lVar2 + 0x2e0);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  lVar4 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  lVar5 = *(long *)(*(long *)PTR_DAT_02710798 + 0x228);
  if (lVar5 == 0) {
    FUN_014c86b0(lVar3,0,0,param_2);
  }
  else {
    plVar6 = (long *)(lVar5 + 0x48);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    FUN_014c86b0(lVar3,0,lVar5,param_2);
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  FUN_00bb6fe0(param_1,0xbc3d89418a07d35e,uVar1);
  return;
}


