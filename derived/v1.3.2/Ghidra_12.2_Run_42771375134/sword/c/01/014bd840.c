/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014bd840; name: FUN_014bd840
 */


undefined4 FUN_014bd840(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = FUN_019c1410(param_2,&DAT_01d0b4b2);
  if (lVar3 == 0) {
    uVar1 = 2;
  }
  else {
    uVar1 = FUN_014c30d0(*(undefined8 *)PTR_DAT_02710820,
                         *(undefined4 *)(lVar3 + (ulong)*(uint *)(lVar3 + 4)));
  }
  uVar4 = *(undefined8 *)PTR_DAT_02710820;
  uVar2 = FUN_014c2840(*(undefined4 *)(param_1 + 0x168));
  uVar4 = FUN_014c2820(uVar4,uVar1,uVar2);
  lVar3 = FUN_019cc190(param_2);
  if (lVar3 == 0) {
    FUN_019cc1a0(param_2,uVar4);
  }
  *(undefined8 *)(param_1 + 0x160) = uVar4;
  return uVar1;
}


