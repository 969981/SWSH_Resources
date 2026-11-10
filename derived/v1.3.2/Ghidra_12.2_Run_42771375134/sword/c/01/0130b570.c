/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0130b570; name: FUN_0130b570
 */


void FUN_0130b570(void)

{
  undefined4 uVar1;
  long lVar2;
  undefined1 auStack_40 [24];
  long local_28;
  long local_18;
  
  lVar2 = *(long *)PTR_DAT_02710840;
  uVar1 = FUN_010247a0(lVar2 + 0x390,&DAT_0216c0a0);
  FUN_01023770(lVar2 + 0x390,uVar1,0);
  lVar2 = *(long *)PTR_DAT_027107a8;
  FUN_0010d170(&local_18,"Play_Camp_Call");
  FUN_006cf0c0(auStack_40,&local_18);
  FUN_008962c0(lVar2 + 0x108,auStack_40);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    local_28 = 0;
  }
  if (local_18 != 0) {
    (**(code **)(*(long *)(local_18 + 0x48) + 0x18))();
  }
  return;
}


