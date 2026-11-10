/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014bb5f0; name: FUN_014bb5f0
 */


bool FUN_014bb5f0(undefined8 param_1,undefined2 *param_2)

{
  long lVar1;
  undefined2 *puVar2;
  ushort uVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  
  uVar5 = FUN_014ba2e0(*param_2,1);
  lVar1 = 2;
  puVar2 = param_2 + 1;
  if ((uVar5 & 1) == 0) {
    lVar1 = 0;
    puVar2 = param_2;
  }
  uVar3 = *(ushort *)((long)param_2 + lVar1);
  iVar4 = FUN_014bb720(param_1,puVar2);
  if (iVar4 != 2) {
    if (iVar4 == 1) {
      return false;
    }
    uVar6 = (uint)uVar3;
    if ((0xff < uVar3) ||
       ((*(uint *)(&DAT_01d4da20 + (ulong)(uVar3 >> 5) * 4) & 1 << (ulong)(uVar6 & 0x1f)) == 0)) {
      if (uVar6 == 0xe5 || uVar3 < 0xe5) {
        if ((uVar6 == 0x59) || (uVar6 == 0x79)) {
          uVar3 = puVar2[1];
          if (uVar3 < 0x100) {
            return (*(uint *)(&DAT_01d4da20 + (ulong)(uVar3 >> 5) * 4) & 1 << (ulong)(uVar3 & 0x1f))
                   == 0;
          }
        }
        else if (uVar6 != 0xc6) {
          return false;
        }
      }
      else if ((1 < uVar6 - 0x152) && (uVar6 != 0xe6)) {
        return false;
      }
    }
  }
  return true;
}


