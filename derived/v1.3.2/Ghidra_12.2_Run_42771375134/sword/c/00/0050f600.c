/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0050f600; name: FUN_0050f600
 */


void FUN_0050f600(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  *(undefined **)(param_1 + 0x28) = PTR_DAT_02713958 + 0x10;
  if (((*(byte *)(param_1 + 0x70) & 1) == 0) && (lVar2 = *(long *)(param_1 + 0x50), lVar2 != 0)) {
    plVar3 = *(long **)(param_1 + 0x30);
    if (plVar3 != (long *)0x0) {
      lVar1 = (**(code **)(*plVar3 + 0x50))(plVar3,lVar2);
      if (lVar1 != 0) {
        lVar4 = lVar2;
        do {
          FUN_0050f600(lVar4);
          lVar4 = lVar4 + 0x78;
          lVar1 = lVar1 + -1;
        } while (lVar1 != 0);
      }
      (**(code **)(*plVar3 + 0x48))
                (plVar3,lVar2,"C:/workspace/sisdk/3.0/SDK/Core/Include\\SiCore/SiCore_Array.h",0x5f2
                );
    }
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  return;
}


