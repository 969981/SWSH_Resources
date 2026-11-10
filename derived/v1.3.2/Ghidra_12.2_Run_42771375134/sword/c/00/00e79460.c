/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e79460; name: FUN_00e79460
 */


undefined8
FUN_00e79460(undefined8 param_1,undefined8 param_2,long *param_3,undefined4 param_4,uint param_5,
            uint param_6)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long *local_78;
  undefined1 auStack_58 [8];
  
  plVar6 = *(long **)(*(long *)PTR_DAT_027194d8 + 0xb0);
  plVar4 = *(long **)(*(long *)PTR_DAT_027194d8 + 0xb8);
  do {
    if (plVar6 == plVar4) {
      return 0;
    }
    lVar5 = *plVar6;
    plVar1 = (long *)(*(code *)**(undefined8 **)(lVar5 + 0x50))((undefined8 *)(lVar5 + 0x50));
    lVar2 = FUN_0156b190();
    for (; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
      if (plVar1 == (long *)lVar2) {
        if ((*(long *)(lVar5 + 0x1a0) == *param_3) &&
           (uVar3 = (**(code **)(*(long *)*plVar6 + 0x88))(), (uVar3 & 1) == 0)) {
          plVar6 = (long *)(lVar5 + 0x48);
          (**(code **)(*plVar6 + 0x10))(plVar6);
          if (*(long *)(lVar5 + 0x1d8) == 0) {
            plVar4 = (long *)0x0;
          }
          else {
            plVar4 = (long *)FUN_00e87000(auStack_58);
            if (plVar4 != (long *)0x0) {
              (**(code **)(plVar4[9] + 0x10))();
            }
            plVar4[0xe] = lVar5;
            (**(code **)(*plVar4 + 0x38))(plVar4);
            uVar7 = *(undefined8 *)(lVar5 + 0x1e8);
            local_78 = plVar4;
            if (plVar4 != (long *)0x0) {
              (**(code **)(plVar4[9] + 0x10))();
            }
            FUN_01591030(lVar5 + 0x1e8,uVar7,&local_78);
            if (local_78 != (long *)0x0) {
              (**(code **)(local_78[9] + 0x18))();
              local_78 = (long *)0x0;
            }
            (**(code **)(plVar4[9] + 0x18))();
          }
          FUN_00df4be0(param_1,param_2,plVar4,lVar5 + 0xa0,param_4,param_5 & 1,param_6 & 1,1);
          FUN_00e79660(param_1,0,param_3,2,7,0,0);
          (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))(plVar6);
          return 1;
        }
        break;
      }
    }
    plVar6 = plVar6 + 1;
  } while( true );
}


