/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0087d080; name: FUN_0087d080
 */


undefined8 FUN_0087d080(long param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar1 = FUN_0086d200(*(undefined8 *)(param_1 + 0x98));
  if (uVar1 == *(byte *)(param_2 + 1)) {
    iVar2 = FUN_00868f40(*(undefined8 *)(param_1 + 0x98));
    if ((iVar2 == *param_2) &&
       (uVar3 = FUN_0086e3d0(*(undefined8 *)(param_1 + 0x98),(long)param_2 + 6), (uVar3 & 1) != 0))
    {
      return 1;
    }
  }
  return 0;
}


