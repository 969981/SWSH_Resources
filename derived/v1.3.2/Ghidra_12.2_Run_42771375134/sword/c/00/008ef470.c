/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008ef470; name: FUN_008ef470
 */


void FUN_008ef470(byte *param_1,byte *param_2,undefined8 param_3,byte param_4)

{
  byte bVar1;
  
  *param_2 = 0;
  if (param_4 < 2) {
    *param_1 = param_4;
    *param_2 = 1;
    return;
  }
  if (param_4 == 5) {
    *param_1 = 0;
    *param_2 = *param_2 + 1;
    return;
  }
  if (param_4 == 4) {
    *param_1 = 1;
    *param_2 = *param_2 + 1;
    return;
  }
  if (param_4 == 3) {
    *param_1 = 0;
    bVar1 = *param_2;
    *param_2 = bVar1 + 1;
    param_1[(byte)(bVar1 + 1)] = 1;
    *param_2 = *param_2 + 1;
    return;
  }
  *param_2 = 0;
  return;
}


