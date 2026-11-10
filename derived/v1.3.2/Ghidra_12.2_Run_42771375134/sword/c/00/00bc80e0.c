/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bc80e0; name: FUN_00bc80e0
 */


void FUN_00bc80e0(undefined1 param_1 [16],undefined4 param_2,long param_3,ulong param_4,int param_5)

{
  ulong *puVar1;
  int param3;
  byte *pbVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  undefined4 uVar7;
  byte local_a0 [64];
  
  lVar3 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
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
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  puVar1 = (ulong *)(param_3 + (param_4 & 0xffffffff) * 0x18 + 0x698);
  uVar6 = 0xcbf29ce484222645;
  snprintf((char *)local_a0,0x40,"pane_L_box_change_00_L_icon_box_%02d_%02d",param3,param_5);
  if (local_a0[0] != 0) {
    pbVar2 = (byte *)((ulong)local_a0 | 1);
    do {
      uVar6 = (uVar6 ^ local_a0[0]) * 0x100000001b3;
      local_a0[0] = *pbVar2;
      pbVar2 = pbVar2 + 1;
    } while (local_a0[0] != 0);
  }
  *puVar1 = uVar6;
  lVar3 = *(long *)(param_3 + 0x2b0);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  uVar7 = FUN_0167b720(lVar3,puVar1);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  param_3 = param_3 + (param_4 & 0xffffffff) * 0x18;
  *(undefined4 *)(param_3 + 0x6a0) = uVar7;
  *(undefined4 *)(param_3 + 0x6a4) = param_2;
  return;
}


