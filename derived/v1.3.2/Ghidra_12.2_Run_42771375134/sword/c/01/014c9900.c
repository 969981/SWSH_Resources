/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014c9900; name: FUN_014c9900
 */


void FUN_014c9900(long param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  bool bVar2;
  ulong uVar3;
  
  uVar3 = FUN_014bbe60(*(undefined8 *)PTR_DAT_02710898,param_4);
  *(undefined4 *)(*(long *)(param_1 + 0x200) + (ulong)param_2 * 8) = param_3;
  puVar1 = (undefined4 *)(*(long *)(param_1 + 0x200) + (ulong)param_2 * 8 + 4);
  bVar2 = (uVar3 & 1) == 0;
  if (bVar2) {
    *puVar1 = 0;
  }
  else {
    *puVar1 = 1;
  }
  FUN_014c99a0(param_1,param_2,param_3,!bVar2,0);
  return;
}


