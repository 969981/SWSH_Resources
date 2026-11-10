/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006135c0; name: FUN_006135c0
 */


undefined2 FUN_006135c0(byte *param_1,byte *param_2)

{
  int iVar1;
  long lVar2;
  char cVar3;
  ulong uVar4;
  byte *pbVar5;
  int iVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  byte *pbVar10;
  
  if ((param_1 != (byte *)0x0) && (param_1 < param_2)) {
    iVar6 = 0;
    iVar9 = 0x34;
    do {
      uVar4 = (long)(iVar9 + iVar6) & 0xfffffffffffffffe;
      pbVar5 = PTR_DAT_02714578 + CONCAT11(PTR_DAT_02714578[uVar4 + 2],PTR_DAT_02714578[uVar4 + 3]);
      bVar7 = *pbVar5;
      uVar8 = (uint)bVar7;
      if ((bVar7 & 0x7f) == *param_1) {
        while (param_1 = param_1 + 1, param_1 < param_2) {
          cVar3 = (char)uVar8;
          pbVar5 = pbVar5 + 1;
          bVar7 = *pbVar5;
          uVar8 = (uint)bVar7;
          if (cVar3 < '\0') {
            if ((uint)*param_1 != (uVar8 & 0x7f)) {
              return 0;
            }
          }
          else {
            if ((bVar7 & 0x7f) == 0) {
              return 0;
            }
            lVar2 = 3;
            if ((bVar7 & 0x80) == 0) {
              lVar2 = 1;
            }
            pbVar10 = pbVar5 + lVar2;
            iVar6 = (uVar8 & 0x7f) + 1;
            while( true ) {
              pbVar5 = PTR_DAT_02714578 + CONCAT11(*pbVar10,pbVar10[1]);
              uVar8 = (uint)*pbVar5;
              if ((uint)*param_1 == (uVar8 & 0x7f)) break;
              iVar6 = iVar6 + -1;
              pbVar10 = pbVar10 + 2;
              if (iVar6 < 2) {
                return 0;
              }
            }
          }
          bVar7 = (byte)uVar8;
        }
        if ((char)bVar7 < '\0') {
          return 0;
        }
        if ((char)pbVar5[1] < '\0') {
          return CONCAT11(pbVar5[2],pbVar5[3]);
        }
        return 0;
      }
      iVar1 = iVar9 + iVar6 >> 1;
      if ((bVar7 & 0x7f) < *param_1) {
        iVar6 = iVar1 + 1;
        iVar1 = iVar9;
      }
      iVar9 = iVar1;
    } while (iVar6 < iVar1);
  }
  return 0;
}


