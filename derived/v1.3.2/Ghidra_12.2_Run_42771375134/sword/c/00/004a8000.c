/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004a8000; name: FUN_004a8000
 */


undefined8 FUN_004a8000(long param_1)

{
  undefined8 uVar1;
  
  if ((*(int *)(param_1 + 8) == 0) || (*(long *)(param_1 + 0x10) != 0)) {
    return 1;
  }
  uVar1 = FUN_004492c0(*(undefined8 *)PTR_DAT_02712ae0,param_1);
  return uVar1;
}


