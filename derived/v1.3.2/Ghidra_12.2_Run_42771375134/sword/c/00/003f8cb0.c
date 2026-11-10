/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003f8cb0; name: FUN_003f8cb0
 */


void FUN_003f8cb0(long param_1,long *param_2)

{
  ushort uVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  if (*(int *)(param_1 + 0x48) == 6) {
    (**(code **)(*param_2 + 0x18))(param_2,0x10);
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0x10);
    uVar2 = *(undefined8 *)(param_1 + 0x70);
    uVar1 = *(ushort *)(param_1 + 0x78);
  }
  else {
    if (*(int *)(param_1 + 0x48) != 5) {
      return;
    }
    (**(code **)(*param_2 + 0x18))(param_2,0x10);
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0x10);
    uVar2 = *(undefined8 *)(param_1 + 0x88);
    uVar1 = *(ushort *)(param_1 + 0x90);
  }
                    /* WARNING: Could not recover jumptable at 0x003f8d34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_2,uVar2,(ulong)uVar1 << 1);
  return;
}


