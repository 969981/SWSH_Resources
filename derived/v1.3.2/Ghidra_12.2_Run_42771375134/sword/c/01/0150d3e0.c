/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0150d3e0; name: FUN_0150d3e0
 */


void FUN_0150d3e0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  uint local_24;
  
  puVar2 = PTR_DAT_0272a820;
  puVar1 = PTR_DAT_02710798;
  local_24 = *(uint *)(param_1 + 0x60) & 3;
  uVar3 = FUN_0153bf80(*(undefined8 *)PTR_DAT_02710798,PTR_DAT_0272a820);
  FUN_0150e1c0(uVar3,puVar2 + 4,&local_24);
  puVar2 = PTR_DAT_0272a828;
  local_24 = *(uint *)(param_1 + 0x60) >> 2 & 1;
  uVar3 = FUN_0153bf80(*(undefined8 *)puVar1,PTR_DAT_0272a828);
  FUN_0150e1c0(uVar3,puVar2 + 4,&local_24);
  puVar2 = PTR_DAT_0272a830;
  local_24 = *(uint *)(param_1 + 0x60) >> 3 & 1;
  uVar3 = FUN_0153bf80(*(undefined8 *)puVar1,PTR_DAT_0272a830);
  FUN_0150e1c0(uVar3,puVar2 + 4,&local_24);
  puVar2 = PTR_DAT_0272a838;
  local_24 = *(uint *)(param_1 + 0x60) >> 4 & 0xf;
  uVar3 = FUN_0153bf80(*(undefined8 *)puVar1,PTR_DAT_0272a838);
  FUN_0150e1c0(uVar3,puVar2 + 4,&local_24);
  puVar2 = PTR_DAT_0272a840;
  local_24 = *(uint *)(param_1 + 0x60) >> 8 & 1;
  uVar3 = FUN_0153bf80(*(undefined8 *)puVar1,PTR_DAT_0272a840);
  FUN_0150e1c0(uVar3,puVar2 + 4,&local_24);
  puVar2 = PTR_DAT_0272a848;
  local_24 = *(uint *)(param_1 + 0x60) >> 9 & 0xf;
  uVar3 = FUN_0153bf80(*(undefined8 *)puVar1,PTR_DAT_0272a848);
  FUN_0150e1c0(uVar3,puVar2 + 4,&local_24);
  puVar2 = PTR_DAT_0272a850;
  local_24 = *(uint *)(param_1 + 0x60) >> 0xd & 0xf;
  uVar3 = FUN_0153bf80(*(undefined8 *)puVar1,PTR_DAT_0272a850);
  FUN_0150e1c0(uVar3,puVar2 + 4,&local_24);
  puVar2 = PTR_DAT_0272a858;
  local_24 = *(uint *)(param_1 + 0x60) >> 0x11 & 0xf;
  uVar3 = FUN_0153bf80(*(undefined8 *)puVar1,PTR_DAT_0272a858);
  FUN_0150e1c0(uVar3,puVar2 + 4,&local_24);
  puVar2 = PTR_DAT_0272a860;
  local_24 = *(uint *)(param_1 + 0x60) >> 0x15 & 1;
  uVar3 = FUN_0153bf80(*(undefined8 *)puVar1,PTR_DAT_0272a860);
  FUN_0150e1c0(uVar3,puVar2 + 4,&local_24);
  puVar2 = PTR_DAT_0272a868;
  local_24 = *(uint *)(param_1 + 0x60) >> 0x17 & 1;
  uVar3 = FUN_0153bf80(*(undefined8 *)puVar1,PTR_DAT_0272a868);
  FUN_0150e1c0(uVar3,puVar2 + 4,&local_24);
  puVar2 = PTR_DAT_0272a870;
  local_24 = *(uint *)(param_1 + 0x60) >> 0x16 & 1;
  uVar3 = FUN_0153bf80(*(undefined8 *)puVar1,PTR_DAT_0272a870);
  FUN_0150e1c0(uVar3,puVar2 + 4,&local_24);
  puVar2 = PTR_DAT_0272a878;
  local_24 = *(uint *)(param_1 + 0x60) >> 0x18 & 1;
  uVar3 = FUN_0153bf80(*(undefined8 *)puVar1,PTR_DAT_0272a878);
  FUN_0150e1c0(uVar3,puVar2 + 4,&local_24);
  puVar2 = PTR_DAT_0272a880;
  local_24 = *(uint *)(param_1 + 0x60) >> 0x19 & 1;
  uVar3 = FUN_0153bf80(*(undefined8 *)puVar1,PTR_DAT_0272a880);
  FUN_0150e1c0(uVar3,puVar2 + 4,&local_24);
  puVar2 = PTR_DAT_0272a888;
  local_24 = *(uint *)(param_1 + 0x60) >> 0x1a & 1;
  uVar3 = FUN_0153bf80(*(undefined8 *)puVar1,PTR_DAT_0272a888);
  FUN_0150e1c0(uVar3,puVar2 + 4,&local_24);
  puVar2 = PTR_DAT_0272a890;
  local_24 = *(uint *)(param_1 + 0x60) >> 0x1b & 1;
  uVar3 = FUN_0153bf80(*(undefined8 *)puVar1,PTR_DAT_0272a890);
  FUN_0150e1c0(uVar3,puVar2 + 4,&local_24);
  puVar2 = PTR_DAT_0272a898;
  local_24 = *(uint *)(param_1 + 0x60) >> 0x1c & 1;
  uVar3 = FUN_0153bf80(*(undefined8 *)puVar1,PTR_DAT_0272a898);
  FUN_0150e1c0(uVar3,puVar2 + 4,&local_24);
  puVar2 = PTR_DAT_0272a8a0;
  local_24 = *(uint *)(param_1 + 0x60) >> 0x1d & 1;
  uVar3 = FUN_0153bf80(*(undefined8 *)puVar1,PTR_DAT_0272a8a0);
  FUN_0150e1c0(uVar3,puVar2 + 4,&local_24);
  return;
}


