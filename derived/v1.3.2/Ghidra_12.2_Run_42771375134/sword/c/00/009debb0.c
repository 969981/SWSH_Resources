/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009debb0; name: FUN_009debb0
 */


void FUN_009debb0(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *param_1 = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x10] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xc] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar2 = *param_2;
  if (lVar2 == 0) {
    param_1[0x14] = 0;
  }
  else {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    lVar1 = param_1[0x14];
    param_1[0x14] = lVar2;
    if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x009dec30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
      return;
    }
  }
  return;
}


