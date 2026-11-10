/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d10270; name: FUN_00d10270
 */


void FUN_00d10270(undefined8 param_1)

{
  char cVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 local_34;
  
  lVar4 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1e8);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  local_34 = 0;
  puVar2 = (undefined1 *)FUN_00d14a10(param_1,&local_34);
  *puVar2 = 1;
  cVar1 = FUN_01524bf0(lVar4);
  local_34 = 1;
  uVar3 = FUN_00d14a10(param_1,&local_34);
  *(bool *)uVar3 = cVar1 == '\0';
  cVar1 = FUN_01524bf0(lVar4);
  local_34 = 2;
  uVar3 = FUN_00d14a10(param_1,&local_34);
  *(bool *)uVar3 = cVar1 == '\x01';
  local_34 = 3;
  puVar2 = (undefined1 *)FUN_00d14a10(param_1,&local_34);
  *puVar2 = 0;
  local_34 = 4;
  puVar2 = (undefined1 *)FUN_00d14a10(param_1,&local_34);
  *puVar2 = 0;
  local_34 = 5;
  puVar2 = (undefined1 *)FUN_00d14a10(param_1,&local_34);
  *puVar2 = 1;
  local_34 = 6;
  puVar2 = (undefined1 *)FUN_00d14a10(param_1,&local_34);
  *puVar2 = 0;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  return;
}


