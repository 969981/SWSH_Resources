/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d7c010; name: FUN_00d7c010
 */


void FUN_00d7c010(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined1 local_28 [4];
  undefined1 local_24 [4];
  
  if (*(long *)(param_1 + 0x68) != 0) {
    puVar3 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
    if (puVar3 == (undefined8 *)0x0) goto LAB_00d7c064;
    plVar1 = (long *)(**(code **)*puVar3)(puVar3);
    lVar2 = FUN_00d74330();
    for (; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
      if (plVar1 == (long *)lVar2) {
        puVar3 = puVar3 + -10;
        goto LAB_00d7c064;
      }
    }
  }
  puVar3 = (undefined8 *)0x0;
LAB_00d7c064:
  FUN_00d7e1e0(*(undefined8 *)(param_1 + 0x78));
  FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x78),0);
  local_24[0] = 1;
  FUN_00d7e7a0(*(undefined8 *)(param_1 + 0x78),local_24);
  local_28[0] = 1;
  FUN_00d7d400(*(undefined8 *)(param_1 + 0x78),local_28);
  if (*(int *)puVar3[0x50] == 2) {
    FUN_00d7d7c0(*(undefined8 *)(param_1 + 0x78));
    return;
  }
  if (*(int *)puVar3[0x50] == 1) {
    FUN_00d7d5b0(*(undefined8 *)(param_1 + 0x78));
  }
  return;
}


