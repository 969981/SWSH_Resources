/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fb47e0; name: FUN_00fb47e0
 */


void FUN_00fb47e0(long *param_1)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = *(int *)((long)param_1 + 0x54);
  if (iVar1 == 3) {
    (**(code **)(*param_1 + 0x40))(param_1);
    uVar2 = (**(code **)(*param_1 + 0x50))(param_1);
    if ((uVar2 & 1) == 0) {
      return;
    }
    *(undefined4 *)((long)param_1 + 0x5c) = 0;
    *(undefined1 *)((long)param_1 + 0x5a) = 1;
  }
  else {
    if (iVar1 == 2) {
                    /* WARNING: Could not recover jumptable at 0x00fb4880. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x40))(param_1);
      return;
    }
    if (iVar1 != 1) {
      return;
    }
    uVar2 = (**(code **)(*param_1 + 0x30))(param_1);
    if ((uVar2 & 1) == 0) {
      return;
    }
    *(undefined1 *)(param_1 + 0xb) = 1;
  }
  *(undefined4 *)((long)param_1 + 0x54) = 0;
  return;
}


