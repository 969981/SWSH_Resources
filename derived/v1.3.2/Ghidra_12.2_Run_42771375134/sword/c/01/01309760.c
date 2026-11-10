/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01309760; name: FUN_01309760
 */


void FUN_01309760(undefined8 *param_1,long param_2,long *param_3)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long local_60;
  long local_58;
  long local_48;
  
  plVar4 = *(long **)(param_2 + 0x340);
  plVar5 = *(long **)(param_2 + 0x348);
  if (plVar4 != plVar5) {
    do {
      lVar3 = *plVar4;
      if (lVar3 != 0) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
        FUN_0130d990(&local_58,lVar3);
        if (local_58 == 0) {
          bVar1 = false;
        }
        else {
          if (*param_3 == 0) {
LAB_01309834:
            FUN_0130e4e0(param_1,local_58);
            bVar1 = true;
          }
          else {
            FUN_0130e4e0(&local_60);
            local_48 = local_60;
            if (local_60 != 0) {
              (**(code **)(*(long *)(local_60 + 0x48) + 0x10))();
            }
            uVar2 = (*(code *)*param_3)(param_3 + 4,&local_48);
            if (local_48 != 0) {
              (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
              local_48 = 0;
            }
            if (local_60 != 0) {
              (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
              local_60 = 0;
            }
            if ((uVar2 & 1) != 0) goto LAB_01309834;
            bVar1 = false;
          }
          if (local_58 != 0) {
            (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
            local_58 = 0;
          }
        }
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
        if (bVar1) {
          return;
        }
      }
      plVar4 = plVar4 + 1;
    } while (plVar5 != plVar4);
  }
  *param_1 = 0;
  return;
}


