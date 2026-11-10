/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f16800; name: FUN_00f16800
 */


undefined8 FUN_00f16800(long param_1)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  plVar1 = *(long **)(*(long *)PTR_DAT_027194d8 + 0xb0);
  plVar2 = *(long **)(*(long *)PTR_DAT_027194d8 + 0xb8);
  do {
    if (plVar1 == plVar2) {
      uVar3 = *(uint *)(param_1 + 0x68);
joined_r0x00f16878:
      if (uVar3 < 8) {
                    /* WARNING: Could not recover jumptable at 0x00f168b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar5 = (*(code *)(&DAT_021619e0 + *(int *)(&DAT_021619e0 + (ulong)uVar3 * 4)))(5);
        return uVar5;
      }
      return 0;
    }
    uVar4 = FUN_015b5320(*plVar1 + 0x50);
    if (((uVar4 & 1) != 0) && (uVar4 = (**(code **)(*(long *)*plVar1 + 0x88))(), (uVar4 & 1) == 0))
    {
      uVar3 = *(uint *)(param_1 + 0x68);
      goto joined_r0x00f16878;
    }
    plVar1 = plVar1 + 1;
  } while( true );
}


