/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e7e430; name: FUN_00e7e430
 */


uint FUN_00e7e430(void)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long local_60;
  
  puVar1 = PTR_DAT_027194d8;
  plVar7 = *(long **)(*(long *)PTR_DAT_027194d8 + 0xb0);
  plVar8 = *(long **)(*(long *)PTR_DAT_027194d8 + 0xb8);
  do {
    if (plVar7 == plVar8) {
      local_60 = 0;
      lVar3 = *(long *)puVar1;
      plVar7 = *(long **)(lVar3 + 0xb0);
      plVar8 = *(long **)(lVar3 + 0xb8);
      if (plVar7 != plVar8) {
LAB_00e7e534:
        do {
          lVar6 = *plVar7;
          plVar5 = (long *)(*(code *)**(undefined8 **)(lVar6 + 0x50))((undefined8 *)(lVar6 + 0x50));
          lVar3 = FUN_015bed20();
          for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
            if (plVar5 == (long *)lVar3) {
              if ((*(long *)(lVar6 + 0x3a0) == local_60) &&
                 (uVar4 = (**(code **)(*(long *)*plVar7 + 0x88))(), (uVar4 & 1) == 0)) {
                uVar2 = FUN_00dc7740(lVar6);
                goto LAB_00e7e598;
              }
              break;
            }
          }
          plVar7 = plVar7 + 1;
        } while (plVar7 != plVar8);
      }
LAB_00e7e594:
      uVar2 = 0;
LAB_00e7e598:
      return uVar2 & 1;
    }
    lVar3 = FUN_00e813b0(*plVar7 + 0x50);
    if ((lVar3 != 0) && (uVar4 = (**(code **)(*(long *)*plVar7 + 0x88))(), (uVar4 & 1) == 0)) {
      local_60 = 0;
      plVar7 = *(long **)(*(long *)PTR_DAT_02717c48 + 0x148);
      if (*(long **)(*(long *)PTR_DAT_02717c48 + 0x150) != plVar7) {
        local_60 = *(long *)(*plVar7 + 0x3a0);
      }
      lVar3 = *(long *)puVar1;
      plVar7 = *(long **)(lVar3 + 0xb0);
      plVar8 = *(long **)(lVar3 + 0xb8);
      if (plVar7 == plVar8) goto LAB_00e7e594;
      goto LAB_00e7e534;
    }
    plVar7 = plVar7 + 1;
  } while( true );
}


