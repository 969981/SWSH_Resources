/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01308ec0; name: FUN_01308ec0
 */


void FUN_01308ec0(long *param_1,long param_2,undefined1 param_3,long *param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  FUN_0130ebb0();
  puVar2 = PTR_DAT_02727e08;
  param_1[0x61] = param_2;
  *(undefined1 *)(param_1 + 0x62) = param_3;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[9] = (long)(puVar2 + 0xc0);
  param_1[10] = (long)(puVar2 + 0x130);
  lVar3 = *param_4;
  param_1[100] = param_4[1];
  param_1[99] = lVar3;
  lVar3 = param_4[2];
  param_1[0x65] = lVar3;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  lVar3 = param_4[3];
  param_1[0x66] = lVar3;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  lVar3 = param_4[4];
  param_1[0x67] = lVar3;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  param_1[0x6b] = param_1[1];
  param_1[0x71] = param_1[1];
  param_1[0x6a] = 0;
  param_1[0x69] = 0;
  param_1[0x68] = 0;
  param_1[0x6c] = 0;
  *(undefined4 *)(param_1 + 0x6d) = 0;
  param_1[0x70] = 0;
  param_1[0x6f] = 0;
  param_1[0x6e] = 0;
  param_1[0x72] = 0;
  *(undefined4 *)(param_1 + 0x73) = 0;
  *(undefined8 *)((long)param_1 + 0x3b4) = 0;
  *(undefined4 *)((long)param_1 + 0x3bc) = 0;
  *(undefined2 *)(param_1 + 0x76) = 0;
  param_1[0x75] = 0;
  param_1[0x74] = 0;
  *(undefined1 *)(param_1 + 0x78) = 1;
  param_1[0x79] = 0;
  FUN_006cee90((long)param_1 + 0x3d4,1,0);
  param_1[0x7c] = 0;
  *(undefined1 *)((long)param_1 + 0x41a) = 0;
  *(undefined2 *)(param_1 + 0x83) = 0;
  param_1[0x82] = 0;
  param_1[0x81] = 0;
  param_1[0x80] = 0;
  param_1[0x7f] = 0;
  param_1[0x7e] = 0;
  lVar3 = *(long *)PTR_DAT_027152c0;
  lVar1 = *(long *)(PTR_DAT_027152c0 + 8);
  param_1[0x85] = lVar1;
  param_1[0x84] = lVar3;
  param_1[0x87] = lVar1;
  param_1[0x86] = lVar3;
  param_1[0x88] = 0x3f80000000000000;
  param_1[0x8b] = 0;
  param_1[0x8a] = 0;
  param_1[0x89] = 0;
  param_1[0x8c] = lVar3;
  param_1[0x8d] = lVar1;
  param_1[0x8f] = lVar1;
  param_1[0x8e] = lVar3;
  *(undefined1 *)(param_1 + 0x91) = 0;
  param_1[0x90] = 0;
  FUN_0130e070((long)param_1 + 0x48c);
  FUN_0130e070(param_1 + 0x96);
  param_1[0xa0] = 0;
  *(undefined2 *)(param_1 + 0xa1) = 0;
  *(undefined8 *)((long)param_1 + 0x4e4) = 0;
  *(undefined8 *)((long)param_1 + 0x4dc) = 0;
  *(undefined8 *)((long)param_1 + 0x4d4) = 0;
  FUN_01309100(param_1 + 0x68,6);
  FUN_01309100(param_1 + 0x6e,2);
  FUN_0130e090((long)param_1 + 0x48c);
  FUN_0130e090(param_1 + 0x96);
  param_1[0x9b] = 0x3f7333333f733333;
  *(undefined4 *)(param_1 + 0x9d) = 0;
  param_1[0x9c] = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0x4ec) = 0x43fa000043fa0000;
  *(undefined8 *)((long)param_1 + 0x4f4) = 0x41a0000041a00000;
  return;
}


