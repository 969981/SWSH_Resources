/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e7b530; name: FUN_00e7b530
 */


undefined8 FUN_00e7b530(long *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long local_38;
  
  puVar7 = *(undefined8 **)(*(long *)PTR_DAT_027194d8 + 0xb0);
  puVar1 = *(undefined8 **)(*(long *)PTR_DAT_027194d8 + 0xb8);
  do {
    if (puVar7 == puVar1) {
      return 0;
    }
    plVar6 = (long *)*puVar7;
    plVar2 = (long *)(**(code **)plVar6[10])(plVar6 + 10);
    lVar3 = FUN_0156b190();
    for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
      if (plVar2 == (long *)lVar3) {
        if ((plVar6[0x34] == *param_1) &&
           (uVar4 = (**(code **)(*(long *)*puVar7 + 0x88))(), (uVar4 & 1) == 0)) {
          plVar2 = plVar6 + 9;
          (**(code **)(*plVar2 + 0x10))(plVar2);
          (**(code **)(*plVar6 + 0x10))(&local_38,plVar6);
          lVar3 = local_38;
          local_38 = 0;
          if (lVar3 == 0) {
            uVar8 = 0;
          }
          else {
            if (*(int *)(lVar3 + 0x54) == 0) {
              uVar8 = 0;
            }
            else {
              puVar7 = *(undefined8 **)(lVar3 + 0x60);
              plVar6 = (long *)(**(code **)*puVar7)(puVar7);
              lVar5 = FUN_0156b190();
              for (; plVar6 != (long *)lVar5; plVar6 = (long *)*plVar6) {
              }
              (**(code **)(puVar7[-10] + 0x1c8))(puVar7 + -10);
              uVar8 = 1;
            }
            (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
            if (local_38 != 0) {
              (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
              local_38 = 0;
            }
          }
          (**(code **)(*plVar2 + 0x18))(plVar2);
          return uVar8;
        }
        break;
      }
    }
    puVar7 = puVar7 + 1;
  } while( true );
}


