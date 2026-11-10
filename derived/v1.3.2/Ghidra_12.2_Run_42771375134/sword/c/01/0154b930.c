/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0154b930; name: FUN_0154b930
 */


void FUN_0154b930(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined4 local_4c;
  long local_48;
  
  plVar6 = *(long **)(*(long *)PTR_DAT_02710540 + 200);
  lVar4 = (**(code **)(*plVar6 + 0x10))(plVar6,0x1241c,8);
  FUN_011b7fa0(0,lVar4);
  puVar1 = PTR_DAT_02710798;
  local_4c = 0;
  local_48 = lVar4;
  uVar5 = FUN_0153bf80(*(undefined8 *)PTR_DAT_02710798,&local_4c);
  puVar3 = PTR_DAT_0272ad50;
  puVar2 = PTR_DAT_0272ad48;
  FUN_0154b7f0(uVar5,PTR_DAT_0272ad48,&local_48,PTR_DAT_0272ad50);
  FUN_011b7fa0(1,lVar4);
  local_4c = 0;
  local_48 = lVar4;
  uVar5 = FUN_0153bf80(*(undefined8 *)puVar1,&local_4c);
  FUN_0154b7f0(uVar5,puVar2 + 4,&local_48,puVar3 + 8);
  FUN_011b7fa0(2,lVar4);
  local_4c = 0;
  local_48 = lVar4;
  uVar5 = FUN_0153bf80(*(undefined8 *)puVar1,&local_4c);
  FUN_0154b7f0(uVar5,puVar2 + 8,&local_48,puVar3 + 0x10);
  FUN_011b7fa0(3,lVar4);
  local_4c = 0;
  local_48 = lVar4;
  uVar5 = FUN_0153bf80(*(undefined8 *)puVar1,&local_4c);
  FUN_0154b7f0(uVar5,puVar2 + 0xc,&local_48,puVar3 + 0x18);
  FUN_011b7fa0(4,lVar4);
  local_4c = 0;
  local_48 = lVar4;
  uVar5 = FUN_0153bf80(*(undefined8 *)puVar1,&local_4c);
  FUN_0154b7f0(uVar5,puVar2 + 0x10,&local_48,puVar3 + 0x20);
  FUN_011b7fa0(5,lVar4);
  local_4c = 0;
  local_48 = lVar4;
  uVar5 = FUN_0153bf80(*(undefined8 *)puVar1,&local_4c);
  FUN_0154b7f0(uVar5,puVar2 + 0x14,&local_48,puVar3 + 0x28);
  if (lVar4 != 0) {
    (**(code **)(*plVar6 + 0x18))(plVar6,lVar4,0x1241c,8);
  }
  return;
}


