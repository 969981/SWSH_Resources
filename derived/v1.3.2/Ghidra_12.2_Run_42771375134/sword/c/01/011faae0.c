/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011faae0; name: FUN_011faae0
 */


void FUN_011faae0(long param_1)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  if ((((*(int *)(param_1 + 0x50) == 1) && (*(long *)(param_1 + 0x128) != 0)) &&
      (*(int *)(param_1 + 0x58) != 0)) &&
     (uVar2 = FUN_0101b5e0(*(undefined8 *)PTR_DAT_02710848), (uVar2 & 1) != 0)) {
    lVar1 = *(long *)(param_1 + 0x120);
    lVar5 = *(long *)(param_1 + 0x128) + -1;
    lVar4 = *(long *)(lVar1 + lVar5 * 0x10);
    if (lVar4 != 0) {
      plVar3 = (long *)(lVar4 + 0x48);
      (**(code **)(*plVar3 + 0x10))(plVar3);
      if (*(int *)(lVar4 + 0x54) != 0) {
        (**(code **)**(undefined8 **)(lVar1 + lVar5 * 0x10 + 8))();
        *(undefined4 *)(param_1 + 0x50) = 2;
      }
                    /* WARNING: Could not recover jumptable at 0x011fab9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x18))(plVar3);
      return;
    }
  }
  return;
}


