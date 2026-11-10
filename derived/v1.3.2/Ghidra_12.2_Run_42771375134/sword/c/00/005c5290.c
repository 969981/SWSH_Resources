/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005c5290; name: FUN_005c5290
 */


undefined1 * FUN_005c5290(byte *param_1,undefined1 *param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  undefined1 *puVar3;
  byte *pbVar4;
  uint uVar5;
  
  puVar3 = param_2;
  if (param_1 != (byte *)0x0) {
    uVar5 = (uint)*param_1;
    if (*param_1 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = 0;
      pbVar4 = param_1 + 1;
      do {
        while (bVar1 = (byte)uVar5, (char)bVar1 < '\0') {
          if (param_3 <= lVar2 + 1) goto LAB_005c5314;
          param_2[lVar2] = (byte)(uVar5 >> 6) | 0xc0;
          param_2[lVar2 + 1] = bVar1 & 0x3f | 0x80;
          lVar2 = lVar2 + 2;
          uVar5 = (uint)*pbVar4;
          pbVar4 = pbVar4 + 1;
          if (uVar5 == 0) goto LAB_005c5314;
        }
        if (param_3 <= lVar2) break;
        param_2[lVar2] = bVar1;
        lVar2 = lVar2 + 1;
        uVar5 = (uint)*pbVar4;
        pbVar4 = pbVar4 + 1;
      } while (uVar5 != 0);
    }
LAB_005c5314:
    puVar3 = param_2 + lVar2;
  }
  *puVar3 = 0;
  return param_2;
}


