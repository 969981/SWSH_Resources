/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00793f70; name: FUN_00793f70
 */


void FUN_00793f70(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  FUN_006dae20(param_1,3);
  puVar1 = PTR_DAT_027164d0;
  param_1[0x21] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[9] = (long)(puVar1 + 0xa8);
  param_1[10] = (long)(puVar1 + 0x118);
  puVar1 = PTR_DAT_027164d8 + 0x10;
  param_1[0x1f] = 0;
  param_1[0x20] = (long)puVar1;
  param_1[0x42] = -0x340d631b7bddd9bb;
  param_1[0x46] = -0x340d631b7bddd9bb;
  param_1[0x43] = (long)&DAT_01d38550;
  param_1[0x45] = 0;
  param_1[0x44] = 0;
  param_1[0x47] = (long)&DAT_01d38550;
  param_1[0x4e] = 0;
  param_1[0x4a] = 0;
  param_1[0x49] = 0;
  param_1[0x48] = 0;
  *(undefined4 *)(param_1 + 0x4f) = 0x1010000;
  lVar2 = FUN_00a89d20(auStack_28,param_1[1]);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  if (param_1[0x1f] != 0) {
    (**(code **)(*(long *)(param_1[0x1f] + 0x48) + 0x18))();
    param_1[0x1f] = 0;
  }
  param_1[0x1f] = lVar2;
  lVar2 = FUN_007958d0(auStack_30,param_1[1]);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  if (param_1[0x4e] != 0) {
    (**(code **)(*(long *)(param_1[0x4e] + 0x48) + 0x18))();
    param_1[0x4e] = 0;
  }
  param_1[0x4e] = lVar2;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0x4d] = 0;
  param_1[0x4c] = 0;
  return;
}


