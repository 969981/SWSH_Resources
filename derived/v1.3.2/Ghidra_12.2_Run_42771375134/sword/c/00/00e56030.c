/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e56030; name: FUN_00e56030
 */


void FUN_00e56030(void)

{
  undefined8 local_30;
  char *pcStack_28;
  undefined8 local_20;
  long local_18;
  
  local_30 = 0x8baac384a9661bb7;
  pcStack_28 = "Play_Prop_Gimmick_nut_drop";
  local_20 = 0x1a;
  local_18 = 0;
  FUN_008962c0(*(long *)PTR_DAT_027107a8 + 0x108,&local_30);
  if (local_18 != 0) {
    (**(code **)(*(long *)(local_18 + 0x48) + 0x18))();
  }
  return;
}


