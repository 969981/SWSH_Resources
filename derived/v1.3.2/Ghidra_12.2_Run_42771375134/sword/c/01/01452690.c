/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01452690; name: FUN_01452690
 */


undefined8 FUN_01452690(long param_1,int param_2)

{
  undefined8 local_98 [3];
  long local_80;
  undefined8 local_78;
  undefined1 *local_70;
  undefined8 uStack_68;
  long local_60;
  undefined8 local_58;
  char *local_50;
  undefined8 local_48;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  
  FUN_012b4190(auStack_30,param_1 + 0x120,(long)param_2);
  local_58 = 0x82512318f2e3de10;
  local_50 = "unlock_flag";
  local_48 = 0xb;
  FUN_012b4250(auStack_40,auStack_30,&local_58);
  local_78 = 0xcbf29ce484222645;
  local_70 = &DAT_01d38550;
  uStack_68 = 0;
  local_60 = 0;
  FUN_012b4820(local_98,auStack_40,&local_78);
  if (local_60 != 0) {
    (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
    local_60 = 0;
  }
  if (local_80 != 0) {
    (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
  }
  return local_98[0];
}


