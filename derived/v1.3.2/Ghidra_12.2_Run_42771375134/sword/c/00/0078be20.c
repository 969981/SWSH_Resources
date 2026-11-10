/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0078be20; name: FUN_0078be20
 */


void FUN_0078be20(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long local_58;
  long local_48;
  
  puVar5 = PTR_DAT_027105c8;
  uVar1 = *(undefined4 *)(param_1 + 0xc0);
  uVar2 = *(undefined4 *)(param_1 + 0xc4);
  uVar3 = *(undefined4 *)(param_1 + 0xac);
  uVar4 = *(undefined4 *)(param_1 + 200);
  local_48 = *(long *)(param_1 + 0xb0);
  uVar6 = *(undefined8 *)PTR_DAT_027105c8;
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x10))();
  }
  local_58 = *(long *)(param_1 + 0xb8);
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x10))();
  }
  FUN_0078d7e0(uVar6,param_1,uVar2,uVar3,uVar1,uVar4,&local_48,&local_58);
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  FUN_0078d7c0(*(undefined8 *)puVar5,*(undefined4 *)(param_1 + 0xc4),*(undefined4 *)(param_1 + 0xac)
               ,*(long *)(*(long *)(param_1 + 0x60) + 0x58) + (long)*(int *)PTR_DAT_02715500 * 0x170
               ,*(undefined4 *)(param_1 + 0xc0),*(undefined4 *)(param_1 + 200),
               *(undefined1 *)(param_1 + 0xcc));
  return;
}


