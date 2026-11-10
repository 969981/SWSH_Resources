/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005ceb60; name: FUN_005ceb60
 */


void FUN_005ceb60(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_50 [16];
  
  FUN_006966f0(auStack_50,param_1 + 0x228,1);
  puVar3 = PTR_DAT_02713fc8;
  *PTR_DAT_02713fc8 = 1;
  uVar4 = FUN_005ee900();
  if (*(ulong *)(param_1 + 0x2a8) != uVar4) {
    uVar5 = *(ulong *)(param_1 + 0x268);
    *(ulong *)(param_1 + 0x2a8) = uVar4;
    if (uVar5 != 0) {
      lVar6 = uVar5 * 0x10;
      do {
        lVar6 = lVar6 + -0x10;
        uVar5 = uVar5 - 1;
        if (*(ulong *)(*(long *)(param_1 + 0x280) + lVar6 + 8) <= uVar4) {
          (**(code **)(**(long **)(*(long *)(param_1 + 0x280) + lVar6) + 0x18))();
          if (*(ulong *)(param_1 + 0x268) <= uVar5) {
                    /* WARNING: Subroutine does not return */
            __assert_fail("iIndex < m_itemCount","../../../../Include\\SiCore/SiCore_Array.h",0x40c,
                          "RemoveByIndexNonStable");
          }
          lVar7 = *(long *)(param_1 + 0x280) + *(ulong *)(param_1 + 0x268) * 0x10;
          puVar1 = (undefined8 *)(*(long *)(param_1 + 0x280) + lVar6);
          uVar2 = *(undefined8 *)(lVar7 + -8);
          *puVar1 = *(undefined8 *)(lVar7 + -0x10);
          puVar1[1] = uVar2;
          lVar7 = *(long *)(param_1 + 0x268) + -1;
          *(long *)(param_1 + 0x268) = lVar7;
          if (lVar7 == 0) {
            *(undefined8 *)(param_1 + 0x288) = 0;
            lVar7 = 0;
          }
          else {
            *(long *)(param_1 + 0x288) = *(long *)(param_1 + 0x280);
            lVar7 = *(long *)(param_1 + 0x280) + lVar7 * 0x10;
          }
          *(long *)(param_1 + 0x290) = lVar7;
        }
      } while (uVar5 != 0);
    }
    *puVar3 = 0;
  }
  FUN_00696730(auStack_50);
  return;
}


