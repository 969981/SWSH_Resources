/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003513b0; name: FUN_003513b0
 */


void FUN_003513b0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 *local_210;
  long local_208;
  ulong local_200;
  undefined1 *local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  long lStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined1 auStack_1c0 [384];
  
  local_210 = *(undefined8 **)(param_3 + 0x10);
  local_208 = 0;
  local_200 = 0;
                    /* try { // try from 003513e0 to 0035140b has its CatchHandler @ 00351454 */
  FUN_00215bc0(auStack_1c0);
  local_1c8 = 0;
  uStack_1d0 = 0;
  local_1f8 = (undefined1 *)&local_210;
  uStack_1f0 = param_2;
  local_1e8 = param_1;
  lStack_1e0 = param_3;
  local_1d8 = param_4;
  FUN_0032cfa0(auStack_1c0,&local_1f8,0);
  if (((-1 < (long)local_200) && ((local_200 & 0x7fffffff00000000) != 0)) && (local_208 != 0)) {
                    /* try { // try from 00351434 to 00351437 has its CatchHandler @ 00351450 */
    (**(code **)(*(long *)*local_210 + 0x18))();
  }
  return;
}


