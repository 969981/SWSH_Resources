/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bb5ea0; name: FUN_00bb5ea0
 */


bool FUN_00bb5ea0(undefined8 param_1,ulong param_2)

{
  int param3;
  byte *pbVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  byte local_70 [64];
  
  lVar2 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  lVar4 = *(long *)(*(long *)PTR_DAT_02710798 + 0x228);
  if (lVar4 == 0) {
    param3 = FUN_01509eb0(0);
  }
  else {
    plVar5 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    param3 = FUN_01509eb0(lVar4);
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  }
  uVar3 = 0xcbf29ce484222645;
  snprintf((char *)local_70,0x40,"button_box_%02d_search",param3);
  if (local_70[0] != 0) {
    pbVar1 = (byte *)((ulong)local_70 | 1);
    do {
      uVar3 = (uVar3 ^ local_70[0]) * 0x100000001b3;
      local_70[0] = *pbVar1;
      pbVar1 = pbVar1 + 1;
    } while (local_70[0] != 0);
  }
  return uVar3 == param_2;
}


