/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c5cdf0; name: FUN_00c5cdf0
 */


void FUN_00c5cdf0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 local_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_0271be98;
  lVar2 = *(long *)PTR_DAT_0271be98;
  if (*(long *)(lVar2 + 8) != 0) {
    FUN_008d4280(&local_30);
    *(undefined8 *)(param_1 + 0xf8) = local_30;
    *(undefined8 *)(param_1 + 0x100) = uStack_28;
    lVar2 = *(long *)puVar1;
  }
  if (*(long *)(lVar2 + 0x28) != 0) {
    FUN_008d4280(&local_30);
    *(undefined8 *)(param_1 + 0x108) = local_30;
    *(undefined8 *)(param_1 + 0x110) = uStack_28;
    lVar2 = *(long *)puVar1;
  }
  if (*(long *)(lVar2 + 0x48) != 0) {
    FUN_008d4280(&local_30);
    *(undefined8 *)(param_1 + 0x118) = local_30;
    *(undefined8 *)(param_1 + 0x120) = uStack_28;
    lVar2 = *(long *)puVar1;
  }
  if (*(long *)(lVar2 + 0x68) != 0) {
    FUN_008d4280(&local_30);
    *(undefined8 *)(param_1 + 0x128) = local_30;
    *(undefined8 *)(param_1 + 0x130) = uStack_28;
    lVar2 = *(long *)puVar1;
  }
  if (*(long *)(lVar2 + 0x88) != 0) {
    FUN_008d4280(&local_30);
    *(undefined8 *)(param_1 + 0x138) = local_30;
    *(undefined8 *)(param_1 + 0x140) = uStack_28;
    lVar2 = *(long *)puVar1;
  }
  if (*(long *)(lVar2 + 0xa8) != 0) {
    FUN_008d4280(&local_30);
    *(undefined8 *)(param_1 + 0x148) = local_30;
    *(undefined8 *)(param_1 + 0x150) = uStack_28;
    lVar2 = *(long *)puVar1;
  }
  if (*(long *)(lVar2 + 200) != 0) {
    FUN_008d4280(&local_30);
    *(undefined8 *)(param_1 + 0x158) = local_30;
    *(undefined8 *)(param_1 + 0x160) = uStack_28;
  }
  return;
}


