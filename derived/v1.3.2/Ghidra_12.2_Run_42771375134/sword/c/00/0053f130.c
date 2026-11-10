/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0053f130; name: FUN_0053f130
 */


undefined8 FUN_0053f130(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  
  puVar5 = (undefined8 *)PTR_PTR_02713988;
  for (plVar7 = *(long **)(param_1 + 0x70); PTR_PTR_02713988 = (undefined *)puVar5,
      plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
    puVar5 = (undefined8 *)plVar7[0x26];
    lVar3 = puVar5[6];
    lVar2 = puVar5[7];
    if (lVar3 != lVar2) {
      do {
        if (*(long **)(lVar3 + 0x120) != (long *)0x0) {
          (**(code **)(**(long **)(lVar3 + 0x120) + 0x18))();
          *(undefined8 *)(lVar3 + 0x120) = 0;
          lVar2 = puVar5[7];
        }
        lVar3 = lVar3 + 0x128;
      } while (lVar3 != lVar2);
    }
    plVar6 = (long *)puVar5[1];
    if (plVar6 != (long *)0x0) {
      (**(code **)*puVar5)(puVar5);
      (**(code **)(*plVar6 + 0x48))
                (plVar6,puVar5,"C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceDevice.cpp",0x553);
    }
    puVar5 = (undefined8 *)PTR_PTR_02713988;
  }
  if (*(long *)(param_1 + 0x78) != 0) {
    plVar7 = *(long **)(param_1 + 0x70);
    while (plVar7 != (long *)0x0) {
      plVar7 = (long *)*plVar7;
      FUN_005b9b10(*puVar5);
    }
    uVar4 = *(ulong *)(param_1 + 0x68);
    *(undefined8 *)(param_1 + 0x70) = 0;
    if (uVar4 != 0) {
      uVar1 = uVar4 & 3;
      if (uVar4 - 1 < 3) {
        lVar3 = 0;
      }
      else {
        lVar3 = 0;
        do {
          lVar2 = lVar3 * 8;
          lVar3 = lVar3 + 4;
          *(undefined8 *)(*(long *)(param_1 + 0x60) + lVar2) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x60) + lVar2 + 8) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x60) + lVar2 + 0x10) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x60) + lVar2 + 0x18) = 0;
        } while (uVar4 - uVar1 != lVar3);
      }
      if (uVar1 != 0) {
        lVar3 = lVar3 << 3;
        lVar2 = -uVar1;
        do {
          *(undefined8 *)(*(long *)(param_1 + 0x60) + lVar3) = 0;
          lVar3 = lVar3 + 8;
          lVar2 = lVar2 + 1;
        } while (lVar2 != 0);
      }
    }
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  return 0;
}


