/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010113d0; name: FUN_010113d0
 */


undefined8 FUN_010113d0(undefined8 param_1,uint param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *local_90;
  long *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 *local_70;
  long *local_68;
  undefined8 local_60;
  undefined8 local_58;
  
  puVar2 = PTR_DAT_0271efa0;
  puVar1 = PTR_DAT_02717c58;
  uVar7 = -(ulong)(param_2 >> 0x1f) & 0xfffffff800000000 | (ulong)param_2 << 3;
  FUN_0100ee00(*(undefined8 *)PTR_DAT_02717c58,*(undefined8 *)(PTR_DAT_0271efa0 + uVar7));
  FUN_010114f0(&local_70,param_1,param_3);
  puVar6 = local_70;
  local_70[1] = param_1;
  local_70[2] = local_70;
  local_70[3] = 0xf0;
  local_70[4] = 0x10;
  *(undefined8 **)(puVar2 + uVar7) = local_70;
  lVar3 = *(long *)puVar1;
  local_90 = local_70;
  local_88 = local_68;
  local_80 = local_60;
  local_78 = local_58;
  local_70 = (undefined8 *)0x0;
  lVar4 = *(long *)(lVar3 + 0x50);
  if ((ulong)(*(long *)(lVar3 + 0x58) - lVar4) < (ulong)(*(long *)(lVar3 + 0x60) - lVar4)) {
    FUN_0100f340((long *)(lVar3 + 0x50),lVar4,&local_90);
    puVar6 = local_90;
  }
  local_90 = (undefined8 *)0x0;
  if (puVar6 != (undefined8 *)0x0) {
    (**(code **)*puVar6)(puVar6);
    (**(code **)(*local_88 + 0x18))(local_88,puVar6,local_80,local_78);
  }
  puVar6 = local_70;
  uVar5 = *(undefined8 *)(puVar2 + (long)(int)param_2 * 8);
  local_70 = (undefined8 *)0x0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_01011a50(&local_68);
  }
  return uVar5;
}


