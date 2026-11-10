/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0087a670; name: FUN_0087a670
 */


undefined8 FUN_0087a670(long param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  if (param_2 < 6) {
    uVar1 = *(undefined4 *)(&DAT_02144020 + (long)(int)param_2 * 4);
    uVar2 = FUN_00868cc0(*(undefined8 *)(param_1 + 0x98));
    uVar3 = FUN_0086b360(*(undefined8 *)(param_1 + 0x98));
    FUN_008649f0(uVar2,uVar3);
    uVar4 = FUN_00864a10(uVar1);
    return uVar4;
  }
  return 0;
}


