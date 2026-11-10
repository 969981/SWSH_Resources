/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01452170; name: FUN_01452170
 */


bool FUN_01452170(long param_1,int param_2)

{
  int iVar1;
  undefined8 local_48;
  char *local_40;
  undefined8 local_38;
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [16];
  
  FUN_012b4190(auStack_20,param_1 + 0x120,(long)param_2);
  local_48 = 0x745fca4894f74db8;
  local_40 = "effort_type";
  local_38 = 0xb;
  FUN_012b4250(auStack_30,auStack_20,&local_48);
  iVar1 = FUN_012b4420(auStack_30,0);
  return iVar1 != 0;
}


