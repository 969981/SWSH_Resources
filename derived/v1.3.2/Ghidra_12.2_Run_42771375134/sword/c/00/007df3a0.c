/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007df3a0; name: FUN_007df3a0
 */


undefined8 FUN_007df3a0(long *param_1,undefined8 param_2)

{
  long lVar1;
  
  if (*param_1 == 0) {
    lVar1 = FUN_01965c00();
    *param_1 = lVar1;
    if (lVar1 != 0) {
      *(undefined4 *)(param_1 + 0x16) = 0;
      FUN_01965ca0(lVar1,0x2712,param_2);
      FUN_01965ca0(*param_1,0x34,1);
      FUN_01965ca0(*param_1,0xb5,2);
      FUN_01965ca0(*param_1,0x4e,0x1e);
      FUN_01965ca0(*param_1,0x4e2b,PTR_LAB_02716df8);
      *(undefined4 *)(param_1 + 0xb) = 0;
      param_1[0xc] = param_1[3];
      param_1[0x17] = 0;
                    /* WARNING: Subroutine does not return */
      memset((void *)param_1[3],0,0x100000);
    }
  }
  return 0;
}


