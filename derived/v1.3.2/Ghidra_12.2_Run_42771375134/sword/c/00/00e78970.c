/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e78970; name: FUN_00e78970
 */


undefined8 FUN_00e78970(long *param_1,uint param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  
  plVar6 = *(long **)(*(long *)PTR_DAT_027194d8 + 0xb0);
  plVar1 = *(long **)(*(long *)PTR_DAT_027194d8 + 0xb8);
  do {
    if (plVar6 == plVar1) {
      return 0;
    }
    lVar5 = *plVar6;
    plVar2 = (long *)(*(code *)**(undefined8 **)(lVar5 + 0x50))((undefined8 *)(lVar5 + 0x50));
    lVar3 = FUN_0156b190();
    for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
      if (plVar2 == (long *)lVar3) {
        if ((*(long *)(lVar5 + 0x1a0) == *param_1) &&
           (uVar4 = (**(code **)(*(long *)*plVar6 + 0x88))(), (uVar4 & 1) == 0)) {
          plVar6 = (long *)(lVar5 + 0x48);
          (**(code **)(*plVar6 + 0x10))(plVar6);
          FUN_00db6d40(lVar5,param_2 & 1);
          (**(code **)(*plVar6 + 0x18))(plVar6);
          return 1;
        }
        break;
      }
    }
    plVar6 = plVar6 + 1;
  } while( true );
}


