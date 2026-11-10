/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009a32a0; name: FUN_009a32a0
 */


void FUN_009a32a0(undefined8 param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 *puVar5;
  
  bVar1 = FUN_009141c0(param_2);
  if (bVar1 != 0) {
    uVar4 = 0;
    puVar5 = (undefined1 *)(param_3 + 9);
    do {
      FUN_00914310(param_2,uVar4 & 0xffffffff);
      uVar2 = FUN_008e0a00();
      uVar3 = FUN_009423b0(param_1);
      FUN_0093a380(uVar3,uVar2,*(undefined4 *)(puVar5 + -9),puVar5[-5],puVar5[-4],puVar5[-3],
                   puVar5[-1],*puVar5,puVar5[-2]);
      uVar4 = uVar4 + 1;
      puVar5 = puVar5 + 0x10;
    } while (bVar1 != uVar4);
  }
  return;
}


