/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011d56e0; name: FUN_011d56e0
 */


void FUN_011d56e0(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long local_48;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_011d5870();
  }
  if (*(int *)(param_1 + 0x1a0) == 2) {
    uVar2 = FUN_007d4b30(*(long *)(param_1 + 0x18) + 0xd0);
    if ((uVar2 & 1) == 0) {
      if (*(int *)(param_1 + 0x1a4) == 0) {
        lVar4 = *(long *)(param_1 + 0x20);
        lVar3 = *(long *)(param_1 + 0x198);
        if (lVar3 != 0) {
          (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
        }
        puVar6 = *(undefined8 **)(lVar4 + 0x60);
        puVar1 = *(undefined8 **)(lVar4 + 0x68);
        if (puVar6 != puVar1) {
          if (lVar3 == 0) {
            do {
              local_48 = 0;
              (**(code **)(*(long *)*puVar6 + 8))((long *)*puVar6,&local_48);
              if (local_48 != 0) {
                (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
                local_48 = 0;
              }
              puVar6 = puVar6 + 1;
            } while (puVar1 != puVar6);
          }
          else {
            do {
              plVar5 = (long *)*puVar6;
              local_48 = lVar3;
              (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))(lVar3 + 0x48);
              (**(code **)(*plVar5 + 8))(plVar5,&local_48);
              if (local_48 != 0) {
                (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
                local_48 = 0;
              }
              puVar6 = puVar6 + 1;
            } while (puVar1 != puVar6);
          }
        }
        if (lVar3 != 0) {
          (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
        }
      }
      else {
        puVar1 = *(undefined8 **)(*(long *)(param_1 + 0x28) + 0x68);
        for (puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x28) + 0x60); puVar6 != puVar1;
            puVar6 = puVar6 + 1) {
          (**(code **)(*(long *)*puVar6 + 8))();
        }
      }
      *(undefined4 *)(param_1 + 0x1a0) = 0;
    }
  }
  else if (*(int *)(param_1 + 0x1a0) == 1) {
    FUN_011d5cd0(*(undefined8 *)(param_1 + 0x18));
    *(undefined4 *)(param_1 + 0x1a0) = 2;
  }
  return;
}


