/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01409cc0; name: FUN_01409cc0
 */


void FUN_01409cc0(long param_1,ulong param_2)

{
  char *pcVar1;
  long lVar2;
  undefined1 auStack_40 [24];
  long local_28;
  long local_18;
  
  if ((param_2 & 1) == 0) {
    pcVar1 = "anime_change_out";
  }
  else {
    pcVar1 = "anime_change_in";
  }
  FUN_00ffd280(param_1 + 0x100,pcVar1);
  lVar2 = *(long *)PTR_DAT_027107a8;
  FUN_0010d170(&local_18,"Play_Camp_Curry_Page");
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


