/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01574dc0; name: FUN_01574dc0
 */


undefined4 FUN_01574dc0(long param_1,long param_2)

{
  long *plVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 local_70;
  char *pcStack_68;
  undefined8 local_60;
  long local_58;
  
  plVar7 = *(long **)(*(long *)PTR_DAT_027194d8 + 0xb0);
  plVar1 = *(long **)(*(long *)PTR_DAT_027194d8 + 0xb8);
  if (plVar7 != plVar1) {
    lVar8 = *(long *)(param_2 + 8);
    uVar4 = *(undefined4 *)(param_2 + 0x10);
    lVar9 = *(long *)(param_2 + 0x18);
    do {
      lVar6 = *plVar7;
      uVar5 = FUN_015772a0(lVar6 + 0x50);
      if ((((uVar5 & 1) != 0) && (*(long *)(lVar6 + 0x1a0) == lVar8)) &&
         (uVar5 = (**(code **)(*(long *)*plVar7 + 0x88))(), (uVar5 & 1) == 0)) {
        plVar7 = (long *)(lVar6 + 0x48);
        (**(code **)(*plVar7 + 0x10))(plVar7);
        uVar3 = FUN_00eaa240(lVar6);
        uVar2 = FUN_00eaa250(lVar6);
        if (lVar9 == 0) {
          uVar4 = FUN_014b3460(uVar3,uVar2,uVar4,0);
        }
        else {
          lVar8 = FUN_00ad9f80(lVar6,&local_70);
          if (lVar8 == 0) {
            uVar4 = 0;
          }
          else {
            lVar8 = *(long *)(lVar8 + 0xc0);
            FUN_00c54b20(lVar8);
            uVar4 = FUN_014b3710(*(undefined8 *)(lVar8 + 0x78),uVar3,uVar2,uVar4);
            local_70 = 0xde3844dede687170;
            pcStack_68 = "Set_State_Event_Off";
            local_60 = 0x13;
            local_58 = 0;
            FUN_008962c0(*(long *)PTR_DAT_027107a8 + 0x108,&local_70);
            if (local_58 != 0) {
              (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
              local_58 = 0;
            }
          }
        }
        *(undefined4 *)(*(long *)(param_1 + 0x84) + 0x348) = uVar4;
        (**(code **)(*plVar7 + 0x18))(plVar7);
        return uVar4;
      }
      plVar7 = plVar7 + 1;
    } while (plVar1 != plVar7);
  }
  return 0;
}


