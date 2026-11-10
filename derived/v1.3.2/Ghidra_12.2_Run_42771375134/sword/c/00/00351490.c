/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00351490; name: FUN_00351490
 */


void FUN_00351490(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 *local_208;
  long local_200;
  ulong local_1f8;
  undefined1 auStack_1f0 [240];
  undefined1 auStack_100 [32];
  undefined1 auStack_e0 [88];
  undefined8 **local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  long lStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  local_208 = *(undefined8 **)(param_3 + 0x10);
  local_1f8 = 0;
  local_200 = 0;
                    /* try { // try from 003514c8 to 0035152f has its CatchHandler @ 0035157c */
  FUN_00214dc0(auStack_1f0);
  local_58 = 0;
  uStack_60 = 0;
  local_88 = &local_208;
  uStack_80 = param_2;
  local_78 = param_1;
  lStack_70 = param_3;
  local_68 = param_4;
  iVar1 = FUN_003515c0(auStack_1f0,&local_88,0);
  local_58 = 0;
  uStack_60 = 0;
  local_88 = &local_208;
  uStack_80 = param_2;
  local_78 = param_1;
  lStack_70 = param_3;
  local_68 = param_4;
  FUN_00352250(&local_88,auStack_100,iVar1);
  FUN_003523e0(&local_88,auStack_e0,iVar1 + 1);
  if (((-1 < (long)local_1f8) && ((local_1f8 & 0x7fffffff00000000) != 0)) && (local_200 != 0)) {
                    /* try { // try from 00351558 to 0035155b has its CatchHandler @ 00351578 */
    (**(code **)(*(long *)*local_208 + 0x18))();
  }
  return;
}


