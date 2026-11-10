/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007602b0; name: FUN_007602b0
 */


void FUN_007602b0(undefined8 *param_1,void *param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [16];
  undefined8 local_38;
  ulong local_30;
  void *local_28;
  
  param_1[0xc] = "<no name>";
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  local_30 = 0;
  local_28 = param_2;
  std::align(8,param_3,&local_28,&local_30);
  param_1[6] = local_28;
  param_1[7] = param_3 - local_30 & 0xfffffffffffffff8;
  uVar1 = FUN_0075f680(param_1);
  param_1[8] = uVar1;
  FUN_00760090(auStack_48,param_1,0,0);
  param_1[9] = local_38;
  return;
}


