/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ff99a0; name: FUN_00ff99a0
 */


void FUN_00ff99a0(long param_1,char *param_2)

{
  undefined8 local_18;
  
  if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
    param_2 = "anonymous";
  }
  FUN_0010d170(&local_18,param_2);
  if (*(long *)(param_1 + 0x5c0) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x5c0) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x5c0) = 0;
  }
  *(undefined8 *)(param_1 + 0x5c0) = local_18;
  return;
}


