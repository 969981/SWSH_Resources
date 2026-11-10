/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00401ae0; name: FUN_00401ae0
 */


int FUN_00401ae0(char *param_1,size_t param_2,char *param_3,undefined8 *param_4)

{
  int iVar1;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = param_4[3];
  local_20 = param_4[2];
  local_28 = param_4[1];
  local_30 = *param_4;
  iVar1 = vsnprintf(param_1,param_2,param_3,&local_30);
  return iVar1;
}


