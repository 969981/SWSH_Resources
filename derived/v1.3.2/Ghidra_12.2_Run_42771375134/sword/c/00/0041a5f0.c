/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0041a5f0; name: FUN_0041a5f0
 */


void FUN_0041a5f0(long param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ushort uVar5;
  undefined4 uVar6;
  uint uVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  uint uVar11;
  long lVar12;
  
  *(undefined1 *)(param_1 + 0x94) = 1;
  uVar6 = FUN_004193b0(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x80));
  if (*(long **)(param_1 + 0x78) != (long *)0x0) {
    uVar2 = *(undefined4 *)(param_1 + 0x90);
    uVar5 = (**(code **)(**(long **)(param_1 + 0x78) + 0x250))();
    puVar3 = PTR_DAT_02712a90;
    if (uVar5 != 0) {
      uVar11 = 0;
      puVar1 = PTR_DAT_02712be8 + 0x10;
      do {
        while (plVar8 = (long *)FUN_0040e520(*(undefined8 *)(param_1 + 0x78),uVar11),
              *(int *)((long)plVar8 + 0xf4) != 3) {
          uVar7 = FUN_00414930(plVar8);
          plVar10 = (long *)FUN_00404690(*(undefined4 *)puVar3,0x38);
          if (plVar10 != (long *)0x0) {
            *(undefined4 *)(plVar10 + 2) = uVar6;
            puVar4 = PTR_DAT_02712be8;
            *(uint *)(plVar10 + 4) = uVar7 & 0xffff;
            *(undefined4 *)((long)plVar10 + 0x24) = 0;
            *(undefined4 *)(plVar10 + 6) = uVar2;
            *plVar10 = (long)(puVar4 + 0x10);
            plVar10[3] = (long)plVar8;
            (**(code **)(*plVar8 + 0x10))(plVar8);
            FUN_0041b2a0(param_1 + 0x60,plVar10);
          }
          uVar11 = uVar11 + 1;
          if (uVar11 == uVar5) {
            return;
          }
        }
        for (lVar12 = *(long *)(param_1 + 0x88); lVar12 != 0; lVar12 = *(long *)(lVar12 + 0x30)) {
          if (*(long **)(lVar12 + 0x10) == plVar8) {
            if ((int)plVar8[0x1b] != 0) {
              uVar7 = 0;
              do {
                uVar9 = FUN_0041dfb0(lVar12,uVar7);
                if (((uVar9 & 1) != 0) &&
                   (plVar10 = (long *)FUN_00404690(*(undefined4 *)puVar3,0x38),
                   plVar10 != (long *)0x0)) {
                  *(undefined4 *)(plVar10 + 2) = uVar6;
                  *plVar10 = (long)puVar1;
                  plVar10[3] = (long)plVar8;
                  *(uint *)(plVar10 + 4) = uVar7;
                  *(undefined4 *)((long)plVar10 + 0x24) = 0;
                  *(undefined4 *)(plVar10 + 6) = uVar2;
                  (**(code **)(*plVar8 + 0x10))(plVar8);
                  FUN_0041b2a0(param_1 + 0x60,plVar10);
                }
                uVar7 = uVar7 + 1;
              } while (uVar7 < *(uint *)(plVar8 + 0x1b));
            }
            break;
          }
        }
        FUN_0041a890(param_1,uVar6,plVar8);
        uVar11 = uVar11 + 1;
      } while (uVar11 != uVar5);
    }
  }
  return;
}


