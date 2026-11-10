/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008e4d80; name: FUN_008e4d80
 */


undefined8 FUN_008e4d80(long param_1,byte param_2,byte param_3,undefined8 *param_4)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  
  if (2 < param_2) {
    return 0;
  }
  iVar3 = (uint)*(byte *)(param_1 + 0x453) - (uint)param_2;
  iVar1 = iVar3 + 3;
  if (-1 < iVar3) {
    iVar1 = iVar3;
  }
  bVar2 = *(byte *)(param_1 + iVar1 + 0x450);
  if (param_3 < bVar2) {
    lVar4 = param_1 + (long)iVar1 * 0x48 + (ulong)(byte)(bVar2 + ~param_3) * 0xc;
    uVar5 = *(undefined8 *)(lVar4 + 0x378);
    *(undefined4 *)(param_4 + 1) = *(undefined4 *)(lVar4 + 0x380);
    *param_4 = uVar5;
    return 1;
  }
  return 0;
}


