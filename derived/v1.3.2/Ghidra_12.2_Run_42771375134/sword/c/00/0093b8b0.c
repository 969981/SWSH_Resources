/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0093b8b0; name: FUN_0093b8b0
 */


void FUN_0093b8b0(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  uint uVar3;
  char cVar4;
  undefined4 uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  
  *(undefined1 *)(param_1 + 0x4e) = 0;
  if (*(char *)(param_1 + 0x4c) != '\0') {
    uVar7 = 0;
LAB_0093b8d8:
    do {
      *(char *)(param_1 + 0x4e) = (char)uVar7 + '\x01';
      lVar8 = *(long *)(param_1 + uVar7 * 8);
      if (lVar8 == 0) {
        return;
      }
      uVar7 = FUN_008e1600(lVar8);
      if ((uVar7 & 1) == 0) {
        uVar5 = FUN_008e0a00(lVar8);
        cVar4 = FUN_00913e70(param_2,uVar5);
        uVar6 = (ulong)*(byte *)(param_1 + 0x4c);
        if (cVar4 == '\x05') {
          if (*(byte *)(param_1 + 0x4c) == 0) {
            return;
          }
          uVar7 = 0;
          while (uVar1 = uVar7 + 1, *(long *)(param_1 + uVar7 * 8) != lVar8) {
            uVar7 = uVar1;
            if (uVar6 <= uVar1) goto LAB_0093b96c;
          }
          if (uVar1 < uVar6) {
            do {
              puVar2 = (undefined8 *)(param_1 + uVar7 * 8);
              uVar7 = uVar7 + 1;
              *puVar2 = puVar2[1];
              uVar6 = (ulong)*(byte *)(param_1 + 0x4c);
            } while ((int)uVar7 + 1U < (uint)*(byte *)(param_1 + 0x4c));
          }
LAB_0093b9d0:
          uVar3 = (int)uVar6 - 1;
          *(char *)(param_1 + 0x4c) = (char)uVar3;
          *(char *)(param_1 + 0x4e) = *(char *)(param_1 + 0x4e) + -1;
          uVar7 = (ulong)*(byte *)(param_1 + 0x4e);
          if ((uVar3 & 0xff) <= (uint)*(byte *)(param_1 + 0x4e)) {
            return;
          }
          goto LAB_0093b8d8;
        }
      }
      else {
        uVar6 = (ulong)*(byte *)(param_1 + 0x4c);
        if (uVar6 == 0) {
          return;
        }
        uVar7 = 0;
        do {
          uVar1 = uVar7 + 1;
          if (*(long *)(param_1 + uVar7 * 8) == lVar8) {
            if (uVar1 < uVar6) {
              do {
                puVar2 = (undefined8 *)(param_1 + uVar7 * 8);
                uVar7 = uVar7 + 1;
                *puVar2 = puVar2[1];
                uVar6 = (ulong)*(byte *)(param_1 + 0x4c);
              } while ((int)uVar7 + 1U < (uint)*(byte *)(param_1 + 0x4c));
            }
            goto LAB_0093b9d0;
          }
          uVar7 = uVar1;
        } while (uVar1 < uVar6);
      }
LAB_0093b96c:
      uVar7 = (ulong)*(byte *)(param_1 + 0x4e);
    } while ((uint)*(byte *)(param_1 + 0x4e) < (uint)uVar6);
  }
  return;
}


