/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0096b220; name: FUN_0096b220
 */


void FUN_0096b220(undefined8 param_1,byte *param_2,undefined1 *param_3)

{
  byte bVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  *param_2 = 0;
  FUN_009424e0(param_1,*param_3);
  uVar2 = FUN_008e1600();
  if ((uVar2 & 1) == 0) {
    uVar3 = FUN_009423b0(param_1);
    bVar1 = FUN_00939270(uVar3,*param_3);
    *param_2 = bVar1 & 1;
  }
  return;
}


