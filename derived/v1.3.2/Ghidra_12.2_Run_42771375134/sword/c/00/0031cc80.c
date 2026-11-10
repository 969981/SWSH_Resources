/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0031cc80; name: FUN_0031cc80
 */


void FUN_0031cc80(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 *local_568;
  long local_560;
  ulong local_558;
  undefined1 auStack_550 [1240];
  undefined8 **local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  long lStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  local_568 = *(undefined8 **)(param_3 + 0x10);
  local_558 = 0;
  local_560 = 0;
                    /* try { // try from 0031ccb4 to 0031ccff has its CatchHandler @ 0031cd48 */
  FUN_002164e0(auStack_550);
  local_48 = 0;
  uStack_50 = 0;
  local_78 = &local_568;
  uStack_70 = param_2;
  local_68 = param_1;
  lStack_60 = param_3;
  local_58 = param_4;
  FUN_003377e0(auStack_550,&local_78,0);
  local_48 = 0;
  uStack_50 = 0;
  local_78 = &local_568;
  uStack_70 = param_2;
  local_68 = param_1;
  lStack_60 = param_3;
  local_58 = param_4;
  FUN_00336af0(auStack_550,&local_78,0);
  if (((-1 < (long)local_558) && ((local_558 & 0x7fffffff00000000) != 0)) && (local_560 != 0)) {
                    /* try { // try from 0031cd28 to 0031cd2b has its CatchHandler @ 0031cd44 */
    (**(code **)(*(long *)*local_568 + 0x18))();
  }
  return;
}


