/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00112130; name: FUN_00112130
 */


void FUN_00112130(undefined8 *param_1,long *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 local_28;
  
  FUN_003ff570(*param_1);
  iVar2 = (int)param_2[1];
  *(int *)((long)param_1 + 0xc4) = *(int *)((long)param_1 + 0xc4) - iVar2;
  if (param_3 != (int *)0x0) {
    *param_3 = *param_3 - iVar2;
    iVar2 = (int)param_2[1];
  }
  if (iVar2 != 0) {
    do {
      while( true ) {
        local_28 = *(undefined8 *)(*param_2 + (ulong)(iVar2 - 1U) * 8);
        *(uint *)(param_2 + 1) = iVar2 - 1U;
        uVar1 = *(uint *)(param_1 + 0x14);
        if ((*(uint *)((long)param_1 + 0xa4) & 0x7fffffff) <= uVar1) break;
        *(undefined8 *)(param_1[0x13] + (ulong)uVar1 * 8) = local_28;
        *(uint *)(param_1 + 0x14) = uVar1 + 1;
        iVar2 = (int)param_2[1];
        if (iVar2 == 0) goto LAB_001121d4;
      }
                    /* try { // try from 001121c0 to 001121cb has its CatchHandler @ 001121f0 */
      FUN_00112800(param_1 + 0x13,&local_28);
      iVar2 = (int)param_2[1];
    } while (iVar2 != 0);
  }
LAB_001121d4:
                    /* try { // try from 001121d8 to 001121db has its CatchHandler @ 001121ec */
  FUN_003ff5a0(*param_1);
  return;
}


