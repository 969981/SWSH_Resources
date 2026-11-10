/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004917e0; name: FUN_004917e0
 */


undefined8 FUN_004917e0(long *param_1)

{
  ushort uVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  
  iVar2 = (**(code **)(*param_1 + 0x88))();
  *(uint *)((long)param_1 + 0x9c) =
       *(uint *)((long)param_1 + 0x9c) & 0xfffc0000 |
       *(uint *)((long)param_1 + 0x9c) & 0x1ffff | (uint)(iVar2 == 0 || iVar2 == 10) << 0x11;
  FUN_004821a0(param_1);
  uVar1 = *(ushort *)((long)param_1 + 0xfd);
  plVar3 = (long *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x18);
  if ((uVar1 & 7) == 1) {
    if (plVar3 != (long *)0x0) {
      FUN_00495440(plVar3);
      param_1[0x19] = (long)plVar3;
      goto joined_r0x00491860;
    }
  }
  else if (plVar3 != (long *)0x0) {
    FUN_00494f70(plVar3);
  }
  param_1[0x19] = (long)plVar3;
joined_r0x00491860:
  if (plVar3 == (long *)0x0) {
    return 2;
  }
                    /* WARNING: Could not recover jumptable at 0x00491894. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (**(code **)(*plVar3 + 0x10))(plVar3);
  return uVar4;
}


