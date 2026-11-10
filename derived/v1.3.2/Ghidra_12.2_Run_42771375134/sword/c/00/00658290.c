/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00658290; name: FUN_00658290
 */


void FUN_00658290(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  
  if (((*(byte *)(param_1 + 0x48) & 1) == 0) && (lVar5 = *(long *)(param_1 + 0x28), lVar5 != 0)) {
    plVar3 = *(long **)(param_1 + 8);
    if (plVar3 != (long *)0x0) {
      lVar4 = (**(code **)(*plVar3 + 0x50))();
      if (lVar4 != 0) {
        puVar8 = (undefined8 *)(lVar5 + 0x20);
        puVar1 = PTR_DAT_02714b68 + 0x10;
        do {
          puVar9 = (undefined8 *)*puVar8;
          if (puVar9 != (undefined8 *)0x0) {
            plVar10 = (long *)*puVar9;
            if (plVar10 != (long *)0x0) {
              plVar2 = puVar9 + 6;
              if (((*(byte *)(puVar9 + 10) & 1) == 0) && (lVar6 = *plVar2, lVar6 != 0)) {
                plVar7 = (long *)puVar9[2];
                if (plVar7 != (long *)0x0) {
                  (**(code **)(*plVar7 + 0x50))(plVar7,lVar6);
                  (**(code **)(*plVar7 + 0x48))
                            (plVar7,lVar6,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
                }
                *plVar2 = 0;
              }
              puVar9[1] = puVar1;
              puVar9[3] = 0;
              puVar9[4] = 0;
              puVar9[10] = 0;
              puVar9[8] = 0;
              *plVar2 = 0;
              puVar9[7] = 0;
              (**(code **)(*plVar10 + 0x48))
                        (plVar10,puVar9,
                         "../../../../Libsrc/SiGfx/Source\\NX/SiGfx_NX_RootSignature_Impl.h",0x139);
            }
            *puVar8 = 0;
          }
          lVar4 = lVar4 + -1;
          puVar8 = puVar8 + 5;
        } while (lVar4 != 0);
      }
      (**(code **)(*plVar3 + 0x48))(plVar3,lVar5,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2)
      ;
    }
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}


