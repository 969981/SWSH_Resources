/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008e3750; name: FUN_008e3750
 */


undefined8 FUN_008e3750(long param_1,int param_2)

{
  char cVar1;
  byte bVar2;
  undefined1 uVar3;
  
  bVar2 = *(byte *)(param_1 + 0x33f);
  if (param_2 < 1) {
    if (bVar2 == 0) {
      return 0;
    }
    cVar1 = bVar2 + (char)param_2;
    if ((int)(uint)bVar2 <= -param_2) {
      cVar1 = '\0';
    }
    *(char *)(param_1 + 0x33f) = cVar1;
    return 1;
  }
  if (2 < bVar2) {
    return 0;
  }
  uVar3 = (undefined1)((uint)bVar2 + param_2);
  if (2 < ((uint)bVar2 + param_2 & 0xff)) {
    uVar3 = 3;
  }
  *(undefined1 *)(param_1 + 0x33f) = uVar3;
  return 1;
}


