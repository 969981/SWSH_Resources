/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00442cb0; name: FUN_00442cb0
 */


void FUN_00442cb0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  char cVar10;
  
  FUN_00446cd0();
  FUN_00446f60(param_1);
  puVar2 = PTR_DAT_02712af0;
  puVar1 = PTR_DAT_02712a90;
  if (*(uint *)(param_1 + 0x90) != 0) {
    lVar6 = **(long **)(param_1 + 0x88);
    if (lVar6 == 0) {
      uVar3 = 0;
      do {
        uVar3 = uVar3 + 1;
        if (*(uint *)(param_1 + 0x90) <= uVar3) {
          return;
        }
        lVar6 = (*(long **)(param_1 + 0x88))[uVar3];
      } while (lVar6 == 0);
    }
    else {
      uVar3 = 0;
    }
    do {
      lVar4 = *(long *)(lVar6 + 0x20);
      lVar9 = lVar4;
      uVar5 = uVar3;
      if (lVar4 == 0) {
        do {
          uVar5 = uVar5 + 1;
          if (*(uint *)(param_1 + 0x90) <= uVar5) {
            lVar9 = 0;
            break;
          }
          lVar9 = *(long *)(*(long *)(param_1 + 0x88) + (ulong)uVar5 * 8);
        } while (lVar9 == 0);
      }
      *(long *)(*(long *)(param_1 + 0x88) + (ulong)uVar3 * 8) = lVar4;
      *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + -1;
      puVar7 = *(undefined8 **)(lVar6 + 0x60);
      puVar8 = puVar7;
      if (*(int *)(lVar6 + 0x68) != 0) {
        do {
          nn::os::LockMutex((MutexType *)puVar2);
          if (puVar8 != (undefined8 *)(*(long *)(lVar6 + 0x60) + (ulong)*(uint *)(lVar6 + 0x68) * 8)
             ) {
            cVar10 = '\x01';
            puVar7 = puVar8;
            do {
              puVar8 = puVar7 + 1;
              (**(code **)(*(long *)*puVar7 + 0x18))();
              cVar10 = cVar10 + '\x01';
              if (cVar10 == '\0') break;
              puVar7 = puVar8;
            } while (puVar8 != (undefined8 *)
                               (*(long *)(lVar6 + 0x60) + (ulong)*(uint *)(lVar6 + 0x68) * 8));
          }
          nn::os::UnlockMutex((MutexType *)puVar2);
          puVar7 = *(undefined8 **)(lVar6 + 0x60);
        } while (puVar8 != puVar7 + *(uint *)(lVar6 + 0x68));
      }
      if (puVar7 != (undefined8 *)0x0) {
        *(undefined4 *)(lVar6 + 0x68) = 0;
        FUN_00404870(*(undefined4 *)puVar1,puVar7);
        *(undefined8 *)(lVar6 + 0x60) = 0;
        *(undefined4 *)(lVar6 + 0x6c) = 0;
      }
      FUN_00442280(lVar6,1);
      lVar6 = lVar9;
      uVar3 = uVar5;
    } while (lVar9 != 0);
  }
  return;
}


