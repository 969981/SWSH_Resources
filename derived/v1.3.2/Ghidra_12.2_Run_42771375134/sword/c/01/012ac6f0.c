/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012ac6f0; name: FUN_012ac6f0
 */


undefined8 FUN_012ac6f0(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined *puVar6;
  uint *puVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  
  puVar6 = PTR_DAT_02716810;
  plVar10 = (long *)(PTR_DAT_02716810 + 0x28);
  if (*PTR_DAT_02716808 != '\0') {
    puVar7 = (uint *)FUN_007ad6c0(*(undefined8 *)PTR_DAT_02716818);
    uVar5 = *puVar7;
    if (uVar5 != 0) {
      lVar8 = **(long **)(puVar6 + 0xa0);
      if ((ulong)((*(long **)(puVar6 + 0xa0))[1] - lVar8 >> 3) <= (ulong)uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_017cd1d0("c:/projects/env/NintendoSDK/NintendoSDK/../NintendoSDK-Pia/../NintendoSDK-NEX//Include\\OnlineCore/src/Core/InstanceTable.h"
                     ,0x47,0xe0000003,0);
      }
      plVar10 = (long *)(*(long *)(lVar8 + (ulong)uVar5 * 8) + 0x20);
    }
  }
  if ((*plVar10 == 0) || (lVar8 = *(long *)(*plVar10 + 0x10), lVar8 == 0)) {
    lVar8 = 0;
  }
  else {
    lVar8 = *(long *)(lVar8 + 0x10);
  }
  plVar10 = (long *)(lVar8 + 0x78);
  (**(code **)(*plVar10 + 0x10))(plVar10);
  plVar11 = *(long **)(param_1 + 0x10);
  if (plVar11[2] != 0) {
    lVar8 = *plVar11;
    plVar2 = (long *)plVar11[1];
    *(undefined8 *)(*plVar2 + 8) = *(undefined8 *)(lVar8 + 8);
    **(long **)(lVar8 + 8) = *plVar2;
    plVar11[2] = 0;
    while (plVar2 != plVar11) {
      plVar12 = (long *)plVar2[1];
      (**(code **)plVar2[2])();
      FUN_017cd7a0(plVar2);
      plVar2 = plVar12;
    }
  }
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x10);
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x10) = uVar4;
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = uVar3;
  *(undefined8 *)(param_1 + 0x40) = uVar9;
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  (**(code **)(*plVar10 + 0x20))(plVar10);
  return uVar4;
}


