/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0094c2e0; name: FUN_0094c2e0
 */


void FUN_0094c2e0(undefined8 param_1,byte *param_2,undefined1 *param_3)

{
  byte bVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  *param_2 = 0;
  uVar3 = FUN_009424e0(param_1,*param_3);
  uVar4 = FUN_008e1600();
  if ((uVar4 & 1) == 0) {
    uVar5 = FUN_009423b0(param_1);
    uVar2 = FUN_008e0a00(uVar3);
    bVar1 = FUN_00939220(uVar5,uVar2);
    *param_2 = bVar1 & 1;
  }
  return;
}


