/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00940450; name: FUN_00940450
 */


undefined8 FUN_00940450(undefined8 *param_1,char param_2)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  
  uVar4 = FUN_008db610(param_1[6],5);
  if ((uint)uVar4 != 0) {
    uVar6 = 0;
    do {
      uVar5 = param_1[6];
      uVar2 = FUN_008db610(uVar5,5);
      if ((uVar6 & 0xff) < uVar2) {
        uVar3 = FUN_008db610(uVar5,(uVar6 & 0xff) + 6);
      }
      else {
        uVar3 = 0x1f;
      }
      cVar1 = FUN_008fa070(*param_1,uVar3);
      if (cVar1 == param_2) {
        return 1;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < (uint)uVar4);
    uVar4 = 0;
  }
  return uVar4;
}


