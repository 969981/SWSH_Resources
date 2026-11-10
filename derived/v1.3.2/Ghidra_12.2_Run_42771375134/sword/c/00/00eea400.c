/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00eea400; name: FUN_00eea400
 */


void FUN_00eea400(undefined8 param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined *puVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong *puVar9;
  int iVar10;
  ulong uVar11;
  int iVar12;
  ulong uVar13;
  int iVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  
  iVar4 = FUN_00884820(*param_2);
  puVar2 = PTR_DAT_02710848;
  if (iVar4 != 0) {
    iVar14 = 0;
    do {
      uVar7 = (**(code **)(*(long *)*param_2 + 0x50))((long *)*param_2,iVar14);
      iVar5 = FUN_008783b0();
      if (((iVar5 != 0) && (uVar8 = FUN_0087d610(uVar7,2), (uVar8 & 1) == 0)) &&
         (sVar3 = FUN_008787f0(uVar7), sVar3 == 0)) {
        iVar5 = FUN_0087cdb0(uVar7);
        if (iVar5 == 0x35) {
          puVar9 = *(ulong **)(*(long *)puVar2 + 0x98);
          uVar8 = *puVar9;
          uVar11 = puVar9[1];
          do {
            uVar13 = uVar8 ^ uVar11;
            iVar10 = (int)uVar11;
            iVar5 = (int)uVar8;
            uVar11 = uVar13 >> 0x1b | uVar13 << 0x25;
            uVar8 = uVar13 ^ (uVar8 >> 0x28 | uVar8 << 0x18) ^ uVar13 << 0x10;
            uVar1 = iVar5 + iVar10 & 0x7f;
          } while (99 < uVar1);
          *puVar9 = uVar8;
          puVar9[1] = uVar11;
          if (uVar1 + 1 < 0xb) {
            lVar15 = *(long *)(*(long *)puVar2 + 0x90);
            if (lVar15 != 0) {
              (**(code **)(*(long *)(lVar15 + 0x48) + 0x10))();
            }
            lVar16 = *(long *)(lVar15 + 0x7e0);
            if (lVar16 == 0) {
              uVar6 = FUN_0087a5f0(uVar7);
              uVar6 = FUN_00f49950(0,uVar6);
              FUN_00878810(uVar7,uVar6);
            }
            else {
              plVar17 = (long *)(lVar16 + 0x48);
              (**(code **)(*plVar17 + 0x10))(plVar17);
              uVar6 = FUN_0087a5f0(uVar7);
              uVar6 = FUN_00f49950(lVar16,uVar6);
              FUN_00878810(uVar7,uVar6);
              (**(code **)(*plVar17 + 0x18))(plVar17);
            }
            (**(code **)(*(long *)(lVar15 + 0x48) + 0x18))((long *)(lVar15 + 0x48));
          }
        }
        iVar5 = FUN_0087cdb0(uVar7);
        if (iVar5 == 0x76) {
          iVar5 = FUN_0087a5f0(uVar7);
          puVar9 = *(ulong **)(*(long *)puVar2 + 0x98);
          uVar8 = *puVar9;
          uVar11 = puVar9[1];
          do {
            uVar13 = uVar8 ^ uVar11;
            iVar12 = (int)uVar11;
            iVar10 = (int)uVar8;
            uVar11 = uVar13 >> 0x1b | uVar13 << 0x25;
            uVar8 = uVar13 ^ (uVar8 >> 0x28 | uVar8 << 0x18) ^ uVar13 << 0x10;
            uVar1 = iVar10 + iVar12 & 0x7f;
          } while (99 < uVar1);
          *puVar9 = uVar8;
          puVar9[1] = uVar11;
          if (uVar1 < iVar5 + 1U >> 1) {
            FUN_00878810(uVar7,0x5e);
          }
        }
      }
      iVar14 = iVar14 + 1;
    } while (iVar14 != iVar4);
  }
  return;
}


