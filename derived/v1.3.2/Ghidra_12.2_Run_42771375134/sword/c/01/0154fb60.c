/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0154fb60; name: FUN_0154fb60
 */


void FUN_0154fb60(long param_1,undefined2 param_2,char *param_3)

{
  int iVar1;
  size_t sVar2;
  undefined8 local_38;
  
  sVar2 = strlen(param_3);
  iVar1 = FUN_01964b50(&local_38,param_1 + 0x70,0x188,param_3,sVar2,0);
  if (iVar1 == 0) {
    *(undefined2 *)(param_1 + 0x68) = param_2;
    *(undefined8 *)(param_1 + 0x60) = local_38;
  }
  return;
}


