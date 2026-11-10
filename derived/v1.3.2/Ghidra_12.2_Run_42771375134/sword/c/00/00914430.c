/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00914430; name: FUN_00914430
 */


ulong FUN_00914430(long param_1,char param_2)

{
  char cVar1;
  ulong uVar2;
  
  if (*(char *)(param_1 + 0x30) != '\0') {
    uVar2 = 0;
    do {
      cVar1 = FUN_008e0a00(*(undefined8 *)(param_1 + uVar2 * 8));
      if (cVar1 == param_2) goto LAB_0091447c;
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(byte *)(param_1 + 0x30));
  }
  uVar2 = 6;
LAB_0091447c:
  return uVar2 & 0xffffffff;
}


