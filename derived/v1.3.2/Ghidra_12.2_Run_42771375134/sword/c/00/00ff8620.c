/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ff8620; name: FUN_00ff8620
 */


void FUN_00ff8620(long *param_1,long param_2,long *param_3,int param_4)

{
  long *plVar1;
  long lVar2;
  int *piVar3;
  ulong uVar4;
  
  if (*(uint *)(param_2 + 400) != 0) {
    uVar4 = 0;
    piVar3 = (int *)(param_2 + 0x20);
    do {
      plVar1 = (long *)PTR_DAT_02710920;
      if (*(long *)(piVar3 + -4) != 0) {
        plVar1 = (long *)(*(long *)(piVar3 + -4) + 0x58);
      }
      if ((*plVar1 == *param_3) && (*piVar3 == param_4)) {
        if ((uint)uVar4 < 0x10) {
          lVar2 = *(long *)(piVar3 + -2);
          *param_1 = lVar2;
          if (lVar2 == 0) {
            return;
          }
                    /* WARNING: Could not recover jumptable at 0x00ff8698. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
          return;
        }
        break;
      }
      uVar4 = uVar4 + 1;
      piVar3 = piVar3 + 6;
    } while (uVar4 < *(uint *)(param_2 + 400));
  }
  *param_1 = 0;
  return;
}


