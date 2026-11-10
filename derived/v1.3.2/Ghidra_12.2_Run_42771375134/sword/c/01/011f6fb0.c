/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011f6fb0; name: FUN_011f6fb0
 */


void FUN_011f6fb0(undefined4 *param_1,undefined8 param_2,undefined4 param_3,void *param_4,
                 size_t param_5)

{
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined1 local_24 [4];
  
  *param_1 = param_3;
  uStack_40 = 0;
  local_24[0] = 0;
  local_38 = 0;
  local_48 = param_2;
  FUN_011f71c0(param_1 + 2,param_5,local_24,&local_48);
  memcpy(*(void **)(param_1 + 2),param_4,param_5);
  return;
}


