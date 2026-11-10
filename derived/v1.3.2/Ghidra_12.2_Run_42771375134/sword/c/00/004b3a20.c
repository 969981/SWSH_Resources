/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004b3a20; name: FUN_004b3a20
 */


void FUN_004b3a20(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  ushort *puVar3;
  long lVar4;
  long lVar5;
  
  plVar2 = (long *)(**(code **)(*param_1 + 0x80))();
  puVar1 = PTR_DAT_02712b18;
  if (plVar2 != (long *)0x0) {
    for (lVar4 = *plVar2; lVar4 != 0; lVar4 = *(long *)(lVar4 + 0x10)) {
      puVar3 = *(ushort **)(lVar4 + 0x20);
      if ((puVar3 != (ushort *)0x0) && ((ulong)*puVar3 != 0)) {
        lVar5 = (ulong)*puVar3 << 1;
        plVar2 = (long *)((long)puVar3 + ((ulong)((int)lVar5 + 5) & 0x3fffc) + 8);
        do {
          if (*plVar2 != 0) {
            FUN_004be250(*(undefined8 *)puVar1,*plVar2,lVar4);
            *plVar2 = 0;
            (**(code **)(**(long **)(lVar4 + 0x18) + 0x18))();
          }
          plVar2 = plVar2 + 2;
          lVar5 = lVar5 + -2;
        } while (lVar5 != 0);
      }
    }
  }
  return;
}


