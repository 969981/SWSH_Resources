/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01503430; name: FUN_01503430
 */


/* WARNING: Removing unreachable block (ram,0x01503484) */
/* WARNING: Removing unreachable block (ram,0x015034c4) */
/* WARNING: Removing unreachable block (ram,0x015034a4) */
/* WARNING: Removing unreachable block (ram,0x01503464) */
/* WARNING: Removing unreachable block (ram,0x015034e4) */

void FUN_01503430(long param_1,int param_2)

{
  long lVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  byte bVar6;
  ulong uVar7;
  int iVar8;
  
  lVar1 = 0x72;
  if (param_2 != 0) {
    lVar1 = 0x73;
  }
  bVar6 = *(byte *)(param_1 + lVar1);
  if (5 < bVar6) {
    if (bVar6 < 9) {
      uVar7 = 2;
      if (6 < bVar6) {
        uVar7 = 3;
      }
      iVar8 = 1;
    }
    else if (bVar6 < 0xc) {
      uVar7 = 3;
      if (9 < bVar6) {
        uVar7 = 4;
      }
      iVar8 = 1;
    }
    else if (bVar6 < 0xf) {
      uVar7 = 4;
      if (0xc < bVar6) {
        uVar7 = 5;
      }
      iVar8 = 1;
    }
    else if (bVar6 < 0x13) {
      uVar7 = 5;
      if (0xf < bVar6) {
        uVar7 = 6;
      }
      iVar8 = 2;
    }
    else if (bVar6 < 0x17) {
      uVar7 = 6;
      if (0x13 < bVar6) {
        uVar7 = 7;
      }
      iVar8 = 2;
    }
    else {
      uVar7 = 7;
      if (0x17 < bVar6) {
        uVar7 = 8;
      }
      uVar2 = 8;
      if (0x1b < bVar6) {
        uVar2 = 9;
      }
      uVar4 = 10;
      if (bVar6 != 0x22) {
        uVar4 = 0;
      }
      uVar5 = 9;
      if (bVar6 != 0x21) {
        uVar5 = uVar4;
      }
      if (0x20 < bVar6) {
        uVar2 = uVar5;
      }
      iVar3 = 3;
      if (0x20 < bVar6) {
        iVar3 = (uint)(bVar6 == 0x21) << 2;
      }
      if (0x1a < bVar6) {
        uVar7 = uVar2;
      }
      iVar8 = 2;
      if (0x1a < bVar6) {
        iVar8 = iVar3;
      }
      if (iVar8 == 0) {
        return;
      }
    }
    if (iVar8 == (&DAT_02172450)[uVar7 ^ 8]) {
      if (param_2 == 0) {
        if (*(char *)(param_1 + 0x72) != '\0') {
          *(char *)(param_1 + 0x72) = *(char *)(param_1 + 0x72) + -1;
          return;
        }
      }
      else if (*(char *)(param_1 + 0x73) != '\0') {
        *(char *)(param_1 + 0x73) = *(char *)(param_1 + 0x73) + -1;
      }
    }
  }
  return;
}


