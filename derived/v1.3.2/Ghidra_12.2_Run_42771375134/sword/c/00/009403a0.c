/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009403a0; name: FUN_009403a0
 */


undefined8 FUN_009403a0(long param_1,char param_2)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  
  uVar3 = FUN_008db610(*(undefined8 *)(param_1 + 0x30),5);
  if ((uint)uVar3 != 0) {
    uVar5 = 0;
    do {
      uVar4 = *(undefined8 *)(param_1 + 0x30);
      uVar2 = FUN_008db610(uVar4,5);
      if ((uVar5 & 0xff) < uVar2) {
        cVar1 = FUN_008db610(uVar4,(uVar5 & 0xff) + 6);
        if (cVar1 == param_2) {
          return 1;
        }
      }
      else if (param_2 == '\x1f') {
        return 1;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < (uint)uVar3);
    uVar3 = 0;
  }
  return uVar3;
}


