/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003159f0; name: FUN_003159f0
 */


uint FUN_003159f0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                 undefined8 param_5)

{
  uint uVar1;
  undefined8 local_3c0;
  undefined8 local_3b8;
  undefined8 local_3b0;
  undefined1 auStack_3a8 [816];
  undefined8 *local_78;
  long local_70;
  ulong local_68;
  undefined8 *local_60;
  long local_58;
  ulong local_50;
  undefined8 local_48;
  
  local_48 = (**(code **)(*param_4 + 0x20))(param_4);
  local_78 = &local_48;
  local_50 = 0;
  local_58 = 0;
  local_68 = 0;
  local_70 = 0;
                    /* try { // try from 00315a40 to 00315a87 has its CatchHandler @ 00315b04 */
  local_60 = local_78;
  FUN_00217090(auStack_3a8);
  local_3b0 = param_1[2];
  local_3b8 = param_1[1];
  local_3c0 = *param_1;
  uVar1 = FUN_0034c490(&local_3c0,&local_60,&local_78,param_2,param_3,param_4,param_5,auStack_3a8);
  if (((-1 < (long)local_68) && ((local_68 & 0x7fffffff00000000) != 0)) && (local_70 != 0)) {
                    /* try { // try from 00315ab0 to 00315ab3 has its CatchHandler @ 00315b00 */
    (**(code **)(*(long *)*local_78 + 0x18))();
  }
  if (((-1 < (long)local_50) && ((local_50 & 0x7fffffff00000000) != 0)) && (local_58 != 0)) {
                    /* try { // try from 00315adc to 00315adf has its CatchHandler @ 00315afc */
    (**(code **)(*(long *)*local_60 + 0x18))();
  }
  return uVar1 & 1;
}


