/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e65b60; name: FUN_00e65b60
 */


/* WARNING: Removing unreachable block (ram,0x00e65cd4) */

void FUN_00e65b60(long param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  uint uVar6;
  ulong *puVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  iVar3 = *(int *)(param_1 + 0x58c);
  if (iVar3 != 2) {
    *(undefined8 *)(param_1 + 0x558) = *(undefined8 *)(param_1 + 0x548);
    *(undefined8 *)(param_1 + 0x550) = *(undefined8 *)(param_1 + 0x540);
    puVar5 = PTR_DAT_02710848;
    if (iVar3 == 0) {
      fVar13 = *(float *)(param_1 + 0x510);
      fVar12 = (float)FUN_01029020(fVar13 + fVar13,*(undefined8 *)(*(long *)PTR_DAT_02710848 + 0x98)
                                  );
      fVar14 = *(float *)(param_1 + 0x514);
      *(undefined8 *)(param_1 + 0x568) = *(undefined8 *)(param_1 + 0x568);
      *(ulong *)(param_1 + 0x560) =
           CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 0x560) >> 0x20),fVar12 - fVar13);
      fVar12 = (float)FUN_01029020(fVar14 + fVar14,*(undefined8 *)(*(long *)puVar5 + 0x98));
      fVar13 = *(float *)(param_1 + 0x518);
      *(undefined8 *)(param_1 + 0x568) = *(undefined8 *)(param_1 + 0x568);
      *(ulong *)(param_1 + 0x560) = CONCAT44(fVar12 - fVar14,(int)*(undefined8 *)(param_1 + 0x560));
      fVar12 = (float)FUN_01029020(fVar13 + fVar13,*(undefined8 *)(*(long *)puVar5 + 0x98));
      *(ulong *)(param_1 + 0x568) = (ulong)(uint)(fVar12 - fVar13);
      *(undefined8 *)(param_1 + 0x560) = *(undefined8 *)(param_1 + 0x560);
    }
    else if (iVar3 == 1) {
      *(undefined8 *)(param_1 + 0x568) = 0;
      *(undefined8 *)(param_1 + 0x560) = 0;
      *(undefined4 *)(param_1 + 0x58c) = 2;
    }
    uVar6 = *(uint *)(param_1 + 0x520);
    iVar3 = *(int *)(param_1 + 0x524) - uVar6;
    *(undefined4 *)(param_1 + 0x578) = 0;
    if (iVar3 != 0) {
      puVar7 = *(ulong **)(*(long *)PTR_DAT_02710848 + 0x98);
      uVar1 = iVar3 + 1;
      if (uVar1 == 0) {
        uVar10 = *puVar7;
        uVar8 = (int)puVar7[1] + (int)uVar10;
        uVar9 = puVar7[1] ^ uVar10;
        *puVar7 = uVar9 ^ (uVar10 >> 0x28 | uVar10 << 0x18) ^ uVar9 << 0x10;
        puVar7[1] = uVar9 >> 0x1b | uVar9 << 0x25;
      }
      else {
        uVar9 = (0x20 - LZCOUNT(uVar1)) -
                (ulong)((0xffffffffU >> (ulong)(0x21U - (int)(0x20 - LZCOUNT(uVar1)) & 0x1f) & uVar1
                        ) == 0);
        uVar10 = uVar9 >> 6;
        if ((uVar9 & 0x3f) != 0) {
          uVar10 = uVar10 + 1;
        }
        uVar11 = 0;
        if (uVar10 != 0) {
          uVar11 = uVar9 / uVar10;
        }
        uVar2 = 0;
        if (uVar10 <= uVar9) {
          uVar2 = (uint)(0xffffffffffffffff >> (-uVar11 & 0x3f));
        }
        uVar10 = *puVar7;
        uVar9 = puVar7[1];
        do {
          uVar11 = uVar10 ^ uVar9;
          iVar3 = (int)uVar10;
          iVar4 = (int)uVar9;
          uVar9 = uVar11 >> 0x1b | uVar11 << 0x25;
          uVar10 = uVar11 ^ (uVar10 >> 0x28 | uVar10 << 0x18) ^ uVar11 << 0x10;
          uVar8 = iVar3 + iVar4 & uVar2;
        } while (uVar1 <= uVar8);
        *puVar7 = uVar10;
        puVar7[1] = uVar9;
      }
      uVar6 = uVar8 + uVar6;
    }
    *(undefined1 *)(param_1 + 0x588) = 1;
    *(float *)(param_1 + 0x57c) = 1.0 / (float)uVar6;
  }
  return;
}


