/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e7cc80; name: FUN_00e7cc80
 */


undefined1  [16] FUN_00e7cc80(long *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined1 auVar7 [16];
  undefined8 uVar8;
  undefined8 uVar9;
  long local_58;
  long local_48;
  
  puVar1 = *(undefined8 **)(*(long *)PTR_DAT_027194d8 + 0xb0);
  puVar2 = *(undefined8 **)(*(long *)PTR_DAT_027194d8 + 0xb8);
  uVar8 = 0x3f800000;
  uVar9 = 0;
  do {
    if (puVar1 == puVar2) {
LAB_00e7cd24:
      auVar7._8_8_ = uVar9;
      auVar7._0_8_ = uVar8;
      return auVar7;
    }
    plVar6 = (long *)*puVar1;
    plVar3 = (long *)(**(code **)plVar6[10])(plVar6 + 10);
    lVar4 = FUN_0156b190();
    for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
      if (plVar3 == (long *)lVar4) {
        if ((plVar6[0x34] == *param_1) &&
           (uVar5 = (**(code **)(*(long *)*puVar1 + 0x88))(), (uVar5 & 1) == 0)) {
          plVar3 = plVar6 + 9;
          (**(code **)(*plVar3 + 0x10))(plVar3);
          (**(code **)(*plVar6 + 0x10))(&local_58,plVar6);
          lVar4 = local_58;
          local_58 = 0;
          local_48 = lVar4;
          auVar7 = FUN_00e7cdd0(&local_48,param_2);
          uVar9 = auVar7._8_8_;
          uVar8 = auVar7._0_8_;
          if (lVar4 != 0) {
            (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
            local_48 = 0;
          }
          if (local_58 != 0) {
            (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
            local_58 = 0;
          }
          (**(code **)(*plVar3 + 0x18))(plVar3);
          goto LAB_00e7cd24;
        }
        break;
      }
    }
    puVar1 = puVar1 + 1;
  } while( true );
}


