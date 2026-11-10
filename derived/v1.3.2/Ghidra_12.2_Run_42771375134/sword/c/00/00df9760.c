/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00df9760; name: FUN_00df9760
 */


void FUN_00df9760(undefined8 param_1,ulong param_2)

{
  long lVar1;
  undefined8 local_58;
  char *local_50;
  undefined8 local_48;
  undefined1 auStack_40 [24];
  long local_28;
  
  lVar1 = *(long *)PTR_DAT_027107a8;
  if ((param_2 & 1) == 0) {
    local_58 = 0xf38cafa3a524257f;
    local_50 = "Set_State_Off";
    local_48 = 0xd;
  }
  else {
    local_58 = 0x21617f453b3afcfb;
    local_50 = "Set_State_On";
    local_48 = 0xc;
  }
  FUN_006cf0a0(auStack_40,&local_58);
  FUN_008962c0(lVar1 + 0x108,auStack_40);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  return;
}


