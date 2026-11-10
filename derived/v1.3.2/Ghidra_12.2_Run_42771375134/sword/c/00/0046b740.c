/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0046b740; name: FUN_0046b740
 */


bool FUN_0046b740(long param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  ulong uVar3;
  undefined4 local_4;
  
  if (*(int *)(param_1 + 0x18) == 0) {
    return false;
  }
  local_4 = *(undefined4 *)(PTR_DAT_02713158 + 4);
  pbVar1 = *(byte **)(param_1 + 0x20);
  pbVar2 = pbVar1;
  if (pbVar1 != (byte *)0x0) {
    uVar3 = 0;
    pbVar2 = pbVar1 + ((ulong)(*pbVar1 + 4) & 0x1fc);
    do {
      if (pbVar1[uVar3 + 1] == 1) goto LAB_0046b79c;
      uVar3 = uVar3 + 1;
      pbVar2 = pbVar2 + 4;
    } while (uVar3 < *pbVar1);
    pbVar2 = (byte *)0x0;
  }
LAB_0046b79c:
  pbVar1 = (byte *)&local_4;
  if (pbVar2 != (byte *)0x0) {
    pbVar1 = pbVar2;
  }
  return *(int *)pbVar1 != 0;
}


