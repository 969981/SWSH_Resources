/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c774f0; name: FUN_00c774f0
 */


void FUN_00c774f0(long *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  
  *param_1 = (long)(PTR_DAT_0271c328 + 0x10);
  param_1[1] = param_3;
  FUN_00c77570(param_1 + 2,param_4);
  *(undefined1 *)(param_1 + 0x32) = 0;
  *(undefined1 *)(param_1 + 0x33) = 1;
  *(undefined8 *)((long)param_1 + 0x1b4) = 0;
  *(undefined8 *)((long)param_1 + 0x1ac) = 0;
  *(undefined8 *)((long)param_1 + 0x1a4) = 0;
  *(undefined8 *)((long)param_1 + 0x19c) = 0;
  *(undefined4 *)((long)param_1 + 0x1bc) = 0;
  lVar1 = FUN_0069bda0(param_1[2],param_1 + 7);
  param_1[0x32] = lVar1;
  return;
}


