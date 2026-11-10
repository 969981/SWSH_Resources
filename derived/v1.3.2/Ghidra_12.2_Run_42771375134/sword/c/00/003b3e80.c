/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003b3e80; name: FUN_003b3e80
 */


void FUN_003b3e80(long *param_1)

{
  long *plVar1;
  long lVar2;
  float local_40;
  float local_3c;
  float local_38;
  
  FUN_003ba380();
  *param_1 = (long)(PTR_DAT_02712758 + 0x10);
                    /* try { // try from 003b3eb0 to 003b3ebb has its CatchHandler @ 003b3f48 */
  FUN_003b9dd0(param_1 + 0xc,param_1);
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
                    /* try { // try from 003b3ecc to 003b3f33 has its CatchHandler @ 003b3f5c */
  FUN_003b4170(param_1);
  FUN_003afa70(&local_40,param_1[10]);
  if ((*(byte *)(param_1[10] + 0xc) >> 1 & 1) == 0) {
    lVar2 = param_1[9];
    local_40 = *(float *)(lVar2 + 0x794) + local_40;
    local_3c = *(float *)(lVar2 + 0x798) + local_3c;
    local_38 = *(float *)(lVar2 + 0x79c) + local_38;
  }
  plVar1 = *(long **)(param_1[10] + 0x20);
  (**(code **)(*plVar1 + 0xa0))(plVar1,&local_40);
  return;
}


