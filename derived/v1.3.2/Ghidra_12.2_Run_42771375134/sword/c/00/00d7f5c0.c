/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d7f5c0; name: FUN_00d7f5c0
 */


void FUN_00d7f5c0(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 *local_a0;
  code *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  long alStack_80 [12];
  
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  FUN_006cf0a0(&local_a0,PTR_DAT_027176e0);
  uVar2 = FUN_0089c480(uVar2,&local_a0);
  *(undefined8 *)(param_1 + 0x660) = uVar2;
  if (local_88 != (undefined1 *)0x0) {
    (**(code **)(*(long *)((long)local_88 + 0x48) + 0x18))();
    local_88 = (undefined1 *)0x0;
  }
  if (*(long *)(param_1 + 0x4c0) != 0) {
    if (*(long *)(*(long *)(param_1 + 0x660) + 0x4c0) != 0) {
      FUN_016d22e0();
    }
  }
  local_a0 = &LAB_00d83140;
  local_98 = FUN_00d83270;
  local_90 = &LAB_00d83280;
  local_88 = &LAB_00d83290;
  alStack_80[0] = param_1;
  FUN_01036ef0(*(undefined8 *)(param_1 + 0x660),&local_a0);
  pcVar1 = local_98;
  if (local_98 != (code *)0x0) {
    local_90 = (undefined1 *)0x0;
    local_88 = (undefined1 *)0x0;
    local_a0 = (undefined1 *)0x0;
    local_98 = (code *)0x0;
    (*pcVar1)(alStack_80);
  }
  return;
}


