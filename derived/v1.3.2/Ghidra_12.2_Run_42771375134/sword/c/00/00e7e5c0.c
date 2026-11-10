/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e7e5c0; name: FUN_00e7e5c0
 */


undefined4 FUN_00e7e5c0(void)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long local_60;
  
  puVar1 = PTR_DAT_027194d8;
  plVar6 = *(long **)(*(long *)PTR_DAT_027194d8 + 0xb0);
  plVar7 = *(long **)(*(long *)PTR_DAT_027194d8 + 0xb8);
  do {
    if (plVar6 == plVar7) {
      local_60 = 0;
      lVar2 = *(long *)puVar1;
      plVar6 = *(long **)(lVar2 + 0xb0);
      plVar7 = *(long **)(lVar2 + 0xb8);
      if (plVar6 != plVar7) {
LAB_00e7e6c4:
        do {
          lVar5 = *plVar6;
          plVar4 = (long *)(*(code *)**(undefined8 **)(lVar5 + 0x50))((undefined8 *)(lVar5 + 0x50));
          lVar2 = FUN_015bed20();
          for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
            if (plVar4 == (long *)lVar2) {
              if ((*(long *)(lVar5 + 0x3a0) == local_60) &&
                 (uVar3 = (**(code **)(*(long *)*plVar6 + 0x88))(), (uVar3 & 1) == 0)) {
                return *(undefined4 *)(lVar5 + 0x610);
              }
              break;
            }
          }
          plVar6 = plVar6 + 1;
        } while (plVar6 != plVar7);
      }
      return 0;
    }
    lVar2 = FUN_00e813b0(*plVar6 + 0x50);
    if ((lVar2 != 0) && (uVar3 = (**(code **)(*(long *)*plVar6 + 0x88))(), (uVar3 & 1) == 0)) {
      local_60 = 0;
      plVar6 = *(long **)(*(long *)PTR_DAT_02717c48 + 0x148);
      if (*(long **)(*(long *)PTR_DAT_02717c48 + 0x150) != plVar6) {
        local_60 = *(long *)(*plVar6 + 0x3a0);
      }
      lVar2 = *(long *)puVar1;
      plVar6 = *(long **)(lVar2 + 0xb0);
      plVar7 = *(long **)(lVar2 + 0xb8);
      if (plVar6 == plVar7) {
        return 0;
      }
      goto LAB_00e7e6c4;
    }
    plVar6 = plVar6 + 1;
  } while( true );
}


