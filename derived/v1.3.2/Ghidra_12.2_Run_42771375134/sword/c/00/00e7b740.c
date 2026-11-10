/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e7b740; name: FUN_00e7b740
 */


void FUN_00e7b740(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long local_50;
  long local_48;
  
  puVar1 = *(undefined8 **)(*(long *)PTR_DAT_027194d8 + 0xb0);
  puVar2 = *(undefined8 **)(*(long *)PTR_DAT_027194d8 + 0xb8);
  do {
    if (puVar1 == puVar2) {
      *param_1 = 0;
      return;
    }
    plVar6 = (long *)*puVar1;
    plVar3 = (long *)(**(code **)plVar6[10])(plVar6 + 10);
    lVar4 = FUN_0156b190();
    for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
      if (plVar3 == (long *)lVar4) {
        if ((plVar6[0x34] == *param_2) &&
           (uVar5 = (**(code **)(*(long *)*puVar1 + 0x88))(), (uVar5 & 1) == 0)) {
          plVar3 = plVar6 + 9;
          (**(code **)(*plVar3 + 0x10))(plVar3);
          (**(code **)(*plVar6 + 0x10))(&local_50,plVar6);
          lVar4 = local_50;
          local_50 = 0;
          local_48 = lVar4;
          FUN_00e7b880(param_1,&local_48);
          if (lVar4 != 0) {
            (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
            local_48 = 0;
          }
          if (local_50 != 0) {
            (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
            local_50 = 0;
          }
          (**(code **)(*plVar3 + 0x18))(plVar3);
          return;
        }
        break;
      }
    }
    puVar1 = puVar1 + 1;
  } while( true );
}


