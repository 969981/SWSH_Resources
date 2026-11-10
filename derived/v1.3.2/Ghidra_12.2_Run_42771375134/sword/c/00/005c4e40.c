/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005c4e40; name: FUN_005c4e40
 */


undefined4 * FUN_005c4e40(byte *param_1,undefined4 *param_2,long param_3)

{
  long lVar1;
  undefined4 *puVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  
  puVar2 = param_2;
  if (param_1 != (byte *)0x0) {
    lVar1 = 0;
    if ((0 < param_3) && (uVar4 = (uint)*param_1, *param_1 != 0)) {
      lVar1 = 0;
      lVar3 = 0;
      do {
        if ((char)uVar4 < '\0') {
          if (uVar4 < 0xe0) {
            param_2[lVar1] = param_1[lVar3 + 1] & 0x3f | (uVar4 & 0x1f) << 6;
            lVar5 = 2;
            lVar1 = lVar1 + 1;
          }
          else if (uVar4 < 0xf0) {
            param_2[lVar1] =
                 (uVar4 & 0xf) << 0xc | (param_1[lVar3 + 1] & 0x3f) << 6 | param_1[lVar3 + 2] & 0x3f
            ;
            lVar5 = 3;
            lVar1 = lVar1 + 1;
          }
          else {
            lVar5 = 4;
          }
        }
        else {
          param_2[lVar1] = uVar4;
          lVar5 = 1;
          lVar1 = lVar1 + 1;
        }
        if (param_3 <= lVar1) break;
        lVar3 = lVar3 + lVar5;
        uVar4 = (uint)param_1[lVar3];
      } while (uVar4 != 0);
    }
    puVar2 = param_2 + lVar1;
  }
  *puVar2 = 0;
  return param_2;
}


