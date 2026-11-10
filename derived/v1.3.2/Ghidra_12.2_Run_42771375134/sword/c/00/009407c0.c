/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009407c0; name: FUN_009407c0
 */


undefined8 FUN_009407c0(undefined8 *param_1,undefined4 param_2)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = FUN_008f8110(*param_1);
  if (((iVar2 == 2) || (iVar2 = FUN_008f3790(*param_1), iVar2 != 0)) ||
     (bVar1 = FUN_008f94e0(param_2), (bVar1 | 2) != 3)) {
    return 0;
  }
  return 1;
}


