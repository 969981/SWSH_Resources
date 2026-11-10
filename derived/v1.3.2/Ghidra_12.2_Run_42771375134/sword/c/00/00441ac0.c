/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00441ac0; name: FUN_00441ac0
 */


undefined8 FUN_00441ac0(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  
  *(long *)(param_1 + 0xd8) = param_3;
  if ((param_3 != 0) && (*(long *)(param_1 + 0x48) != 0)) {
    FUN_004be250(*(undefined8 *)PTR_DAT_02712b18);
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  if ((param_2 == 0) ||
     (uVar1 = FUN_004be0c0(*(undefined8 *)PTR_DAT_02712b18,param_2,*(undefined8 *)(param_1 + 0xd8)),
     (int)uVar1 == 1)) {
    uVar1 = 1;
    *(long *)(param_1 + 0x48) = param_2;
  }
  return uVar1;
}


