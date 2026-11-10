/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ec0300; name: FUN_00ec0300
 */


undefined8 FUN_00ec0300(undefined8 param_1,uint param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *local_80;
  long *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 *local_60;
  long *local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  puVar2 = PTR_DAT_027202a8;
  puVar1 = PTR_DAT_02717c58;
  uVar7 = -(ulong)(param_2 >> 0x1f) & 0xfffffff800000000 | (ulong)param_2 << 3;
  FUN_0100ee00(*(undefined8 *)PTR_DAT_02717c58,*(undefined8 *)(PTR_DAT_027202a8 + uVar7));
  FUN_00ec0430(&local_60,param_1);
  puVar6 = local_60;
  local_60[1] = param_1;
  local_60[2] = local_60;
  local_60[3] = 0x98;
  local_60[4] = 8;
  *(undefined8 **)(puVar2 + uVar7) = local_60;
  lVar3 = *(long *)puVar1;
  local_80 = local_60;
  local_78 = local_58;
  local_70 = local_50;
  local_68 = local_48;
  local_60 = (undefined8 *)0x0;
  lVar4 = *(long *)(lVar3 + 0x50);
  if ((ulong)(*(long *)(lVar3 + 0x58) - lVar4) < (ulong)(*(long *)(lVar3 + 0x60) - lVar4)) {
    FUN_0100f340((long *)(lVar3 + 0x50),lVar4,&local_80);
    puVar6 = local_80;
  }
  local_80 = (undefined8 *)0x0;
  if (puVar6 != (undefined8 *)0x0) {
    (**(code **)*puVar6)(puVar6);
    (**(code **)(*local_78 + 0x18))(local_78,puVar6,local_70,local_68);
  }
  puVar6 = local_60;
  uVar5 = *(undefined8 *)(puVar2 + (long)(int)param_2 * 8);
  local_60 = (undefined8 *)0x0;
  if (puVar6 != (undefined8 *)0x0) {
    (**(code **)*puVar6)(puVar6);
    (**(code **)(*local_58 + 0x18))(local_58,puVar6,local_50,local_48);
  }
  return uVar5;
}


