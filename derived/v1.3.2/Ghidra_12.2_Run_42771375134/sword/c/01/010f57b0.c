/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010f57b0; name: FUN_010f57b0
 */


void FUN_010f57b0(long *param_1,undefined4 param_2)

{
  undefined8 local_28;
  
  FUN_010f06c0();
  switch(param_2) {
  case 0:
  case 2:
    local_28 = FUN_016b8190(param_1[0xbd]);
    FUN_016b7990(param_1[0xbd],&local_28,1,0);
    FUN_00ffa160(param_1,0,1);
    *(undefined4 *)(param_1 + 0xce) = 0xffffffff;
    (**(code **)(*param_1 + 0xb0))(param_1);
    break;
  case 1:
  case 3:
    FUN_00ffa160(param_1,0,1);
    *(undefined4 *)(param_1 + 0xce) = 0xffffffff;
    (**(code **)(*param_1 + 0xb0))(param_1);
    FUN_00ffa3f0(param_1);
    return;
  }
  return;
}


