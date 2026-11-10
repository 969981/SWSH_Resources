/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00887fd0; name: FUN_00887fd0
 */


undefined8 FUN_00887fd0(long param_1,uint param_2,byte param_3,undefined2 *param_4)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  byte *pbVar7;
  
  if (0xb < (param_2 & 0xff)) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 0x160);
  lVar3 = lVar2 + (ulong)*(ushort *)(lVar2 + 2) * 2 + 0x364;
  if ((param_2 & 0xff) == 0) {
    bVar1 = *(byte *)(lVar2 + 0x14);
  }
  else {
    uVar4 = (ulong)param_2 & 0xff;
    if (uVar4 - 1 < 3) {
      lVar6 = 0;
    }
    else {
      lVar6 = 0;
      do {
        lVar5 = lVar2 + lVar6;
        lVar6 = lVar6 + 4;
        lVar3 = lVar3 + (ulong)*(byte *)(lVar5 + 8) * 2 + (ulong)*(byte *)(lVar5 + 9) * 2 +
                (ulong)*(byte *)(lVar5 + 10) * 2 + (ulong)*(byte *)(lVar5 + 0xb) * 2;
      } while (uVar4 - ((ulong)param_2 & 3) != lVar6);
    }
    if ((param_2 & 3) != 0) {
      lVar5 = -((ulong)param_2 & 3);
      pbVar7 = (byte *)(lVar2 + lVar6 + 8);
      do {
        lVar3 = lVar3 + (ulong)*pbVar7 * 2;
        lVar5 = lVar5 + 1;
        pbVar7 = pbVar7 + 1;
      } while (lVar5 != 0);
    }
    bVar1 = *(byte *)(lVar2 + uVar4 + 0x14);
  }
  if (param_3 < bVar1) {
    *param_4 = *(undefined2 *)(lVar3 + (ulong)param_3 * 2);
    return 1;
  }
  return 0;
}


