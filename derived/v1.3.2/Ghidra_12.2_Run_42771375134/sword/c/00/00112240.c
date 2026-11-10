/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00112240; name: FUN_00112240
 */


void FUN_00112240(undefined8 *param_1,long *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  ulong local_38;
  
  FUN_003ff570(*param_1);
  iVar2 = (int)param_2[1];
  if (iVar2 != 0) {
    do {
      while( true ) {
        local_38 = *(ulong *)(*param_2 + (ulong)(iVar2 - 1U) * 8);
        *(uint *)(param_2 + 1) = iVar2 - 1U;
        uVar3 = *(ulong *)(param_1[0x1c] + 0x18);
        if ((uVar3 <= local_38) && (local_38 < uVar3 + *(uint *)(param_1[0x1c] + 0x20))) break;
        uVar1 = *(uint *)(param_1 + 0x14);
        if (uVar1 < (*(uint *)((long)param_1 + 0xa4) & 0x7fffffff)) {
          *(ulong *)(param_1[0x13] + (ulong)uVar1 * 8) = local_38;
          *(uint *)(param_1 + 0x14) = uVar1 + 1;
        }
        else {
                    /* try { // try from 001122f8 to 00112327 has its CatchHandler @ 0011234c */
          FUN_00112800(param_1 + 0x13,&local_38);
        }
        *(int *)((long)param_1 + 0xc4) = *(int *)((long)param_1 + 0xc4) + -1;
LAB_00112310:
        iVar2 = (int)param_2[1];
        if (iVar2 == 0) goto LAB_0011232c;
      }
      uVar1 = *(uint *)(param_1 + 0x10);
      if ((*(uint *)((long)param_1 + 0x84) & 0x7fffffff) <= uVar1) {
        FUN_00112800(param_1 + 0xf,&local_38);
        goto LAB_00112310;
      }
      *(ulong *)(param_1[0xf] + (ulong)uVar1 * 8) = local_38;
      *(uint *)(param_1 + 0x10) = uVar1 + 1;
      iVar2 = (int)param_2[1];
    } while (iVar2 != 0);
  }
LAB_0011232c:
                    /* try { // try from 00112330 to 00112333 has its CatchHandler @ 00112348 */
  FUN_003ff5a0(*param_1);
  return;
}


