/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0073d760; name: FUN_0073d760
 */


void FUN_0073d760(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 local_28;
  
  *(undefined4 *)(param_1 + 0x634) = 0x2d00500;
  puVar5 = PTR_DAT_027159c0;
  *(undefined8 *)(param_1 + 0x6c0) = 0xffffffff;
  uVar1 = *(undefined8 *)(puVar5 + 0x10);
  *(undefined8 *)(param_1 + 0x658) = *(undefined8 *)(puVar5 + 0x18);
  uVar2 = *(undefined8 *)puVar5;
  *(undefined8 *)(param_1 + 0x648) = *(undefined8 *)(puVar5 + 8);
  uVar3 = *(undefined8 *)(puVar5 + 0x30);
  *(undefined8 *)(param_1 + 0x678) = *(undefined8 *)(puVar5 + 0x38);
  uVar4 = *(undefined8 *)(puVar5 + 0x20);
  *(undefined8 *)(param_1 + 0x668) = *(undefined8 *)(puVar5 + 0x28);
  *(undefined8 *)(param_1 + 0x650) = uVar1;
  *(undefined8 *)(param_1 + 0x640) = uVar2;
  *(undefined8 *)(param_1 + 0x670) = uVar3;
  *(undefined8 *)(param_1 + 0x660) = uVar4;
  *(undefined8 *)(param_1 + 0x628) = 0;
  *(undefined4 *)(param_1 + 0x630) = 1;
  *(undefined4 *)(param_1 + 0x6c8) = 0x3f800000;
  local_28 = 0;
  FUN_0073c7b0(param_1,(long)&local_28 + 4,&local_28);
  local_28 = 0x100000000;
  FUN_0073c7b0(param_1,(long)&local_28 + 4,&local_28);
  local_28 = 0x200000000;
  FUN_0073c7b0(param_1,(long)&local_28 + 4,&local_28);
  local_28 = local_28 & 0xffffffff;
  plVar6 = (long *)FUN_0073d4c0(param_1 + 0x700,(long)&local_28 + 4);
  lVar8 = *plVar6;
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  lVar7 = *(long *)(param_1 + 0x600);
  *(long *)(param_1 + 0x600) = lVar8;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
  }
  return;
}


