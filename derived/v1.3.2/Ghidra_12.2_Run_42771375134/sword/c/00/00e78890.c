/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e78890; name: FUN_00e78890
 */


bool FUN_00e78890(long *param_1)

{
  long *plVar1;
  char cVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  
  plVar7 = *(long **)(*(long *)PTR_DAT_027194d8 + 0xb0);
  plVar1 = *(long **)(*(long *)PTR_DAT_027194d8 + 0xb8);
  do {
    if (plVar7 == plVar1) {
      return false;
    }
    lVar6 = *plVar7;
    plVar3 = (long *)(*(code *)**(undefined8 **)(lVar6 + 0x50))((undefined8 *)(lVar6 + 0x50));
    lVar4 = FUN_0156b190();
    for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
      if (plVar3 == (long *)lVar4) {
        if ((*(long *)(lVar6 + 0x1a0) == *param_1) &&
           (uVar5 = (**(code **)(*(long *)*plVar7 + 0x88))(), (uVar5 & 1) == 0)) {
          plVar7 = (long *)(lVar6 + 0x48);
          (**(code **)(*plVar7 + 0x10))(plVar7);
          cVar2 = *(char *)(lVar6 + 0x218);
          (**(code **)(*plVar7 + 0x18))(plVar7);
          return cVar2 != '\0';
        }
        break;
      }
    }
    plVar7 = plVar7 + 1;
  } while( true );
}


