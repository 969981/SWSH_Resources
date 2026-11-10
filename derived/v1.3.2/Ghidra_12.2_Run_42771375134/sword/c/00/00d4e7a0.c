/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d4e7a0; name: FUN_00d4e7a0
 */


void FUN_00d4e7a0(undefined4 *param_1,long param_2)

{
  undefined4 uVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long local_38;
  undefined1 auStack_28 [8];
  
  if (*(long *)(param_2 + 0x90) == 0) {
    local_38 = 0;
  }
  else {
    FUN_00d1a020(&local_38);
  }
  plVar2 = (long *)FUN_00d11a00(local_38 + 0xa0,param_2 + 0x60);
  lVar6 = *plVar2;
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  lVar3 = FUN_00d3fd50(lVar6,auStack_28);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  }
  if (lVar3 == 0) {
    *param_1 = 0;
    *(undefined2 *)(param_1 + 1) = 0;
    param_1[2] = 0;
    *(undefined2 *)(param_1 + 3) = 0;
    param_1[8] = 0;
    *(undefined8 *)(param_1 + 4) = 0;
    *(undefined8 *)(param_1 + 6) = 0xffffffff;
  }
  else {
    puVar4 = (undefined8 *)FUN_012e3520(lVar3);
    uVar5 = FUN_012b65a0(*puVar4);
    *param_1 = 0;
    *(undefined2 *)(param_1 + 1) = 0;
    param_1[2] = 0;
    *(undefined2 *)(param_1 + 3) = 0;
    *(undefined8 *)(param_1 + 4) = 0;
    param_1[6] = 0xffffffff;
    uVar1 = FUN_00878a80();
    param_1[7] = uVar1;
    param_1[8] = 0;
    FUN_014ad910(param_1,uVar5);
  }
  return;
}


