/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ef7950; name: FUN_00ef7950
 */


void FUN_00ef7950(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long local_50;
  undefined8 local_48;
  
  local_48 = *(undefined8 *)(*(long *)PTR_DAT_02710540 + 0x68);
  lVar3 = *(long *)(*(long *)PTR_DAT_02710848 + 0x68);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  FUN_00ef7a40(&local_50,lVar3,&local_48);
  puVar4 = *(undefined8 **)(local_50 + 0x60);
  plVar1 = (long *)(**(code **)*puVar4)(puVar4);
  lVar2 = FUN_00ef8240();
  for (; plVar1 != (long *)lVar2; plVar1 = (long *)*plVar1) {
  }
  puVar4[0xc] = param_1;
  puVar4[0xd] = param_2;
  *(undefined4 *)(puVar4 + 0xe) = param_3;
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
    local_50 = 0;
  }
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  return;
}


