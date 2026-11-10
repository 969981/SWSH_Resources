/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e7bbd0; name: FUN_00e7bbd0
 */


bool FUN_00e7bbd0(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long local_50;
  long local_48;
  long local_38;
  
  puVar1 = *(undefined8 **)(*(long *)PTR_DAT_027194d8 + 0xb0);
  puVar2 = *(undefined8 **)(*(long *)PTR_DAT_027194d8 + 0xb8);
  do {
    if (puVar1 == puVar2) {
      return true;
    }
    plVar7 = (long *)*puVar1;
    plVar4 = (long *)(**(code **)plVar7[10])(plVar7 + 10);
    lVar5 = FUN_0156b190();
    for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
      if (plVar4 == (long *)lVar5) {
        if ((plVar7[0x34] == *param_1) &&
           (uVar6 = (**(code **)(*(long *)*puVar1 + 0x88))(), (uVar6 & 1) == 0)) {
          plVar4 = plVar7 + 9;
          (**(code **)(*plVar4 + 0x10))(plVar4);
          (**(code **)(*plVar7 + 0x10))(&local_50,plVar7);
          local_48 = local_50;
          local_50 = 0;
          FUN_00e7b880(&local_38,&local_48);
          if (local_38 == 0) {
            bVar3 = false;
          }
          else {
            bVar3 = *(int *)(local_38 + 0x54) != 0;
            if (local_38 != 0) {
              (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
              local_38 = 0;
            }
          }
          if (local_48 != 0) {
            (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
            local_48 = 0;
          }
          if (local_50 != 0) {
            (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
            local_50 = 0;
          }
          (**(code **)(*plVar4 + 0x18))(plVar4);
          return bVar3;
        }
        break;
      }
    }
    puVar1 = puVar1 + 1;
  } while( true );
}


