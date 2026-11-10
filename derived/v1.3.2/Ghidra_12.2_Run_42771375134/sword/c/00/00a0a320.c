/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a0a320; name: FUN_00a0a320
 */


bool FUN_00a0a320(long *param_1,uint param_2)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  
  iVar5 = (**(code **)(*param_1 + 0x870))();
  uVar6 = (**(code **)(*param_1 + 0x7d8))(param_1);
  bVar2 = (param_2 & 1) == 0;
  bVar1 = param_2 < 7 && bVar2;
  if (iVar5 == 2) {
    if ((uVar6 & 0xff) < 8) {
      if ((1 << (ulong)(uVar6 & 0x1f) & 199U) != 0) {
        return bVar1;
      }
      if ((uVar6 & 0xff) == 5) {
        bVar3 = (**(code **)(*param_1 + 0x998))(param_1,0x1000);
        bVar4 = (**(code **)(*param_1 + 0x998))(param_1,0x40000);
        return (bool)(bVar1 & ((bVar3 | bVar4) ^ 1));
      }
    }
  }
  else if (iVar5 == 1) {
    if ((uVar6 & 0xff) - 1 < 2) {
      return true;
    }
    if ((uVar6 & 0xff) - 3 < 2) {
      return param_2 >= 7 || !bVar2;
    }
  }
  return false;
}


