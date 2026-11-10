/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00359850; name: FUN_00359850
 */


uint FUN_00359850(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                 undefined8 param_5)

{
  uint uVar1;
  undefined8 local_490;
  undefined8 local_488;
  undefined8 local_480;
  undefined1 auStack_478 [1024];
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
                    /* try { // try from 003598a0 to 003598e7 has its CatchHandler @ 00359964 */
  local_60 = local_78;
  FUN_00214ba0(auStack_478);
  local_480 = param_1[2];
  local_488 = param_1[1];
  local_490 = *param_1;
  uVar1 = FUN_003599d0(&local_490,&local_60,&local_78,param_2,param_3,param_4,param_5,auStack_478);
  if (((-1 < (long)local_68) && ((local_68 & 0x7fffffff00000000) != 0)) && (local_70 != 0)) {
                    /* try { // try from 00359910 to 00359913 has its CatchHandler @ 00359960 */
    (**(code **)(*(long *)*local_78 + 0x18))();
  }
  if (((-1 < (long)local_50) && ((local_50 & 0x7fffffff00000000) != 0)) && (local_58 != 0)) {
                    /* try { // try from 0035993c to 0035993f has its CatchHandler @ 0035995c */
    (**(code **)(*(long *)*local_60 + 0x18))();
  }
  return uVar1 & 1;
}


