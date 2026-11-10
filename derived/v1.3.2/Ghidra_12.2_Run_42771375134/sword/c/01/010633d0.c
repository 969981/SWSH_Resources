/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010633d0; name: FUN_010633d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_010633d0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  code *pcVar5;
  long lVar6;
  undefined1 auStack_f0 [104];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined *local_38;
  
  puVar3 = PTR_DAT_02723ad0;
  uVar1 = _DAT_01d4b4f0;
  *(undefined8 *)(PTR_DAT_02723ad0 + 8) = _UNK_01d4b4f8;
  *(undefined8 *)puVar3 = uVar1;
  puVar3 = PTR_DAT_0271b198;
  uVar1 = *(undefined8 *)PTR_DAT_02723ad8;
  uVar2 = *(undefined8 *)(PTR_DAT_02723ad8 + 8);
  *(undefined8 *)(PTR_DAT_0271b198 + 8) = uVar2;
  puVar4 = PTR_DAT_0271b190;
  *(undefined8 *)puVar3 = uVar1;
  puVar3 = PTR_DAT_027105c8;
  *(undefined8 *)puVar4 = uVar1;
  *(undefined8 *)(puVar4 + 8) = uVar2;
  lVar6 = *(long *)puVar3;
  pcVar5 = *(code **)(lVar6 + 0x248);
  local_48 = 0;
  local_40 = 0;
  local_58 = 0;
  local_50 = 0;
  local_68 = 0;
  local_60 = 0;
  local_78 = 0;
  local_70 = (undefined *)0x0;
  local_88 = 0;
  local_80 = 0;
  local_38 = PTR_LAB_02723ae0;
  if (pcVar5 != (code *)0x0) {
    *(undefined8 *)(lVar6 + 0x250) = 0;
    *(undefined8 *)(lVar6 + 600) = 0;
    *(undefined8 *)(lVar6 + 0x240) = 0;
    *(undefined8 *)(lVar6 + 0x248) = 0;
    (*pcVar5)(lVar6 + 0x260);
  }
  FUN_01063a10(auStack_f0,lVar6 + 0x260);
  *(undefined1 **)(lVar6 + 600) = &LAB_01063a20;
  *(code **)(lVar6 + 0x248) = FUN_01063830;
  *(code **)(lVar6 + 0x250) = FUN_01063a10;
  *(undefined8 *)(lVar6 + 0x240) = &LAB_01063750;
  FUN_00790590(*(undefined8 *)(lVar6 + 0x238),9,&local_88);
  local_40 = 0;
  local_38 = (undefined *)0x0;
  local_50 = 0;
  local_48 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_80 = 0;
  local_78 = 0;
  local_88 = 0;
  local_70 = PTR_LAB_02723ae8;
  FUN_00790590(*(undefined8 *)(*(long *)puVar3 + 0x238),0,&local_88);
  FUN_01063830(auStack_f0);
  return;
}


