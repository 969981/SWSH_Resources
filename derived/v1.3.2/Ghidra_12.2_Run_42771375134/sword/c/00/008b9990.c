/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008b9990; name: FUN_008b9990
 */


undefined8 FUN_008b9990(long param_1,undefined4 param_2)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined2 local_44 [2];
  
  uVar2 = FUN_008c92b0(*(undefined8 *)(param_1 + 0x88));
  if ((uVar2 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    lVar7 = *(long *)PTR_DAT_02710798;
    lVar5 = *(long *)(lVar7 + 0x248);
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    }
    iVar1 = FUN_008c92c0(*(undefined8 *)(param_1 + 0x88),param_2);
    if (iVar1 == 0) {
      FUN_008b98a0(param_1);
    }
    else {
      if (*(short *)(lVar5 + 0xac0) == 0) {
        local_44[0] = (undefined2)param_2;
        FUN_01526260(lVar5,local_44);
        lVar7 = *(long *)(lVar7 + 0x1d8);
        if (lVar7 == 0) {
          FUN_01520b70(0,param_2,1);
        }
        else {
          plVar3 = (long *)(lVar7 + 0x48);
          (**(code **)(*plVar3 + 0x10))(plVar3);
          FUN_01520b70(lVar7,param_2,1);
          (**(code **)(*plVar3 + 0x18))(plVar3);
        }
        FUN_014c8280(*(undefined8 *)(*(long *)(param_1 + 0x90) + 0x5d8),0,iVar1);
        if ((*(long *)(param_1 + 0x68) != 0) &&
           (puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar6 != (undefined8 *)0x0
           )) {
          plVar3 = (long *)(**(code **)*puVar6)(puVar6);
          lVar7 = FUN_00897d00();
          for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
            if (plVar3 == (long *)lVar7) {
              puVar6 = puVar6 + -10;
              uVar2 = 0xfeca235111e4;
              goto LAB_008b9b20;
            }
          }
        }
        puVar6 = (undefined8 *)0x0;
        uVar2 = 0xfeca235111e4;
      }
      else {
        if ((*(long *)(param_1 + 0x68) != 0) &&
           (puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar6 != (undefined8 *)0x0
           )) {
          plVar3 = (long *)(**(code **)*puVar6)(puVar6);
          lVar7 = FUN_00897d00();
          for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
            if (plVar3 == (long *)lVar7) {
              puVar6 = puVar6 + -10;
              goto LAB_008b9a38;
            }
          }
        }
        puVar6 = (undefined8 *)0x0;
LAB_008b9a38:
        uVar2 = 0xfdca23511031;
      }
LAB_008b9b20:
      FUN_008a6b70(puVar6,uVar2 | 0xcf43000000000000,1,0);
    }
    FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x90),0);
    uVar4 = 1;
    *(undefined1 *)(param_1 + 0x99) = 1;
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
      uVar4 = 1;
    }
  }
  return uVar4;
}


