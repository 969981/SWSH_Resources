/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008f7ff0; name: FUN_008f7ff0
 */


undefined4 FUN_008f7ff0(long param_1,byte param_2,byte param_3)

{
  undefined4 uVar1;
  char cVar2;
  char cVar3;
  undefined4 uVar4;
  
  if (param_2 == param_3) {
    return 0;
  }
  uVar4 = *(undefined4 *)(param_1 + 0x150);
  cVar2 = FUN_008eef90(uVar4);
  cVar3 = FUN_008eef90(uVar4,param_3);
  uVar4 = 3;
  if (param_3 < 2) {
    uVar4 = 1;
  }
  uVar1 = 2;
  if (cVar2 != cVar3) {
    uVar1 = uVar4;
  }
  return uVar1;
}


