/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0048c900; name: FUN_0048c900
 */


void FUN_0048c900(long param_1,int param_2,uint param_3)

{
  undefined1 auVar1 [16];
  
  auVar1 = SEXT816((long)((ulong)*(uint *)PTR_DAT_02712b38 * (long)param_2)) *
           SEXT816(0x20c49ba5e353f7cf);
  *(int *)(param_1 + 0x264) = (int)(auVar1._8_8_ >> 7) - (auVar1._12_4_ >> 0x1f);
  *(uint *)(param_1 + 0x26b) =
       *(uint *)(param_1 + 0x26b) & 0xfe7fffff | (param_3 & 1) << 0x18 | 0x400000;
  FUN_00468170(5,param_1);
  return;
}


