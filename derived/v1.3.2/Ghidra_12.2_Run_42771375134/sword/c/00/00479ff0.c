/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00479ff0; name: FUN_00479ff0
 */


undefined8 FUN_00479ff0(long *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x88))();
  *(uint *)((long)param_1 + 0x9c) =
       *(uint *)((long)param_1 + 0x9c) & 0xfffc0000 |
       *(uint *)((long)param_1 + 0x9c) & 0x1ffff | (uint)(iVar1 == 0 || iVar1 == 10) << 0x11;
  FUN_004821a0(param_1);
  return 1;
}


