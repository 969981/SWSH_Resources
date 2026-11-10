/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00490530; name: FUN_00490530
 */


undefined8 FUN_00490530(long *param_1,ushort param_2,uint param_3)

{
  long lVar1;
  
  lVar1 = FUN_00404750(*(undefined4 *)PTR_DAT_02712e28,(uint)param_2 * (param_3 & 0xff) * 4,0x10);
  if (lVar1 == 0) {
    return 0x34;
  }
  *param_1 = lVar1;
  *(ushort *)(param_1 + 2) = param_2;
  *(uint *)(param_1 + 1) = param_3;
  *(undefined2 *)((long)param_1 + 0x12) = 0;
  return 1;
}


