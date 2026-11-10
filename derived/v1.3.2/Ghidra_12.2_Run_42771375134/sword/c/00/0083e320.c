/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0083e320; name: FUN_0083e320
 */


void FUN_0083e320(long param_1,long *param_2)

{
  undefined4 uVar1;
  uint *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  ulong uVar5;
  long local_48;
  undefined8 local_40;
  uint *local_38;
  
  local_48 = *param_2;
  local_38 = (uint *)0x0;
  local_40 = 0;
  FUN_0083e440(&local_48,param_1);
  uVar5 = (ulong)*(uint *)(param_1 + 8);
  if (0 < (int)*(uint *)(param_1 + 8)) {
    puVar3 = *(undefined8 **)(param_1 + 0x10);
    do {
      puVar3 = puVar3 + 1;
      (**(code **)(*(long *)*puVar3 + 0x38))();
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
    *(undefined4 *)(param_1 + 8) = 0;
  }
  FUN_0083e440(param_1,param_2);
  uVar4 = *(uint *)(param_2 + 1);
  uVar5 = (ulong)uVar4;
  if (0 < (int)uVar4) {
    puVar3 = (undefined8 *)param_2[2];
    do {
      puVar3 = puVar3 + 1;
      (**(code **)(*(long *)*puVar3 + 0x38))();
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
    *(undefined4 *)(param_2 + 1) = 0;
    uVar4 = 0;
  }
  puVar2 = (uint *)param_2[2];
  param_2[2] = (long)local_38;
  *(undefined4 *)(param_2 + 1) = (undefined4)local_40;
  uVar1 = *(undefined4 *)((long)param_2 + 0xc);
  *(undefined4 *)((long)param_2 + 0xc) = local_40._4_4_;
  local_40 = CONCAT44(uVar1,uVar4);
  if ((puVar2 != (uint *)0x0) && (local_48 == 0)) {
    uVar5 = (ulong)*puVar2;
    local_38 = puVar2;
    if (0 < (int)*puVar2) {
      do {
        puVar2 = puVar2 + 2;
        if (*(long **)puVar2 != (long *)0x0) {
          (**(code **)(**(long **)puVar2 + 8))();
        }
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
      if (local_38 == (uint *)0x0) {
        return;
      }
    }
    operator_delete__(local_38);
  }
  return;
}


