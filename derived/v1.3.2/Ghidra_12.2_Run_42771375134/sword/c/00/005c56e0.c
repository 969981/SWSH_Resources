/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005c56e0; name: FUN_005c56e0
 */


long FUN_005c56e0(byte *param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  
  lVar5 = -(ulong)(param_1 != (byte *)0x0 || param_2 != (byte *)0x0);
  if ((param_1 != (byte *)0x0) && (lVar5 = 1, param_2 != (byte *)0x0)) {
    bVar1 = *param_1;
    uVar4 = (uint)bVar1;
    bVar2 = *param_2;
    uVar6 = (uint)bVar2;
    lVar5 = -(ulong)(bVar2 != 0 || bVar1 != 0);
    bVar3 = bVar1 == 0 || bVar2 == 0;
    if (bVar1 != 0) {
      lVar5 = 1;
    }
    if ((param_3 & 1) == 0) {
      if (bVar3) {
        return lVar5;
      }
      do {
        param_2 = param_2 + 1;
        param_1 = param_1 + 1;
        uVar4 = toupper(uVar4);
        uVar6 = toupper(uVar6);
        if ((uVar4 & 0xff) < (uVar6 & 0xff)) {
          return -1;
        }
        if ((uVar6 & 0xff) < (uVar4 & 0xff)) {
          return 1;
        }
        uVar4 = (uint)*param_1;
        uVar6 = (uint)*param_2;
      } while ((uVar4 != 0) && (uVar6 != 0));
    }
    else {
      if (bVar3) {
        return lVar5;
      }
      do {
        param_2 = param_2 + 1;
        param_1 = param_1 + 1;
        if (uVar4 < uVar6) {
          return -1;
        }
        if (uVar6 < uVar4) {
          return 1;
        }
        uVar4 = (uint)*param_1;
        uVar6 = (uint)*param_2;
      } while ((uVar4 != 0) && (uVar6 != 0));
    }
    lVar5 = -(ulong)(uVar6 != 0 || uVar4 != 0);
    if (uVar4 != 0) {
      lVar5 = 1;
    }
  }
  return lVar5;
}


