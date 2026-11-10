/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bb5fc0; name: FUN_00bb5fc0
 */


uint FUN_00bb5fc0(undefined8 param_1,ulong param_2)

{
  byte bVar1;
  uint param3;
  ulong uVar2;
  byte *pbVar3;
  long lVar4;
  uint param4;
  long lVar5;
  long *plVar6;
  byte local_90 [64];
  
  lVar5 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  lVar4 = *(long *)(*(long *)PTR_DAT_02710798 + 0x228);
  if (lVar4 == 0) {
    param3 = FUN_01509eb0(0);
  }
  else {
    plVar6 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    param3 = FUN_01509eb0(lVar4);
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  }
  if (param3 != 0) {
    param4 = 0;
    do {
      snprintf((char *)local_90,0x40,"button_box_%02d_%02d",param3,param4);
      uVar2 = 0xcbf29ce484222645;
      if (local_90[0] != 0) {
        uVar2 = 0xcbf29ce484222645;
        pbVar3 = (byte *)((ulong)local_90 | 1);
        bVar1 = local_90[0];
        do {
          uVar2 = (uVar2 ^ bVar1) * 0x100000001b3;
          bVar1 = *pbVar3;
          pbVar3 = pbVar3 + 1;
        } while (bVar1 != 0);
      }
      if (uVar2 == param_2) {
        return param4;
      }
      param4 = param4 + 1;
    } while (param4 < param3);
  }
  return 0xffffffff;
}


