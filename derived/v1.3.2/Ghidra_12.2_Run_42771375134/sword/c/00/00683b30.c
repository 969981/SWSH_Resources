/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00683b30; name: FUN_00683b30
 */


void FUN_00683b30(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + 0x20);
  do {
    if (lVar6 == 0) {
      return;
    }
    while (*(long *)(lVar6 + 0x20) == param_2) {
      lVar1 = *(long *)(lVar6 + 8);
      lVar4 = *(long *)(lVar6 + 0x10);
      if (lVar1 != 0) {
        *(long *)(lVar1 + 0x10) = lVar4;
      }
      if (lVar4 != 0) {
        *(long *)(lVar4 + 8) = lVar1;
      }
      lVar2 = *(long *)(param_1 + 0x28);
      plVar3 = *(long **)(param_1 + 0x18);
      lVar5 = *(long *)(param_1 + 0x20);
      *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + -1;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x48))
                  (plVar3,lVar6,"../../../../Include\\SiCore/SiCore_LinkedList.h",0x4db);
      }
      if (lVar5 == lVar6) {
        *(long *)(param_1 + 0x20) = lVar4;
      }
      if (lVar2 == lVar6) {
        *(long *)(param_1 + 0x28) = lVar1;
      }
      lVar6 = lVar4;
      if (lVar4 == 0) {
        return;
      }
    }
    lVar6 = *(long *)(lVar6 + 0x10);
  } while( true );
}


