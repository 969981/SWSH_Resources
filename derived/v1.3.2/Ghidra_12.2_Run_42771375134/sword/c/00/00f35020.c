/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f35020; name: FUN_00f35020
 */


void FUN_00f35020(void)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  
  lVar5 = *(long *)PTR_DAT_027194d8;
  plVar6 = *(long **)(lVar5 + 0xb0);
  plVar1 = *(long **)(lVar5 + 0xb8);
  if (plVar6 != plVar1) {
    do {
      plVar2 = (long *)(*(code *)**(undefined8 **)(*plVar6 + 0x50))();
      lVar3 = FUN_00f30ed0();
      for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
        if (plVar2 == (long *)lVar3) {
          uVar4 = (**(code **)(*(long *)*plVar6 + 0x88))();
          if ((uVar4 & 1) == 0) {
            (**(code **)(*(long *)*plVar6 + 0x80))();
          }
          break;
        }
      }
      plVar6 = plVar6 + 1;
    } while (plVar6 != plVar1);
    plVar1 = *(long **)(lVar5 + 0xb8);
    for (plVar6 = *(long **)(lVar5 + 0xb0); plVar6 != plVar1; plVar6 = plVar6 + 1) {
      plVar2 = (long *)(*(code *)**(undefined8 **)(*plVar6 + 0x50))();
      lVar5 = FUN_00f317b0();
      for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
        if (plVar2 == (long *)lVar5) {
          uVar4 = (**(code **)(*(long *)*plVar6 + 0x88))();
          if ((uVar4 & 1) == 0) {
            (**(code **)(*(long *)*plVar6 + 0x80))();
          }
          break;
        }
      }
    }
  }
  return;
}


