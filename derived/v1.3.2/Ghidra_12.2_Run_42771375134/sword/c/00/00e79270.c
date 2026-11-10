/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e79270; name: FUN_00e79270
 */


undefined8 FUN_00e79270(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  long *local_50;
  undefined1 auStack_48 [8];
  
  plVar5 = *(long **)(*(long *)PTR_DAT_027194d8 + 0xb0);
  plVar4 = *(long **)(*(long *)PTR_DAT_027194d8 + 0xb8);
  do {
    if (plVar5 == plVar4) {
      return 0;
    }
    lVar6 = *plVar5;
    plVar1 = (long *)(*(code *)**(undefined8 **)(lVar6 + 0x50))((undefined8 *)(lVar6 + 0x50));
    lVar2 = FUN_0156b190();
    for (; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
      if (plVar1 == (long *)lVar2) {
        if ((*(long *)(lVar6 + 0x1a0) == *param_1) &&
           (uVar3 = (**(code **)(*(long *)*plVar5 + 0x88))(), (uVar3 & 1) == 0)) {
          plVar5 = (long *)(lVar6 + 0x48);
          (**(code **)(*plVar5 + 0x10))(plVar5);
          if (*(long *)(lVar6 + 0x1d8) == 0) {
            plVar4 = (long *)0x0;
          }
          else {
            plVar4 = (long *)FUN_00e86f20(auStack_48);
            if (plVar4 != (long *)0x0) {
              (**(code **)(plVar4[9] + 0x10))();
            }
            plVar4[0xe] = lVar6;
            (**(code **)(*plVar4 + 0x38))(plVar4);
            uVar7 = *(undefined8 *)(lVar6 + 0x1e8);
            local_50 = plVar4;
            if (plVar4 != (long *)0x0) {
              (**(code **)(plVar4[9] + 0x10))();
            }
            FUN_01591030(lVar6 + 0x1e8,uVar7,&local_50);
            if (local_50 != (long *)0x0) {
              (**(code **)(local_50[9] + 0x18))();
              local_50 = (long *)0x0;
            }
            (**(code **)(plVar4[9] + 0x18))();
          }
          lVar2 = param_2[1];
          plVar4[0x13] = param_2[3];
          lVar6 = param_2[2];
          plVar4[0x10] = *param_2;
          plVar4[0x11] = lVar2;
          plVar4[0x12] = lVar6;
          plVar4[0x14] = param_2[4];
          plVar4[0x15] = param_2[5];
          plVar4[0x16] = param_2[6];
          lVar2 = param_2[7];
          if (lVar2 != 0) {
            (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
          }
          lVar6 = plVar4[0x17];
          plVar4[0x17] = lVar2;
          if (lVar6 != 0) {
            (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
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


