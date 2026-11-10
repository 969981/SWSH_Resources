/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0060b1e0; name: FUN_0060b1e0
 */


void FUN_0060b1e0(long param_1)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  FUN_0060ca10(*(undefined8 *)(param_1 + 0x28));
  lVar5 = *(long *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (lVar5 == 0) {
LAB_0060b27c:
    if ((*(long *)(param_1 + 0x38) != 0) && (*(long *)(param_1 + 0x48) != 0)) {
      FUN_0060c4c0(*(long *)(param_1 + 0x38),*(long *)(param_1 + 0x48),
                   "../../../../Include\\SiCore/SiCore_Map.h",0x3b7);
      *(undefined8 *)(param_1 + 0x48) = 0;
    }
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    return;
  }
  lVar3 = *(long *)(lVar5 + 0x10);
  do {
    if (lVar3 != 0) {
      plVar2 = *(long **)(param_1 + 8);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x48))
                  (plVar2,lVar3,
                   "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/SiGfx_FreeType_Manager.cpp",
                   0x5e);
      }
      *(undefined8 *)(lVar5 + 0x10) = 0;
    }
    lVar4 = *(long *)(lVar5 + 0x20);
    if ((lVar4 == 0) && (lVar4 = *(long *)(lVar5 + 0x28), lVar4 == 0)) {
      do {
        lVar3 = *(long *)(lVar5 + 0x18);
        if (lVar3 == 0) goto LAB_0060b27c;
        lVar4 = *(long *)(lVar3 + 0x28);
        bVar1 = lVar4 == lVar5;
        lVar5 = lVar3;
      } while (lVar4 == 0 || bVar1);
    }
    lVar3 = *(long *)(lVar4 + 0x10);
    lVar5 = lVar4;
  } while( true );
}


