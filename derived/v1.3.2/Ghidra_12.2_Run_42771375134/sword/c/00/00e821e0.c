/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e821e0; name: FUN_00e821e0
 */


void FUN_00e821e0(void)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  
  lVar3 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar3 == 0) {
    plVar4 = *(long **)(*(long *)PTR_DAT_027194d8 + 0xb0);
    plVar8 = *(long **)(*(long *)PTR_DAT_027194d8 + 0xb8);
    if (plVar4 == plVar8) goto LAB_00e822c4;
  }
  else {
    plVar4 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    lVar7 = *(long *)PTR_DAT_027194d8;
    (**(code **)(*plVar4 + 0x10))(plVar4);
    plVar4 = *(long **)(lVar7 + 0xb0);
    plVar8 = *(long **)(lVar7 + 0xb8);
    if (plVar4 == plVar8) goto LAB_00e822c4;
  }
  do {
    uVar1 = (**(code **)(*(long *)*plVar4 + 0x88))();
    if ((uVar1 & 1) == 0) {
      lVar5 = *plVar4;
      puVar6 = (undefined8 *)(lVar5 + 0x50);
      plVar2 = (long *)(**(code **)*puVar6)(puVar6);
      lVar7 = FUN_015bed20();
      for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
        if (plVar2 == (long *)lVar7) {
          FUN_00eba480(lVar5);
          break;
        }
      }
    }
    plVar4 = plVar4 + 1;
  } while (plVar4 != plVar8);
LAB_00e822c4:
  if (lVar3 == 0) {
    return;
  }
  plVar4 = (long *)(lVar3 + 0x48);
  (**(code **)(*plVar4 + 0x18))(plVar4);
                    /* WARNING: Could not recover jumptable at 0x00e822f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x18))(plVar4);
  return;
}


