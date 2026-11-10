/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e03930; name: FUN_00e03930
 */


void FUN_00e03930(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_28 [8];
  
  param_1[7] = 0;
  puVar1 = PTR_DAT_02710a18;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[2] = 0;
  param_1[3] = 0;
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  puVar1 = PTR_DAT_0271ef38;
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = 0;
    if (*(long *)(lVar2 + 0x80) != 0) {
      lVar3 = *(long *)(lVar2 + *(long *)(lVar2 + 0x80) * 8 + -8);
    }
  }
  *(undefined2 *)((long)param_1 + 0x5c) = 0;
  *(undefined1 *)((long)param_1 + 0x5a) = 0;
  *(undefined2 *)(param_1 + 0xb) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = lVar3;
  param_1[9] = (long)(puVar1 + 0x48);
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  param_1[0xc] = -0x340d631b7bddd9bb;
  param_1[0xd] = 0;
  *(undefined4 *)((long)param_1 + 0x71) = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0x12] = -0x340d631b7bddd9bb;
  *(undefined4 *)(param_1 + 0x13) = 0;
  *(undefined2 *)((long)param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined2 *)((long)param_1 + 0xa4) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = -0x340d631b7bddd9bb;
  param_1[0x15] = -0x340d631b7bddd9bb;
  param_1[0x16] = -0x340d631b7bddd9bb;
  lVar2 = FUN_00e076b0(auStack_28,param_2);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  if (param_1[0xd] != 0) {
    (**(code **)(*(long *)(param_1[0xd] + 0x48) + 0x18))();
    param_1[0xd] = 0;
  }
  lVar3 = param_1[0xf];
  param_1[0xd] = lVar2;
  param_1[0xf] = 0;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
  }
  *(undefined4 *)((long)param_1 + 0x71) = DAT_02a59e10;
  return;
}


