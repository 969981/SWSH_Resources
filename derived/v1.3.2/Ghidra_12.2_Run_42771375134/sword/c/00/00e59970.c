/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e59970; name: FUN_00e59970
 */


void FUN_00e59970(undefined8 param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  
  plVar6 = *(long **)(*(long *)PTR_DAT_027194d8 + 0xb0);
  plVar1 = *(long **)(*(long *)PTR_DAT_027194d8 + 0xb8);
  if (plVar6 != plVar1) {
    lVar7 = *(long *)(param_2 + 0x1d0);
    do {
      lVar5 = *plVar6;
      plVar2 = (long *)(*(code *)**(undefined8 **)(lVar5 + 0x50))((undefined8 *)(lVar5 + 0x50));
      lVar3 = FUN_015bed20();
      for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
        if (plVar2 == (long *)lVar3) {
          if ((*(long *)(lVar5 + 0x3a0) == lVar7) &&
             (uVar4 = (**(code **)(*(long *)*plVar6 + 0x88))(), (uVar4 & 1) == 0))
          goto LAB_00e59a08;
          break;
        }
      }
      plVar6 = plVar6 + 1;
    } while (plVar6 != plVar1);
  }
  lVar5 = 0;
LAB_00e59a08:
  FUN_00eba990(param_1,lVar5);
  return;
}


