/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009a2da0; name: FUN_009a2da0
 */


void FUN_009a2da0(undefined8 param_1,char *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 local_40;
  undefined2 local_38;
  char local_28 [8];
  
  local_40 = *param_3;
  local_38 = 0;
  local_28[0] = '\0';
  FUN_00942450();
  uVar1 = FUN_00925300();
  FUN_0094e9c0(uVar1,local_28,&local_40);
  *param_2 = local_28[0];
  if (local_28[0] == '\0') {
    FUN_009a2e10(param_1,*param_3);
  }
  return;
}


