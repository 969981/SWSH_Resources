/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e78fd0; name: FUN_00e78fd0
 */


undefined8 FUN_00e78fd0(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  
  plVar5 = *(long **)(*(long *)PTR_DAT_027194d8 + 0xb0);
  plVar1 = *(long **)(*(long *)PTR_DAT_027194d8 + 0xb8);
  do {
    if (plVar5 == plVar1) {
      return 0;
    }
    lVar6 = *plVar5;
    plVar2 = (long *)(*(code *)**(undefined8 **)(lVar6 + 0x50))((undefined8 *)(lVar6 + 0x50));
    lVar3 = FUN_0156b190();
    for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
      if (plVar2 == (long *)lVar3) {
        if ((*(long *)(lVar6 + 0x1a0) == *param_1) &&
           (uVar4 = (**(code **)(*(long *)*plVar5 + 0x88))(), (uVar4 & 1) == 0)) {
          plVar5 = (long *)(lVar6 + 0x48);
          (**(code **)(*plVar5 + 0x10))(plVar5);
          if (*(long *)(lVar6 + 0x1d8) != 0) {
            FUN_00e86cf0(lVar6 + 0x1e0,*(long *)(lVar6 + 0x1d8),lVar6,param_2);
          }
          (**(code **)(*plVar5 + 0x18))(plVar5);
          return 1;
        }
        break;
      }
    }
    plVar5 = plVar5 + 1;
  } while( true );
}


