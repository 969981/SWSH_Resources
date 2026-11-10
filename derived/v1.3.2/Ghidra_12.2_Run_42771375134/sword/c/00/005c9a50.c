/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005c9a50; name: FUN_005c9a50
 */


ulong FUN_005c9a50(long param_1,byte *param_2,ulong param_3,uint param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  byte *pbVar5;
  uint uVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  
  if ((param_2 != (byte *)0x0) && (uVar7 = *(ulong *)(param_1 + 0x10), uVar7 != 0)) {
    lVar4 = 0;
    do {
      pbVar5 = param_2 + lVar4;
      lVar4 = lVar4 + 1;
    } while (*pbVar5 != 0);
    if (lVar4 != 1) {
      uVar6 = (uint)*param_2;
      if ((param_4 & 1) == 0) {
        uVar6 = toupper((uint)*param_2);
      }
      if (param_3 < uVar7) {
        lVar4 = *(long *)(param_1 + 8);
        if ((param_4 & 1) != 0) {
          pbVar5 = (byte *)(lVar4 + param_3);
          do {
            pbVar5 = pbVar5 + 1;
            if ((uint)*(byte *)(lVar4 + param_3) == (uVar6 & 0xff)) {
              bVar1 = param_2[1];
              pbVar8 = param_2 + 2;
              pbVar9 = pbVar5;
              while( true ) {
                if (bVar1 == 0) {
                  return param_3;
                }
                if (*pbVar9 != bVar1) break;
                bVar1 = *pbVar8;
                pbVar9 = pbVar9 + 1;
                pbVar8 = pbVar8 + 1;
              }
            }
            param_3 = param_3 + 1;
          } while (param_3 < uVar7);
          return 0xffffffffffffffff;
        }
        pbVar5 = (byte *)(lVar4 + param_3);
        do {
          pbVar5 = pbVar5 + 1;
          uVar2 = toupper((uint)*(byte *)(lVar4 + param_3));
          if ((uVar6 & 0xff) == (uVar2 & 0xff)) {
            uVar2 = toupper((uint)param_2[1]);
            if ((uVar2 & 0xff) == 0) {
              return param_3;
            }
            pbVar8 = param_2 + 2;
            pbVar9 = pbVar5;
            while (uVar3 = toupper((uint)*pbVar9), (uVar2 & 0xff) == (uVar3 & 0xff)) {
              uVar2 = toupper((uint)*pbVar8);
              pbVar9 = pbVar9 + 1;
              pbVar8 = pbVar8 + 1;
              if ((uVar2 & 0xff) == 0) {
                return param_3;
              }
            }
          }
          param_3 = param_3 + 1;
        } while (param_3 < uVar7);
        return 0xffffffffffffffff;
      }
    }
  }
  return 0xffffffffffffffff;
}


