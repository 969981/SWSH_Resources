/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008e6de0; name: FUN_008e6de0
 */


void FUN_008e6de0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined1 param_5,undefined1 param_6)

{
  undefined4 local_130;
  undefined1 local_12c;
  undefined1 local_12b;
  undefined1 local_12a;
  undefined1 local_129;
  undefined1 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined1 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined1 auStack_110 [192];
  
  FUN_0087f4c0(auStack_110);
  FUN_0087f540(auStack_110,param_2,param_3);
  FUN_0087fb10(auStack_110,&local_130,param_4);
  *param_1 = local_130;
  *(undefined1 *)(param_1 + 1) = local_12c;
  *(undefined1 *)((long)param_1 + 6) = local_12b;
  *(undefined1 *)((long)param_1 + 9) = local_12a;
  *(undefined1 *)((long)param_1 + 10) = local_129;
  *(undefined1 *)((long)param_1 + 0xb) = 0;
  *(undefined2 *)((long)param_1 + 7) = 0x301;
  *(undefined1 *)(param_1 + 3) = local_128;
  param_1[4] = local_124;
  param_1[6] = local_120;
  *(undefined1 *)((long)param_1 + 0xd) = local_11c;
  param_1[5] = local_118;
  param_1[7] = local_114;
  FUN_0087f510(auStack_110);
  *(undefined1 *)((long)param_1 + 7) = param_5;
  *(undefined1 *)(param_1 + 2) = param_6;
  return;
}


