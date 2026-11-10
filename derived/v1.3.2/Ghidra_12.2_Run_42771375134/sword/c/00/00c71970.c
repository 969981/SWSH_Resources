/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c71970; name: FUN_00c71970
 */


void FUN_00c71970(long param_1,int param_2,byte param_3)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long local_28;
  
  if (param_2 < 6) {
    *(byte *)(param_1 + param_2 + 0x1c8) = param_3 & 1;
    plVar2 = *(long **)(param_1 + (long)param_2 * 8 + 0x168);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0xa8))(&local_28);
      lVar1 = local_28;
      if (local_28 != 0) {
        if (*(int *)(local_28 + 0x54) != 0) {
          lVar4 = *(long *)(local_28 + 0x60);
          if (lVar4 == 0) {
            lVar4 = 0;
          }
          else {
            uVar3 = FUN_00a8cbe0(lVar4);
            lVar4 = lVar4 + -0x50;
            if ((uVar3 & 1) == 0) {
              lVar4 = 0;
            }
          }
          local_28 = 0;
          FUN_007273c0(lVar4,param_3 & 1,&local_28);
        }
        (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
      }
    }
  }
  return;
}


