/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005c4f30; name: FUN_005c4f30
 */


undefined1 * FUN_005c4f30(uint *param_1,undefined1 *param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined1 *puVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  
  puVar4 = param_2;
  if (param_1 != (uint *)0x0) {
    uVar5 = *param_1;
    if (uVar5 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = 0;
      do {
        param_1 = param_1 + 1;
        if (uVar5 < 0x80) {
          if (param_3 <= lVar3) break;
          lVar7 = 1;
          lVar6 = lVar3;
LAB_005c4fdc:
          lVar3 = lVar3 + lVar7;
          param_2[lVar6] = (char)uVar5;
        }
        else {
          if (uVar5 < 0x800) {
            lVar6 = lVar3 + 1;
            if (lVar6 < param_3) {
              param_2[lVar3] = (byte)(uVar5 >> 6) | 0xc0;
              uVar5 = uVar5 & 0x3f | 0xffffff80;
              lVar7 = 2;
              goto LAB_005c4fdc;
            }
            break;
          }
          if (uVar5 < 0xffff) {
            lVar6 = lVar3 + 2;
            if (lVar6 < param_3) {
              uVar2 = uVar5 >> 0xc;
              uVar1 = uVar5 >> 6;
              uVar5 = uVar5 & 0x3f | 0xffffff80;
              param_2[lVar3] = (byte)uVar2 | 0xe0;
              (param_2 + lVar3)[1] = (byte)uVar1 & 0x3f | 0x80;
              lVar7 = 3;
              goto LAB_005c4fdc;
            }
            break;
          }
        }
        uVar5 = *param_1;
      } while (uVar5 != 0);
    }
    puVar4 = param_2 + lVar3;
  }
  *puVar4 = 0;
  return param_2;
}


