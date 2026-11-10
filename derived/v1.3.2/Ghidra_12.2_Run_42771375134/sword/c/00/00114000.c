/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00114000; name: FUN_00114000
 */


void FUN_00114000(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  uint local_24;
  
  plVar1 = param_1 + 0x16;
  FUN_00116a80(plVar1);
  FUN_00117740(plVar1);
  FUN_001176c0(plVar1);
  FUN_00118b60(plVar1,param_1 + 6,0,0,(int)param_1[0xc2]);
  if ((int)param_1[7] != 0) {
    uVar2 = 0;
    do {
      while( true ) {
        while (local_24 = *(uint *)(param_1[6] + uVar2 * 4) >> 6, *(uint *)(param_1 + 2) == local_24
              ) {
          *(uint *)(param_1 + 2) = local_24 - 1;
          uVar2 = uVar2 + 1;
          if (*(uint *)(param_1 + 7) <= uVar2) goto LAB_001140e0;
        }
        if ((*(uint *)((long)param_1 + 0xc) & 0x7fffffff) <= *(uint *)(param_1 + 1)) break;
        *(uint *)(*param_1 + (ulong)*(uint *)(param_1 + 1) * 4) = local_24;
        *(int *)(param_1 + 1) = (int)param_1[1] + 1;
        uVar2 = uVar2 + 1;
        if (*(uint *)(param_1 + 7) <= uVar2) goto LAB_001140e0;
      }
      FUN_001b4230(param_1,&local_24);
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 7));
  }
LAB_001140e0:
  *(undefined4 *)(param_1 + 7) = 0;
  return;
}


