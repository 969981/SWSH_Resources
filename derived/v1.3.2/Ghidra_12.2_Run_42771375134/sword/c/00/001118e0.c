/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001118e0; name: FUN_001118e0
 */


void FUN_001118e0(undefined8 *param_1)

{
  uint uVar1;
  long *plVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong local_28;
  
  FUN_003ff570(*param_1);
  iVar3 = *(int *)(param_1 + 2);
  param_1[0x1d] = 0;
  if (iVar3 != 0) {
    do {
      while( true ) {
        local_28 = *(ulong *)(param_1[1] + (ulong)(iVar3 - 1U) * 8);
        *(uint *)(param_1 + 2) = iVar3 - 1U;
        uVar4 = *(ulong *)(param_1[0x1c] + 0x18);
        if ((uVar4 <= local_28) && (local_28 < uVar4 + *(uint *)(param_1[0x1c] + 0x20))) break;
        uVar1 = *(uint *)(param_1 + 0x14);
        if (uVar1 < (*(uint *)((long)param_1 + 0xa4) & 0x7fffffff)) {
          *(ulong *)(param_1[0x13] + (ulong)uVar1 * 8) = local_28;
          *(uint *)(param_1 + 0x14) = uVar1 + 1;
        }
        else {
                    /* try { // try from 00111994 to 001119c3 has its CatchHandler @ 00111a44 */
          FUN_00112800(param_1 + 0x13,&local_28);
        }
        *(int *)((long)param_1 + 0xc4) = *(int *)((long)param_1 + 0xc4) + -1;
LAB_001119ac:
        iVar3 = *(int *)(param_1 + 2);
        if (iVar3 == 0) goto LAB_001119c8;
      }
      uVar1 = *(uint *)(param_1 + 0x10);
      if ((*(uint *)((long)param_1 + 0x84) & 0x7fffffff) <= uVar1) {
        FUN_00112800(param_1 + 0xf,&local_28);
        goto LAB_001119ac;
      }
      *(ulong *)(param_1[0xf] + (ulong)uVar1 * 8) = local_28;
      *(uint *)(param_1 + 0x10) = uVar1 + 1;
      iVar3 = *(int *)(param_1 + 2);
    } while (iVar3 != 0);
  }
LAB_001119c8:
  uVar4 = (ulong)*(uint *)(param_1 + 0x12);
  if (*(uint *)(param_1 + 0x12) != 0) {
    uVar6 = 0;
    do {
      lVar5 = *(long *)(param_1[0x11] + uVar6 * 8);
      if (lVar5 != 0) {
                    /* try { // try from 001119e0 to 001119f3 has its CatchHandler @ 00111a48 */
        plVar2 = (long *)FUN_00400d30();
        (**(code **)(*plVar2 + 0x18))(plVar2,lVar5);
        uVar4 = (ulong)*(uint *)(param_1 + 0x12);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar4);
  }
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (param_1[0x1a] != 0) {
                    /* try { // try from 00111a18 to 00111a1b has its CatchHandler @ 00111a3c */
    FUN_00111d30(param_1[0x1c]);
    param_1[0x1a] = 0;
    *(undefined4 *)(param_1 + 0x1b) = 0;
  }
                    /* try { // try from 00111a28 to 00111a2b has its CatchHandler @ 00111a40 */
  FUN_003ff5a0(*param_1);
  return;
}


