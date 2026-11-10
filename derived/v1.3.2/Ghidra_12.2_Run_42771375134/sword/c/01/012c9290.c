/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012c9290; name: FUN_012c9290
 */


void FUN_012c9290(long *param_1,undefined8 *param_2,long param_3)

{
  if (param_3 != 2) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  FUN_012c94b0(*param_2);
  *(undefined8 *)(*param_1 + 0x80) = *param_2;
  *(undefined8 *)(*param_1 + 0x88) = param_2[1];
  FUN_012c8eb0(*param_1,0,0,&LAB_01200000);
  FUN_012c8eb0(*param_1,1,1,0xc80000);
  FUN_012c8eb0(*param_1,2,1,0x2400000);
  FUN_012c8eb0(*param_1,3,1,0x2400000);
  FUN_012c8eb0(*param_1,4,1,0x2400000);
  FUN_012c8eb0(*param_1,5,1,0xe00000);
  FUN_012c8eb0(*param_1,6,1,0xe00000);
  FUN_012c8eb0(*param_1,7,1,0xe00000);
  FUN_012c8eb0(*param_1,8,1,0xe00000);
  FUN_012c8eb0(*param_1,9,1,0xe00000);
  FUN_012c8eb0(*param_1,10,1,0xe00000);
  FUN_012c8eb0(*param_1,0xb,1,0xe00000);
  FUN_012c8eb0(*param_1,0xc,1,0xe00000);
  FUN_012c8eb0(*param_1,0xd,1,0xe00000);
  FUN_012c8eb0(*param_1,0xe,0,0x1b00000);
  FUN_012c8eb0(*param_1,0xf,0,&LAB_00a00000);
  FUN_012c8eb0(*param_1,0x10,0,&LAB_01200000);
  FUN_012c8eb0(*param_1,0x11,0,0x2c00000);
  FUN_012c8eb0(*param_1,0x14,0,0x1480000);
  FUN_012c8eb0(*param_1,0x12,0,&LAB_00a00000);
  FUN_012c8eb0(*param_1,0x13,1,0x800000);
  return;
}


