/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00642f30; name: FUN_00642f30
 */


undefined8 FUN_00642f30(long param_1,ulong param_2,ulong param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  
  if (*(ulong *)(param_1 + 0x18) != param_2) {
    if (param_2 != 0) {
      plVar3 = *(long **)(param_1 + 8);
      if (plVar3 == (long *)0x0) {
        return 0;
      }
      uVar7 = *(ulong *)(param_1 + 0x10);
      puVar4 = (undefined8 *)
               (**(code **)(*plVar3 + 0x40))
                         (plVar3,0x60,param_2,0x10,"../../../../Include\\SiCore/SiCore_Array.h",
                          0x5d1);
      if (puVar4 == (undefined8 *)0x0) {
        return 0;
      }
      if (0 < (long)param_2) {
        puVar1 = PTR_DAT_027149b0 + 0x10;
        uVar8 = param_2;
        puVar9 = puVar4;
        do {
          plVar3 = (long *)FUN_005cbff0();
          uVar5 = (**(code **)(*plVar3 + 0x30))();
          *(undefined4 *)(puVar9 + 1) = 0;
          *puVar9 = uVar5;
          puVar9[4] = 0;
          puVar9[5] = 0;
          puVar9[2] = puVar1;
          puVar9[3] = 0;
          puVar9[10] = 0;
          puVar9[0xb] = 0;
          puVar9[8] = 0;
          puVar9[9] = 0;
          puVar9[6] = 8;
          puVar9[7] = 0;
          uVar5 = FUN_005bc6f0();
          puVar9[3] = uVar5;
          uVar8 = uVar8 - 1;
          puVar9 = puVar9 + 0xc;
        } while (uVar8 != 0);
      }
      uVar8 = param_2;
      if (uVar7 <= param_2) {
        uVar8 = uVar7;
      }
      if ((uVar8 != 0) && ((param_3 & 1) != 0)) {
        lVar6 = 0;
        uVar7 = 0;
        do {
          puVar9 = (undefined8 *)(*(long *)(param_1 + 0x28) + lVar6);
          uVar5 = *puVar9;
          puVar2 = (undefined8 *)((long)puVar4 + lVar6);
          *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar9 + 1);
          *puVar2 = uVar5;
          FUN_00643090(puVar2 + 2,puVar9 + 2);
          uVar7 = uVar7 + 1;
          lVar6 = lVar6 + 0x60;
        } while (uVar7 < uVar8);
      }
      FUN_00642d30(param_1);
      *(undefined8 **)(param_1 + 0x28) = puVar4;
      *(ulong *)(param_1 + 0x10) = uVar8;
      *(ulong *)(param_1 + 0x18) = param_2;
      return 1;
    }
    FUN_00642d30(param_1);
  }
  return 1;
}


