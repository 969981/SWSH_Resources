/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008e6d00; name: FUN_008e6d00
 */


void FUN_008e6d00(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_120;
  undefined1 local_11c;
  undefined1 local_11b;
  undefined1 local_11a;
  undefined1 local_119;
  undefined1 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined1 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined1 auStack_100 [192];
  
  FUN_0087f4c0(auStack_100);
  FUN_0087f540(auStack_100,param_2,param_3);
  FUN_0087fb10(auStack_100,&local_120,param_4);
  *param_1 = local_120;
  *(undefined1 *)(param_1 + 1) = local_11c;
  *(undefined1 *)((long)param_1 + 6) = local_11b;
  *(undefined1 *)((long)param_1 + 9) = local_11a;
  *(undefined1 *)((long)param_1 + 10) = local_119;
  *(undefined1 *)((long)param_1 + 0xb) = 0;
  *(undefined2 *)((long)param_1 + 7) = 0x301;
  *(undefined1 *)(param_1 + 3) = local_118;
  param_1[4] = local_114;
  param_1[6] = local_110;
  *(undefined1 *)((long)param_1 + 0xd) = local_10c;
  param_1[5] = local_108;
  param_1[7] = local_104;
  FUN_0087f510(auStack_100);
  return;
}


