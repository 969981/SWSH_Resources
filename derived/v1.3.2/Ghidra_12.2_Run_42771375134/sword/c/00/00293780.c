/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00293780; name: FUN_00293780
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00293780(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  ulong uVar12;
  uint *puVar13;
  undefined8 uVar14;
  
  uVar5 = _UNK_01d4b8f8;
  uVar4 = _DAT_01d4b8f0;
  uVar14 = _DAT_01d4b570;
  if (param_2 == (undefined8 *)0x0) {
    param_1[1] = _UNK_01d4b578;
    *param_1 = uVar14;
    param_1[3] = uVar5;
    param_1[2] = uVar4;
  }
  else {
    uVar1 = *(uint *)(param_2 + 4);
    uVar6 = (ulong)uVar1;
    param_1[3] = param_2[3];
    param_1[2] = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = *param_2;
    if (uVar1 != 0) {
      uVar8 = 0;
      puVar10 = (uint *)(param_2 + 6);
      puVar9 = (uint *)(param_1 + 0xe);
      do {
        *(char *)((long)param_1 + uVar8 + 0x38) = (char)uVar8;
        uVar2 = *puVar10;
        *(uint *)(param_1 + uVar8 * 0x32 + 0x38) = uVar2;
        if (uVar2 != 0) {
          uVar12 = 0;
          puVar11 = puVar10 + 7;
          puVar13 = puVar9;
          do {
            uVar14 = *(undefined8 *)(puVar11 + -3);
            *(ulong *)(puVar13 + -10) = *(ulong *)(puVar11 + -1) & 0xffffffff;
            *(undefined8 *)(puVar13 + -0xc) = uVar14;
            uVar14 = *(undefined8 *)(puVar11 + 1);
            uVar12 = uVar12 + 1;
            *(ulong *)(puVar13 + -6) = *(ulong *)(puVar11 + 3) & 0xffffffff;
            *(undefined8 *)(puVar13 + -8) = uVar14;
            uVar14 = *(undefined8 *)(puVar11 + 5);
            *(undefined8 *)(puVar13 + -2) = *(undefined8 *)(puVar11 + 7);
            *(undefined8 *)(puVar13 + -4) = uVar14;
            *puVar13 = *puVar11;
            puVar11 = puVar11 + 0xc;
            puVar13 = puVar13 + 0x10;
          } while (uVar12 < *(uint *)(param_1 + uVar8 * 0x32 + 0x38));
        }
        puVar10 = puVar10 + (ulong)uVar2 * 0xc + 4;
        uVar8 = uVar8 + 1;
        puVar9 = puVar9 + 100;
      } while (uVar8 != uVar6);
      *(char *)((long)param_1 + 0x3e) = (char)uVar1;
      if (5 < uVar1) {
        return;
      }
      goto LAB_00293868;
    }
  }
  uVar6 = 0;
  *(undefined1 *)((long)param_1 + 0x3e) = 0;
LAB_00293868:
  uVar8 = 5 - uVar6;
  uVar1 = 2U - (int)uVar6 & 3;
  if (uVar1 != 0) {
    lVar7 = -(ulong)uVar1;
    do {
      *(char *)((long)param_1 + uVar6 + 0x38) = (char)uVar6;
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 1;
    } while (lVar7 != 0);
  }
  if (2 < uVar8) {
    do {
      cVar3 = (char)uVar6;
      *(char *)((long)param_1 + uVar6 + 0x38) = cVar3;
      *(char *)((long)param_1 + uVar6 + 0x39) = cVar3 + '\x01';
      uVar8 = uVar6 + 4;
      *(char *)((long)param_1 + uVar6 + 0x3a) = cVar3 + '\x02';
      *(char *)((long)param_1 + uVar6 + 0x3b) = cVar3 + '\x03';
      uVar6 = uVar8;
    } while (uVar8 != 6);
  }
  return;
}


