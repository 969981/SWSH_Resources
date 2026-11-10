/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0020a970; name: FUN_0020a970
 */


void FUN_0020a970(long *param_1,long param_2,int param_3,uint param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_02711230;
  param_1[0xc] = param_2;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(int *)((long)param_1 + 0x54) = param_3;
  *(uint *)(param_1 + 0xb) = param_4;
  *param_1 = (long)(puVar1 + 0x10);
  *(undefined2 *)(param_1 + 0x12) = 0x101;
  if (param_3 == 0) {
    if (param_4 == 0) {
      return;
    }
  }
  else {
                    /* try { // try from 0020a9c0 to 0020a9f3 has its CatchHandler @ 0020aa04 */
    FUN_0020d880(param_1 + 0xd,param_3);
    if (param_4 <= (*(uint *)((long)param_1 + 0x84) & 0x7fffffff)) {
      return;
    }
  }
  FUN_0020d880(param_1 + 0xf,param_4);
  return;
}


