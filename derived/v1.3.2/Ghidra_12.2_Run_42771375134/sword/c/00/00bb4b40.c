/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bb4b40; name: FUN_00bb4b40
 */


void FUN_00bb4b40(long param_1,uint param_2)

{
  int iVar1;
  undefined8 uVar2;
  byte *pbVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  byte local_80 [64];
  ulong local_38;
  
  if (*(char *)(param_1 + 0x620) != '\0') {
    return;
  }
  lVar4 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  lVar5 = *(long *)(*(long *)PTR_DAT_02710798 + 0x228);
  if (lVar5 == 0) {
    iVar1 = FUN_01509eb0(0);
    snprintf((char *)local_80,0x40,"boxtray_cursor_%02d",iVar1);
  }
  else {
    plVar6 = (long *)(lVar5 + 0x48);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    iVar1 = FUN_01509eb0(lVar5);
    snprintf((char *)local_80,0x40,"boxtray_cursor_%02d",iVar1);
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  local_38 = 0xcbf29ce484222645;
  if (local_80[0] != 0) {
    pbVar3 = (byte *)((ulong)local_80 | 1);
    do {
      local_38 = (local_38 ^ local_80[0]) * 0x100000001b3;
      local_80[0] = *pbVar3;
      pbVar3 = pbVar3 + 1;
    } while (local_80[0] != 0);
  }
  uVar2 = FUN_00ffdef0(param_1 + 0x100,&local_38);
  FUN_016b2da0(uVar2,param_2 & 1);
  return;
}


