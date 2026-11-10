/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00caf000; name: FUN_00caf000
 */


void FUN_00caf000(long *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  *param_1 = (long)(PTR_DAT_0271c268 + 0x10);
  puVar1 = PTR_DAT_0271c588;
  lVar2 = *(long *)(param_2 + 0x10);
  param_1[1] = *(long *)(param_2 + 8);
  param_1[2] = lVar2;
  *param_1 = (long)(puVar1 + 0x10);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x18);
  *param_1 = (long)(PTR_DAT_0271c260 + 0x10);
  lVar2 = *(long *)(param_2 + 0x20);
  param_1[4] = lVar2;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  *param_1 = (long)(PTR_DAT_0271c258 + 0x10);
  lVar2 = *(long *)(param_2 + 0x28);
  lVar3 = *(long *)(param_2 + 0x38);
  param_1[6] = *(long *)(param_2 + 0x30);
  param_1[7] = lVar3;
  param_1[5] = lVar2;
  lVar2 = *(long *)(param_2 + 0x40);
  param_1[8] = lVar2;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  lVar2 = *(long *)(param_2 + 0x48);
  param_1[9] = lVar2;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  lVar2 = *(long *)(param_2 + 0x50);
  param_1[10] = lVar2;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  lVar2 = *(long *)(param_2 + 0x58);
  param_1[0xb] = lVar2;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  lVar2 = *(long *)(param_2 + 0x60);
  param_1[0xc] = lVar2;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  lVar2 = *(long *)(param_2 + 0x68);
  param_1[0xd] = lVar2;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  lVar2 = *(long *)(param_2 + 0x70);
  param_1[0xe] = lVar2;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  lVar2 = *(long *)(param_2 + 0x78);
  param_1[0xf] = lVar2;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  lVar2 = *(long *)(param_2 + 0x80);
  param_1[0x10] = lVar2;
  if (lVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00caf168. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  return;
}


