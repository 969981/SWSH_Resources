/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0087ef70; name: FUN_0087ef70
 */


void FUN_0087ef70(long param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = FUN_0086ce40(*(undefined8 *)(param_1 + 0x98));
  if ((uVar3 & 0xff) == 0) {
    return;
  }
  uVar1 = 0x10;
  if ((uVar3 & 0xf0) != 0) {
    uVar1 = uVar3 & 0xfffffff0;
  }
  uVar2 = 0;
  if (param_2 <= (int)(uVar3 & 0xf) && param_2 < 5) {
    uVar2 = (uVar3 & 0xf) - param_2;
  }
  FUN_00873b40(*(undefined8 *)(param_1 + 0x98),uVar1 | uVar2);
  return;
}


