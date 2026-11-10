/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008e6990; name: FUN_008e6990
 */


void FUN_008e6990(undefined8 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  long local_48;
  
  if (param_2 != 0) {
    iVar1 = FUN_00884820(*param_1);
    if (0 < iVar1) {
      iVar4 = 0;
      do {
        lVar3 = (**(code **)(*(long *)*param_1 + 0x50))((long *)*param_1,iVar4);
        if (lVar3 != 0) {
          (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
        }
        iVar2 = FUN_0087a5f0(lVar3);
        iVar2 = iVar2 + param_2;
        if (iVar2 < 2) {
          iVar2 = 1;
        }
        if (99 < iVar2) {
          iVar2 = 100;
        }
        local_48 = lVar3;
        if (lVar3 != 0) {
          (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
        }
        FUN_009fc3a0(&local_48,iVar2);
        if (local_48 != 0) {
          (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
          local_48 = 0;
        }
        FUN_00878180(lVar3);
        if (lVar3 != 0) {
          (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
        }
        iVar4 = iVar4 + 1;
      } while (iVar1 != iVar4);
    }
  }
  return;
}


