/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014abb50; name: FUN_014abb50
 */


bool FUN_014abb50(long param_1,uint param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = (ulong)(param_2 & 0xffff) | (param_3 & 0xffff) << 0x10;
  lVar2 = FUN_00c8bba0(*(undefined8 *)(param_1 + 0x170),uVar1,0);
  lVar3 = FUN_00c8bba0(*(undefined8 *)(param_1 + 0x170),uVar1 | 0x100000000,0);
  return lVar2 != 0 && lVar3 != 0;
}


